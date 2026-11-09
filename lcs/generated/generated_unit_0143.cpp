#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "lcs_trainer.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0143[4095] = {
    1, 2, 0, 3, 0, 0, 4, 0, 5, 0, 6, 0, 7, 0, 0, 8, 0, 9, 0, 10, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0,
    13, 0, 0, 14, 0, 15, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 26, 0, 27, 0, 28, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 40, 0, 0, 0,
    0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 43, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 53,
    0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 62, 0, 0, 63, 0, 0, 64, 0,
    65, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0,
    82, 0, 83, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88,
    0, 0, 0, 89, 0, 90, 0, 91, 0, 92, 0, 0, 0, 93, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 98, 0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 103, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107,
    0, 0, 0, 108, 0, 109, 0, 0, 0, 110, 0, 111, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 116, 0, 0, 0,
    0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 120, 0, 121, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0,
    0, 0, 126, 0, 127, 0, 128, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 134, 0,
    0, 135, 0, 0, 136, 0, 0, 137, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0,
    143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 146, 0, 147, 148, 0, 149, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 152,
    0, 0, 0, 153, 0, 154, 0, 155, 156, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 163, 0, 164, 0, 165, 0, 0,
    166, 0, 167, 0, 168, 0, 169, 0, 170, 171, 0, 0, 172, 0, 0, 173, 0, 174, 0, 175, 0, 176, 0, 177, 0, 0, 178, 0, 179, 0, 180, 0,
    181, 0, 182, 183, 0, 0, 0, 0, 184, 0, 185, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0,
    197, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0, 205, 0, 206, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 214,
    0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223,
    0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0,
    0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0,
    234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 247, 0, 0, 248, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 250, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252,
    0, 253, 0, 0, 254, 0, 255, 0, 256, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 259, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 264, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0,
    0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 276, 0, 277, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0,
    282, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0,
    0, 0, 0, 290, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0,
    0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307,
    0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 311, 0, 0, 312, 0, 0, 313, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 320, 0, 321, 0, 322, 0, 0, 0, 0,
    0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 333, 334, 0, 335, 0, 336, 0, 0, 0,
    0, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0,
    0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0, 349, 0, 0, 0, 350, 0, 0, 351,
    0, 0, 352, 0, 0, 0, 0, 353, 0, 354, 0, 355, 0, 356, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0,
    360, 0, 0, 0, 361, 0, 0, 362, 0, 363, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0,
    0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373,
    0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0,
    378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0,
    0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 388,
    0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0,
    0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 397, 0, 0, 0, 398, 0, 399, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403,
    0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 409, 410, 0,
    0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 416, 0, 0, 417, 418, 0, 419, 0, 0,
    420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 426, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 431, 0, 0, 0, 0, 432, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0,
    0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 437, 438, 0, 0, 0, 0, 0, 439, 0, 440, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 442, 0, 0, 0, 443, 444, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0,
    0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0,
    456, 0, 0, 457, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 461, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 464, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 468, 0, 0, 469, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 473,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 479, 0,
    480, 0, 481, 0, 482, 0, 483, 484, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 486, 0, 487, 0, 0, 0, 0, 0, 0, 0, 488, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0,
    492, 0, 493, 0, 494, 0, 0, 0, 495, 0, 0, 496, 0, 497, 498, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 505,
    0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 509, 0, 0, 0, 0, 0,
    0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 521, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 527, 528,
    0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0,
    0, 535, 0, 0, 0, 536, 0, 537, 538, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 0, 541, 0, 542, 0, 543, 0, 0, 0,
    544, 0, 0, 545, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 550, 0, 0, 551, 0, 552, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 0, 0, 555, 0, 556, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 558, 0, 0, 0, 0, 0, 0, 559, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0,
    564, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0,
    571, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 0, 579, 580, 0, 0, 581, 0, 0, 0, 0, 582, 0, 583,
    0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 586, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 589,
    0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 594, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 596, 0, 0, 0, 597, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 601, 0, 602, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0,
    0, 0, 0, 0, 606, 0, 0, 607, 0, 608, 0, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 611, 0, 612, 0, 0, 0, 613, 0, 0, 0, 0,
    0, 0, 614, 0, 615, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0,
    0, 0, 619, 0, 0, 0, 620, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 623, 0,
    0, 0, 624, 0, 625, 0, 626, 0, 0, 627, 0, 0, 628, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0,
    631, 0, 0, 0, 0, 632, 0, 633, 0, 0, 0, 0, 634, 0, 635, 0, 636, 0, 0, 637, 0, 638, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0,
    0, 0, 640, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 644, 0, 0, 0, 0,
    0, 645, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0,
    650, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 654,
};
void recomp_unit_0143_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A40000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0143[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A40000;
    case 2u: goto L_08A40004;
    case 3u: goto L_08A4000C;
    case 4u: goto L_08A40018;
    case 5u: goto L_08A40020;
    case 6u: goto L_08A40028;
    case 7u: goto L_08A40030;
    case 8u: goto L_08A4003C;
    case 9u: goto L_08A40044;
    case 10u: goto L_08A4004C;
    case 11u: goto L_08A40054;
    case 12u: goto L_08A40060;
    case 13u: goto L_08A40080;
    case 14u: goto L_08A4008C;
    case 15u: goto L_08A40094;
    case 16u: goto L_08A4009C;
    case 17u: goto L_08A400A4;
    case 18u: goto L_08A4010C;
    case 19u: goto L_08A40114;
    case 20u: goto L_08A4012C;
    case 21u: goto L_08A401BC;
    case 22u: goto L_08A401E0;
    case 23u: goto L_08A40218;
    case 24u: goto L_08A40224;
    case 25u: goto L_08A40230;
    case 26u: goto L_08A40238;
    case 27u: goto L_08A40240;
    case 28u: goto L_08A40248;
    case 29u: goto L_08A4024C;
    case 30u: goto L_08A4025C;
    case 31u: goto L_08A4027C;
    case 32u: goto L_08A40290;
    case 33u: goto L_08A402AC;
    case 34u: goto L_08A402B4;
    case 35u: goto L_08A402C4;
    case 36u: goto L_08A40304;
    case 37u: goto L_08A40310;
    case 38u: goto L_08A4035C;
    case 39u: goto L_08A40368;
    case 40u: goto L_08A40370;
    case 41u: goto L_08A4038C;
    case 42u: goto L_08A403A4;
    case 43u: goto L_08A403A8;
    case 44u: goto L_08A403B0;
    case 45u: goto L_08A403CC;
    case 46u: goto L_08A403E4;
    case 47u: goto L_08A40414;
    case 48u: goto L_08A40424;
    case 49u: goto L_08A40438;
    case 50u: goto L_08A40440;
    case 51u: goto L_08A40458;
    case 52u: goto L_08A40464;
    case 53u: goto L_08A4047C;
    case 54u: goto L_08A40484;
    case 55u: goto L_08A404DC;
    case 56u: goto L_08A40500;
    case 57u: goto L_08A4058C;
    case 58u: goto L_08A405A0;
    case 59u: goto L_08A405C0;
    case 60u: goto L_08A405C8;
    case 61u: goto L_08A405D8;
    case 62u: goto L_08A405E0;
    case 63u: goto L_08A405EC;
    case 64u: goto L_08A405F8;
    case 65u: goto L_08A40600;
    case 66u: goto L_08A4060C;
    case 67u: goto L_08A40618;
    case 68u: goto L_08A40634;
    case 69u: goto L_08A40644;
    case 70u: goto L_08A4065C;
    case 71u: goto L_08A40664;
    case 72u: goto L_08A40670;
    case 73u: goto L_08A406A0;
    case 74u: goto L_08A406B4;
    case 75u: goto L_08A406CC;
    case 76u: goto L_08A40768;
    case 77u: goto L_08A40770;
    case 78u: goto L_08A407A8;
    case 79u: goto L_08A407B0;
    case 80u: goto L_08A407F0;
    case 81u: goto L_08A407F8;
    case 82u: goto L_08A40800;
    case 83u: goto L_08A40808;
    case 84u: goto L_08A40810;
    case 85u: goto L_08A40824;
    case 86u: goto L_08A4083C;
    case 87u: goto L_08A40874;
    case 88u: goto L_08A4087C;
    case 89u: goto L_08A4088C;
    case 90u: goto L_08A40894;
    case 91u: goto L_08A4089C;
    case 92u: goto L_08A408A4;
    case 93u: goto L_08A408B4;
    case 94u: goto L_08A408B8;
    case 95u: goto L_08A408F0;
    case 96u: goto L_08A40950;
    case 97u: goto L_08A40958;
    case 98u: goto L_08A40984;
    case 99u: goto L_08A4098C;
    case 100u: goto L_08A40998;
    case 101u: goto L_08A409A4;
    case 102u: goto L_08A409B4;
    case 103u: goto L_08A409BC;
    case 104u: goto L_08A409CC;
    case 105u: goto L_08A409D4;
    case 106u: goto L_08A409EC;
    case 107u: goto L_08A409FC;
    case 108u: goto L_08A40A0C;
    case 109u: goto L_08A40A14;
    case 110u: goto L_08A40A24;
    case 111u: goto L_08A40A2C;
    case 112u: goto L_08A40A34;
    case 113u: goto L_08A40A44;
    case 114u: goto L_08A40A58;
    case 115u: goto L_08A40A68;
    case 116u: goto L_08A40A70;
    case 117u: goto L_08A40A88;
    case 118u: goto L_08A40A98;
    case 119u: goto L_08A40AA8;
    case 120u: goto L_08A40AB0;
    case 121u: goto L_08A40AB8;
    case 122u: goto L_08A40AC8;
    case 123u: goto L_08A40AD0;
    case 124u: goto L_08A40AE8;
    case 125u: goto L_08A40AF8;
    case 126u: goto L_08A40B08;
    case 127u: goto L_08A40B10;
    case 128u: goto L_08A40B18;
    case 129u: goto L_08A40B24;
    case 130u: goto L_08A40B2C;
    case 131u: goto L_08A40B44;
    case 132u: goto L_08A40B5C;
    case 133u: goto L_08A40B68;
    case 134u: goto L_08A40B78;
    case 135u: goto L_08A40B84;
    case 136u: goto L_08A40B90;
    case 137u: goto L_08A40B9C;
    case 138u: goto L_08A40BA0;
    case 139u: goto L_08A40BA8;
    case 140u: goto L_08A40BCC;
    case 141u: goto L_08A40BE0;
    case 142u: goto L_08A40BEC;
    case 143u: goto L_08A40C00;
    case 144u: goto L_08A40C24;
    case 145u: goto L_08A40C34;
    case 146u: goto L_08A40C3C;
    case 147u: goto L_08A40C44;
    case 148u: goto L_08A40C48;
    case 149u: goto L_08A40C50;
    case 150u: goto L_08A40C5C;
    case 151u: goto L_08A40C64;
    case 152u: goto L_08A40C7C;
    case 153u: goto L_08A40C8C;
    case 154u: goto L_08A40C94;
    case 155u: goto L_08A40C9C;
    case 156u: goto L_08A40CA0;
    case 157u: goto L_08A40CA8;
    case 158u: goto L_08A40CC0;
    case 159u: goto L_08A40CD8;
    case 160u: goto L_08A40D2C;
    case 161u: goto L_08A40D48;
    case 162u: goto L_08A40D5C;
    case 163u: goto L_08A40D64;
    case 164u: goto L_08A40D6C;
    case 165u: goto L_08A40D74;
    case 166u: goto L_08A40D80;
    case 167u: goto L_08A40D88;
    case 168u: goto L_08A40D90;
    case 169u: goto L_08A40D98;
    case 170u: goto L_08A40DA0;
    case 171u: goto L_08A40DA4;
    case 172u: goto L_08A40DB0;
    case 173u: goto L_08A40DBC;
    case 174u: goto L_08A40DC4;
    case 175u: goto L_08A40DCC;
    case 176u: goto L_08A40DD4;
    case 177u: goto L_08A40DDC;
    case 178u: goto L_08A40DE8;
    case 179u: goto L_08A40DF0;
    case 180u: goto L_08A40DF8;
    case 181u: goto L_08A40E00;
    case 182u: goto L_08A40E08;
    case 183u: goto L_08A40E0C;
    case 184u: goto L_08A40E20;
    case 185u: goto L_08A40E28;
    case 186u: goto L_08A40E34;
    case 187u: goto L_08A40E3C;
    case 188u: goto L_08A40E90;
    case 189u: goto L_08A40EAC;
    case 190u: goto L_08A40EC0;
    case 191u: goto L_08A40EC8;
    case 192u: goto L_08A40EE8;
    case 193u: goto L_08A40FA4;
    case 194u: goto L_08A40FC4;
    case 195u: goto L_08A41014;
    case 196u: goto L_08A41070;
    case 197u: goto L_08A41080;
    case 198u: goto L_08A41088;
    case 199u: goto L_08A410C0;
    case 200u: goto L_08A410C8;
    case 201u: goto L_08A410D0;
    case 202u: goto L_08A410D8;
    case 203u: goto L_08A410E0;
    case 204u: goto L_08A410E8;
    case 205u: goto L_08A410F0;
    case 206u: goto L_08A410F8;
    case 207u: goto L_08A41154;
    case 208u: goto L_08A411C0;
    case 209u: goto L_08A411C8;
    case 210u: goto L_08A411F8;
    case 211u: goto L_08A41240;
    case 212u: goto L_08A41258;
    case 213u: goto L_08A41268;
    case 214u: goto L_08A4127C;
    case 215u: goto L_08A41284;
    case 216u: goto L_08A412A8;
    case 217u: goto L_08A412C0;
    case 218u: goto L_08A412D0;
    case 219u: goto L_08A412E4;
    case 220u: goto L_08A412EC;
    case 221u: goto L_08A4131C;
    case 222u: goto L_08A41364;
    case 223u: goto L_08A4137C;
    case 224u: goto L_08A4138C;
    case 225u: goto L_08A413A0;
    case 226u: goto L_08A413A8;
    case 227u: goto L_08A413CC;
    case 228u: goto L_08A413E4;
    case 229u: goto L_08A413F4;
    case 230u: goto L_08A41408;
    case 231u: goto L_08A41414;
    case 232u: goto L_08A41470;
    case 233u: goto L_08A41478;
    case 234u: goto L_08A41480;
    case 235u: goto L_08A41494;
    case 236u: goto L_08A414A8;
    case 237u: goto L_08A414B0;
    case 238u: goto L_08A414C8;
    case 239u: goto L_08A414D8;
    case 240u: goto L_08A41540;
    case 241u: goto L_08A4154C;
    case 242u: goto L_08A41574;
    case 243u: goto L_08A415B4;
    case 244u: goto L_08A415B8;
    case 245u: goto L_08A415C4;
    case 246u: goto L_08A41664;
    case 247u: goto L_08A41668;
    case 248u: goto L_08A41674;
    case 249u: goto L_08A41720;
    case 250u: goto L_08A41724;
    case 251u: goto L_08A41730;
    case 252u: goto L_08A4177C;
    case 253u: goto L_08A41784;
    case 254u: goto L_08A41790;
    case 255u: goto L_08A41798;
    case 256u: goto L_08A417A0;
    case 257u: goto L_08A417AC;
    case 258u: goto L_08A417B4;
    case 259u: goto L_08A417D0;
    case 260u: goto L_08A417D4;
    case 261u: goto L_08A417F8;
    case 262u: goto L_08A4185C;
    case 263u: goto L_08A41864;
    case 264u: goto L_08A418A0;
    case 265u: goto L_08A418A4;
    case 266u: goto L_08A418F0;
    case 267u: goto L_08A41924;
    case 268u: goto L_08A4192C;
    case 269u: goto L_08A41930;
    case 270u: goto L_08A41954;
    case 271u: goto L_08A41968;
    case 272u: goto L_08A41978;
    case 273u: goto L_08A41988;
    case 274u: goto L_08A41998;
    case 275u: goto L_08A419A8;
    case 276u: goto L_08A419B0;
    case 277u: goto L_08A419B8;
    case 278u: goto L_08A419C4;
    case 279u: goto L_08A419CC;
    case 280u: goto L_08A419E4;
    case 281u: goto L_08A419F0;
    case 282u: goto L_08A41A00;
    case 283u: goto L_08A41A14;
    case 284u: goto L_08A41A24;
    case 285u: goto L_08A41A48;
    case 286u: goto L_08A41A5C;
    case 287u: goto L_08A41A70;
    case 288u: goto L_08A41AAC;
    case 289u: goto L_08A41AF0;
    case 290u: goto L_08A41B0C;
    case 291u: goto L_08A41B10;
    case 292u: goto L_08A41B30;
    case 293u: goto L_08A41B3C;
    case 294u: goto L_08A41B58;
    case 295u: goto L_08A41B68;
    case 296u: goto L_08A41B78;
    case 297u: goto L_08A41B88;
    case 298u: goto L_08A41B98;
    case 299u: goto L_08A41BB4;
    case 300u: goto L_08A41C30;
    case 301u: goto L_08A41C68;
    case 302u: goto L_08A41C94;
    case 303u: goto L_08A41CA0;
    case 304u: goto L_08A41CAC;
    case 305u: goto L_08A41CC8;
    case 306u: goto L_08A41CF0;
    case 307u: goto L_08A41CFC;
    case 308u: goto L_08A41D10;
    case 309u: goto L_08A41D28;
    case 310u: goto L_08A41D30;
    case 311u: goto L_08A41D3C;
    case 312u: goto L_08A41D48;
    case 313u: goto L_08A41D54;
    case 314u: goto L_08A41D58;
    case 315u: goto L_08A41D74;
    case 316u: goto L_08A41D9C;
    case 317u: goto L_08A41DA8;
    case 318u: goto L_08A41DBC;
    case 319u: goto L_08A41DD4;
    case 320u: goto L_08A41DDC;
    case 321u: goto L_08A41DE4;
    case 322u: goto L_08A41DEC;
    case 323u: goto L_08A41E04;
    case 324u: goto L_08A41E14;
    case 325u: goto L_08A41E28;
    case 326u: goto L_08A41E4C;
    case 327u: goto L_08A41E68;
    case 328u: goto L_08A41E7C;
    case 329u: goto L_08A41EA4;
    case 330u: goto L_08A41EAC;
    case 331u: goto L_08A41EB8;
    case 332u: goto L_08A41EC4;
    case 333u: goto L_08A41EDC;
    case 334u: goto L_08A41EE0;
    case 335u: goto L_08A41EE8;
    case 336u: goto L_08A41EF0;
    case 337u: goto L_08A41F14;
    case 338u: goto L_08A41F1C;
    case 339u: goto L_08A41F2C;
    case 340u: goto L_08A41F44;
    case 341u: goto L_08A41F58;
    case 342u: goto L_08A41F6C;
    case 343u: goto L_08A41F84;
    case 344u: goto L_08A41F9C;
    case 345u: goto L_08A41FA8;
    case 346u: goto L_08A41FB4;
    case 347u: goto L_08A41FD0;
    case 348u: goto L_08A41FD8;
    case 349u: goto L_08A41FE0;
    case 350u: goto L_08A41FF0;
    case 351u: goto L_08A41FFC;
    case 352u: goto L_08A42008;
    case 353u: goto L_08A4201C;
    case 354u: goto L_08A42024;
    case 355u: goto L_08A4202C;
    case 356u: goto L_08A42034;
    case 357u: goto L_08A4203C;
    case 358u: goto L_08A4204C;
    case 359u: goto L_08A42068;
    case 360u: goto L_08A42080;
    case 361u: goto L_08A42090;
    case 362u: goto L_08A4209C;
    case 363u: goto L_08A420A4;
    case 364u: goto L_08A420AC;
    case 365u: goto L_08A420C8;
    case 366u: goto L_08A420E0;
    case 367u: goto L_08A420F4;
    case 368u: goto L_08A42110;
    case 369u: goto L_08A42124;
    case 370u: goto L_08A42130;
    case 371u: goto L_08A4214C;
    case 372u: goto L_08A4215C;
    case 373u: goto L_08A4217C;
    case 374u: goto L_08A42188;
    case 375u: goto L_08A421B0;
    case 376u: goto L_08A421E8;
    case 377u: goto L_08A421F4;
    case 378u: goto L_08A42200;
    case 379u: goto L_08A42208;
    case 380u: goto L_08A42268;
    case 381u: goto L_08A42278;
    case 382u: goto L_08A42294;
    case 383u: goto L_08A422A4;
    case 384u: goto L_08A422C0;
    case 385u: goto L_08A422C4;
    case 386u: goto L_08A422E4;
    case 387u: goto L_08A422F0;
    case 388u: goto L_08A422FC;
    case 389u: goto L_08A4230C;
    case 390u: goto L_08A42330;
    case 391u: goto L_08A42350;
    case 392u: goto L_08A4236C;
    case 393u: goto L_08A42388;
    case 394u: goto L_08A423A0;
    case 395u: goto L_08A423F8;
    case 396u: goto L_08A42424;
    case 397u: goto L_08A42428;
    case 398u: goto L_08A42438;
    case 399u: goto L_08A42440;
    case 400u: goto L_08A42448;
    case 401u: goto L_08A42454;
    case 402u: goto L_08A42470;
    case 403u: goto L_08A4247C;
    case 404u: goto L_08A42484;
    case 405u: goto L_08A424A0;
    case 406u: goto L_08A424BC;
    case 407u: goto L_08A424CC;
    case 408u: goto L_08A424EC;
    case 409u: goto L_08A424F4;
    case 410u: goto L_08A424F8;
    case 411u: goto L_08A42518;
    case 412u: goto L_08A425E4;
    case 413u: goto L_08A4260C;
    case 414u: goto L_08A42644;
    case 415u: goto L_08A42650;
    case 416u: goto L_08A4265C;
    case 417u: goto L_08A42668;
    case 418u: goto L_08A4266C;
    case 419u: goto L_08A42674;
    case 420u: goto L_08A42680;
    case 421u: goto L_08A42690;
    case 422u: goto L_08A42728;
    case 423u: goto L_08A42744;
    case 424u: goto L_08A42758;
    case 425u: goto L_08A4276C;
    case 426u: goto L_08A42778;
    case 427u: goto L_08A427D8;
    case 428u: goto L_08A427F0;
    case 429u: goto L_08A42820;
    case 430u: goto L_08A42834;
    case 431u: goto L_08A4283C;
    case 432u: goto L_08A42850;
    case 433u: goto L_08A42854;
    case 434u: goto L_08A42874;
    case 435u: goto L_08A42888;
    case 436u: goto L_08A4289C;
    case 437u: goto L_08A428AC;
    case 438u: goto L_08A428B0;
    case 439u: goto L_08A428C8;
    case 440u: goto L_08A428D0;
    case 441u: goto L_08A428DC;
    case 442u: goto L_08A42908;
    case 443u: goto L_08A42918;
    case 444u: goto L_08A4291C;
    case 445u: goto L_08A42924;
    case 446u: goto L_08A4294C;
    case 447u: goto L_08A42974;
    case 448u: goto L_08A42988;
    case 449u: goto L_08A429C8;
    case 450u: goto L_08A42A30;
    case 451u: goto L_08A42A48;
    case 452u: goto L_08A42A58;
    case 453u: goto L_08A42A6C;
    case 454u: goto L_08A42ACC;
    case 455u: goto L_08A42AE8;
    case 456u: goto L_08A42B00;
    case 457u: goto L_08A42B0C;
    case 458u: goto L_08A42B14;
    case 459u: goto L_08A42B28;
    case 460u: goto L_08A42B3C;
    case 461u: goto L_08A42B44;
    case 462u: goto L_08A42B58;
    case 463u: goto L_08A42B64;
    case 464u: goto L_08A42B74;
    case 465u: goto L_08A42BA0;
    case 466u: goto L_08A42BC0;
    case 467u: goto L_08A42BC8;
    case 468u: goto L_08A42BD8;
    case 469u: goto L_08A42BE4;
    case 470u: goto L_08A42C28;
    case 471u: goto L_08A42C5C;
    case 472u: goto L_08A42C6C;
    case 473u: goto L_08A42C7C;
    case 474u: goto L_08A42CAC;
    case 475u: goto L_08A42CC0;
    case 476u: goto L_08A42CCC;
    case 477u: goto L_08A42CE8;
    case 478u: goto L_08A42CF0;
    case 479u: goto L_08A42CF8;
    case 480u: goto L_08A42D00;
    case 481u: goto L_08A42D08;
    case 482u: goto L_08A42D10;
    case 483u: goto L_08A42D18;
    case 484u: goto L_08A42D1C;
    case 485u: goto L_08A42D30;
    case 486u: goto L_08A42D50;
    case 487u: goto L_08A42D58;
    case 488u: goto L_08A42D78;
    case 489u: goto L_08A42DA0;
    case 490u: goto L_08A42DE4;
    case 491u: goto L_08A42DF4;
    case 492u: goto L_08A42E00;
    case 493u: goto L_08A42E08;
    case 494u: goto L_08A42E10;
    case 495u: goto L_08A42E20;
    case 496u: goto L_08A42E2C;
    case 497u: goto L_08A42E34;
    case 498u: goto L_08A42E38;
    case 499u: goto L_08A42E5C;
    case 500u: goto L_08A42E8C;
    case 501u: goto L_08A42EA0;
    case 502u: goto L_08A42EC4;
    case 503u: goto L_08A42EDC;
    case 504u: goto L_08A42EF0;
    case 505u: goto L_08A42EFC;
    case 506u: goto L_08A42F08;
    case 507u: goto L_08A42F44;
    case 508u: goto L_08A42F5C;
    case 509u: goto L_08A42F68;
    case 510u: goto L_08A42F88;
    case 511u: goto L_08A43004;
    case 512u: goto L_08A43078;
    case 513u: goto L_08A430A4;
    case 514u: goto L_08A430B4;
    case 515u: goto L_08A43144;
    case 516u: goto L_08A431A0;
    case 517u: goto L_08A431A8;
    case 518u: goto L_08A43200;
    case 519u: goto L_08A43228;
    case 520u: goto L_08A43244;
    case 521u: goto L_08A43288;
    case 522u: goto L_08A43290;
    case 523u: goto L_08A432D4;
    case 524u: goto L_08A43304;
    case 525u: goto L_08A43360;
    case 526u: goto L_08A43370;
    case 527u: goto L_08A43378;
    case 528u: goto L_08A4337C;
    case 529u: goto L_08A43394;
    case 530u: goto L_08A433A8;
    case 531u: goto L_08A433BC;
    case 532u: goto L_08A433C4;
    case 533u: goto L_08A433EC;
    case 534u: goto L_08A433F8;
    case 535u: goto L_08A43404;
    case 536u: goto L_08A43414;
    case 537u: goto L_08A4341C;
    case 538u: goto L_08A43420;
    case 539u: goto L_08A43438;
    case 540u: goto L_08A4344C;
    case 541u: goto L_08A43460;
    case 542u: goto L_08A43468;
    case 543u: goto L_08A43470;
    case 544u: goto L_08A43480;
    case 545u: goto L_08A4348C;
    case 546u: goto L_08A43494;
    case 547u: goto L_08A434BC;
    case 548u: goto L_08A434D0;
    case 549u: goto L_08A434E4;
    case 550u: goto L_08A43514;
    case 551u: goto L_08A43520;
    case 552u: goto L_08A43528;
    case 553u: goto L_08A43538;
    case 554u: goto L_08A43548;
    case 555u: goto L_08A43560;
    case 556u: goto L_08A43568;
    case 557u: goto L_08A435D0;
    case 558u: goto L_08A435DC;
    case 559u: goto L_08A435F8;
    case 560u: goto L_08A43638;
    case 561u: goto L_08A43640;
    case 562u: goto L_08A43654;
    case 563u: goto L_08A43670;
    case 564u: goto L_08A43680;
    case 565u: goto L_08A43688;
    case 566u: goto L_08A436AC;
    case 567u: goto L_08A436BC;
    case 568u: goto L_08A436F0;
    case 569u: goto L_08A4374C;
    case 570u: goto L_08A43774;
    case 571u: goto L_08A43780;
    case 572u: goto L_08A43798;
    case 573u: goto L_08A437B8;
    case 574u: goto L_08A437C8;
    case 575u: goto L_08A4383C;
    case 576u: goto L_08A4389C;
    case 577u: goto L_08A438AC;
    case 578u: goto L_08A438BC;
    case 579u: goto L_08A438D0;
    case 580u: goto L_08A438D4;
    case 581u: goto L_08A438E0;
    case 582u: goto L_08A438F4;
    case 583u: goto L_08A438FC;
    case 584u: goto L_08A43914;
    case 585u: goto L_08A43930;
    case 586u: goto L_08A43948;
    case 587u: goto L_08A43950;
    case 588u: goto L_08A43978;
    case 589u: goto L_08A4397C;
    case 590u: goto L_08A4398C;
    case 591u: goto L_08A439C8;
    case 592u: goto L_08A43A5C;
    case 593u: goto L_08A43AB0;
    case 594u: goto L_08A43ABC;
    case 595u: goto L_08A43AD0;
    case 596u: goto L_08A43B10;
    case 597u: goto L_08A43B20;
    case 598u: goto L_08A43B28;
    case 599u: goto L_08A43B40;
    case 600u: goto L_08A43B5C;
    case 601u: goto L_08A43B6C;
    case 602u: goto L_08A43B74;
    case 603u: goto L_08A43BA0;
    case 604u: goto L_08A43BB0;
    case 605u: goto L_08A43BF4;
    case 606u: goto L_08A43C10;
    case 607u: goto L_08A43C1C;
    case 608u: goto L_08A43C24;
    case 609u: goto L_08A43C34;
    case 610u: goto L_08A43C48;
    case 611u: goto L_08A43C54;
    case 612u: goto L_08A43C5C;
    case 613u: goto L_08A43C6C;
    case 614u: goto L_08A43C88;
    case 615u: goto L_08A43C90;
    case 616u: goto L_08A43C98;
    case 617u: goto L_08A43CC0;
    case 618u: goto L_08A43CEC;
    case 619u: goto L_08A43D08;
    case 620u: goto L_08A43D18;
    case 621u: goto L_08A43D20;
    case 622u: goto L_08A43D60;
    case 623u: goto L_08A43D78;
    case 624u: goto L_08A43D88;
    case 625u: goto L_08A43D90;
    case 626u: goto L_08A43D98;
    case 627u: goto L_08A43DA4;
    case 628u: goto L_08A43DB0;
    case 629u: goto L_08A43DC8;
    case 630u: goto L_08A43DE0;
    case 631u: goto L_08A43E00;
    case 632u: goto L_08A43E14;
    case 633u: goto L_08A43E1C;
    case 634u: goto L_08A43E30;
    case 635u: goto L_08A43E38;
    case 636u: goto L_08A43E40;
    case 637u: goto L_08A43E4C;
    case 638u: goto L_08A43E54;
    case 639u: goto L_08A43E6C;
    case 640u: goto L_08A43E88;
    case 641u: goto L_08A43EA4;
    case 642u: goto L_08A43EBC;
    case 643u: goto L_08A43ED8;
    case 644u: goto L_08A43EEC;
    case 645u: goto L_08A43F04;
    case 646u: goto L_08A43F20;
    case 647u: goto L_08A43F3C;
    case 648u: goto L_08A43F54;
    case 649u: goto L_08A43F70;
    case 650u: goto L_08A43F80;
    case 651u: goto L_08A43FA4;
    case 652u: goto L_08A43FB4;
    case 653u: goto L_08A43FD8;
    case 654u: goto L_08A43FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A40000:
    // nop
    goto L_08A40004;
L_08A40004:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40020;
      }
      goto L_08A4000C;
    }
L_08A4000C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 160 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 101 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A40028;
      }
      goto L_08A40018;
    }
L_08A40018:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40030;
      }
      goto L_08A40020;
    }
L_08A40020:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A401BC;
      }
      goto L_08A40028;
    }
L_08A40028:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40044;
      }
      goto L_08A40030;
    }
L_08A40030:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 176 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A4004C;
      }
      goto L_08A4003C;
    }
L_08A4003C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40054;
      }
      goto L_08A40044;
    }
L_08A40044:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A401BC;
      }
      goto L_08A4004C;
    }
L_08A4004C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4009C;
      }
      goto L_08A40054;
    }
L_08A40054:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 236 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15692u << 16u);
      if (branch_taken) {
          goto L_08A40094;
      }
      goto L_08A40060;
    }
L_08A40060:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[31] = (0x08A40080u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 143u, 0x088ED1B0u>(ctx, &aot_mem) && ctx.pc == 0x08A40080u) goto L_08A40080;
    return;
L_08A40080:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A400A4;
      }
      goto L_08A4008C;
    }
L_08A4008C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40114;
      }
      goto L_08A40094;
    }
L_08A40094:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A401BC;
      }
      goto L_08A4009C;
    }
L_08A4009C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A401BC;
      }
      goto L_08A400A4;
    }
L_08A400A4:
    ctx.gpr[4] = (15779u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(896));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 33u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A4010Cu);
    ctx.gpr[11] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x08A4010Cu) goto L_08A4010C;
    return;
L_08A4010C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A401BC;
      }
      goto L_08A40114;
    }
L_08A40114:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A401BC;
      }
      goto L_08A4012C;
    }
L_08A4012C:
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (15759u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(896));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 33u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A401BCu);
    ctx.gpr[11] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x08A401BCu) goto L_08A401BC;
    return;
L_08A401BC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A401E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(603))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A40238;
      }
      goto L_08A40218;
    }
L_08A40218:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 15u);
      if (branch_taken) {
          goto L_08A40240;
      }
      goto L_08A40224;
    }
L_08A40224:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4024C;
      }
      goto L_08A40230;
    }
L_08A40230:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4024C;
      }
      goto L_08A40238;
    }
L_08A40238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A404DC;
      }
      goto L_08A40240;
    }
L_08A40240:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A4024C;
      }
      goto L_08A40248;
    }
L_08A40248:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A4024C;
L_08A4024C:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1016)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4035C;
      }
      goto L_08A4025C;
    }
L_08A4025C:
    ctx.gpr[5] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1016), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 15u);
    ctx.gpr[31] = (0x08A4027Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4027Cu) goto L_08A4027C;
    return;
L_08A4027C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A402AC;
      }
      goto L_08A40290;
    }
L_08A40290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A402ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 218u, 0x089ED5ACu>(ctx, &aot_mem) && ctx.pc == 0x08A402ACu) goto L_08A402AC;
    return;
L_08A402AC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4035C;
      }
      goto L_08A402B4;
    }
L_08A402B4:
    ctx.gpr[18] = (2229u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-10736)));
    ctx.gpr[31] = (0x08A402C4u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08A402C4u) goto L_08A402C4;
    return;
L_08A402C4:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A40304u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08A40304u) goto L_08A40304;
    return;
L_08A40304:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-10736)));
    ctx.gpr[31] = (0x08A40310u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08A40310u) goto L_08A40310;
    return;
L_08A40310:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A4035Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 288u, 0x08A0E2E0u>(ctx, &aot_mem) && ctx.pc == 0x08A4035Cu) goto L_08A4035C;
    return;
L_08A4035C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 13u);
      if (branch_taken) {
          goto L_08A404DC;
      }
      goto L_08A40368;
    }
L_08A40368:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 14u);
      if (branch_taken) {
          goto L_08A403A8;
      }
      goto L_08A40370;
    }
L_08A40370:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1168)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A403E4;
      }
      goto L_08A4038C;
    }
L_08A4038C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1172)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A403E4;
      }
      goto L_08A403A4;
    }
L_08A403A4:
    ctx.gpr[4] = (0u | 14u);
    goto L_08A403A8;
L_08A403A8:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A404DC;
      }
      goto L_08A403B0;
    }
L_08A403B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A403E4;
      }
      goto L_08A403CC;
    }
L_08A403CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1180)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A404DC;
      }
      goto L_08A403E4;
    }
L_08A403E4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10732)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A404DC;
      }
      goto L_08A40414;
    }
L_08A40414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A40438;
      }
      goto L_08A40424;
    }
L_08A40424:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10728)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A404DC;
      }
      goto L_08A40438;
    }
L_08A40438:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A40484;
      }
      goto L_08A40440;
    }
L_08A40440:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 39u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A40458u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A408F0;
L_08A40458:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A404DC;
      }
      goto L_08A40464;
    }
L_08A40464:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 39u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A4047Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A408F0;
L_08A4047C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A404DC;
      }
      goto L_08A40484;
    }
L_08A40484:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10736)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A404DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 288u, 0x08A0E2E0u>(ctx, &aot_mem) && ctx.pc == 0x08A404DCu) goto L_08A404DC;
    return;
L_08A404DC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40500:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[9] = (16153u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[9] = (ctx.gpr[9] | 39322u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[9] = (16128u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[22]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08A405A0;
      }
      goto L_08A4058C;
    }
L_08A4058C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A405A0;
L_08A405A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08A405C8;
      }
      goto L_08A405C0;
    }
L_08A405C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08A405C8;
      }
      goto L_08A405C8;
    }
L_08A405C8:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[7];
    ctx.gpr[4] = (0u | 12u);
      if (branch_taken) {
          goto L_08A405E0;
      }
      goto L_08A405D8;
    }
L_08A405D8:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A405EC;
      }
      goto L_08A405E0;
    }
L_08A405E0:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    goto L_08A405EC;
L_08A405EC:
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A40600;
      }
      goto L_08A405F8;
    }
L_08A405F8:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A4060C;
      }
      goto L_08A40600;
    }
L_08A40600:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A4060C;
L_08A4060C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A40618u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 347u, 0x08A36214u>(ctx, &aot_mem) && ctx.pc == 0x08A40618u) goto L_08A40618;
    return;
L_08A40618:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A40634u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 472u, 0x0888E3F0u>(ctx, &aot_mem) && ctx.pc == 0x08A40634u) goto L_08A40634;
    return;
L_08A40634:
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
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A406A0;
      }
      goto L_08A40644;
    }
L_08A40644:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 12u);
      if (branch_taken) {
          goto L_08A40664;
      }
      goto L_08A4065C;
    }
L_08A4065C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A40670;
      }
      goto L_08A40664;
    }
L_08A40664:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A40670;
L_08A40670:
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A406A0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08A406A0u) goto L_08A406A0;
    return;
L_08A406A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A406CC;
      }
      goto L_08A406B4;
    }
L_08A406B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A406CC;
L_08A406CC:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[24];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08A40768u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 339u, 0x088C5B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A40768u) goto L_08A40768;
    return;
L_08A40768:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40808;
      }
      goto L_08A40770;
    }
L_08A40770:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08A407A8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 72u, 0x088C8430u>(ctx, &aot_mem) && ctx.pc == 0x08A407A8u) goto L_08A407A8;
    return;
L_08A407A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40800;
      }
      goto L_08A407B0;
    }
L_08A407B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[2] = (17530u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A407F0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C075Cu>(ctx, &aot_mem) && ctx.pc == 0x08A407F0u) goto L_08A407F0;
    return;
L_08A407F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
      if (branch_taken) {
          goto L_08A40810;
      }
      goto L_08A407F8;
    }
L_08A407F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4083C;
      }
      goto L_08A40800;
    }
L_08A40800:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A408B8;
      }
      goto L_08A40808;
    }
L_08A40808:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A408B8;
      }
      goto L_08A40810;
    }
L_08A40810:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4083C;
      }
      goto L_08A40824;
    }
L_08A40824:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4089C;
      }
      goto L_08A4083C;
    }
L_08A4083C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[2] = (50298u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A40874u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C075Cu>(ctx, &aot_mem) && ctx.pc == 0x08A40874u) goto L_08A40874;
    return;
L_08A40874:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40894;
      }
      goto L_08A4087C;
    }
L_08A4087C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[20])) && ctx.fpr[22] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
      if (branch_taken) {
          goto L_08A408A4;
      }
      goto L_08A4088C;
    }
L_08A4088C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08A408B8;
      }
      goto L_08A40894;
    }
L_08A40894:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A408B8;
      }
      goto L_08A4089C;
    }
L_08A4089C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A408B8;
      }
      goto L_08A408A4;
    }
L_08A408A4:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4088C;
      }
      goto L_08A408B4;
    }
L_08A408B4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A408B8;
L_08A408B8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A408F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1216));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1164), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1168), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1176), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1180), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1184), ctx.gpr[21]);
    ctx.gpr[19] = (ctx.gpr[6] & 255u);
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    ctx.gpr[21] = (0u | 13u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1156), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1160), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1172), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1188), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1192), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1196), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1200), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A418A4;
      }
      goto L_08A40950;
    }
L_08A40950:
    ctx.gpr[31] = (0x08A40958u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x08A40958u) goto L_08A40958;
    return;
L_08A40958:
    ctx.gpr[4] = (16076u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16128u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A40B5C;
      }
      goto L_08A40984;
    }
L_08A40984:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A409D4;
      }
      goto L_08A4098C;
    }
L_08A4098C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40B5C;
      }
      goto L_08A40998;
    }
L_08A40998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A409BC;
      }
      goto L_08A409A4;
    }
L_08A409A4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x08A409B4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08A409B4u) goto L_08A409B4;
    return;
L_08A409B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40B5C;
      }
      goto L_08A409BC;
    }
L_08A409BC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[31] = (0x08A409CCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08A409CCu) goto L_08A409CC;
    return;
L_08A409CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40B5C;
      }
      goto L_08A409D4;
    }
L_08A409D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40A70;
      }
      goto L_08A409EC;
    }
L_08A409EC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(428)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A40A70;
      }
      goto L_08A409FC;
    }
L_08A409FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A40A70;
      }
      goto L_08A40A0C;
    }
L_08A40A0C:
    ctx.gpr[31] = (0x08A40A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A40A14u) goto L_08A40A14;
    return;
L_08A40A14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(604)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A40A70;
      }
      goto L_08A40A24;
    }
L_08A40A24:
    ctx.gpr[31] = (0x08A40A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 33u, 0x08958280u>(ctx, &aot_mem) && ctx.pc == 0x08A40A2Cu) goto L_08A40A2C;
    return;
L_08A40A2C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40A70;
      }
      goto L_08A40A34;
    }
L_08A40A34:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40A58;
      }
      goto L_08A40A44;
    }
L_08A40A44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1400), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A40B5C;
      }
      goto L_08A40A58;
    }
L_08A40A58:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A40A68u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08A40A68u) goto L_08A40A68;
    return;
L_08A40A68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40B5C;
      }
      goto L_08A40A70;
    }
L_08A40A70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40AD0;
      }
      goto L_08A40A88;
    }
L_08A40A88:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(428)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A40AD0;
      }
      goto L_08A40A98;
    }
L_08A40A98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A40AD0;
      }
      goto L_08A40AA8;
    }
L_08A40AA8:
    ctx.gpr[31] = (0x08A40AB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 33u, 0x08958280u>(ctx, &aot_mem) && ctx.pc == 0x08A40AB0u) goto L_08A40AB0;
    return;
L_08A40AB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40AD0;
      }
      goto L_08A40AB8;
    }
L_08A40AB8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A40AC8u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08A40AC8u) goto L_08A40AC8;
    return;
L_08A40AC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40B5C;
      }
      goto L_08A40AD0;
    }
L_08A40AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40B5C;
      }
      goto L_08A40AE8;
    }
L_08A40AE8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(428)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A40B5C;
      }
      goto L_08A40AF8;
    }
L_08A40AF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A40B5C;
      }
      goto L_08A40B08;
    }
L_08A40B08:
    ctx.gpr[31] = (0x08A40B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 33u, 0x08958280u>(ctx, &aot_mem) && ctx.pc == 0x08A40B10u) goto L_08A40B10;
    return;
L_08A40B10:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40B5C;
      }
      goto L_08A40B18;
    }
L_08A40B18:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A40B24u);
    ctx.gpr[5] = (0u | 47u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x08A40B24u) goto L_08A40B24;
    return;
L_08A40B24:
    ctx.gpr[31] = (0x08A40B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A40B2Cu) goto L_08A40B2C;
    return;
L_08A40B2C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10684)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10688)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A40B44u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08A40B44u) goto L_08A40B44;
    return;
L_08A40B44:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1168), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A40B5C;
L_08A40B5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A40B68u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 515u, 0x08A37120u>(ctx, &aot_mem) && ctx.pc == 0x08A40B68u) goto L_08A40B68;
    return;
L_08A40B68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A40BA8;
      }
      goto L_08A40B78;
    }
L_08A40B78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40BA0;
      }
      goto L_08A40B84;
    }
L_08A40B84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
        goto L_08A40BA0;
    }
    goto L_08A40B90;
L_08A40B90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08A40B9Cu);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08A40B9Cu) goto L_08A40B9C;
    return;
L_08A40B9C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
    goto L_08A40BA0;
L_08A40BA0:
    ctx.gpr[31] = (0x08A40BA8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x08A40BA8u) goto L_08A40BA8;
    return;
L_08A40BA8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (17096u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08A40BCCu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x08A40BCCu) goto L_08A40BCC;
    return;
L_08A40BCC:
    ctx.gpr[4] = (0u | 15u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08A40BE0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 722u, 0x089B6DBCu>(ctx, &aot_mem) && ctx.pc == 0x08A40BE0u) goto L_08A40BE0;
    return;
L_08A40BE0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A40BECu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08A40BECu) goto L_08A40BEC;
    return;
L_08A40BEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A40C64;
      }
      goto L_08A40C00;
    }
L_08A40C00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A40C3C;
      }
      goto L_08A40C24;
    }
L_08A40C24:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A40C3C;
      }
      goto L_08A40C34;
    }
L_08A40C34:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[20] + ctx.fpr[22];
      if (branch_taken) {
          goto L_08A40C48;
      }
      goto L_08A40C3C;
    }
L_08A40C3C:
    ctx.gpr[31] = (0x08A40C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08A40C44u) goto L_08A40C44;
    return;
L_08A40C44:
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[22];
    goto L_08A40C48;
L_08A40C48:
    ctx.gpr[31] = (0x08A40C50u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A40C50u) goto L_08A40C50;
    return;
L_08A40C50:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A40C5Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A288A8u>(ctx, &aot_mem) && ctx.pc == 0x08A40C5Cu) goto L_08A40C5C;
    return;
L_08A40C5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40CA8;
      }
      goto L_08A40C64;
    }
L_08A40C64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A40C94;
      }
      goto L_08A40C7C;
    }
L_08A40C7C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A40C94;
      }
      goto L_08A40C8C;
    }
L_08A40C8C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A40CA0;
      }
      goto L_08A40C94;
    }
L_08A40C94:
    ctx.gpr[31] = (0x08A40C9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08A40C9Cu) goto L_08A40C9C;
    return;
L_08A40C9C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A40CA0;
L_08A40CA0:
    ctx.gpr[31] = (0x08A40CA8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A288A8u>(ctx, &aot_mem) && ctx.pc == 0x08A40CA8u) goto L_08A40CA8;
    return;
L_08A40CA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(46) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A410C8;
      }
      goto L_08A40CC0;
    }
L_08A40CC0:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(5824)));
    jump_target = ctx.gpr[1];
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40CD8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1124), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1120), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10772)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16608u << 16u);
    ctx.gpr[31] = (0x08A40D2Cu);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08A40D2Cu) goto L_08A40D2C;
    return;
L_08A40D2C:
    ctx.fpr[13] = ctx.fpr[26] - ctx.fpr[28];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[28] + ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A40D48u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08A40D48u) goto L_08A40D48;
    return;
L_08A40D48:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1412), ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1124)));
      if (branch_taken) {
          goto L_08A40D74;
      }
      goto L_08A40D5C;
    }
L_08A40D5C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A40DA4;
      }
      goto L_08A40D64;
    }
L_08A40D64:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A40D90;
      }
      goto L_08A40D6C;
    }
L_08A40D6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 27u);
      if (branch_taken) {
          goto L_08A40DA4;
      }
      goto L_08A40D74;
    }
L_08A40D74:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A40D98;
      }
      goto L_08A40D80;
    }
L_08A40D80:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40DA0;
      }
      goto L_08A40D88;
    }
L_08A40D88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40DA4;
      }
      goto L_08A40D90;
    }
L_08A40D90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 24u);
      if (branch_taken) {
          goto L_08A40DA4;
      }
      goto L_08A40D98;
    }
L_08A40D98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 121u);
      if (branch_taken) {
          goto L_08A40DA4;
      }
      goto L_08A40DA0;
    }
L_08A40DA0:
    ctx.gpr[21] = (0u | 23u);
    goto L_08A40DA4;
L_08A40DA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1445)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40DBC;
      }
      goto L_08A40DB0;
    }
L_08A40DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    goto L_08A40DBC;
L_08A40DBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41408;
      }
      goto L_08A40DC4;
    }
L_08A40DC4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A40E0C;
      }
      goto L_08A40DCC;
    }
L_08A40DCC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A40DF8;
      }
      goto L_08A40DD4;
    }
L_08A40DD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 27u);
      if (branch_taken) {
          goto L_08A40E0C;
      }
      goto L_08A40DDC;
    }
L_08A40DDC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A40E00;
      }
      goto L_08A40DE8;
    }
L_08A40DE8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40E08;
      }
      goto L_08A40DF0;
    }
L_08A40DF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40E0C;
      }
      goto L_08A40DF8;
    }
L_08A40DF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 24u);
      if (branch_taken) {
          goto L_08A40E0C;
      }
      goto L_08A40E00;
    }
L_08A40E00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 25u);
      if (branch_taken) {
          goto L_08A40E0C;
      }
      goto L_08A40E08;
    }
L_08A40E08:
    ctx.gpr[21] = (0u | 23u);
    goto L_08A40E0C;
L_08A40E0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    ctx.gpr[31] = (0x08A40E20u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(416), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x08A40E20u) goto L_08A40E20;
    return;
L_08A40E20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40E34;
      }
      goto L_08A40E28;
    }
L_08A40E28:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A40E34u);
    ctx.gpr[5] = (0u | 104u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x08A40E34u) goto L_08A40E34;
    return;
L_08A40E34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41408;
      }
      goto L_08A40E3C;
    }
L_08A40E3C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1120), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1124), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10772)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10696)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A40E90u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10692)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08A40E90u) goto L_08A40E90;
    return;
L_08A40E90:
    ctx.fpr[13] = ctx.fpr[26] - ctx.fpr[28];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[28] + ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A40EACu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08A40EACu) goto L_08A40EAC;
    return;
L_08A40EAC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1412), ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1120)));
      if (branch_taken) {
          goto L_08A40DDC;
      }
      goto L_08A40EC0;
    }
L_08A40EC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40DC4;
      }
      goto L_08A40EC8;
    }
L_08A40EC8:
    ctx.gpr[21] = (0u | 169u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1412), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41408;
      }
      goto L_08A40EE8;
    }
L_08A40EE8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1132), ctx.gpr[17]);
    ctx.gpr[21] = (0u | 139u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1128), ctx.gpr[21]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
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
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1412), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1136), ctx.gpr[16]);
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11020)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11056)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11024)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11060)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[16];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[30] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11028)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11064)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[17] + ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A40FA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A40FA4u) goto L_08A40FA4;
    return;
L_08A40FA4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-10676)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-10680)));
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A40FC4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08A40FC4u) goto L_08A40FC4;
    return;
L_08A40FC4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(145), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(146), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(147), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 163u);
    ctx.gpr[31] = (0x08A41014u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x08A41014u) goto L_08A41014;
    return;
L_08A41014:
    ctx.gpr[4] = (16396u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x08A41070u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 292u, 0x0890DE48u>(ctx, &aot_mem) && ctx.pc == 0x08A41070u) goto L_08A41070;
    return;
L_08A41070:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1132)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1136)));
      if (branch_taken) {
          goto L_08A41088;
      }
      goto L_08A41080;
    }
L_08A41080:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A41088;
L_08A41088:
    ctx.gpr[4] = (15820u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 200u);
    ctx.gpr[31] = (0x08A410C0u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 618u, 0x089D2840u>(ctx, &aot_mem) && ctx.pc == 0x08A410C0u) goto L_08A410C0;
    return;
L_08A410C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41408;
      }
      goto L_08A410C8;
    }
L_08A410C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A410E0;
      }
      goto L_08A410D0;
    }
L_08A410D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A41408;
      }
      goto L_08A410D8;
    }
L_08A410D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A410F8;
      }
      goto L_08A410E0;
    }
L_08A410E0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A411C8;
      }
      goto L_08A410E8;
    }
L_08A410E8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A412EC;
      }
      goto L_08A410F0;
    }
L_08A410F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41408;
      }
      goto L_08A410F8;
    }
L_08A410F8:
    ctx.gpr[21] = (0u | 121u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(816), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(820), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (15800u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A411C0;
      }
      goto L_08A41154;
    }
L_08A41154:
    ctx.gpr[4] = (49344u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[31] = (0x08A411C0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08A411C0u) goto L_08A411C0;
    return;
L_08A411C0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1412), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A41408;
      }
      goto L_08A411C8;
    }
L_08A411C8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[5] = (15800u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 20972u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08A41284;
      }
      goto L_08A411F8;
    }
L_08A411F8:
    ctx.gpr[21] = (0u | 26u);
    ctx.gpr[6] = (16025u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A41240u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 352u, 0x08A3629Cu>(ctx, &aot_mem) && ctx.pc == 0x08A41240u) goto L_08A41240;
    return;
L_08A41240:
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A41258u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 352u, 0x08A3629Cu>(ctx, &aot_mem) && ctx.pc == 0x08A41258u) goto L_08A41258;
    return;
L_08A41258:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A41268u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A3626Cu>(ctx, &aot_mem) && ctx.pc == 0x08A41268u) goto L_08A41268;
    return;
L_08A41268:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[31] = (0x08A4127Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08A4127Cu) goto L_08A4127C;
    return;
L_08A4127C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A412E4;
      }
      goto L_08A41284;
    }
L_08A41284:
    ctx.gpr[21] = (0u | 23u);
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
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A412A8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 352u, 0x08A3629Cu>(ctx, &aot_mem) && ctx.pc == 0x08A412A8u) goto L_08A412A8;
    return;
L_08A412A8:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A412C0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 352u, 0x08A3629Cu>(ctx, &aot_mem) && ctx.pc == 0x08A412C0u) goto L_08A412C0;
    return;
L_08A412C0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A412D0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A3626Cu>(ctx, &aot_mem) && ctx.pc == 0x08A412D0u) goto L_08A412D0;
    return;
L_08A412D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[31] = (0x08A412E4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08A412E4u) goto L_08A412E4;
    return;
L_08A412E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41408;
      }
      goto L_08A412EC;
    }
L_08A412EC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15800u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08A413A8;
      }
      goto L_08A4131C;
    }
L_08A4131C:
    ctx.gpr[21] = (0u | 28u);
    ctx.gpr[6] = (16025u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
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
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
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
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.gpr[4] = (49344u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A41364u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 352u, 0x08A3629Cu>(ctx, &aot_mem) && ctx.pc == 0x08A41364u) goto L_08A41364;
    return;
L_08A41364:
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A4137Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 352u, 0x08A3629Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4137Cu) goto L_08A4137C;
    return;
L_08A4137C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A4138Cu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A3626Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4138Cu) goto L_08A4138C;
    return;
L_08A4138C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[31] = (0x08A413A0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08A413A0u) goto L_08A413A0;
    return;
L_08A413A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41408;
      }
      goto L_08A413A8;
    }
L_08A413A8:
    ctx.gpr[21] = (0u | 24u);
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
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.gpr[4] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A413CCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 352u, 0x08A3629Cu>(ctx, &aot_mem) && ctx.pc == 0x08A413CCu) goto L_08A413CC;
    return;
L_08A413CC:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A413E4u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 352u, 0x08A3629Cu>(ctx, &aot_mem) && ctx.pc == 0x08A413E4u) goto L_08A413E4;
    return;
L_08A413E4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A413F4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A3626Cu>(ctx, &aot_mem) && ctx.pc == 0x08A413F4u) goto L_08A413F4;
    return;
L_08A413F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[31] = (0x08A41408u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08A41408u) goto L_08A41408;
    return;
L_08A41408:
    ctx.gpr[4] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A41478;
      }
      goto L_08A41414;
    }
L_08A41414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08A41470u);
    ctx.gpr[6] = (0u | 139u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x08A41470u) goto L_08A41470;
    return;
L_08A41470:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A414D8;
      }
      goto L_08A41478;
    }
L_08A41478:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A414D8;
      }
      goto L_08A41480;
    }
L_08A41480:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1208)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A414B0;
      }
      goto L_08A41494;
    }
L_08A41494:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A414A8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 106u, 0x089A07E8u>(ctx, &aot_mem) && ctx.pc == 0x08A414A8u) goto L_08A414A8;
    return;
L_08A414A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A414C8;
      }
      goto L_08A414B0;
    }
L_08A414B0:
    ctx.gpr[6] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A414C8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 156u, 0x089B0884u>(ctx, &aot_mem) && ctx.pc == 0x08A414C8u) goto L_08A414C8;
    return;
L_08A414C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_08A414D8;
L_08A414D8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08A41540u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 72u, 0x088C8430u>(ctx, &aot_mem) && ctx.pc == 0x08A41540u) goto L_08A41540;
    return;
L_08A41540:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A415B8;
      }
      goto L_08A4154C;
    }
L_08A4154C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[31] = (0x08A41574u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 352u, 0x08A3629Cu>(ctx, &aot_mem) && ctx.pc == 0x08A41574u) goto L_08A41574;
    return;
L_08A41574:
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08A415B4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 72u, 0x088C8430u>(ctx, &aot_mem) && ctx.pc == 0x08A415B4u) goto L_08A415B4;
    return;
L_08A415B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    goto L_08A415B8;
L_08A415B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41668;
      }
      goto L_08A415C4;
    }
L_08A415C4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08A41664u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 72u, 0x088C8430u>(ctx, &aot_mem) && ctx.pc == 0x08A41664u) goto L_08A41664;
    return;
L_08A41664:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    goto L_08A41668;
L_08A41668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41724;
      }
      goto L_08A41674;
    }
L_08A41674:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (16204u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08A41720u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 72u, 0x088C8430u>(ctx, &aot_mem) && ctx.pc == 0x08A41720u) goto L_08A41720;
    return;
L_08A41720:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    goto L_08A41724;
L_08A41724:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A417F8;
      }
      goto L_08A41730;
    }
L_08A41730:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08A4177Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C075Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4177Cu) goto L_08A4177C;
    return;
L_08A4177C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A417B4;
      }
      goto L_08A41784;
    }
L_08A41784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A417A0;
      }
      goto L_08A41790;
    }
L_08A41790:
    ctx.gpr[31] = (0x08A41798u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 623u, 0x0889B6A0u>(ctx, &aot_mem) && ctx.pc == 0x08A41798u) goto L_08A41798;
    return;
L_08A41798:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_08A417D4;
      }
      goto L_08A417A0;
    }
L_08A417A0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1332), ctx.gpr[16]);
    ctx.gpr[31] = (0x08A417ACu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 623u, 0x0889B6A0u>(ctx, &aot_mem) && ctx.pc == 0x08A417ACu) goto L_08A417AC;
    return;
L_08A417AC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1332), 0u);
      if (branch_taken) {
          goto L_08A417D0;
      }
      goto L_08A417B4;
    }
L_08A417B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A417D0;
L_08A417D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    goto L_08A417D4;
L_08A417D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(416)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1412), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[4] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A418A0;
      }
      goto L_08A417F8;
    }
L_08A417F8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(724), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16294u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(728), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08A4185Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 72u, 0x088C8430u>(ctx, &aot_mem) && ctx.pc == 0x08A4185Cu) goto L_08A4185C;
    return;
L_08A4185C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A418A0;
      }
      goto L_08A41864;
    }
L_08A41864:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(760), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(740)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(744)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A418A0;
L_08A418A0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1332), 0u);
    goto L_08A418A4;
L_08A418A4:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1140)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1144)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1148)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1156)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1160)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1164)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1168)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1172)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1176)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1180)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1188)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1192)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1196)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1200)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1216));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A418F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A4192C;
      }
      goto L_08A41924;
    }
L_08A41924:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
      if (branch_taken) {
          goto L_08A41930;
      }
      goto L_08A4192C;
    }
L_08A4192C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A41930;
L_08A41930:
    ctx.gpr[4] = (17480u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[12] / ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41968;
      }
      goto L_08A41954;
    }
L_08A41954:
    ctx.gpr[4] = (16166u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08A41988;
      }
      goto L_08A41968;
    }
L_08A41968:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A41988;
      }
      goto L_08A41978;
    }
L_08A41978:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_08A41988;
L_08A41988:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A419B0;
      }
      goto L_08A41998;
    }
L_08A41998:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_08A419B8;
    }
    goto L_08A419A8;
L_08A419A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A419F0;
      }
      goto L_08A419B0;
    }
L_08A419B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42188;
      }
      goto L_08A419B8;
    }
L_08A419B8:
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A419F0;
      }
      goto L_08A419C4;
    }
L_08A419C4:
    ctx.gpr[31] = (0x08A419CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 177u, 0x08844EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A419CCu) goto L_08A419CC;
    return;
L_08A419CC:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A419F0;
      }
      goto L_08A419E4;
    }
L_08A419E4:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08A419F0;
L_08A419F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16800u << 16u);
      if (branch_taken) {
          goto L_08A41A24;
      }
      goto L_08A41A00;
    }
L_08A41A00:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A41A24;
      }
      goto L_08A41A14;
    }
L_08A41A14:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A41A24;
L_08A41A24:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A41DD4;
      }
      goto L_08A41A48;
    }
L_08A41A48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (16672u << 16u);
      if (branch_taken) {
          goto L_08A41DD4;
      }
      goto L_08A41A5C;
    }
L_08A41A5C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A41DD4;
      }
      goto L_08A41A70;
    }
L_08A41A70:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
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
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16217u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A41B30;
      }
      goto L_08A41AAC;
    }
L_08A41AAC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A41AF0;
    }
    goto L_08A41AF0;
L_08A41AF0:
    ctx.gpr[4] = (16217u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16608u << 16u);
      if (branch_taken) {
          goto L_08A41B10;
      }
      goto L_08A41B0C;
    }
L_08A41B0C:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    goto L_08A41B10;
L_08A41B10:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08A41B3C;
      }
      goto L_08A41B30;
    }
L_08A41B30:
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A41B3C;
L_08A41B3C:
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 210u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A41B98;
      }
      goto L_08A41B58;
    }
L_08A41B58:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 209u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A41B98;
      }
      goto L_08A41B68;
    }
L_08A41B68:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 207u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A41B98;
      }
      goto L_08A41B78;
    }
L_08A41B78:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 202u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A41B98;
      }
      goto L_08A41B88;
    }
L_08A41B88:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 208u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A41BB4;
      }
      goto L_08A41B98;
    }
L_08A41B98:
    ctx.gpr[4] = (16166u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16192u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08A41BB4;
L_08A41BB4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) & 0x7FFFFFFFu);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) & 0x7FFFFFFFu);
    ctx.gpr[5] = (16102u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(0u);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
        goto L_08A41C30;
    }
    goto L_08A41C30;
L_08A41C30:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A41C68;
    }
    goto L_08A41C68;
L_08A41C68:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (17046u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A41DD4;
      }
      goto L_08A41C94;
    }
L_08A41C94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-10));
      if (branch_taken) {
          goto L_08A41D30;
      }
      goto L_08A41CA0;
    }
L_08A41CA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[31] = (0x08A41CACu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 349u, 0x0899E234u>(ctx, &aot_mem) && ctx.pc == 0x08A41CACu) goto L_08A41CAC;
    return;
L_08A41CAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A41CF0;
      }
      goto L_08A41CC8;
    }
L_08A41CC8:
    ctx.gpr[6] = (15692u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(300)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[19] & 255u);
    ctx.gpr[6] = (0u | 39u);
    ctx.gpr[31] = (0x08A41CF0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 580u, 0x088DEE94u>(ctx, &aot_mem) && ctx.pc == 0x08A41CF0u) goto L_08A41CF0;
    return;
L_08A41CF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41D30;
      }
      goto L_08A41CFC;
    }
L_08A41CFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A41D30;
      }
      goto L_08A41D10;
    }
L_08A41D10:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[6] = (ctx.gpr[19] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 39u);
    ctx.gpr[31] = (0x08A41D28u);
    ctx.gpr[8] = (0u | 0u);
    if (lcs::trainer_keep_on_bike()) goto L_08A41D28;
    goto L_08A408F0;
L_08A41D28:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (0u | 1u);
    goto L_08A41D30;
L_08A41D30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41DD4;
      }
      goto L_08A41D3C;
    }
L_08A41D3C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-10));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A41D58;
      }
      goto L_08A41D48;
    }
L_08A41D48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    ctx.gpr[31] = (0x08A41D54u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 349u, 0x0899E234u>(ctx, &aot_mem) && ctx.pc == 0x08A41D54u) goto L_08A41D54;
    return;
L_08A41D54:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08A41D58;
L_08A41D58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A41D9C;
      }
      goto L_08A41D74;
    }
L_08A41D74:
    ctx.gpr[6] = (15692u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(300)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[19] & 255u);
    ctx.gpr[6] = (0u | 39u);
    ctx.gpr[31] = (0x08A41D9Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 580u, 0x088DEE94u>(ctx, &aot_mem) && ctx.pc == 0x08A41D9Cu) goto L_08A41D9C;
    return;
L_08A41D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41DD4;
      }
      goto L_08A41DA8;
    }
L_08A41DA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A41DD4;
      }
      goto L_08A41DBC;
    }
L_08A41DBC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    ctx.gpr[6] = (ctx.gpr[19] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 39u);
    ctx.gpr[31] = (0x08A41DD4u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A408F0;
L_08A41DD4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41F2C;
      }
      goto L_08A41DDC;
    }
L_08A41DDC:
    ctx.gpr[31] = (0x08A41DE4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x08A41DE4u) goto L_08A41DE4;
    return;
L_08A41DE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A41F2C;
      }
      goto L_08A41DEC;
    }
L_08A41DEC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A41F2C;
      }
      goto L_08A41E04;
    }
L_08A41E04:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41F2C;
      }
      goto L_08A41E14;
    }
L_08A41E14:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
      if (branch_taken) {
          goto L_08A41F1C;
      }
      goto L_08A41E28;
    }
L_08A41E28:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41F1C;
      }
      goto L_08A41E4C;
    }
L_08A41E4C:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[5] = (0u | 197u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08A41F1C;
      }
      goto L_08A41E68;
    }
L_08A41E68:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A41E7Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 444u, 0x08AF9FB4u>(ctx, &aot_mem) && ctx.pc == 0x08A41E7Cu) goto L_08A41E7C;
    return;
L_08A41E7C:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10672)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A41F1C;
      }
      goto L_08A41EA4;
    }
L_08A41EA4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41EE0;
      }
      goto L_08A41EAC;
    }
L_08A41EAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41EE0;
      }
      goto L_08A41EB8;
    }
L_08A41EB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[31] = (0x08A41EC4u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 349u, 0x0899E234u>(ctx, &aot_mem) && ctx.pc == 0x08A41EC4u) goto L_08A41EC4;
    return;
L_08A41EC4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[6] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 39u);
    ctx.gpr[31] = (0x08A41EDCu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A408F0;
L_08A41EDC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08A41EE0;
L_08A41EE0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41EF0;
      }
      goto L_08A41EE8;
    }
L_08A41EE8:
    ctx.gpr[31] = (0x08A41EF0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 331u, 0x089A55ACu>(ctx, &aot_mem) && ctx.pc == 0x08A41EF0u) goto L_08A41EF0;
    return;
L_08A41EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(280));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A41F14u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A41F14u) goto L_08A41F14;
    return;
L_08A41F14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41F2C;
      }
      goto L_08A41F1C;
    }
L_08A41F1C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41E14;
      }
      goto L_08A41F2C;
    }
L_08A41F2C:
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42130;
      }
      goto L_08A41F44;
    }
L_08A41F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A42130;
      }
      goto L_08A41F58;
    }
L_08A41F58:
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[31] = (0x08A41F6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 299u, 0x08A89F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A41F6Cu) goto L_08A41F6C;
    return;
L_08A41F6C:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42130;
      }
      goto L_08A41F84;
    }
L_08A41F84:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42008;
      }
      goto L_08A41F9C;
    }
L_08A41F9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42008;
      }
      goto L_08A41FA8;
    }
L_08A41FA8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(300)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42008;
      }
      goto L_08A41FB4;
    }
L_08A41FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42008;
      }
      goto L_08A41FD0;
    }
L_08A41FD0:
    ctx.gpr[31] = (0x08A41FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A41FD8u) goto L_08A41FD8;
    return;
L_08A41FD8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A41FF0;
      }
      goto L_08A41FE0;
    }
L_08A41FE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A42008;
      }
      goto L_08A41FF0;
    }
L_08A41FF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42008;
      }
      goto L_08A41FFC;
    }
L_08A41FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[31] = (0x08A42008u);
    ctx.gpr[5] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x08A42008u) goto L_08A42008;
    return;
L_08A42008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A42034;
      }
      goto L_08A4201C;
    }
L_08A4201C:
    ctx.gpr[31] = (0x08A42024u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A42024u) goto L_08A42024;
    return;
L_08A42024:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A4203C;
      }
      goto L_08A4202C;
    }
L_08A4202C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42080;
      }
      goto L_08A42034;
    }
L_08A42034:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42188;
      }
      goto L_08A4203C;
    }
L_08A4203C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (16576u << 16u);
      if (branch_taken) {
          goto L_08A42068;
      }
      goto L_08A4204C;
    }
L_08A4204C:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A420F4;
      }
      goto L_08A42068;
    }
L_08A42068:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A420F4;
      }
      goto L_08A42080;
    }
L_08A42080:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (16704u << 16u);
      if (branch_taken) {
          goto L_08A420E0;
      }
      goto L_08A42090;
    }
L_08A42090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(300)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16000u << 16u);
      if (branch_taken) {
          goto L_08A420C8;
      }
      goto L_08A4209C;
    }
L_08A4209C:
    ctx.gpr[31] = (0x08A420A4u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(300)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A420A4u) goto L_08A420A4;
    return;
L_08A420A4:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    ctx.gpr[4] = (16000u << 16u);
      if (branch_taken) {
          goto L_08A420C8;
      }
      goto L_08A420AC;
    }
L_08A420AC:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A420F4;
      }
      goto L_08A420C8;
    }
L_08A420C8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A420F4;
      }
      goto L_08A420E0;
    }
L_08A420E0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A420F4;
L_08A420F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08A42130;
      }
      goto L_08A42110;
    }
L_08A42110:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42130;
      }
      goto L_08A42124;
    }
L_08A42124:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A42130;
L_08A42130:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42188;
      }
      goto L_08A4214C;
    }
L_08A4214C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A42188;
      }
      goto L_08A4215C;
    }
L_08A4215C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1333))))));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(300)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1356), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1440), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A42188;
      }
      goto L_08A4217C;
    }
L_08A4217C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[31] = (0x08A42188u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1440));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08A42188u) goto L_08A42188;
    return;
L_08A42188:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A421B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.gpr[8] = (0u | 32u);
    ctx.gpr[7] = (ctx.gpr[7] & 496u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A421F4;
      }
      goto L_08A421E8;
    }
L_08A421E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A421F4;
L_08A421F4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A42200u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 738u, 0x08A2F620u>(ctx, &aot_mem) && ctx.pc == 0x08A42200u) goto L_08A42200;
    return;
L_08A42200:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A424F4;
      }
      goto L_08A42208;
    }
L_08A42208:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1156)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1160)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A422C0;
      }
      goto L_08A42268;
    }
L_08A42268:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A422C0;
      }
      goto L_08A42278;
    }
L_08A42278:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 6u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A422C0;
      }
      goto L_08A42294;
    }
L_08A42294:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (0u | 164u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A422C4;
      }
      goto L_08A422A4;
    }
L_08A422A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 4u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A422C4;
      }
      goto L_08A422C0;
    }
L_08A422C0:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    goto L_08A422C4;
L_08A422C4:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] + static_cast<std::uint32_t>(1024));
    ctx.gpr[10] = (ctx.gpr[17] + static_cast<std::uint32_t>(1152));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A422E4u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 331u, 0x088CE988u>(ctx, &aot_mem) && ctx.pc == 0x08A422E4u) goto L_08A422E4;
    return;
L_08A422E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(54))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A422FC;
      }
      goto L_08A422F0;
    }
L_08A422F0:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A42438;
      }
      goto L_08A422FC;
    }
L_08A422FC:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42438;
      }
      goto L_08A4230C;
    }
L_08A4230C:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
      if (branch_taken) {
          goto L_08A42428;
      }
      goto L_08A42330;
    }
L_08A42330:
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42428;
      }
      goto L_08A42350;
    }
L_08A42350:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A42388;
      }
      goto L_08A4236C;
    }
L_08A4236C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] << 5u);
      if (branch_taken) {
          goto L_08A423F8;
      }
      goto L_08A42388;
    }
L_08A42388:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1360), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1360));
    ctx.gpr[31] = (0x08A423A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08A423A0u) goto L_08A423A0;
    return;
L_08A423A0:
    ctx.gpr[4] = (ctx.gpr[20] << 4u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1376));
    ctx.gpr[5] = (ctx.gpr[20] << 5u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1024));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[20] << 5u);
    goto L_08A423F8;
L_08A423F8:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1024));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(325), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42428;
      }
      goto L_08A42424;
    }
L_08A42424:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(576), ctx.gpr[16]);
    goto L_08A42428;
L_08A42428:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4230C;
      }
      goto L_08A42438;
    }
L_08A42438:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A42448;
      }
      goto L_08A42440;
    }
L_08A42440:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A424EC;
      }
      goto L_08A42448;
    }
L_08A42448:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A42454u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 252u, 0x08A0E044u>(ctx, &aot_mem) && ctx.pc == 0x08A42454u) goto L_08A42454;
    return;
L_08A42454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4247C;
      }
      goto L_08A42470;
    }
L_08A42470:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4247Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 252u, 0x08A0E044u>(ctx, &aot_mem) && ctx.pc == 0x08A4247Cu) goto L_08A4247C;
    return;
L_08A4247C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A424EC;
      }
      goto L_08A42484;
    }
L_08A42484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A424CC;
      }
      goto L_08A424A0;
    }
L_08A424A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A424EC;
      }
      goto L_08A424BC;
    }
L_08A424BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A424EC;
      }
      goto L_08A424CC;
    }
L_08A424CC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08A424EC;
L_08A424EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A424F8;
      }
      goto L_08A424F4;
    }
L_08A424F4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A424F8;
L_08A424F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42518:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10820)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-10824)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-10788)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[13] = (2229u << 16u);
    ctx.gpr[12] = (2229u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[14] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-10816), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[10] = (16255u << 16u);
    ctx.gpr[11] = (16230u << 16u);
    ctx.gpr[15] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[10] | 57147u);
    ctx.gpr[2] = (16243u << 16u);
    ctx.gpr[3] = (2277u << 16u);
    ctx.gpr[9] = (ctx.gpr[11] | 26214u);
    ctx.gpr[10] = (ctx.gpr[3] + static_cast<std::uint32_t>(22608));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[11] = (ctx.gpr[2] | 13107u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-10808), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-10812), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-10804), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-10800), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-10784), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(22608), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A425E4:
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
L_08A4260C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    ctx.gpr[20] = (2277u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] & 255u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(22624));
      if (branch_taken) {
          goto L_08A4266C;
      }
      goto L_08A42644;
    }
L_08A42644:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A42650u);
    ctx.gpr[4] = (0u | 1040u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x08A42650u) goto L_08A42650;
    return;
L_08A42650:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A4266C;
      }
      goto L_08A4265C;
    }
L_08A4265C:
    ctx.gpr[5] = (0u | 199u);
    ctx.gpr[31] = (0x08A42668u);
    ctx.gpr[6] = (0u | 4u);
    goto L_08A42924;
L_08A42668:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08A4266C;
L_08A4266C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A427F0;
      }
      goto L_08A42674;
    }
L_08A42674:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A42680u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08A42680u) goto L_08A42680;
    return;
L_08A42680:
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
    ctx.gpr[31] = (0x08A42690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A42690u) goto L_08A42690;
    return;
L_08A42690:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15560u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (50426u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4276C;
      }
      goto L_08A42728;
    }
L_08A42728:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (17658u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4276C;
      }
      goto L_08A42744;
    }
L_08A42744:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4276C;
      }
      goto L_08A42758;
    }
L_08A42758:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A427D8;
      }
      goto L_08A4276C;
    }
L_08A4276C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A42778u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08A42778u) goto L_08A42778;
    return;
L_08A42778:
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A427D8;
L_08A427D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A42820;
      }
      goto L_08A427F0;
    }
L_08A427F0:
    ctx.gpr[4] = (50016u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17225u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17062u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    goto L_08A42820;
L_08A42820:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A42834u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A066A0u>(ctx, &aot_mem) && ctx.pc == 0x08A42834u) goto L_08A42834;
    return;
L_08A42834:
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
        goto L_08A42854;
    }
    goto L_08A4283C;
L_08A4283C:
    ctx.gpr[5] = (16534u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 47186u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A42850u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 493u, 0x08A05FF8u>(ctx, &aot_mem) && ctx.pc == 0x08A42850u) goto L_08A42850;
    return;
L_08A42850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    goto L_08A42854;
L_08A42854:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A42874;
L_08A42874:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08A42888;
L_08A42888:
    ctx.gpr[7] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[20]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A428B0;
      }
      goto L_08A4289C;
    }
L_08A4289C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A428B0;
      }
      goto L_08A428AC;
    }
L_08A428AC:
    ctx.gpr[5] = (0u | 0u);
    goto L_08A428B0;
L_08A428B0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A42888;
      }
      goto L_08A428C8;
    }
L_08A428C8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42874;
      }
      goto L_08A428D0;
    }
L_08A428D0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(912), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A428DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08A428DCu) goto L_08A428DC;
    return;
L_08A428DC:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42908:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (ctx.gpr[6] & 4u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4291C;
      }
      goto L_08A42918;
    }
L_08A42918:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A4291C;
L_08A4291C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42924:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4294Cu);
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 166u, 0x088A0D74u>(ctx, &aot_mem) && ctx.pc == 0x08A4294Cu) goto L_08A4294C;
    return;
L_08A4294C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14580));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A42988;
      }
      goto L_08A42974;
    }
L_08A42974:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A42988;
L_08A42988:
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(836), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(66))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24020)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(336), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A429C8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A42B28;
L_08A429C8:
    ctx.gpr[4] = (19646u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(880), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] | 48160u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(914), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16255u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 55470u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15692u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(912), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(984), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(980), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(900), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(896), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(915), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(968), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    goto L_08A42A30;
L_08A42A30:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(920), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(944), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A42A30;
      }
      goto L_08A42A48;
    }
L_08A42A48:
    ctx.gpr[6] = (49736u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A42A58;
L_08A42A58:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(988), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A42A58;
      }
      goto L_08A42A6C;
    }
L_08A42A6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-497));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1028), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | 160u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1036), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1032), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(888), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(884), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(919), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(918), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(917), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(916), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_08A42ACC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A42B14;
      }
      goto L_08A42AE8;
    }
L_08A42AE8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14580));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A42B00u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 515u, 0x0889E91Cu>(ctx, &aot_mem) && ctx.pc == 0x08A42B00u) goto L_08A42B00;
    return;
L_08A42B00:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42B14;
      }
      goto L_08A42B0C;
    }
L_08A42B0C:
    ctx.gpr[31] = (0x08A42B14u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 513u, 0x0889E8F8u>(ctx, &aot_mem) && ctx.pc == 0x08A42B14u) goto L_08A42B14;
    return;
L_08A42B14:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42B28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A42B3Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 598u, 0x08A2EC58u>(ctx, &aot_mem) && ctx.pc == 0x08A42B3Cu) goto L_08A42B3C;
    return;
L_08A42B3C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A42B44;
L_08A42B44:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(848), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A42B44;
      }
      goto L_08A42B58;
    }
L_08A42B58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08A42B64u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(848));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 609u, 0x08973D94u>(ctx, &aot_mem) && ctx.pc == 0x08A42B64u) goto L_08A42B64;
    return;
L_08A42B64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42B74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(915)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A42D10;
      }
      goto L_08A42BA0;
    }
L_08A42BA0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42D08;
      }
      goto L_08A42BC0;
    }
L_08A42BC0:
    ctx.gpr[31] = (0x08A42BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A42BC8u) goto L_08A42BC8;
    return;
L_08A42BC8:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 127u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A42D00;
      }
      goto L_08A42BD8;
    }
L_08A42BD8:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A42BE4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08A42BE4u) goto L_08A42BE4;
    return;
L_08A42BE4:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42CF8;
      }
      goto L_08A42C28;
    }
L_08A42C28:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42CF0;
      }
      goto L_08A42C5C;
    }
L_08A42C5C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A42C6Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 489u, 0x08A05EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A42C6Cu) goto L_08A42C6C;
    return;
L_08A42C6C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(915)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A42C7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A43C48;
L_08A42C7C:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A42CACu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08A42CACu) goto L_08A42CAC;
    return;
L_08A42CAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08A42CC0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2F78u>(ctx, &aot_mem) && ctx.pc == 0x08A42CC0u) goto L_08A42CC0;
    return;
L_08A42CC0:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A42CCCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08A42CCCu) goto L_08A42CCC;
    return;
L_08A42CCC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08A42D18;
    }
    goto L_08A42CE8;
L_08A42CE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (16416u << 16u);
      if (branch_taken) {
          goto L_08A42D1C;
      }
      goto L_08A42CF0;
    }
L_08A42CF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A42E38;
      }
      goto L_08A42CF8;
    }
L_08A42CF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A42E38;
      }
      goto L_08A42D00;
    }
L_08A42D00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A42E38;
      }
      goto L_08A42D08;
    }
L_08A42D08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A42E38;
      }
      goto L_08A42D10;
    }
L_08A42D10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A42E38;
      }
      goto L_08A42D18;
    }
L_08A42D18:
    ctx.gpr[4] = (16416u << 16u);
    goto L_08A42D1C;
L_08A42D1C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42E10;
      }
      goto L_08A42D30;
    }
L_08A42D30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(915)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08A42D50u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 127u, 0x089F8EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A42D50u) goto L_08A42D50;
    return;
L_08A42D50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42E10;
      }
      goto L_08A42D58;
    }
L_08A42D58:
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A42D78u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 129u, 0x08AA0804u>(ctx, &aot_mem) && ctx.pc == 0x08A42D78u) goto L_08A42D78;
    return;
L_08A42D78:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2092), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(2092));
    ctx.gpr[31] = (0x08A42DA0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08A42DA0u) goto L_08A42DA0;
    return;
L_08A42DA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(915)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2096), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(915)));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(915), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(915)));
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(916), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A42DE4u);
    ctx.gpr[6] = (0u | 168u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x08A42DE4u) goto L_08A42DE4;
    return;
L_08A42DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42E08;
      }
      goto L_08A42DF4;
    }
L_08A42DF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42E08;
      }
      goto L_08A42E00;
    }
L_08A42E00:
    ctx.gpr[31] = (0x08A42E08u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A42E08u) goto L_08A42E08;
    return;
L_08A42E08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A42E38;
      }
      goto L_08A42E10;
    }
L_08A42E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42E34;
      }
      goto L_08A42E20;
    }
L_08A42E20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42E34;
      }
      goto L_08A42E2C;
    }
L_08A42E2C:
    ctx.gpr[31] = (0x08A42E34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A42E34u) goto L_08A42E34;
    return;
L_08A42E34:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A42E38;
L_08A42E38:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42E5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A42E8Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08A42E8Cu) goto L_08A42E8C;
    return;
L_08A42E8C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A42EA0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08A42EA0u) goto L_08A42EA0;
    return;
L_08A42EA0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[31] = (0x08A42EC4u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08A42EC4u) goto L_08A42EC4;
    return;
L_08A42EC4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10300)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10304)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A42EDCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08A42EDCu) goto L_08A42EDC;
    return;
L_08A42EDC:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A42EF0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61FCu>(ctx, &aot_mem) && ctx.pc == 0x08A42EF0u) goto L_08A42EF0;
    return;
L_08A42EF0:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A42EFCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x08A42EFCu) goto L_08A42EFC;
    return;
L_08A42EFC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A42F08u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08A42F08u) goto L_08A42F08;
    return;
L_08A42F08:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A42F44;
    }
    goto L_08A42F44;
L_08A42F44:
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A42F5Cu);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 129u, 0x088A5000u>(ctx, &aot_mem) && ctx.pc == 0x08A42F5Cu) goto L_08A42F5C;
    return;
L_08A42F5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A42F68u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 365u, 0x0892AED4u>(ctx, &aot_mem) && ctx.pc == 0x08A42F68u) goto L_08A42F68;
    return;
L_08A42F68:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42F88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(884)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(888)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[17]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(908)));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (17008u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (16320u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A43200;
      }
      goto L_08A43004;
    }
L_08A43004:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27668)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49344u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(908)));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (ctx.gpr[8] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[10] = (ctx.gpr[8] | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08A43078u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 154u, 0x0892939Cu>(ctx, &aot_mem) && ctx.pc == 0x08A43078u) goto L_08A43078;
    return;
L_08A43078:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (16608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A430A4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08A425E4;
L_08A430A4:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08A430B4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08A430B4u) goto L_08A430B4;
    return;
L_08A430B4:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(908)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11136)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (48972u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17224u << 16u);
      if (branch_taken) {
          goto L_08A431A8;
      }
      goto L_08A43144;
    }
L_08A43144:
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[11] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A431A0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 328u, 0x089FA154u>(ctx, &aot_mem) && ctx.pc == 0x08A431A0u) goto L_08A431A0;
    return;
L_08A431A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43200;
      }
      goto L_08A431A8;
    }
L_08A431A8:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[11] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A43200u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 328u, 0x089FA154u>(ctx, &aot_mem) && ctx.pc == 0x08A43200u) goto L_08A43200;
    return;
L_08A43200:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (49424u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A43228u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A425E4;
L_08A43228:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43290;
      }
      goto L_08A43244;
    }
L_08A43244:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A43288u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 328u, 0x089FA154u>(ctx, &aot_mem) && ctx.pc == 0x08A43288u) goto L_08A43288;
    return;
L_08A43288:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A432D4;
      }
      goto L_08A43290;
    }
L_08A43290:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A432D4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 328u, 0x089FA154u>(ctx, &aot_mem) && ctx.pc == 0x08A432D4u) goto L_08A432D4;
    return;
L_08A432D4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43304:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[20]);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.gpr[5] = (16584u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 62915u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[21]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(856)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A43378;
      }
      goto L_08A43360;
    }
L_08A43360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A4337C;
      }
      goto L_08A43370;
    }
L_08A43370:
    ctx.gpr[31] = (0x08A43378u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A43378u) goto L_08A43378;
    return;
L_08A43378:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    goto L_08A4337C;
L_08A4337C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A43394u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x08A43394u) goto L_08A43394;
    return;
L_08A43394:
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(984)));
    ctx.gpr[31] = (0x08A433A8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 498u, 0x08A060BCu>(ctx, &aot_mem) && ctx.pc == 0x08A433A8u) goto L_08A433A8;
    return;
L_08A433A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A433BCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08A433BCu) goto L_08A433BC;
    return;
L_08A433BC:
    ctx.gpr[31] = (0x08A433C4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08A433C4u) goto L_08A433C4;
    return;
L_08A433C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(984)));
    ctx.gpr[4] = (16119u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 21980u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(984), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A433F8;
      }
      goto L_08A433EC;
    }
L_08A433EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(984)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(984), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A433F8;
L_08A433F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(860)));
      if (branch_taken) {
          goto L_08A4341C;
      }
      goto L_08A43404;
    }
L_08A43404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A43420;
      }
      goto L_08A43414;
    }
L_08A43414:
    ctx.gpr[31] = (0x08A4341Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A4341Cu) goto L_08A4341C;
    return;
L_08A4341C:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    goto L_08A43420;
L_08A43420:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A43438u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x08A43438u) goto L_08A43438;
    return;
L_08A43438:
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(984)));
    ctx.gpr[31] = (0x08A4344Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 494u, 0x08A0606Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4344Cu) goto L_08A4344C;
    return;
L_08A4344C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A43460u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08A43460u) goto L_08A43460;
    return;
L_08A43460:
    ctx.gpr[31] = (0x08A43468u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08A43468u) goto L_08A43468;
    return;
L_08A43468:
    ctx.gpr[31] = (0x08A43470u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 819u, 0x08A2FB88u>(ctx, &aot_mem) && ctx.pc == 0x08A43470u) goto L_08A43470;
    return;
L_08A43470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43494;
      }
      goto L_08A43480;
    }
L_08A43480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43494;
      }
      goto L_08A4348C;
    }
L_08A4348C:
    ctx.gpr[31] = (0x08A43494u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A43494u) goto L_08A43494;
    return;
L_08A43494:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A434BC:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22624));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-6200), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    goto L_08A434D0;
L_08A434D0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A434D0;
      }
      goto L_08A434E4;
    }
L_08A434E4:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6198), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6197), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6192), 0u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (0u | 199u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A43520;
      }
      goto L_08A43514;
    }
L_08A43514:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(796)));
    goto L_08A43520;
L_08A43520:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43560;
      }
      goto L_08A43528;
    }
L_08A43528:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A43560;
      }
      goto L_08A43538;
    }
L_08A43538:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A43560;
      }
      goto L_08A43548;
    }
L_08A43548:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20948)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08A43560;
L_08A43560:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43568:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.gpr[18] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(22624));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10292)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (0u | 3u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10296)));
    ctx.gpr[19] = (4u << 16u);
    ctx.gpr[30] = (2230u << 16u);
    goto L_08A435D0;
L_08A435D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A436AC;
      }
      goto L_08A435DC;
    }
L_08A435DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A436AC;
      }
      goto L_08A435F8;
    }
L_08A435F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A436AC;
      }
      goto L_08A43638;
    }
L_08A43638:
    ctx.gpr[31] = (0x08A43640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A43640u) goto L_08A43640;
    return;
L_08A43640:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A43654u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08A43654u) goto L_08A43654;
    return;
L_08A43654:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (48460u << 16u);
      if (branch_taken) {
          goto L_08A43680;
      }
      goto L_08A43670;
    }
L_08A43670:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A43688;
      }
      goto L_08A43680;
    }
L_08A43680:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A43688;
L_08A43688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(900), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(880), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(892), ctx.gpr[4]);
    goto L_08A436AC;
L_08A436AC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A435D0;
      }
      goto L_08A436BC;
    }
L_08A436BC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A436F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[16]);
    ctx.gpr[4] = (16544u << 16u);
    ctx.gpr[16] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[22]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[7]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(22624));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A4374C;
      }
      goto L_08A4374C;
    }
L_08A4374C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6008));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[19] = (0u | 2u);
    goto L_08A43774;
L_08A43774:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4397C;
      }
      goto L_08A43780;
    }
L_08A43780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4397C;
      }
      goto L_08A43798;
    }
L_08A43798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A437B8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 565u, 0x088CB090u>(ctx, &aot_mem) && ctx.pc == 0x08A437B8u) goto L_08A437B8;
    return;
L_08A437B8:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4397C;
      }
      goto L_08A437C8;
    }
L_08A437C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_08A4383C;
    }
    goto L_08A4383C;
L_08A4383C:
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(980)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(980), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(980)));
    ctx.gpr[5] = (0u | 500u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(913)));
    if (ctx.gpr[6] == ctx.gpr[19]) {
    ctx.gpr[5] = (0u | 400u);
        goto L_08A4389C;
    }
    goto L_08A4389C;
L_08A4389C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A438ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A438ACu) goto L_08A438AC;
    return;
L_08A438AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(913)));
    if (ctx.gpr[4] != ctx.gpr[19]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08A438D4;
    }
    goto L_08A438BC;
L_08A438BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(980)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(401) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A438F4;
      }
      goto L_08A438D0;
    }
L_08A438D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A438D4;
L_08A438D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(913)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A43978;
      }
      goto L_08A438E0;
    }
L_08A438E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(980)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(501) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43978;
      }
      goto L_08A438F4;
    }
L_08A438F4:
    ctx.gpr[31] = (0x08A438FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A438FCu) goto L_08A438FC;
    return;
L_08A438FC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10292)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10296)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A43914u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08A43914u) goto L_08A43914;
    return;
L_08A43914:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (48460u << 16u);
      if (branch_taken) {
          goto L_08A43948;
      }
      goto L_08A43930;
    }
L_08A43930:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A43950;
      }
      goto L_08A43948;
    }
L_08A43948:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A43950;
L_08A43950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(900), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(880), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(892), ctx.gpr[4]);
    goto L_08A43978;
L_08A43978:
    ctx.gpr[22] = (0u | 1u);
    goto L_08A4397C;
L_08A4397C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A43774;
      }
      goto L_08A4398C;
    }
L_08A4398C:
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A439C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    ctx.gpr[19] = (0u | 0u);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A43BB0;
      }
      goto L_08A43A5C;
    }
L_08A43A5C:
    ctx.gpr[4] = (48860u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 10486u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (2277u << 16u);
    ctx.gpr[4] = (16318u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 47186u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (153u << 16u);
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (16320u << 16u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[22] = (0u | 3u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(22624));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-27009));
    ctx.gpr[30] = (1024u << 16u);
    ctx.gpr[21] = (2230u << 16u);
    goto L_08A43AB0;
L_08A43AB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43BA0;
      }
      goto L_08A43ABC;
    }
L_08A43ABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43BA0;
      }
      goto L_08A43AD0;
    }
L_08A43AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x08A43B10u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 565u, 0x088CB090u>(ctx, &aot_mem) && ctx.pc == 0x08A43B10u) goto L_08A43B10;
    return;
L_08A43B10:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A43BA0;
      }
      goto L_08A43B20;
    }
L_08A43B20:
    ctx.gpr[31] = (0x08A43B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A43B28u) goto L_08A43B28;
    return;
L_08A43B28:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10292)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10296)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A43B40u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08A43B40u) goto L_08A43B40;
    return;
L_08A43B40:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (48460u << 16u);
      if (branch_taken) {
          goto L_08A43B6C;
      }
      goto L_08A43B5C;
    }
L_08A43B5C:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A43B74;
      }
      goto L_08A43B6C;
    }
L_08A43B6C:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A43B74;
L_08A43B74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(900), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(880), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(892), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(915), static_cast<std::uint8_t>(0u));
    goto L_08A43BA0;
L_08A43BA0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A43AB0;
      }
      goto L_08A43BB0;
    }
L_08A43BB0:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43BF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2277u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(22624));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 0u);
    goto L_08A43C10;
L_08A43C10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43C24;
      }
      goto L_08A43C1C;
    }
L_08A43C1C:
    ctx.gpr[31] = (0x08A43C24u);
    // nop
    goto L_08A42F88;
L_08A43C24:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A43C10;
      }
      goto L_08A43C34;
    }
L_08A43C34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43C48:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A43C88;
      }
      goto L_08A43C54;
    }
L_08A43C54:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[6] = (48896u << 16u);
      if (branch_taken) {
          goto L_08A43D08;
      }
      goto L_08A43C5C;
    }
L_08A43C5C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (49024u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A43CEC;
      }
      goto L_08A43C6C;
    }
L_08A43C6C:
    ctx.gpr[5] = (49049u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A43D18;
      }
      goto L_08A43C88;
    }
L_08A43C88:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A43CC0;
      }
      goto L_08A43C90;
    }
L_08A43C90:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (16281u << 16u);
      if (branch_taken) {
          goto L_08A43D08;
      }
      goto L_08A43C98;
    }
L_08A43C98:
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (48896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A43D18;
      }
      goto L_08A43CC0;
    }
L_08A43CC0:
    ctx.gpr[5] = (49049u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (48896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A43D18;
      }
      goto L_08A43CEC;
    }
L_08A43CEC:
    ctx.gpr[5] = (16281u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A43D18;
      }
      goto L_08A43D08;
    }
L_08A43D08:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A43D18;
L_08A43D18:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43D20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-992));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-29215)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(944), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(948), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(952), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(956), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(960), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(964), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(968), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(972), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(976), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(980), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(984), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A43D90;
      }
      goto L_08A43D60;
    }
L_08A43D60:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[31] = (0x08A43D78u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 375u, 0x088622C8u>(ctx, &aot_mem) && ctx.pc == 0x08A43D78u) goto L_08A43D78;
    return;
L_08A43D78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(913)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A43DA4;
      }
      goto L_08A43D88;
    }
L_08A43D88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(880)));
      if (branch_taken) {
          goto L_08A43D98;
      }
      goto L_08A43D90;
    }
L_08A43D90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 218u, 0x08A4582Cu>(ctx, &aot_mem); return;
      }
      goto L_08A43D98;
    }
L_08A43D98:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 3u, 0x08A44024u>(ctx, &aot_mem); return;
      }
      goto L_08A43DA4;
    }
L_08A43DA4:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x08A43DB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08A43DB0u) goto L_08A43DB0;
    return;
L_08A43DB0:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A43DC8u);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08A43DC8u) goto L_08A43DC8;
    return;
L_08A43DC8:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(880)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[13];
      if (branch_taken) {
          goto L_08A43E14;
      }
      goto L_08A43DE0;
    }
L_08A43DE0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A43E14;
      }
      goto L_08A43E00;
    }
L_08A43E00:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    goto L_08A43E14;
L_08A43E14:
    ctx.gpr[31] = (0x08A43E1Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08A43E1Cu) goto L_08A43E1C;
    return;
L_08A43E1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(880)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(904), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A43E40;
      }
      goto L_08A43E30;
    }
L_08A43E30:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43EA4;
      }
      goto L_08A43E38;
    }
L_08A43E38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43F3C;
      }
      goto L_08A43E40;
    }
L_08A43E40:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A43EEC;
      }
      goto L_08A43E4C;
    }
L_08A43E4C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43F3C;
      }
      goto L_08A43E54;
    }
L_08A43E54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08A43E6Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2F78u>(ctx, &aot_mem) && ctx.pc == 0x08A43E6Cu) goto L_08A43E6C;
    return;
L_08A43E6C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(904)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(904)));
        goto L_08A43E88;
    }
    goto L_08A43E88;
L_08A43E88:
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1032)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(904), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A43F80;
      }
      goto L_08A43EA4;
    }
L_08A43EA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08A43EBCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2F78u>(ctx, &aot_mem) && ctx.pc == 0x08A43EBCu) goto L_08A43EBC;
    return;
L_08A43EBC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(904)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(904)));
        goto L_08A43ED8;
    }
    goto L_08A43ED8;
L_08A43ED8:
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(904), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A43F80;
      }
      goto L_08A43EEC;
    }
L_08A43EEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08A43F04u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2F78u>(ctx, &aot_mem) && ctx.pc == 0x08A43F04u) goto L_08A43F04;
    return;
L_08A43F04:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(904)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(904)));
        goto L_08A43F20;
    }
    goto L_08A43F20;
L_08A43F20:
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1032)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(904), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A43F80;
      }
      goto L_08A43F3C;
    }
L_08A43F3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08A43F54u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2F78u>(ctx, &aot_mem) && ctx.pc == 0x08A43F54u) goto L_08A43F54;
    return;
L_08A43F54:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(904)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(904)));
        goto L_08A43F70;
    }
    goto L_08A43F70;
L_08A43F70:
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(904), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A43F80;
L_08A43F80:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A43FD8;
      }
      goto L_08A43FA4;
    }
L_08A43FA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(880)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A43FD8;
      }
      goto L_08A43FB4;
    }
L_08A43FB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A43FD8;
L_08A43FD8:
    ctx.gpr[4] = (16025u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_08A43FF8;
    }
    goto L_08A43FF8;
L_08A43FF8:
    ctx.gpr[4] = (48793u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.pc = 0x08A44000u; return;
}

void recomp_unit_0143(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0143_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_143(Runtime &runtime) {
    runtime.register_generated_unit(143u, 0x08A40000u, 16384u, &recomp_unit_0143, &recomp_unit_0143_entry);
    runtime.register_function(0x08A40000u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40004u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4000Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40018u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40020u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40028u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40030u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4003Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40044u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4004Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40054u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40060u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40080u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4008Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40094u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4009Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A400A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4010Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40114u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4012Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A401BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A401E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40218u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40224u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40230u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40238u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40240u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40248u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4024Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4025Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4027Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40290u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A402ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A402B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A402C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40304u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40310u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4035Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40368u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40370u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4038Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A403A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A403A8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A403B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A403CCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A403E4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40414u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40424u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40438u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40440u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40458u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40464u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4047Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40484u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A404DCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40500u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4058Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A405A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A405C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A405C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A405D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A405E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A405ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A405F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40600u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4060Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40618u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40634u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40644u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4065Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40664u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40670u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A406A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A406B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A406CCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40768u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40770u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A407A8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A407B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A407F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A407F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40800u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40808u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40810u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40824u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4083Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40874u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4087Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4088Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40894u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4089Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A408A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A408B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A408B8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A408F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40950u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40958u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40984u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4098Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40998u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A409A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A409B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A409BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A409CCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A409D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A409ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A409FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A0Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A14u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A24u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A2Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A34u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A44u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A58u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A68u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A70u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A88u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A98u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40AA8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40AB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40AB8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40AC8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40AD0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40AE8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40AF8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B08u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B10u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B18u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B24u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B2Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B44u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B5Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B68u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B78u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B84u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B90u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B9Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40BA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40BA8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40BCCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40BE0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40BECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C00u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C24u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C34u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C3Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C44u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C48u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C50u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C5Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C64u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C7Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C8Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C94u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C9Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40CA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40CA8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40CC0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40CD8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D2Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D48u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D5Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D64u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D6Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D74u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D80u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D88u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D90u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D98u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DA4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DBCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DCCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DD4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DDCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DE8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DF0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DF8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E00u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E08u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E0Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E20u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E34u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E3Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E90u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40EACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40EC0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40EC8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40EE8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40FA4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40FC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41014u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41070u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41080u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41088u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A410C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A410C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A410D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A410D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A410E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A410E8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A410F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A410F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41154u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A411C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A411C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A411F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41240u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41258u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41268u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4127Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41284u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A412A8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A412C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A412D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A412E4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A412ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4131Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41364u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4137Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4138Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A413A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A413A8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A413CCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A413E4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A413F4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41408u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41414u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41470u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41478u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41480u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41494u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A414A8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A414B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A414C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A414D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41540u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4154Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41574u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A415B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A415B8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A415C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41664u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41668u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41674u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41720u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41724u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41730u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4177Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41784u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41790u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41798u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4185Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41864u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A418A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A418A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A418F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41924u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4192Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41930u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41954u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41968u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41978u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41988u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41998u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A419A8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A419B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A419B8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A419C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A419CCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A419E4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A419F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A00u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A14u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A24u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A48u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A5Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A70u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41AACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41AF0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B0Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B10u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B30u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B3Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B58u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B68u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B78u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B88u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B98u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41BB4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C30u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C68u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C94u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41CA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41CACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41CC8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41CF0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41CFCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41D10u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41D28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41D30u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41D3Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41D48u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41D54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41D58u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41D74u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41D9Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41DA8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41DBCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41DD4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41DDCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41DE4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41DECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41E04u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41E14u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41E28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41E4Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41E68u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41E7Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41EA4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41EACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41EB8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41EC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41EDCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41EE0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41EE8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41EF0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F14u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F1Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F2Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F44u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F58u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F6Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F84u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F9Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41FA8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41FB4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41FD0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41FD8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41FE0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41FF0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41FFCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42008u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4201Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42024u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4202Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42034u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4203Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4204Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42068u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42080u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42090u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4209Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A420A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A420ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A420C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A420E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A420F4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42110u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42124u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42130u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4214Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4215Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4217Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42188u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A421B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A421E8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A421F4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42200u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42208u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42268u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42278u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42294u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A422A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A422C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A422C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A422E4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A422F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A422FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4230Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42330u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42350u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4236Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42388u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A423A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A423F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42424u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42428u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42438u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42440u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42448u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42454u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42470u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4247Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42484u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A424A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A424BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A424CCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A424ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A424F4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A424F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42518u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A425E4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4260Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42644u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42650u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4265Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42668u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4266Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42674u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42680u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42690u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42728u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42744u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42758u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4276Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42778u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A427D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A427F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42820u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42834u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4283Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42850u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42854u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42874u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42888u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4289Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A428ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A428B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A428C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A428D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A428DCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42908u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42918u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4291Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42924u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4294Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42974u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42988u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A429C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42A30u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42A48u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42A58u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42A6Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42ACCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42AE8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B00u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B0Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B14u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B3Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B44u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B58u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B64u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B74u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42BA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42BC0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42BC8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42BD8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42BE4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42C28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42C5Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42C6Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42C7Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42CACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42CC0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42CCCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42CE8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42CF0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42CF8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42D00u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42D08u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42D10u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42D18u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42D1Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42D30u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42D50u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42D58u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42D78u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42DA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42DE4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42DF4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E00u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E08u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E10u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E20u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E2Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E34u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E38u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E5Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E8Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42EA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42EC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42EDCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42EF0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42EFCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42F08u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42F44u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42F5Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42F68u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42F88u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43004u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43078u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A430A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A430B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43144u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A431A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A431A8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43200u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43228u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43244u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43288u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43290u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A432D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43304u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43360u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43370u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43378u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4337Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43394u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A433A8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A433BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A433C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A433ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A433F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43404u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43414u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4341Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43420u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43438u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4344Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43460u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43468u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43470u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43480u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4348Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43494u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A434BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A434D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A434E4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43514u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43520u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43528u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43538u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43548u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43560u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43568u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A435D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A435DCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A435F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43638u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43640u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43654u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43670u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43680u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43688u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A436ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A436BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A436F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4374Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43774u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43780u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43798u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A437B8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A437C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4383Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4389Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A438ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A438BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A438D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A438D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A438E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A438F4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A438FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43914u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43930u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43948u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43950u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43978u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4397Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4398Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A439C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43A5Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43AB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43ABCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43AD0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B10u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B20u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B40u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B5Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B6Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B74u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43BA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43BB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43BF4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C10u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C1Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C24u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C34u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C48u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C5Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C6Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C88u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C90u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C98u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43CC0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43CECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D08u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D18u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D20u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D60u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D78u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D88u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D90u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D98u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43DA4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43DB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43DC8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43DE0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E00u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E14u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E1Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E30u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E38u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E40u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E4Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E6Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E88u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43EA4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43EBCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43ED8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43EECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F04u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F20u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F3Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F70u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F80u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43FA4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43FB4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43FD8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43FF8u, &recomp_unit_0143, "recomp_unit_0143");
}
} // namespace psprecomp
