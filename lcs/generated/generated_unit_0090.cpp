#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "lcs_gps.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0090[4082] = {
    1, 0, 2, 0, 3, 4, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 0, 8, 0, 0, 9, 0, 0, 10, 0, 11, 12, 0, 0, 13, 0,
    0, 0, 14, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 19, 20, 0, 0, 21, 0, 0, 0, 22, 0, 23, 0, 0, 0, 24, 0,
    0, 25, 0, 0, 26, 0, 27, 28, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 35, 36, 0, 0,
    37, 0, 0, 0, 38, 39, 0, 40, 0, 0, 0, 0, 0, 0, 41, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0,
    0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 54, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69,
    0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 77, 0, 78, 0,
    79, 0, 80, 0, 81, 0, 0, 82, 0, 83, 0, 0, 84, 0, 85, 0, 86, 0, 87, 0, 0, 88, 0, 89, 0, 0, 90, 0, 91, 0, 92, 0,
    0, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 0, 97, 0, 98, 0, 99, 0, 100, 0, 101, 0, 102, 0, 0, 0, 0, 103,
    0, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 0, 110, 0, 111, 0, 112, 0, 113, 0, 114, 0, 0, 115, 0, 116, 0, 117, 0,
    0, 0, 118, 0, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 0, 0, 0, 127, 0, 128,
    0, 129, 0, 130, 0, 131, 0, 132, 0, 0, 133, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 139, 0, 140,
    0, 141, 0, 142, 0, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 150, 0, 151, 0, 152,
    0, 0, 0, 153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 0,
    163, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 166, 0, 167, 168, 0, 0, 0, 0, 0, 0, 0, 169, 170, 0, 0, 0, 171, 0, 0, 172, 0,
    0, 0, 0, 0, 173, 0, 174, 0, 175, 0, 176, 0, 177, 178, 0, 179, 0, 0, 180, 0, 181, 0, 0, 182, 0, 183, 0, 184, 0, 0, 0, 185,
    0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    189, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 194, 0, 195, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0,
    199, 0, 0, 0, 200, 0, 201, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0,
    0, 0, 0, 210, 0, 211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 0, 218, 0, 0, 0, 219, 220, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 223, 0, 0, 0, 224, 0, 0, 225,
    0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0,
    0, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 238, 0, 239, 240, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0,
    0, 250, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253,
    0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0,
    0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 272, 0, 273, 274, 0, 0, 0,
    275, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 278, 0, 279, 0, 280, 0, 281, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0,
    285, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0,
    0, 0, 291, 0, 0, 292, 0, 0, 0, 293, 0, 294, 0, 0, 295, 296, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299,
    0, 300, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0,
    0, 0, 308, 0, 309, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 315, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327,
    0, 0, 328, 0, 0, 329, 330, 331, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 339, 0, 0,
    0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0,
    0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0,
    0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0,
    0, 0, 0, 356, 0, 0, 0, 357, 0, 358, 0, 359, 0, 0, 0, 360, 0, 361, 362, 0, 363, 0, 364, 0, 0, 365, 0, 366, 0, 0, 0, 367,
    0, 0, 0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0,
    0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384,
    0, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0,
    391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 395, 0, 0, 396, 0, 0,
    0, 0, 0, 0, 0, 397, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0,
    0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0,
    0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 423, 424, 0, 0, 0, 425, 0, 0, 426, 0, 0,
    0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0, 0, 0,
    433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 438, 0, 0, 439, 0, 0, 0, 440, 0, 0,
    441, 0, 0, 0, 442, 0, 0, 443, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 452, 0,
    0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0,
    0, 456, 0, 0, 457, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0,
    0, 0, 464, 0, 465, 0, 0, 0, 466, 0, 467, 0, 0, 0, 468, 469, 0, 470, 0, 471, 0, 0, 0, 0, 472, 473, 0, 0, 0, 0, 0, 0,
    474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 0, 0,
    479, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 484, 0, 0, 0, 0, 0, 0,
    0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 490, 0, 0, 491, 0, 0, 492, 0, 0, 493, 0, 0, 494, 0, 0, 495, 0, 0, 496, 0, 0, 497, 0, 0, 498, 0, 0,
    499, 0, 0, 500, 0, 0, 501, 0, 0, 502, 0, 0, 503, 0, 0, 504, 0, 0, 505, 0, 0, 506, 0, 0, 507, 0, 0, 508, 0, 0, 509, 0,
    0, 510, 0, 0, 511, 0, 0, 512, 0, 0, 513, 0, 0, 514, 0, 0, 515, 0, 0, 516, 0, 0, 517, 0, 0, 518, 0, 0, 519, 0, 0, 520,
    0, 0, 521, 0, 0, 522, 0, 0, 523, 0, 0, 524, 0, 0, 525, 0, 0, 526, 0, 0, 527, 0, 0, 528, 0, 0, 529, 0, 0, 530, 0, 0,
    531, 0, 0, 532, 0, 0, 533, 0, 0, 534, 0, 0, 535, 0, 0, 536, 0, 0, 537, 0, 0, 538, 0, 0, 539, 0, 0, 540, 0, 0, 541, 0,
    0, 542, 0, 0, 543, 0, 0, 544, 0, 0, 545, 0, 0, 546, 0, 0, 547, 0, 0, 548, 0, 0, 549, 0, 0, 550, 0, 0, 551, 0, 0, 552,
    0, 0, 553, 0, 0, 554, 0, 0, 555, 0, 0, 556, 0, 0, 557, 0, 0, 558, 0, 0, 559, 0, 0, 560, 0, 0, 561, 0, 0, 562, 0, 0,
    563, 0, 0, 564, 0, 0, 565, 0, 0, 566, 0, 0, 567, 0, 0, 568, 0, 0, 569, 0, 0, 570, 0, 0, 571, 0, 0, 572, 0, 0, 573, 0,
    0, 574, 0, 0, 575, 0, 0, 576, 0, 0, 577, 0, 0, 578, 0, 0, 579, 0, 0, 580, 0, 0, 581, 0, 0, 582, 0, 0, 583, 0, 0, 584,
    0, 0, 585, 0, 0, 586, 0, 0, 587, 0, 0, 588, 0, 0, 589, 0, 0, 590, 0, 0, 591, 0, 0, 592, 0, 0, 593, 0, 0, 594, 0, 0,
    595, 0, 0, 596, 0, 0, 597, 0, 0, 598, 0, 0, 599, 0, 0, 600, 0, 0, 601, 0, 0, 602, 0, 0, 603, 0, 0, 604, 0, 0, 605, 0,
    0, 606, 0, 0, 607, 0, 0, 608, 0, 0, 609, 0, 0, 610, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 0, 613, 0, 614, 0, 615, 0, 0,
    0, 0, 0, 616, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 619, 0, 0, 620, 0, 621, 0, 622, 0, 623, 624, 0,
    625, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 629, 0, 0, 0, 0, 630, 0,
    0, 0, 0, 0, 0, 631, 0, 632, 0, 0, 633, 0, 634, 0, 0, 0, 0, 635, 0, 0, 0, 0, 636, 0, 0, 637, 0, 0, 0, 0, 0, 638,
    0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0,
    644, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 649, 0, 0, 0,
    0, 0, 0, 650, 0, 0, 0, 651, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 659, 0, 660, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 664, 0, 0,
    0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0, 670, 0, 671, 0, 0, 0, 0, 672, 0, 0,
    0, 0, 673, 0, 0, 674, 0, 0, 0, 0, 675, 0, 676, 0, 0, 0, 0, 677, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0,
    0, 680, 0, 681, 0, 0, 682, 0, 0, 0, 0, 683, 0, 0, 684, 0, 0, 0, 0, 0, 685, 0, 0, 686, 687, 0, 0, 0, 688, 0, 0, 0,
    0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 691, 0, 0, 692, 0, 0, 0, 0, 0, 693, 0, 0, 0, 694, 0, 695, 0,
    0, 0, 696, 0, 0, 697, 0, 0, 0, 698, 0, 699, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0,
    0, 702, 0, 703, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 706, 0, 0, 707, 0, 0, 708, 709, 0, 0, 0, 0,
    0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 712, 0, 713, 0, 0, 714, 0, 0, 0, 715, 0, 0, 0, 716, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0,
    0, 0, 723, 0, 724, 0, 0, 0, 725, 0, 0, 726, 0, 0, 0, 0, 727, 728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0,
    0, 0, 730, 0, 0, 0, 731, 0, 0, 0, 732, 0, 733, 0, 734, 0, 735, 0, 736, 0, 737, 0, 0, 0, 0, 0, 0, 738, 0, 739, 0, 0,
    740, 0, 741, 0, 0, 0, 742, 0, 0, 743, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 746, 0, 0, 0, 0, 747, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 752, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0,
    0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0,
    0, 0, 757, 0, 0, 0, 758, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 761,
    0, 762, 0, 763, 0, 764, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0, 766, 0, 0, 767, 0, 768, 769, 770, 0, 0, 0, 0, 771, 0,
    0, 0, 0, 772, 0, 0, 0, 0, 773, 0, 0, 774, 0, 775, 776, 777, 0, 0, 0, 0, 778, 0, 779, 0, 780, 0, 0, 781, 0, 0, 0, 0,
    0, 0, 0, 782, 0, 0, 783, 0, 0, 784, 0, 785, 0, 786, 0, 0, 0, 787, 0, 0, 788, 0, 789, 790, 0, 0, 791, 0, 0, 792, 0, 793,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 794, 0, 0, 795, 0, 796, 0, 0, 797, 0, 0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 799, 0,
    800, 0, 801, 0, 802, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 0, 804, 0, 0, 805, 0, 806, 0, 0, 807, 0, 0, 0, 0, 808, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 811, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 812, 0, 813, 0, 0, 814, 0, 815, 0, 816, 0, 0, 0, 0, 0, 817, 818,
};
void recomp_unit_0090_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0896C000u;
        entry_id = (entry_delta < 16328u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0090[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0896C000;
    case 2u: goto L_0896C008;
    case 3u: goto L_0896C010;
    case 4u: goto L_0896C014;
    case 5u: goto L_0896C020;
    case 6u: goto L_0896C030;
    case 7u: goto L_0896C038;
    case 8u: goto L_0896C048;
    case 9u: goto L_0896C054;
    case 10u: goto L_0896C060;
    case 11u: goto L_0896C068;
    case 12u: goto L_0896C06C;
    case 13u: goto L_0896C078;
    case 14u: goto L_0896C088;
    case 15u: goto L_0896C090;
    case 16u: goto L_0896C0A0;
    case 17u: goto L_0896C0AC;
    case 18u: goto L_0896C0B8;
    case 19u: goto L_0896C0C0;
    case 20u: goto L_0896C0C4;
    case 21u: goto L_0896C0D0;
    case 22u: goto L_0896C0E0;
    case 23u: goto L_0896C0E8;
    case 24u: goto L_0896C0F8;
    case 25u: goto L_0896C104;
    case 26u: goto L_0896C110;
    case 27u: goto L_0896C118;
    case 28u: goto L_0896C11C;
    case 29u: goto L_0896C128;
    case 30u: goto L_0896C138;
    case 31u: goto L_0896C140;
    case 32u: goto L_0896C150;
    case 33u: goto L_0896C15C;
    case 34u: goto L_0896C168;
    case 35u: goto L_0896C170;
    case 36u: goto L_0896C174;
    case 37u: goto L_0896C180;
    case 38u: goto L_0896C190;
    case 39u: goto L_0896C194;
    case 40u: goto L_0896C19C;
    case 41u: goto L_0896C1B8;
    case 42u: goto L_0896C1BC;
    case 43u: goto L_0896C1F4;
    case 44u: goto L_0896C248;
    case 45u: goto L_0896C254;
    case 46u: goto L_0896C260;
    case 47u: goto L_0896C26C;
    case 48u: goto L_0896C278;
    case 49u: goto L_0896C284;
    case 50u: goto L_0896C290;
    case 51u: goto L_0896C29C;
    case 52u: goto L_0896C2B4;
    case 53u: goto L_0896C2BC;
    case 54u: goto L_0896C308;
    case 55u: goto L_0896C310;
    case 56u: goto L_0896C318;
    case 57u: goto L_0896C334;
    case 58u: goto L_0896C358;
    case 59u: goto L_0896C370;
    case 60u: goto L_0896C380;
    case 61u: goto L_0896C3A4;
    case 62u: goto L_0896C3B4;
    case 63u: goto L_0896C3D4;
    case 64u: goto L_0896C418;
    case 65u: goto L_0896C440;
    case 66u: goto L_0896C460;
    case 67u: goto L_0896C494;
    case 68u: goto L_0896C4B0;
    case 69u: goto L_0896C4FC;
    case 70u: goto L_0896C504;
    case 71u: goto L_0896C510;
    case 72u: goto L_0896C530;
    case 73u: goto L_0896C538;
    case 74u: goto L_0896C544;
    case 75u: goto L_0896C550;
    case 76u: goto L_0896C564;
    case 77u: goto L_0896C570;
    case 78u: goto L_0896C578;
    case 79u: goto L_0896C580;
    case 80u: goto L_0896C588;
    case 81u: goto L_0896C590;
    case 82u: goto L_0896C59C;
    case 83u: goto L_0896C5A4;
    case 84u: goto L_0896C5B0;
    case 85u: goto L_0896C5B8;
    case 86u: goto L_0896C5C0;
    case 87u: goto L_0896C5C8;
    case 88u: goto L_0896C5D4;
    case 89u: goto L_0896C5DC;
    case 90u: goto L_0896C5E8;
    case 91u: goto L_0896C5F0;
    case 92u: goto L_0896C5F8;
    case 93u: goto L_0896C608;
    case 94u: goto L_0896C618;
    case 95u: goto L_0896C624;
    case 96u: goto L_0896C630;
    case 97u: goto L_0896C640;
    case 98u: goto L_0896C648;
    case 99u: goto L_0896C650;
    case 100u: goto L_0896C658;
    case 101u: goto L_0896C660;
    case 102u: goto L_0896C668;
    case 103u: goto L_0896C67C;
    case 104u: goto L_0896C688;
    case 105u: goto L_0896C690;
    case 106u: goto L_0896C698;
    case 107u: goto L_0896C6A0;
    case 108u: goto L_0896C6A8;
    case 109u: goto L_0896C6B0;
    case 110u: goto L_0896C6BC;
    case 111u: goto L_0896C6C4;
    case 112u: goto L_0896C6CC;
    case 113u: goto L_0896C6D4;
    case 114u: goto L_0896C6DC;
    case 115u: goto L_0896C6E8;
    case 116u: goto L_0896C6F0;
    case 117u: goto L_0896C6F8;
    case 118u: goto L_0896C708;
    case 119u: goto L_0896C718;
    case 120u: goto L_0896C724;
    case 121u: goto L_0896C730;
    case 122u: goto L_0896C744;
    case 123u: goto L_0896C74C;
    case 124u: goto L_0896C754;
    case 125u: goto L_0896C75C;
    case 126u: goto L_0896C764;
    case 127u: goto L_0896C774;
    case 128u: goto L_0896C77C;
    case 129u: goto L_0896C784;
    case 130u: goto L_0896C78C;
    case 131u: goto L_0896C794;
    case 132u: goto L_0896C79C;
    case 133u: goto L_0896C7A8;
    case 134u: goto L_0896C7B0;
    case 135u: goto L_0896C7BC;
    case 136u: goto L_0896C7C8;
    case 137u: goto L_0896C7E4;
    case 138u: goto L_0896C7EC;
    case 139u: goto L_0896C7F4;
    case 140u: goto L_0896C7FC;
    case 141u: goto L_0896C804;
    case 142u: goto L_0896C80C;
    case 143u: goto L_0896C81C;
    case 144u: goto L_0896C828;
    case 145u: goto L_0896C834;
    case 146u: goto L_0896C840;
    case 147u: goto L_0896C854;
    case 148u: goto L_0896C85C;
    case 149u: goto L_0896C864;
    case 150u: goto L_0896C86C;
    case 151u: goto L_0896C874;
    case 152u: goto L_0896C87C;
    case 153u: goto L_0896C88C;
    case 154u: goto L_0896C894;
    case 155u: goto L_0896C89C;
    case 156u: goto L_0896C8A4;
    case 157u: goto L_0896C8AC;
    case 158u: goto L_0896C8BC;
    case 159u: goto L_0896C8CC;
    case 160u: goto L_0896C8D8;
    case 161u: goto L_0896C8E4;
    case 162u: goto L_0896C8F4;
    case 163u: goto L_0896C900;
    case 164u: goto L_0896C918;
    case 165u: goto L_0896C920;
    case 166u: goto L_0896C92C;
    case 167u: goto L_0896C934;
    case 168u: goto L_0896C938;
    case 169u: goto L_0896C958;
    case 170u: goto L_0896C95C;
    case 171u: goto L_0896C96C;
    case 172u: goto L_0896C978;
    case 173u: goto L_0896C990;
    case 174u: goto L_0896C998;
    case 175u: goto L_0896C9A0;
    case 176u: goto L_0896C9A8;
    case 177u: goto L_0896C9B0;
    case 178u: goto L_0896C9B4;
    case 179u: goto L_0896C9BC;
    case 180u: goto L_0896C9C8;
    case 181u: goto L_0896C9D0;
    case 182u: goto L_0896C9DC;
    case 183u: goto L_0896C9E4;
    case 184u: goto L_0896C9EC;
    case 185u: goto L_0896C9FC;
    case 186u: goto L_0896CA08;
    case 187u: goto L_0896CA48;
    case 188u: goto L_0896CA54;
    case 189u: goto L_0896CA80;
    case 190u: goto L_0896CA88;
    case 191u: goto L_0896CA90;
    case 192u: goto L_0896CAAC;
    case 193u: goto L_0896CAB4;
    case 194u: goto L_0896CAC0;
    case 195u: goto L_0896CAC8;
    case 196u: goto L_0896CAD0;
    case 197u: goto L_0896CADC;
    case 198u: goto L_0896CAE8;
    case 199u: goto L_0896CB00;
    case 200u: goto L_0896CB10;
    case 201u: goto L_0896CB18;
    case 202u: goto L_0896CB20;
    case 203u: goto L_0896CB30;
    case 204u: goto L_0896CB70;
    case 205u: goto L_0896CBC8;
    case 206u: goto L_0896CBD0;
    case 207u: goto L_0896CCD0;
    case 208u: goto L_0896CCEC;
    case 209u: goto L_0896CCF8;
    case 210u: goto L_0896CD0C;
    case 211u: goto L_0896CD14;
    case 212u: goto L_0896CD1C;
    case 213u: goto L_0896CD24;
    case 214u: goto L_0896CD2C;
    case 215u: goto L_0896CD34;
    case 216u: goto L_0896CD3C;
    case 217u: goto L_0896CD44;
    case 218u: goto L_0896CD50;
    case 219u: goto L_0896CD60;
    case 220u: goto L_0896CD64;
    case 221u: goto L_0896CDD0;
    case 222u: goto L_0896CDD8;
    case 223u: goto L_0896CDE0;
    case 224u: goto L_0896CDF0;
    case 225u: goto L_0896CDFC;
    case 226u: goto L_0896CE08;
    case 227u: goto L_0896CE18;
    case 228u: goto L_0896CE80;
    case 229u: goto L_0896CE9C;
    case 230u: goto L_0896CEB0;
    case 231u: goto L_0896CEF0;
    case 232u: goto L_0896CEF8;
    case 233u: goto L_0896CF0C;
    case 234u: goto L_0896CF18;
    case 235u: goto L_0896CF24;
    case 236u: goto L_0896CF30;
    case 237u: goto L_0896CF3C;
    case 238u: goto L_0896CF44;
    case 239u: goto L_0896CF4C;
    case 240u: goto L_0896CF50;
    case 241u: goto L_0896CF5C;
    case 242u: goto L_0896CF6C;
    case 243u: goto L_0896CF9C;
    case 244u: goto L_0896CFB8;
    case 245u: goto L_0896CFD0;
    case 246u: goto L_0896CFD8;
    case 247u: goto L_0896D01C;
    case 248u: goto L_0896D06C;
    case 249u: goto L_0896D074;
    case 250u: goto L_0896D084;
    case 251u: goto L_0896D090;
    case 252u: goto L_0896D0A0;
    case 253u: goto L_0896D0FC;
    case 254u: goto L_0896D118;
    case 255u: goto L_0896D128;
    case 256u: goto L_0896D140;
    case 257u: goto L_0896D158;
    case 258u: goto L_0896D198;
    case 259u: goto L_0896D1A0;
    case 260u: goto L_0896D1B4;
    case 261u: goto L_0896D1CC;
    case 262u: goto L_0896D1D4;
    case 263u: goto L_0896D1EC;
    case 264u: goto L_0896D1F4;
    case 265u: goto L_0896D204;
    case 266u: goto L_0896D210;
    case 267u: goto L_0896D21C;
    case 268u: goto L_0896D22C;
    case 269u: goto L_0896D238;
    case 270u: goto L_0896D250;
    case 271u: goto L_0896D258;
    case 272u: goto L_0896D264;
    case 273u: goto L_0896D26C;
    case 274u: goto L_0896D270;
    case 275u: goto L_0896D280;
    case 276u: goto L_0896D28C;
    case 277u: goto L_0896D2A4;
    case 278u: goto L_0896D2AC;
    case 279u: goto L_0896D2B4;
    case 280u: goto L_0896D2BC;
    case 281u: goto L_0896D2C4;
    case 282u: goto L_0896D2C8;
    case 283u: goto L_0896D2D8;
    case 284u: goto L_0896D2F4;
    case 285u: goto L_0896D300;
    case 286u: goto L_0896D310;
    case 287u: goto L_0896D320;
    case 288u: goto L_0896D338;
    case 289u: goto L_0896D368;
    case 290u: goto L_0896D378;
    case 291u: goto L_0896D388;
    case 292u: goto L_0896D394;
    case 293u: goto L_0896D3A4;
    case 294u: goto L_0896D3AC;
    case 295u: goto L_0896D3B8;
    case 296u: goto L_0896D3BC;
    case 297u: goto L_0896D3C8;
    case 298u: goto L_0896D3D0;
    case 299u: goto L_0896D3FC;
    case 300u: goto L_0896D404;
    case 301u: goto L_0896D40C;
    case 302u: goto L_0896D41C;
    case 303u: goto L_0896D42C;
    case 304u: goto L_0896D448;
    case 305u: goto L_0896D454;
    case 306u: goto L_0896D45C;
    case 307u: goto L_0896D46C;
    case 308u: goto L_0896D488;
    case 309u: goto L_0896D490;
    case 310u: goto L_0896D49C;
    case 311u: goto L_0896D4AC;
    case 312u: goto L_0896D4BC;
    case 313u: goto L_0896D4D0;
    case 314u: goto L_0896D4D8;
    case 315u: goto L_0896D508;
    case 316u: goto L_0896D510;
    case 317u: goto L_0896D51C;
    case 318u: goto L_0896D534;
    case 319u: goto L_0896D544;
    case 320u: goto L_0896D54C;
    case 321u: goto L_0896D564;
    case 322u: goto L_0896D574;
    case 323u: goto L_0896D5DC;
    case 324u: goto L_0896D5EC;
    case 325u: goto L_0896D650;
    case 326u: goto L_0896D670;
    case 327u: goto L_0896D67C;
    case 328u: goto L_0896D688;
    case 329u: goto L_0896D694;
    case 330u: goto L_0896D698;
    case 331u: goto L_0896D69C;
    case 332u: goto L_0896D6AC;
    case 333u: goto L_0896D6B4;
    case 334u: goto L_0896D6DC;
    case 335u: goto L_0896D6E4;
    case 336u: goto L_0896D734;
    case 337u: goto L_0896D758;
    case 338u: goto L_0896D764;
    case 339u: goto L_0896D774;
    case 340u: goto L_0896D784;
    case 341u: goto L_0896D78C;
    case 342u: goto L_0896D7C4;
    case 343u: goto L_0896D7D4;
    case 344u: goto L_0896D7E0;
    case 345u: goto L_0896D7F0;
    case 346u: goto L_0896D810;
    case 347u: goto L_0896D860;
    case 348u: goto L_0896D868;
    case 349u: goto L_0896D88C;
    case 350u: goto L_0896D93C;
    case 351u: goto L_0896D9A0;
    case 352u: goto L_0896D9AC;
    case 353u: goto L_0896D9D4;
    case 354u: goto L_0896D9E0;
    case 355u: goto L_0896D9F8;
    case 356u: goto L_0896DA0C;
    case 357u: goto L_0896DA1C;
    case 358u: goto L_0896DA24;
    case 359u: goto L_0896DA2C;
    case 360u: goto L_0896DA3C;
    case 361u: goto L_0896DA44;
    case 362u: goto L_0896DA48;
    case 363u: goto L_0896DA50;
    case 364u: goto L_0896DA58;
    case 365u: goto L_0896DA64;
    case 366u: goto L_0896DA6C;
    case 367u: goto L_0896DA7C;
    case 368u: goto L_0896DA98;
    case 369u: goto L_0896DAA4;
    case 370u: goto L_0896DAC0;
    case 371u: goto L_0896DACC;
    case 372u: goto L_0896DAE8;
    case 373u: goto L_0896DAF4;
    case 374u: goto L_0896DB10;
    case 375u: goto L_0896DB1C;
    case 376u: goto L_0896DB38;
    case 377u: goto L_0896DB44;
    case 378u: goto L_0896DB70;
    case 379u: goto L_0896DB98;
    case 380u: goto L_0896DBA8;
    case 381u: goto L_0896DBB4;
    case 382u: goto L_0896DBD4;
    case 383u: goto L_0896DBE0;
    case 384u: goto L_0896DBFC;
    case 385u: goto L_0896DC08;
    case 386u: goto L_0896DC24;
    case 387u: goto L_0896DC30;
    case 388u: goto L_0896DC4C;
    case 389u: goto L_0896DC58;
    case 390u: goto L_0896DC74;
    case 391u: goto L_0896DC80;
    case 392u: goto L_0896DCA8;
    case 393u: goto L_0896DCD0;
    case 394u: goto L_0896DCD8;
    case 395u: goto L_0896DCE8;
    case 396u: goto L_0896DCF4;
    case 397u: goto L_0896DD14;
    case 398u: goto L_0896DD20;
    case 399u: goto L_0896DD3C;
    case 400u: goto L_0896DD48;
    case 401u: goto L_0896DD64;
    case 402u: goto L_0896DD70;
    case 403u: goto L_0896DD8C;
    case 404u: goto L_0896DD98;
    case 405u: goto L_0896DDB4;
    case 406u: goto L_0896DDC0;
    case 407u: goto L_0896DDEC;
    case 408u: goto L_0896DE14;
    case 409u: goto L_0896DE24;
    case 410u: goto L_0896DE30;
    case 411u: goto L_0896DE50;
    case 412u: goto L_0896DE5C;
    case 413u: goto L_0896DE78;
    case 414u: goto L_0896DE84;
    case 415u: goto L_0896DEA0;
    case 416u: goto L_0896DEAC;
    case 417u: goto L_0896DEC8;
    case 418u: goto L_0896DED4;
    case 419u: goto L_0896DEF0;
    case 420u: goto L_0896DEFC;
    case 421u: goto L_0896DF24;
    case 422u: goto L_0896DF4C;
    case 423u: goto L_0896DF54;
    case 424u: goto L_0896DF58;
    case 425u: goto L_0896DF68;
    case 426u: goto L_0896DF74;
    case 427u: goto L_0896DF90;
    case 428u: goto L_0896DF9C;
    case 429u: goto L_0896DFB8;
    case 430u: goto L_0896DFC4;
    case 431u: goto L_0896DFE0;
    case 432u: goto L_0896DFEC;
    case 433u: goto L_0896E000;
    case 434u: goto L_0896E01C;
    case 435u: goto L_0896E02C;
    case 436u: goto L_0896E03C;
    case 437u: goto L_0896E048;
    case 438u: goto L_0896E058;
    case 439u: goto L_0896E064;
    case 440u: goto L_0896E074;
    case 441u: goto L_0896E080;
    case 442u: goto L_0896E090;
    case 443u: goto L_0896E09C;
    case 444u: goto L_0896E0A8;
    case 445u: goto L_0896E0C4;
    case 446u: goto L_0896E0D4;
    case 447u: goto L_0896E0DC;
    case 448u: goto L_0896E118;
    case 449u: goto L_0896E2CC;
    case 450u: goto L_0896E358;
    case 451u: goto L_0896E360;
    case 452u: goto L_0896E378;
    case 453u: goto L_0896E39C;
    case 454u: goto L_0896E3B8;
    case 455u: goto L_0896E3E4;
    case 456u: goto L_0896E404;
    case 457u: goto L_0896E410;
    case 458u: goto L_0896E41C;
    case 459u: goto L_0896E43C;
    case 460u: goto L_0896E448;
    case 461u: goto L_0896E454;
    case 462u: goto L_0896E464;
    case 463u: goto L_0896E474;
    case 464u: goto L_0896E488;
    case 465u: goto L_0896E490;
    case 466u: goto L_0896E4A0;
    case 467u: goto L_0896E4A8;
    case 468u: goto L_0896E4B8;
    case 469u: goto L_0896E4BC;
    case 470u: goto L_0896E4C4;
    case 471u: goto L_0896E4CC;
    case 472u: goto L_0896E4E0;
    case 473u: goto L_0896E4E4;
    case 474u: goto L_0896E500;
    case 475u: goto L_0896E538;
    case 476u: goto L_0896E544;
    case 477u: goto L_0896E558;
    case 478u: goto L_0896E568;
    case 479u: goto L_0896E580;
    case 480u: goto L_0896E588;
    case 481u: goto L_0896E5B8;
    case 482u: goto L_0896E5C4;
    case 483u: goto L_0896E5D8;
    case 484u: goto L_0896E5E4;
    case 485u: goto L_0896E604;
    case 486u: goto L_0896E62C;
    case 487u: goto L_0896E638;
    case 488u: goto L_0896E664;
    case 489u: goto L_0896E69C;
    case 490u: goto L_0896E794;
    case 491u: goto L_0896E7A0;
    case 492u: goto L_0896E7AC;
    case 493u: goto L_0896E7B8;
    case 494u: goto L_0896E7C4;
    case 495u: goto L_0896E7D0;
    case 496u: goto L_0896E7DC;
    case 497u: goto L_0896E7E8;
    case 498u: goto L_0896E7F4;
    case 499u: goto L_0896E800;
    case 500u: goto L_0896E80C;
    case 501u: goto L_0896E818;
    case 502u: goto L_0896E824;
    case 503u: goto L_0896E830;
    case 504u: goto L_0896E83C;
    case 505u: goto L_0896E848;
    case 506u: goto L_0896E854;
    case 507u: goto L_0896E860;
    case 508u: goto L_0896E86C;
    case 509u: goto L_0896E878;
    case 510u: goto L_0896E884;
    case 511u: goto L_0896E890;
    case 512u: goto L_0896E89C;
    case 513u: goto L_0896E8A8;
    case 514u: goto L_0896E8B4;
    case 515u: goto L_0896E8C0;
    case 516u: goto L_0896E8CC;
    case 517u: goto L_0896E8D8;
    case 518u: goto L_0896E8E4;
    case 519u: goto L_0896E8F0;
    case 520u: goto L_0896E8FC;
    case 521u: goto L_0896E908;
    case 522u: goto L_0896E914;
    case 523u: goto L_0896E920;
    case 524u: goto L_0896E92C;
    case 525u: goto L_0896E938;
    case 526u: goto L_0896E944;
    case 527u: goto L_0896E950;
    case 528u: goto L_0896E95C;
    case 529u: goto L_0896E968;
    case 530u: goto L_0896E974;
    case 531u: goto L_0896E980;
    case 532u: goto L_0896E98C;
    case 533u: goto L_0896E998;
    case 534u: goto L_0896E9A4;
    case 535u: goto L_0896E9B0;
    case 536u: goto L_0896E9BC;
    case 537u: goto L_0896E9C8;
    case 538u: goto L_0896E9D4;
    case 539u: goto L_0896E9E0;
    case 540u: goto L_0896E9EC;
    case 541u: goto L_0896E9F8;
    case 542u: goto L_0896EA04;
    case 543u: goto L_0896EA10;
    case 544u: goto L_0896EA1C;
    case 545u: goto L_0896EA28;
    case 546u: goto L_0896EA34;
    case 547u: goto L_0896EA40;
    case 548u: goto L_0896EA4C;
    case 549u: goto L_0896EA58;
    case 550u: goto L_0896EA64;
    case 551u: goto L_0896EA70;
    case 552u: goto L_0896EA7C;
    case 553u: goto L_0896EA88;
    case 554u: goto L_0896EA94;
    case 555u: goto L_0896EAA0;
    case 556u: goto L_0896EAAC;
    case 557u: goto L_0896EAB8;
    case 558u: goto L_0896EAC4;
    case 559u: goto L_0896EAD0;
    case 560u: goto L_0896EADC;
    case 561u: goto L_0896EAE8;
    case 562u: goto L_0896EAF4;
    case 563u: goto L_0896EB00;
    case 564u: goto L_0896EB0C;
    case 565u: goto L_0896EB18;
    case 566u: goto L_0896EB24;
    case 567u: goto L_0896EB30;
    case 568u: goto L_0896EB3C;
    case 569u: goto L_0896EB48;
    case 570u: goto L_0896EB54;
    case 571u: goto L_0896EB60;
    case 572u: goto L_0896EB6C;
    case 573u: goto L_0896EB78;
    case 574u: goto L_0896EB84;
    case 575u: goto L_0896EB90;
    case 576u: goto L_0896EB9C;
    case 577u: goto L_0896EBA8;
    case 578u: goto L_0896EBB4;
    case 579u: goto L_0896EBC0;
    case 580u: goto L_0896EBCC;
    case 581u: goto L_0896EBD8;
    case 582u: goto L_0896EBE4;
    case 583u: goto L_0896EBF0;
    case 584u: goto L_0896EBFC;
    case 585u: goto L_0896EC08;
    case 586u: goto L_0896EC14;
    case 587u: goto L_0896EC20;
    case 588u: goto L_0896EC2C;
    case 589u: goto L_0896EC38;
    case 590u: goto L_0896EC44;
    case 591u: goto L_0896EC50;
    case 592u: goto L_0896EC5C;
    case 593u: goto L_0896EC68;
    case 594u: goto L_0896EC74;
    case 595u: goto L_0896EC80;
    case 596u: goto L_0896EC8C;
    case 597u: goto L_0896EC98;
    case 598u: goto L_0896ECA4;
    case 599u: goto L_0896ECB0;
    case 600u: goto L_0896ECBC;
    case 601u: goto L_0896ECC8;
    case 602u: goto L_0896ECD4;
    case 603u: goto L_0896ECE0;
    case 604u: goto L_0896ECEC;
    case 605u: goto L_0896ECF8;
    case 606u: goto L_0896ED04;
    case 607u: goto L_0896ED10;
    case 608u: goto L_0896ED1C;
    case 609u: goto L_0896ED28;
    case 610u: goto L_0896ED34;
    case 611u: goto L_0896ED40;
    case 612u: goto L_0896ED54;
    case 613u: goto L_0896ED64;
    case 614u: goto L_0896ED6C;
    case 615u: goto L_0896ED74;
    case 616u: goto L_0896ED8C;
    case 617u: goto L_0896ED98;
    case 618u: goto L_0896EDC4;
    case 619u: goto L_0896EDD0;
    case 620u: goto L_0896EDDC;
    case 621u: goto L_0896EDE4;
    case 622u: goto L_0896EDEC;
    case 623u: goto L_0896EDF4;
    case 624u: goto L_0896EDF8;
    case 625u: goto L_0896EE00;
    case 626u: goto L_0896EE08;
    case 627u: goto L_0896EE34;
    case 628u: goto L_0896EE50;
    case 629u: goto L_0896EE64;
    case 630u: goto L_0896EE78;
    case 631u: goto L_0896EE94;
    case 632u: goto L_0896EE9C;
    case 633u: goto L_0896EEA8;
    case 634u: goto L_0896EEB0;
    case 635u: goto L_0896EEC4;
    case 636u: goto L_0896EED8;
    case 637u: goto L_0896EEE4;
    case 638u: goto L_0896EEFC;
    case 639u: goto L_0896EF08;
    case 640u: goto L_0896EF2C;
    case 641u: goto L_0896EFA4;
    case 642u: goto L_0896EFD0;
    case 643u: goto L_0896EFF8;
    case 644u: goto L_0896F000;
    case 645u: goto L_0896F010;
    case 646u: goto L_0896F03C;
    case 647u: goto L_0896F050;
    case 648u: goto L_0896F068;
    case 649u: goto L_0896F070;
    case 650u: goto L_0896F08C;
    case 651u: goto L_0896F09C;
    case 652u: goto L_0896F0A4;
    case 653u: goto L_0896F0D8;
    case 654u: goto L_0896F128;
    case 655u: goto L_0896F148;
    case 656u: goto L_0896F154;
    case 657u: goto L_0896F1B0;
    case 658u: goto L_0896F1B4;
    case 659u: goto L_0896F204;
    case 660u: goto L_0896F20C;
    case 661u: goto L_0896F214;
    case 662u: goto L_0896F238;
    case 663u: goto L_0896F25C;
    case 664u: goto L_0896F274;
    case 665u: goto L_0896F288;
    case 666u: goto L_0896F2D0;
    case 667u: goto L_0896F418;
    case 668u: goto L_0896F434;
    case 669u: goto L_0896F44C;
    case 670u: goto L_0896F458;
    case 671u: goto L_0896F460;
    case 672u: goto L_0896F474;
    case 673u: goto L_0896F488;
    case 674u: goto L_0896F494;
    case 675u: goto L_0896F4A8;
    case 676u: goto L_0896F4B0;
    case 677u: goto L_0896F4C4;
    case 678u: goto L_0896F4D0;
    case 679u: goto L_0896F4E0;
    case 680u: goto L_0896F504;
    case 681u: goto L_0896F50C;
    case 682u: goto L_0896F518;
    case 683u: goto L_0896F52C;
    case 684u: goto L_0896F538;
    case 685u: goto L_0896F550;
    case 686u: goto L_0896F55C;
    case 687u: goto L_0896F560;
    case 688u: goto L_0896F570;
    case 689u: goto L_0896F588;
    case 690u: goto L_0896F5A8;
    case 691u: goto L_0896F5BC;
    case 692u: goto L_0896F5C8;
    case 693u: goto L_0896F5E0;
    case 694u: goto L_0896F5F0;
    case 695u: goto L_0896F5F8;
    case 696u: goto L_0896F608;
    case 697u: goto L_0896F614;
    case 698u: goto L_0896F624;
    case 699u: goto L_0896F62C;
    case 700u: goto L_0896F634;
    case 701u: goto L_0896F678;
    case 702u: goto L_0896F684;
    case 703u: goto L_0896F68C;
    case 704u: goto L_0896F69C;
    case 705u: goto L_0896F6C4;
    case 706u: goto L_0896F6D0;
    case 707u: goto L_0896F6DC;
    case 708u: goto L_0896F6E8;
    case 709u: goto L_0896F6EC;
    case 710u: goto L_0896F70C;
    case 711u: goto L_0896F734;
    case 712u: goto L_0896F740;
    case 713u: goto L_0896F748;
    case 714u: goto L_0896F754;
    case 715u: goto L_0896F764;
    case 716u: goto L_0896F774;
    case 717u: goto L_0896F7AC;
    case 718u: goto L_0896F7B8;
    case 719u: goto L_0896F81C;
    case 720u: goto L_0896F830;
    case 721u: goto L_0896F854;
    case 722u: goto L_0896F878;
    case 723u: goto L_0896F888;
    case 724u: goto L_0896F890;
    case 725u: goto L_0896F8A0;
    case 726u: goto L_0896F8AC;
    case 727u: goto L_0896F8C0;
    case 728u: goto L_0896F8C4;
    case 729u: goto L_0896F8F0;
    case 730u: goto L_0896F908;
    case 731u: goto L_0896F918;
    case 732u: goto L_0896F928;
    case 733u: goto L_0896F930;
    case 734u: goto L_0896F938;
    case 735u: goto L_0896F940;
    case 736u: goto L_0896F948;
    case 737u: goto L_0896F950;
    case 738u: goto L_0896F96C;
    case 739u: goto L_0896F974;
    case 740u: goto L_0896F980;
    case 741u: goto L_0896F988;
    case 742u: goto L_0896F998;
    case 743u: goto L_0896F9A4;
    case 744u: goto L_0896F9AC;
    case 745u: goto L_0896F9DC;
    case 746u: goto L_0896FA0C;
    case 747u: goto L_0896FA20;
    case 748u: goto L_0896FA2C;
    case 749u: goto L_0896FA50;
    case 750u: goto L_0896FA88;
    case 751u: goto L_0896FAC4;
    case 752u: goto L_0896FAC8;
    case 753u: goto L_0896FAF4;
    case 754u: goto L_0896FB18;
    case 755u: goto L_0896FB34;
    case 756u: goto L_0896FB78;
    case 757u: goto L_0896FB88;
    case 758u: goto L_0896FB98;
    case 759u: goto L_0896FBA4;
    case 760u: goto L_0896FBDC;
    case 761u: goto L_0896FBFC;
    case 762u: goto L_0896FC04;
    case 763u: goto L_0896FC0C;
    case 764u: goto L_0896FC14;
    case 765u: goto L_0896FC34;
    case 766u: goto L_0896FC48;
    case 767u: goto L_0896FC54;
    case 768u: goto L_0896FC5C;
    case 769u: goto L_0896FC60;
    case 770u: goto L_0896FC64;
    case 771u: goto L_0896FC78;
    case 772u: goto L_0896FC8C;
    case 773u: goto L_0896FCA0;
    case 774u: goto L_0896FCAC;
    case 775u: goto L_0896FCB4;
    case 776u: goto L_0896FCB8;
    case 777u: goto L_0896FCBC;
    case 778u: goto L_0896FCD0;
    case 779u: goto L_0896FCD8;
    case 780u: goto L_0896FCE0;
    case 781u: goto L_0896FCEC;
    case 782u: goto L_0896FD0C;
    case 783u: goto L_0896FD18;
    case 784u: goto L_0896FD24;
    case 785u: goto L_0896FD2C;
    case 786u: goto L_0896FD34;
    case 787u: goto L_0896FD44;
    case 788u: goto L_0896FD50;
    case 789u: goto L_0896FD58;
    case 790u: goto L_0896FD5C;
    case 791u: goto L_0896FD68;
    case 792u: goto L_0896FD74;
    case 793u: goto L_0896FD7C;
    case 794u: goto L_0896FDA8;
    case 795u: goto L_0896FDB4;
    case 796u: goto L_0896FDBC;
    case 797u: goto L_0896FDC8;
    case 798u: goto L_0896FDEC;
    case 799u: goto L_0896FDF8;
    case 800u: goto L_0896FE00;
    case 801u: goto L_0896FE08;
    case 802u: goto L_0896FE10;
    case 803u: goto L_0896FE24;
    case 804u: goto L_0896FE40;
    case 805u: goto L_0896FE4C;
    case 806u: goto L_0896FE54;
    case 807u: goto L_0896FE60;
    case 808u: goto L_0896FE74;
    case 809u: goto L_0896FECC;
    case 810u: goto L_0896FF28;
    case 811u: goto L_0896FF34;
    case 812u: goto L_0896FF84;
    case 813u: goto L_0896FF8C;
    case 814u: goto L_0896FF98;
    case 815u: goto L_0896FFA0;
    case 816u: goto L_0896FFA8;
    case 817u: goto L_0896FFC0;
    case 818u: goto L_0896FFC4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0896C000:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C014;
      }
      goto L_0896C008;
    }
L_0896C008:
    ctx.gpr[31] = (0x0896C010u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896C010u) goto L_0896C010;
    return;
L_0896C010:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896C014;
L_0896C014:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896C020;
L_0896C020:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896C030u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27624));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896C030u) goto L_0896C030;
    return;
L_0896C030:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896C194;
      }
      goto L_0896C038;
    }
L_0896C038:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896C078;
      }
      goto L_0896C048;
    }
L_0896C048:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896C054u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896C054u) goto L_0896C054;
    return;
L_0896C054:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C06C;
      }
      goto L_0896C060;
    }
L_0896C060:
    ctx.gpr[31] = (0x0896C068u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896C068u) goto L_0896C068;
    return;
L_0896C068:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896C06C;
L_0896C06C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896C078;
L_0896C078:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896C088u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27616));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896C088u) goto L_0896C088;
    return;
L_0896C088:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896C194;
      }
      goto L_0896C090;
    }
L_0896C090:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896C0D0;
      }
      goto L_0896C0A0;
    }
L_0896C0A0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896C0ACu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896C0ACu) goto L_0896C0AC;
    return;
L_0896C0AC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C0C4;
      }
      goto L_0896C0B8;
    }
L_0896C0B8:
    ctx.gpr[31] = (0x0896C0C0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896C0C0u) goto L_0896C0C0;
    return;
L_0896C0C0:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896C0C4;
L_0896C0C4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896C0D0;
L_0896C0D0:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896C0E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27608));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896C0E0u) goto L_0896C0E0;
    return;
L_0896C0E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896C194;
      }
      goto L_0896C0E8;
    }
L_0896C0E8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896C128;
      }
      goto L_0896C0F8;
    }
L_0896C0F8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896C104u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896C104u) goto L_0896C104;
    return;
L_0896C104:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C11C;
      }
      goto L_0896C110;
    }
L_0896C110:
    ctx.gpr[31] = (0x0896C118u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896C118u) goto L_0896C118;
    return;
L_0896C118:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896C11C;
L_0896C11C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896C128;
L_0896C128:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896C138u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27608));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896C138u) goto L_0896C138;
    return;
L_0896C138:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896C194;
      }
      goto L_0896C140;
    }
L_0896C140:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896C180;
      }
      goto L_0896C150;
    }
L_0896C150:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896C15Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896C15Cu) goto L_0896C15C;
    return;
L_0896C15C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C174;
      }
      goto L_0896C168;
    }
L_0896C168:
    ctx.gpr[31] = (0x0896C170u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896C170u) goto L_0896C170;
    return;
L_0896C170:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896C174;
L_0896C174:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896C180;
L_0896C180:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896C190u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27600));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896C190u) goto L_0896C190;
    return;
L_0896C190:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0896C194;
L_0896C194:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C1B8;
      }
      goto L_0896C19C;
    }
L_0896C19C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(15));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0896C1B8u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0896C1B8u) goto L_0896C1B8;
    return;
L_0896C1B8:
    ctx.gpr[2] = (0u | 1u);
    goto L_0896C1BC;
L_0896C1BC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C1F4:
    // CRadar::DrawBlips: the GPS line goes under the blips.
    lcs::gps_draw(rt, ctx);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[18]);
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(117)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0896C310;
      }
      goto L_0896C248;
    }
L_0896C248:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7940)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C310;
      }
      goto L_0896C254;
    }
L_0896C254:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x0896C260u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0896C260u) goto L_0896C260;
    return;
L_0896C260:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x0896C26Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0896C26Cu) goto L_0896C26C;
    return;
L_0896C26C:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x0896C278u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0896C278u) goto L_0896C278;
    return;
L_0896C278:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x0896C284u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0896C284u) goto L_0896C284;
    return;
L_0896C284:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x0896C290u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0896C290u) goto L_0896C290;
    return;
L_0896C290:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x0896C29Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0896C29Cu) goto L_0896C29C;
    return;
L_0896C29C:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0896C2B4u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 768u, 0x089678F0u>(ctx, &aot_mem) && ctx.pc == 0x0896C2B4u) goto L_0896C2B4;
    return;
L_0896C2B4:
    ctx.gpr[31] = (0x0896C2BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 219u, 0x089D5AECu>(ctx, &aot_mem) && ctx.pc == 0x0896C2BCu) goto L_0896C2BC;
    return;
L_0896C2BC:
    ctx.gpr[4] = (2231u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7912));
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[6] = (16309u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(320)));
    ctx.gpr[6] = (ctx.gpr[6] | 1267u);
    ctx.gpr[21] = (2232u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[23] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(5736));
    ctx.gpr[30] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (2230u << 16u);
      if (branch_taken) {
          goto L_0896C318;
      }
      goto L_0896C308;
    }
L_0896C308:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C530;
      }
      goto L_0896C310;
    }
L_0896C310:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CB30;
      }
      goto L_0896C318;
    }
L_0896C318:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6484)));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x0896C334u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0896C334u) goto L_0896C334;
    return;
L_0896C334:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (16457u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.gpr[19] = (2230u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-6744));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_0896C3D4;
      }
      goto L_0896C358;
    }
L_0896C358:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_0896C3A4;
      }
      goto L_0896C370;
    }
L_0896C370:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0896C380u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 105u, 0x088A8570u>(ctx, &aot_mem) && ctx.pc == 0x0896C380u) goto L_0896C380;
    return;
L_0896C380:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(89), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0896C3D4;
      }
      goto L_0896C3A4;
    }
L_0896C3A4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0896C3B4u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 116u, 0x088A8618u>(ctx, &aot_mem) && ctx.pc == 0x0896C3B4u) goto L_0896C3B4;
    return;
L_0896C3B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(89), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0896C3D4;
L_0896C3D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6484)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_0896C460;
      }
      goto L_0896C418;
    }
L_0896C418:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.fpr[14] = ctx.fpr[22] + ctx.fpr[24];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[31] = (0x0896C440u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 90u, 0x08968678u>(ctx, &aot_mem) && ctx.pc == 0x0896C440u) goto L_0896C440;
    return;
L_0896C440:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6488)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (2231u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7912)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0896C4B0;
      }
      goto L_0896C460;
    }
L_0896C460:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7896)));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[24];
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0896C494u);
    ctx.fpr[14] = ctx.fpr[22] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 90u, 0x08968678u>(ctx, &aot_mem) && ctx.pc == 0x0896C494u) goto L_0896C494;
    return;
L_0896C494:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2231u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6488)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7912)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_0896C4B0;
L_0896C4B0:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    ctx.gpr[31] = (0x0896C4FCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 791u, 0x08967BB0u>(ctx, &aot_mem) && ctx.pc == 0x0896C4FCu) goto L_0896C4FC;
    return;
L_0896C4FC:
    ctx.gpr[31] = (0x0896C504u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 734u, 0x0896755Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C504u) goto L_0896C504;
    return;
L_0896C504:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0896C510u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 768u, 0x089678F0u>(ctx, &aot_mem) && ctx.pc == 0x0896C510u) goto L_0896C510;
    return;
L_0896C510:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6484)));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0896C530u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x0896C530u) goto L_0896C530;
    return;
L_0896C530:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (0u | 0u);
    goto L_0896C538;
L_0896C538:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C5F8;
      }
      goto L_0896C544;
    }
L_0896C544:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(66)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C5F8;
      }
      goto L_0896C550;
    }
L_0896C550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0896C5F8;
      }
      goto L_0896C564;
    }
L_0896C564:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0896C5C0;
      }
      goto L_0896C570;
    }
L_0896C570:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0896C5C0;
      }
      goto L_0896C578;
    }
L_0896C578:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0896C5C0;
      }
      goto L_0896C580;
    }
L_0896C580:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0896C5C0;
      }
      goto L_0896C588;
    }
L_0896C588:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_0896C5B8;
      }
      goto L_0896C590;
    }
L_0896C590:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(-6816)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C5B0;
      }
      goto L_0896C59C;
    }
L_0896C59C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C5B8;
      }
      goto L_0896C5A4;
    }
L_0896C5A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C5B8;
      }
      goto L_0896C5B0;
    }
L_0896C5B0:
    ctx.gpr[31] = (0x0896C5B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 297u, 0x08969B50u>(ctx, &aot_mem) && ctx.pc == 0x0896C5B8u) goto L_0896C5B8;
    return;
L_0896C5B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C5F8;
      }
      goto L_0896C5C0;
    }
L_0896C5C0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_0896C5F0;
      }
      goto L_0896C5C8;
    }
L_0896C5C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(-6816)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C5E8;
      }
      goto L_0896C5D4;
    }
L_0896C5D4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C5F0;
      }
      goto L_0896C5DC;
    }
L_0896C5DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C5F0;
      }
      goto L_0896C5E8;
    }
L_0896C5E8:
    ctx.gpr[31] = (0x0896C5F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 355u, 0x0896A01Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C5F0u) goto L_0896C5F0;
    return;
L_0896C5F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C5F8;
      }
      goto L_0896C5F8;
    }
L_0896C5F8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0896C538;
      }
      goto L_0896C608;
    }
L_0896C608:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 16u);
    ctx.gpr[19] = (0u | 27u);
    goto L_0896C618;
L_0896C618:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C6F8;
      }
      goto L_0896C624;
    }
L_0896C624:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(66)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C6F8;
      }
      goto L_0896C630;
    }
L_0896C630:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 19u);
      if (branch_taken) {
          goto L_0896C658;
      }
      goto L_0896C640;
    }
L_0896C640:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896C658;
      }
      goto L_0896C648;
    }
L_0896C648:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0896C658;
      }
      goto L_0896C650;
    }
L_0896C650:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0896C6F8;
      }
      goto L_0896C658;
    }
L_0896C658:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_0896C668;
      }
      goto L_0896C660;
    }
L_0896C660:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_0896C6F8;
      }
      goto L_0896C668;
    }
L_0896C668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0896C6F8;
      }
      goto L_0896C67C;
    }
L_0896C67C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(-6816)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0896C6CC;
      }
      goto L_0896C688;
    }
L_0896C688:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0896C6CC;
      }
      goto L_0896C690;
    }
L_0896C690:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0896C6CC;
      }
      goto L_0896C698;
    }
L_0896C698:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0896C6CC;
      }
      goto L_0896C6A0;
    }
L_0896C6A0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C6BC;
      }
      goto L_0896C6A8;
    }
L_0896C6A8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C6C4;
      }
      goto L_0896C6B0;
    }
L_0896C6B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C6C4;
      }
      goto L_0896C6BC;
    }
L_0896C6BC:
    ctx.gpr[31] = (0x0896C6C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 297u, 0x08969B50u>(ctx, &aot_mem) && ctx.pc == 0x0896C6C4u) goto L_0896C6C4;
    return;
L_0896C6C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C6F8;
      }
      goto L_0896C6CC;
    }
L_0896C6CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C6E8;
      }
      goto L_0896C6D4;
    }
L_0896C6D4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C6F0;
      }
      goto L_0896C6DC;
    }
L_0896C6DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C6F0;
      }
      goto L_0896C6E8;
    }
L_0896C6E8:
    ctx.gpr[31] = (0x0896C6F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 355u, 0x0896A01Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C6F0u) goto L_0896C6F0;
    return;
L_0896C6F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C6F8;
      }
      goto L_0896C6F8;
    }
L_0896C6F8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0896C618;
      }
      goto L_0896C708;
    }
L_0896C708:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[19] = (2229u << 16u);
    goto L_0896C718;
L_0896C718:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C80C;
      }
      goto L_0896C724;
    }
L_0896C724:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(66)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C80C;
      }
      goto L_0896C730;
    }
L_0896C730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C80C;
      }
      goto L_0896C744;
    }
L_0896C744:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0896C804;
      }
      goto L_0896C74C;
    }
L_0896C74C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0896C804;
      }
      goto L_0896C754;
    }
L_0896C754:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0896C804;
      }
      goto L_0896C75C;
    }
L_0896C75C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0896C804;
      }
      goto L_0896C764;
    }
L_0896C764:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 19u);
      if (branch_taken) {
          goto L_0896C7FC;
      }
      goto L_0896C774;
    }
L_0896C774:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 27u);
      if (branch_taken) {
          goto L_0896C7FC;
      }
      goto L_0896C77C;
    }
L_0896C77C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896C7FC;
      }
      goto L_0896C784;
    }
L_0896C784:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_0896C7FC;
      }
      goto L_0896C78C;
    }
L_0896C78C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_0896C7FC;
      }
      goto L_0896C794;
    }
L_0896C794:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896C7FC;
      }
      goto L_0896C79C;
    }
L_0896C79C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(-6816)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C7BC;
      }
      goto L_0896C7A8;
    }
L_0896C7A8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C7FC;
      }
      goto L_0896C7B0;
    }
L_0896C7B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C7FC;
      }
      goto L_0896C7BC;
    }
L_0896C7BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C7F4;
      }
      goto L_0896C7C8;
    }
L_0896C7C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(53)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[18] << (ctx.gpr[4] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C7FC;
      }
      goto L_0896C7E4;
    }
L_0896C7E4:
    ctx.gpr[31] = (0x0896C7ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 297u, 0x08969B50u>(ctx, &aot_mem) && ctx.pc == 0x0896C7ECu) goto L_0896C7EC;
    return;
L_0896C7EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C7FC;
      }
      goto L_0896C7F4;
    }
L_0896C7F4:
    ctx.gpr[31] = (0x0896C7FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 297u, 0x08969B50u>(ctx, &aot_mem) && ctx.pc == 0x0896C7FCu) goto L_0896C7FC;
    return;
L_0896C7FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C80C;
      }
      goto L_0896C804;
    }
L_0896C804:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C80C;
      }
      goto L_0896C80C;
    }
L_0896C80C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0896C718;
      }
      goto L_0896C81C;
    }
L_0896C81C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    goto L_0896C828;
L_0896C828:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C9EC;
      }
      goto L_0896C834;
    }
L_0896C834:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(66)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C9EC;
      }
      goto L_0896C840;
    }
L_0896C840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C9EC;
      }
      goto L_0896C854;
    }
L_0896C854:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0896C87C;
      }
      goto L_0896C85C;
    }
L_0896C85C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0896C87C;
      }
      goto L_0896C864;
    }
L_0896C864:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0896C87C;
      }
      goto L_0896C86C;
    }
L_0896C86C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0896C87C;
      }
      goto L_0896C874;
    }
L_0896C874:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C9EC;
      }
      goto L_0896C87C;
    }
L_0896C87C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 19u);
      if (branch_taken) {
          goto L_0896C9E4;
      }
      goto L_0896C88C;
    }
L_0896C88C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 27u);
      if (branch_taken) {
          goto L_0896C9E4;
      }
      goto L_0896C894;
    }
L_0896C894:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896C9E4;
      }
      goto L_0896C89C;
    }
L_0896C89C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_0896C9E4;
      }
      goto L_0896C8A4;
    }
L_0896C8A4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896C9E4;
      }
      goto L_0896C8AC;
    }
L_0896C8AC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0896C9B4;
      }
      goto L_0896C8BC;
    }
L_0896C8BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0896C8CCu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A7DE0u>(ctx, &aot_mem) && ctx.pc == 0x0896C8CCu) goto L_0896C8CC;
    return;
L_0896C8CC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C9B4;
      }
      goto L_0896C8D8;
    }
L_0896C8D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C900;
      }
      goto L_0896C8E4;
    }
L_0896C8E4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896C8F4u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0896C8F4u) goto L_0896C8F4;
    return;
L_0896C8F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0896C900;
L_0896C900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(102)));
    ctx.gpr[17] = (ctx.gpr[4] & 4u);
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C938;
      }
      goto L_0896C918;
    }
L_0896C918:
    ctx.gpr[31] = (0x0896C920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C920u) goto L_0896C920;
    return;
L_0896C920:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0896C92Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 396u, 0x08945AA8u>(ctx, &aot_mem) && ctx.pc == 0x0896C92Cu) goto L_0896C92C;
    return;
L_0896C92C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C938;
      }
      goto L_0896C934;
    }
L_0896C934:
    ctx.gpr[17] = (0u | 1u);
    goto L_0896C938;
L_0896C938:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(53)));
    ctx.gpr[5] = (ctx.gpr[4] << (ctx.gpr[5] & 31u));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C95C;
      }
      goto L_0896C958;
    }
L_0896C958:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_0896C95C;
L_0896C95C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0896C96Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x0896C96Cu) goto L_0896C96C;
    return;
L_0896C96C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C9B4;
      }
      goto L_0896C978;
    }
L_0896C978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C9B4;
      }
      goto L_0896C990;
    }
L_0896C990:
    ctx.gpr[31] = (0x0896C998u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 152u, 0x08980B2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C998u) goto L_0896C998;
    return;
L_0896C998:
    ctx.gpr[31] = (0x0896C9A0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C9A0u) goto L_0896C9A0;
    return;
L_0896C9A0:
    ctx.gpr[31] = (0x0896C9A8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 272u, 0x089A5338u>(ctx, &aot_mem) && ctx.pc == 0x0896C9A8u) goto L_0896C9A8;
    return;
L_0896C9A8:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896C9B4;
      }
      goto L_0896C9B0;
    }
L_0896C9B0:
    ctx.gpr[17] = (0u | 0u);
    goto L_0896C9B4;
L_0896C9B4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C9E4;
      }
      goto L_0896C9BC;
    }
L_0896C9BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(-6816)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C9DC;
      }
      goto L_0896C9C8;
    }
L_0896C9C8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C9E4;
      }
      goto L_0896C9D0;
    }
L_0896C9D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C9E4;
      }
      goto L_0896C9DC;
    }
L_0896C9DC:
    ctx.gpr[31] = (0x0896C9E4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 355u, 0x0896A01Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C9E4u) goto L_0896C9E4;
    return;
L_0896C9E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C9EC;
      }
      goto L_0896C9EC;
    }
L_0896C9EC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0896C828;
      }
      goto L_0896C9FC;
    }
L_0896C9FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (0x0896CA08u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 136u, 0x089FD404u>(ctx, &aot_mem) && ctx.pc == 0x0896CA08u) goto L_0896CA08;
    return;
L_0896CA08:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6488)));
    ctx.gpr[4] = (2231u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7912)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(320)));
    ctx.fpr[15] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[16] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896CB30;
      }
      goto L_0896CA48;
    }
L_0896CA48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(-6816)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_0896CA88;
      }
      goto L_0896CA54;
    }
L_0896CA54:
    ctx.gpr[4] = (50338u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 53494u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (17574u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39731u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0896CA80u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 791u, 0x08967BB0u>(ctx, &aot_mem) && ctx.pc == 0x0896CA80u) goto L_0896CA80;
    return;
L_0896CA80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CAAC;
      }
      goto L_0896CA88;
    }
L_0896CA88:
    ctx.gpr[31] = (0x0896CA90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 209u, 0x089D5A30u>(ctx, &aot_mem) && ctx.pc == 0x0896CA90u) goto L_0896CA90;
    return;
L_0896CA90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(108));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0896CAACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 791u, 0x08967BB0u>(ctx, &aot_mem) && ctx.pc == 0x0896CAACu) goto L_0896CAAC;
    return;
L_0896CAAC:
    ctx.gpr[31] = (0x0896CAB4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 734u, 0x0896755Cu>(ctx, &aot_mem) && ctx.pc == 0x0896CAB4u) goto L_0896CAB4;
    return;
L_0896CAB4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0896CAC0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 768u, 0x089678F0u>(ctx, &aot_mem) && ctx.pc == 0x0896CAC0u) goto L_0896CAC0;
    return;
L_0896CAC0:
    ctx.gpr[31] = (0x0896CAC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0896CAC8u) goto L_0896CAC8;
    return;
L_0896CAC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0896CB30;
      }
      goto L_0896CAD0;
    }
L_0896CAD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8008)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CB30;
      }
      goto L_0896CADC;
    }
L_0896CADC:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x0896CAE8u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0896CAE8u) goto L_0896CAE8;
    return;
L_0896CAE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0896CB10;
      }
      goto L_0896CB00;
    }
L_0896CB00:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896CB20;
      }
      goto L_0896CB10;
    }
L_0896CB10:
    ctx.gpr[31] = (0x0896CB18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x0896CB18u) goto L_0896CB18;
    return;
L_0896CB18:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0896CB20;
      }
      goto L_0896CB20;
    }
L_0896CB20:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0896CB30u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 106u, 0x08968984u>(ctx, &aot_mem) && ctx.pc == 0x0896CB30u) goto L_0896CB30;
    return;
L_0896CB30:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
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
L_0896CB70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-480));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[16]);
    ctx.gpr[16] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-22240));
      if (branch_taken) {
          goto L_0896CBD0;
      }
      goto L_0896CBC8;
    }
L_0896CBC8:
    ctx.gpr[31] = (0x0896CBD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 263u, 0x089697E8u>(ctx, &aot_mem) && ctx.pc == 0x0896CBD0u) goto L_0896CBD0;
    return;
L_0896CBD0:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[4]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28780));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[4]);
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11584));
    ctx.gpr[5] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4780));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5440));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(221)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(222)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(223)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(225)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(226)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(227)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(169)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(170)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(171)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[4]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (2232u << 16u);
    ctx.gpr[4] = (16268u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (0u | 65535u);
    ctx.gpr[4] = (16320u << 16u);
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(5736));
    ctx.gpr[23] = (2230u << 16u);
    goto L_0896CCD0;
L_0896CCD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(51)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[20] = (0u | 3u);
    ctx.gpr[21] = (0u | 5u);
    ctx.gpr[18] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2228u << 16u);
      if (branch_taken) {
          goto L_0896D868;
      }
      goto L_0896CCEC;
    }
L_0896CCEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(66)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D868;
      }
      goto L_0896CCF8;
    }
L_0896CCF8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[6] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D868;
      }
      goto L_0896CD0C;
    }
L_0896CD0C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0896CDE0;
      }
      goto L_0896CD14;
    }
L_0896CD14:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0896CEF8;
      }
      goto L_0896CD1C;
    }
L_0896CD1C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0896D074;
      }
      goto L_0896CD24;
    }
L_0896CD24:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0896CDD8;
      }
      goto L_0896CD2C;
    }
L_0896CD2C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0896D1A0;
      }
      goto L_0896CD34;
    }
L_0896CD34:
    ctx.gpr[31] = (0x0896CD3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 33u, 0x08958280u>(ctx, &aot_mem) && ctx.pc == 0x0896CD3Cu) goto L_0896CD3C;
    return;
L_0896CD3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896CDD0;
      }
      goto L_0896CD44;
    }
L_0896CD44:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(62))))));
    if (ctx.gpr[4] == ctx.gpr[20]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-6484)));
        goto L_0896CD64;
    }
    goto L_0896CD50;
L_0896CD50:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896CDD0;
      }
      goto L_0896CD60;
    }
L_0896CD60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-6484)));
    goto L_0896CD64;
L_0896CD64:
    ctx.gpr[5] = (17279u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[9] = (17252u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[10] = (16384u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    ctx.gpr[11] = (0u | 2048u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-28780)));
    ctx.gpr[5] = (0u | 5u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x0896CDD0u);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 295u, 0x08825BFCu>(ctx, &aot_mem) && ctx.pc == 0x0896CDD0u) goto L_0896CDD0;
    return;
L_0896CDD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D868;
      }
      goto L_0896CDD8;
    }
L_0896CDD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D868;
      }
      goto L_0896CDE0;
    }
L_0896CDE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0896CDF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0896CDF0u) goto L_0896CDF0;
    return;
L_0896CDF0:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CEF0;
      }
      goto L_0896CDFC;
    }
L_0896CDFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(62))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0896CE18;
      }
      goto L_0896CE08;
    }
L_0896CE08:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896CEF0;
      }
      goto L_0896CE18;
    }
L_0896CE18:
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896CE9C;
      }
      goto L_0896CE80;
    }
L_0896CE80:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28776)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(81)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(82)));
      if (branch_taken) {
          goto L_0896CEB0;
      }
      goto L_0896CE9C;
    }
L_0896CE9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(81)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(82)));
    goto L_0896CEB0;
L_0896CEB0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-6484)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[11] = (0u | 1024u);
    ctx.gpr[31] = (0x0896CEF0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 118u, 0x088299B8u>(ctx, &aot_mem) && ctx.pc == 0x0896CEF0u) goto L_0896CEF0;
    return;
L_0896CEF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D868;
      }
      goto L_0896CEF8;
    }
L_0896CEF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0896CF0Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0896CF0Cu) goto L_0896CF0C;
    return;
L_0896CF0C:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CF4C;
      }
      goto L_0896CF18;
    }
L_0896CF18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CF44;
      }
      goto L_0896CF24;
    }
L_0896CF24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CF3C;
      }
      goto L_0896CF30;
    }
L_0896CF30:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_0896CF50;
      }
      goto L_0896CF3C;
    }
L_0896CF3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_0896CF50;
      }
      goto L_0896CF44;
    }
L_0896CF44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0896CF50;
      }
      goto L_0896CF4C;
    }
L_0896CF4C:
    ctx.gpr[10] = (0u | 0u);
    goto L_0896CF50;
L_0896CF50:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(62))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0896CF6C;
      }
      goto L_0896CF5C;
    }
L_0896CF5C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896D06C;
      }
      goto L_0896CF6C;
    }
L_0896CF6C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896CFB8;
      }
      goto L_0896CF9C;
    }
L_0896CF9C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28776)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(113)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(114)));
      if (branch_taken) {
          goto L_0896CFD0;
      }
      goto L_0896CFB8;
    }
L_0896CFB8:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(113)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(114)));
    goto L_0896CFD0;
L_0896CFD0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D01C;
      }
      goto L_0896CFD8;
    }
L_0896CFD8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16281u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0896D01C;
L_0896D01C:
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-6484)));
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[10] = (ctx.gpr[11] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[11] = (0u | 1024u);
    ctx.gpr[31] = (0x0896D06Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 118u, 0x088299B8u>(ctx, &aot_mem) && ctx.pc == 0x0896D06Cu) goto L_0896D06C;
    return;
L_0896D06C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D868;
      }
      goto L_0896D074;
    }
L_0896D074:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0896D084u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x0896D084u) goto L_0896D084;
    return;
L_0896D084:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(62))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896D0A0;
      }
      goto L_0896D090;
    }
L_0896D090:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896D198;
      }
      goto L_0896D0A0;
    }
L_0896D0A0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D118;
      }
      goto L_0896D0FC;
    }
L_0896D0FC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28776)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(145)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(146)));
      if (branch_taken) {
          goto L_0896D158;
      }
      goto L_0896D118;
    }
L_0896D118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896D140;
      }
      goto L_0896D128;
    }
L_0896D128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(145)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(146)));
      if (branch_taken) {
          goto L_0896D158;
      }
      goto L_0896D140;
    }
L_0896D140:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28768)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(145)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(146)));
    goto L_0896D158;
L_0896D158:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-6484)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[11] = (0u | 1024u);
    ctx.gpr[31] = (0x0896D198u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 118u, 0x088299B8u>(ctx, &aot_mem) && ctx.pc == 0x0896D198u) goto L_0896D198;
    return;
L_0896D198:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D868;
      }
      goto L_0896D1A0;
    }
L_0896D1A0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[31] = (0x0896D1B4u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x0896D1B4u) goto L_0896D1B4;
    return;
L_0896D1B4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0896D3FC;
      }
      goto L_0896D1CC;
    }
L_0896D1CC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D3FC;
      }
      goto L_0896D1D4;
    }
L_0896D1D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0896D1ECu);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896D1ECu) goto L_0896D1EC;
    return;
L_0896D1EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D3FC;
      }
      goto L_0896D1F4;
    }
L_0896D1F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0896D204u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A7DE0u>(ctx, &aot_mem) && ctx.pc == 0x0896D204u) goto L_0896D204;
    return;
L_0896D204:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D2C8;
      }
      goto L_0896D210;
    }
L_0896D210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D238;
      }
      goto L_0896D21C;
    }
L_0896D21C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(308));
    ctx.gpr[31] = (0x0896D22Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0896D22Cu) goto L_0896D22C;
    return;
L_0896D22C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0896D238;
L_0896D238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(102)));
    ctx.gpr[20] = (ctx.gpr[4] & 4u);
    ctx.gpr[20] = (0u < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D270;
      }
      goto L_0896D250;
    }
L_0896D250:
    ctx.gpr[31] = (0x0896D258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D258u) goto L_0896D258;
    return;
L_0896D258:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0896D264u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 396u, 0x08945AA8u>(ctx, &aot_mem) && ctx.pc == 0x0896D264u) goto L_0896D264;
    return;
L_0896D264:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D270;
      }
      goto L_0896D26C;
    }
L_0896D26C:
    ctx.gpr[20] = (0u | 1u);
    goto L_0896D270;
L_0896D270:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0896D280u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x0896D280u) goto L_0896D280;
    return;
L_0896D280:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D2C8;
      }
      goto L_0896D28C;
    }
L_0896D28C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D2C8;
      }
      goto L_0896D2A4;
    }
L_0896D2A4:
    ctx.gpr[31] = (0x0896D2ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 152u, 0x08980B2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D2ACu) goto L_0896D2AC;
    return;
L_0896D2AC:
    ctx.gpr[31] = (0x0896D2B4u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D2B4u) goto L_0896D2B4;
    return;
L_0896D2B4:
    ctx.gpr[31] = (0x0896D2BCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 272u, 0x089A5338u>(ctx, &aot_mem) && ctx.pc == 0x0896D2BCu) goto L_0896D2BC;
    return;
L_0896D2BC:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896D2C8;
      }
      goto L_0896D2C4;
    }
L_0896D2C4:
    ctx.gpr[20] = (0u | 0u);
    goto L_0896D2C8;
L_0896D2C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0896D2D8u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 652u, 0x088A7E10u>(ctx, &aot_mem) && ctx.pc == 0x0896D2D8u) goto L_0896D2D8;
    return;
L_0896D2D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-6480)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896D3FC;
      }
      goto L_0896D2F4;
    }
L_0896D2F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_0896D320;
    }
    goto L_0896D300;
L_0896D300:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(309));
    ctx.gpr[31] = (0x0896D310u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0896D310u) goto L_0896D310;
    return;
L_0896D310:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(309)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_0896D320;
L_0896D320:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 65535u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D3FC;
      }
      goto L_0896D338;
    }
L_0896D338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-6480)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D3FC;
      }
      goto L_0896D368;
    }
L_0896D368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0896D394;
      }
      goto L_0896D378;
    }
L_0896D378:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(310));
    ctx.gpr[31] = (0x0896D388u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0896D388u) goto L_0896D388;
    return;
L_0896D388:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(310)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0896D394;
L_0896D394:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(176)));
    if (ctx.gpr[4] != ctx.gpr[30]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
        goto L_0896D3AC;
    }
    goto L_0896D3A4;
L_0896D3A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0896D3BC;
      }
      goto L_0896D3AC;
    }
L_0896D3AC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(176)));
    ctx.gpr[31] = (0x0896D3B8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x0896D3B8u) goto L_0896D3B8;
    return;
L_0896D3B8:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_0896D3BC;
L_0896D3BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    if (ctx.gpr[6] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
        goto L_0896D3D0;
    }
    goto L_0896D3C8;
L_0896D3C8:
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    goto L_0896D3D0;
L_0896D3D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-6480)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D368;
      }
      goto L_0896D3FC;
    }
L_0896D3FC:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_0896D860;
      }
      goto L_0896D404;
    }
L_0896D404:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D860;
      }
      goto L_0896D40C;
    }
L_0896D40C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896D42C;
      }
      goto L_0896D41C;
    }
L_0896D41C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896D860;
      }
      goto L_0896D42C;
    }
L_0896D42C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0896D448u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896D448u) goto L_0896D448;
    return;
L_0896D448:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D46C;
      }
      goto L_0896D454;
    }
L_0896D454:
    ctx.gpr[31] = (0x0896D45Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 123u, 0x08A34C08u>(ctx, &aot_mem) && ctx.pc == 0x0896D45Cu) goto L_0896D45C;
    return;
L_0896D45C:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    // nop
      if (branch_taken) {
          goto L_0896D4D8;
      }
      goto L_0896D46C;
    }
L_0896D46C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0896D488u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896D488u) goto L_0896D488;
    return;
L_0896D488:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D4D0;
      }
      goto L_0896D490;
    }
L_0896D490:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
        goto L_0896D4BC;
    }
    goto L_0896D49C;
L_0896D49C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(316));
    ctx.gpr[31] = (0x0896D4ACu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0896D4ACu) goto L_0896D4AC;
    return;
L_0896D4AC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_0896D4BC;
L_0896D4BC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    // nop
      if (branch_taken) {
          goto L_0896D4D8;
      }
      goto L_0896D4D0;
    }
L_0896D4D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D868;
      }
      goto L_0896D4D8;
    }
L_0896D4D8:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x0896D508u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 791u, 0x08967BB0u>(ctx, &aot_mem) && ctx.pc == 0x0896D508u) goto L_0896D508;
    return;
L_0896D508:
    ctx.gpr[31] = (0x0896D510u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 734u, 0x0896755Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D510u) goto L_0896D510;
    return;
L_0896D510:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0896D54C;
      }
      goto L_0896D51C;
    }
L_0896D51C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896D54C;
      }
      goto L_0896D534;
    }
L_0896D534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D54C;
      }
      goto L_0896D544;
    }
L_0896D544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D868;
      }
      goto L_0896D54C;
    }
L_0896D54C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D5DC;
      }
      goto L_0896D564;
    }
L_0896D564:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0896D574u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 105u, 0x088A8570u>(ctx, &aot_mem) && ctx.pc == 0x0896D574u) goto L_0896D574;
    return;
L_0896D574:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 8u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] >> 24u);
    ctx.gpr[7] = (ctx.gpr[4] >> 16u);
    ctx.gpr[8] = (ctx.gpr[5] & 255u);
    ctx.gpr[9] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[4] >> 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[10] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(210), static_cast<std::uint8_t>(ctx.gpr[10]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(211), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0896D650;
      }
      goto L_0896D5DC;
    }
L_0896D5DC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0896D5ECu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 116u, 0x088A8618u>(ctx, &aot_mem) && ctx.pc == 0x0896D5ECu) goto L_0896D5EC;
    return;
L_0896D5EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 8u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] >> 24u);
    ctx.gpr[7] = (ctx.gpr[4] >> 16u);
    ctx.gpr[8] = (ctx.gpr[5] & 255u);
    ctx.gpr[9] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[4] >> 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[10] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(210), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(211), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0896D650;
L_0896D650:
    ctx.gpr[7] = (0u & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[6] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[7]);
      if (branch_taken) {
          goto L_0896D698;
      }
      goto L_0896D670;
    }
L_0896D670:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(209)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_0896D69C;
      }
      goto L_0896D67C;
    }
L_0896D67C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(210)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_0896D69C;
      }
      goto L_0896D688;
    }
L_0896D688:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(211)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_0896D69C;
      }
      goto L_0896D694;
    }
L_0896D694:
    ctx.gpr[6] = (0u | 1u);
    goto L_0896D698;
L_0896D698:
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    goto L_0896D69C;
L_0896D69C:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D860;
      }
      goto L_0896D6AC;
    }
L_0896D6AC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (16204u << 16u);
      if (branch_taken) {
          goto L_0896D7F0;
      }
      goto L_0896D6B4;
    }
L_0896D6B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[30];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0896D6DCu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 292u, 0x08A25A6Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D6DCu) goto L_0896D6DC;
    return;
L_0896D6DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (17224u << 16u);
      if (branch_taken) {
          goto L_0896D7E0;
      }
      goto L_0896D6E4;
    }
L_0896D6E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (16035u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 55050u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[5] = (16079u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 16882u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
        goto L_0896D734;
    }
    goto L_0896D734;
L_0896D734:
    ctx.gpr[4] = (16395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8548u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0896D758u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 665u, 0x088A7EF0u>(ctx, &aot_mem) && ctx.pc == 0x0896D758u) goto L_0896D758;
    return;
L_0896D758:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0896D764u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x0896D764u) goto L_0896D764;
    return;
L_0896D764:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(300));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0896D774u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x0896D774u) goto L_0896D774;
    return;
L_0896D774:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(276));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[31] = (0x0896D784u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A542E8u>(ctx, &aot_mem) && ctx.pc == 0x0896D784u) goto L_0896D784;
    return;
L_0896D784:
    ctx.gpr[31] = (0x0896D78Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x0896D78Cu) goto L_0896D78C;
    return;
L_0896D78C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[11] = (17440u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896D7C4u);
    ctx.gpr[10] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 277u, 0x08A55444u>(ctx, &aot_mem) && ctx.pc == 0x0896D7C4u) goto L_0896D7C4;
    return;
L_0896D7C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896D7E0;
      }
      goto L_0896D7D4;
    }
L_0896D7D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    ctx.gpr[31] = (0x0896D7E0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D7E0u) goto L_0896D7E0;
    return;
L_0896D7E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[30];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16204u << 16u);
    goto L_0896D7F0;
L_0896D7F0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const bool branch_taken = ctx.gpr[21] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0896D860;
      }
      goto L_0896D810;
    }
L_0896D810:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(209)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(210)));
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-6484)));
    ctx.gpr[2] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[11] = (0u | 1024u);
    ctx.gpr[31] = (0x0896D860u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 118u, 0x088299B8u>(ctx, &aot_mem) && ctx.pc == 0x0896D860u) goto L_0896D860;
    return;
L_0896D860:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D868;
      }
      goto L_0896D868;
    }
L_0896D868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0896CCD0;
      }
      goto L_0896D88C;
    }
L_0896D88C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(220), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(221), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(222), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(223), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(225), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(226), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(227), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(170), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(171), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D93C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) >= 0;
    ctx.gpr[4] = (ctx.gpr[9] & 255u);
      if (branch_taken) {
          goto L_0896D9AC;
      }
      goto L_0896D9A0;
    }
L_0896D9A0:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0896D9AC;
L_0896D9AC:
    ctx.gpr[5] = (16217u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (20224u << 16u);
      if (branch_taken) {
          goto L_0896D9E0;
      }
      goto L_0896D9D4;
    }
L_0896D9D4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896D9F8;
      }
      goto L_0896D9E0;
    }
L_0896D9E0:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[16] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[16]);
    goto L_0896D9F8;
L_0896D9F8:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-7940)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_0896DCD0;
      }
      goto L_0896DA0C;
    }
L_0896DA0C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896DCD0;
      }
      goto L_0896DA1C;
    }
L_0896DA1C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0896DA48;
      }
      goto L_0896DA24;
    }
L_0896DA24:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0896DCD0;
      }
      goto L_0896DA2C;
    }
L_0896DA2C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_0896DA6C;
      }
      goto L_0896DA3C;
    }
L_0896DA3C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[30];
      if (branch_taken) {
          goto L_0896DA7C;
      }
      goto L_0896DA44;
    }
L_0896DA44:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    goto L_0896DA48;
L_0896DA48:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0896DCD8;
      }
      goto L_0896DA50;
    }
L_0896DA50:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DCD0;
      }
      goto L_0896DA58;
    }
L_0896DA58:
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896DF54;
      }
      goto L_0896DA64;
    }
L_0896DA64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DF58;
      }
      goto L_0896DA6C;
    }
L_0896DA6C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[30];
    goto L_0896DA7C;
L_0896DA7C:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896DAA4;
      }
      goto L_0896DA98;
    }
L_0896DA98:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    goto L_0896DAA4;
L_0896DAA4:
    ctx.fpr[30] = ctx.fpr[28] + ctx.fpr[30];
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
      if (branch_taken) {
          goto L_0896DACC;
      }
      goto L_0896DAC0;
    }
L_0896DAC0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    goto L_0896DACC;
L_0896DACC:
    ctx.fpr[24] = ctx.fpr[26] - ctx.fpr[24];
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[12];
      if (branch_taken) {
          goto L_0896DAF4;
      }
      goto L_0896DAE8;
    }
L_0896DAE8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_0896DAF4;
L_0896DAF4:
    ctx.fpr[22] = ctx.fpr[28] + ctx.fpr[22];
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_0896DB1C;
      }
      goto L_0896DB10;
    }
L_0896DB10:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_0896DB1C;
L_0896DB1C:
    ctx.fpr[20] = ctx.fpr[28] - ctx.fpr[20];
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[13];
      if (branch_taken) {
          goto L_0896DB44;
      }
      goto L_0896DB38;
    }
L_0896DB38:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0896DB44;
L_0896DB44:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[12];
    ctx.gpr[4] = (16448u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[28] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0896DB70u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0896DB70u) goto L_0896DB70;
    return;
L_0896DB70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0896DB98u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 963u, 0x08AD3FB4u>(ctx, &aot_mem) && ctx.pc == 0x0896DB98u) goto L_0896DB98;
    return;
L_0896DB98:
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_0896DBB4;
      }
      goto L_0896DBA8;
    }
L_0896DBA8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    goto L_0896DBB4;
L_0896DBB4:
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[30];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896DBE0;
      }
      goto L_0896DBD4;
    }
L_0896DBD4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    goto L_0896DBE0;
L_0896DBE0:
    ctx.fpr[30] = ctx.fpr[28] + ctx.fpr[30];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
      if (branch_taken) {
          goto L_0896DC08;
      }
      goto L_0896DBFC;
    }
L_0896DBFC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    goto L_0896DC08;
L_0896DC08:
    ctx.fpr[24] = ctx.fpr[26] - ctx.fpr[24];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[12];
      if (branch_taken) {
          goto L_0896DC30;
      }
      goto L_0896DC24;
    }
L_0896DC24:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_0896DC30;
L_0896DC30:
    ctx.fpr[22] = ctx.fpr[28] + ctx.fpr[22];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_0896DC58;
      }
      goto L_0896DC4C;
    }
L_0896DC4C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_0896DC58;
L_0896DC58:
    ctx.fpr[20] = ctx.fpr[28] - ctx.fpr[20];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[13];
      if (branch_taken) {
          goto L_0896DC80;
      }
      goto L_0896DC74;
    }
L_0896DC74:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0896DC80;
L_0896DC80:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[12];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.fpr[28] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896DCA8u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0896DCA8u) goto L_0896DCA8;
    return;
L_0896DCA8:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0896DCD0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 963u, 0x08AD3FB4u>(ctx, &aot_mem) && ctx.pc == 0x0896DCD0u) goto L_0896DCD0;
    return;
L_0896DCD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E0DC;
      }
      goto L_0896DCD8;
    }
L_0896DCD8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_0896DCF4;
      }
      goto L_0896DCE8;
    }
L_0896DCE8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    goto L_0896DCF4;
L_0896DCF4:
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[30];
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896DD20;
      }
      goto L_0896DD14;
    }
L_0896DD14:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    goto L_0896DD20;
L_0896DD20:
    ctx.fpr[30] = ctx.fpr[28] + ctx.fpr[30];
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
      if (branch_taken) {
          goto L_0896DD48;
      }
      goto L_0896DD3C;
    }
L_0896DD3C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    goto L_0896DD48;
L_0896DD48:
    ctx.fpr[24] = ctx.fpr[26] + ctx.fpr[24];
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
      if (branch_taken) {
          goto L_0896DD70;
      }
      goto L_0896DD64;
    }
L_0896DD64:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_0896DD70;
L_0896DD70:
    ctx.fpr[22] = ctx.fpr[28] - ctx.fpr[22];
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[12];
      if (branch_taken) {
          goto L_0896DD98;
      }
      goto L_0896DD8C;
    }
L_0896DD8C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_0896DD98;
L_0896DD98:
    ctx.fpr[20] = ctx.fpr[26] - ctx.fpr[20];
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[13];
      if (branch_taken) {
          goto L_0896DDC0;
      }
      goto L_0896DDB4;
    }
L_0896DDB4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0896DDC0;
L_0896DDC0:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[12];
    ctx.gpr[4] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[28] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0896DDECu);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0896DDECu) goto L_0896DDEC;
    return;
L_0896DDEC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0896DE14u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 963u, 0x08AD3FB4u>(ctx, &aot_mem) && ctx.pc == 0x0896DE14u) goto L_0896DE14;
    return;
L_0896DE14:
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_0896DE30;
      }
      goto L_0896DE24;
    }
L_0896DE24:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    goto L_0896DE30;
L_0896DE30:
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[30];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896DE5C;
      }
      goto L_0896DE50;
    }
L_0896DE50:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    goto L_0896DE5C;
L_0896DE5C:
    ctx.fpr[30] = ctx.fpr[28] + ctx.fpr[30];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
      if (branch_taken) {
          goto L_0896DE84;
      }
      goto L_0896DE78;
    }
L_0896DE78:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    goto L_0896DE84;
L_0896DE84:
    ctx.fpr[24] = ctx.fpr[26] + ctx.fpr[24];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
      if (branch_taken) {
          goto L_0896DEAC;
      }
      goto L_0896DEA0;
    }
L_0896DEA0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_0896DEAC;
L_0896DEAC:
    ctx.fpr[22] = ctx.fpr[28] - ctx.fpr[22];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[12];
      if (branch_taken) {
          goto L_0896DED4;
      }
      goto L_0896DEC8;
    }
L_0896DEC8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_0896DED4;
L_0896DED4:
    ctx.fpr[20] = ctx.fpr[26] - ctx.fpr[20];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[13];
      if (branch_taken) {
          goto L_0896DEFC;
      }
      goto L_0896DEF0;
    }
L_0896DEF0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0896DEFC;
L_0896DEFC:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[12];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.fpr[28] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896DF24u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0896DF24u) goto L_0896DF24;
    return;
L_0896DF24:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0896DF4Cu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 963u, 0x08AD3FB4u>(ctx, &aot_mem) && ctx.pc == 0x0896DF4Cu) goto L_0896DF4C;
    return;
L_0896DF4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DCD0;
      }
      goto L_0896DF54;
    }
L_0896DF54:
    ctx.gpr[16] = (0u | 1u);
    goto L_0896DF58;
L_0896DF58:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0896DF74;
      }
      goto L_0896DF68;
    }
L_0896DF68:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0896DF74;
L_0896DF74:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[12];
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
      if (branch_taken) {
          goto L_0896DF9C;
      }
      goto L_0896DF90;
    }
L_0896DF90:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0896DF9C;
L_0896DF9C:
    ctx.fpr[13] = ctx.fpr[28] - ctx.fpr[13];
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
      if (branch_taken) {
          goto L_0896DFC4;
      }
      goto L_0896DFB8;
    }
L_0896DFB8:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    goto L_0896DFC4;
L_0896DFC4:
    ctx.fpr[14] = ctx.fpr[26] + ctx.fpr[14];
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
      if (branch_taken) {
          goto L_0896DFEC;
      }
      goto L_0896DFE0;
    }
L_0896DFE0:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    goto L_0896DFEC;
L_0896DFEC:
    ctx.fpr[15] = ctx.fpr[28] + ctx.fpr[15];
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x0896E000u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x0896E000u) goto L_0896E000;
    return;
L_0896E000:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0896E01Cu);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0896E01Cu) goto L_0896E01C;
    return;
L_0896E01C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0896E02Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x0896E02Cu) goto L_0896E02C;
    return;
L_0896E02C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0896E048;
      }
      goto L_0896E03C;
    }
L_0896E03C:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0896E048;
L_0896E048:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[12];
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_0896E064;
      }
      goto L_0896E058;
    }
L_0896E058:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0896E064;
L_0896E064:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[13] = ctx.fpr[28] - ctx.fpr[13];
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
      if (branch_taken) {
          goto L_0896E080;
      }
      goto L_0896E074;
    }
L_0896E074:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    goto L_0896E080;
L_0896E080:
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[14];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
      if (branch_taken) {
          goto L_0896E09C;
      }
      goto L_0896E090;
    }
L_0896E090:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    goto L_0896E09C;
L_0896E09C:
    ctx.fpr[15] = ctx.fpr[28] + ctx.fpr[14];
    ctx.gpr[31] = (0x0896E0A8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x0896E0A8u) goto L_0896E0A8;
    return;
L_0896E0A8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896E0C4u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0896E0C4u) goto L_0896E0C4;
    return;
L_0896E0C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0896E0D4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x0896E0D4u) goto L_0896E0D4;
    return;
L_0896E0D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DCD0;
      }
      goto L_0896E0DC;
    }
L_0896E0DC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E118:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    ctx.gpr[5] = (16217u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16307u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[10] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[10]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[11]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[11]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E2CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    goto L_0896E358;
L_0896E358:
    ctx.gpr[31] = (0x0896E360u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 586u, 0x089667D4u>(ctx, &aot_mem) && ctx.pc == 0x0896E360u) goto L_0896E360;
    return;
L_0896E360:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0896E358;
      }
      goto L_0896E378;
    }
L_0896E378:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    goto L_0896E39C;
L_0896E39C:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0896E3E4;
      }
      goto L_0896E3B8;
    }
L_0896E3B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[20] << 3u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896E568;
      }
      goto L_0896E3E4;
    }
L_0896E3E4:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0896E404u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 596u, 0x089668D8u>(ctx, &aot_mem) && ctx.pc == 0x0896E404u) goto L_0896E404;
    return;
L_0896E404:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_0896E41C;
      }
      goto L_0896E410;
    }
L_0896E410:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    goto L_0896E41C;
L_0896E41C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0896E43Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 596u, 0x089668D8u>(ctx, &aot_mem) && ctx.pc == 0x0896E43Cu) goto L_0896E43C;
    return;
L_0896E43C:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_0896E568;
      }
      goto L_0896E448;
    }
L_0896E448:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[30];
    ctx.gpr[19] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0896E558;
      }
      goto L_0896E454;
    }
L_0896E454:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    if (ctx.gpr[4] != ctx.gpr[30]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        goto L_0896E4E4;
    }
    goto L_0896E464;
L_0896E464:
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0896E4E0;
      }
      goto L_0896E474;
    }
L_0896E474:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-8));
    goto L_0896E488;
L_0896E488:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896E4A8;
      }
      goto L_0896E490;
    }
L_0896E490:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0896E4A0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 596u, 0x089668D8u>(ctx, &aot_mem) && ctx.pc == 0x0896E4A0u) goto L_0896E4A0;
    return;
L_0896E4A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896E4BC;
      }
      goto L_0896E4A8;
    }
L_0896E4A8:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896E4B8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 596u, 0x089668D8u>(ctx, &aot_mem) && ctx.pc == 0x0896E4B8u) goto L_0896E4B8;
    return;
L_0896E4B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0896E4BC;
L_0896E4BC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_0896E4CC;
      }
      goto L_0896E4C4;
    }
L_0896E4C4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0896E4E0;
      }
      goto L_0896E4CC;
    }
L_0896E4CC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-8));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_0896E488;
      }
      goto L_0896E4E0;
    }
L_0896E4E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_0896E4E4;
L_0896E4E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896E544;
      }
      goto L_0896E500;
    }
L_0896E500:
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (ctx.gpr[20] << 3u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    ctx.gpr[19] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0896E500;
      }
      goto L_0896E538;
    }
L_0896E538:
    ctx.gpr[4] = (ctx.gpr[20] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    goto L_0896E544;
L_0896E544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0896E558;
L_0896E558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    goto L_0896E568;
L_0896E568:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0896E39C;
      }
      goto L_0896E580;
    }
L_0896E580:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896E664;
      }
      goto L_0896E588;
    }
L_0896E588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[18] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[18]) || std::isnan(ctx.fpr[15])) && ctx.fpr[18] == ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0896E5C4;
      }
      goto L_0896E5B8;
    }
L_0896E5B8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = ctx.fpr[16] - ctx.fpr[14];
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[18];
    goto L_0896E5C4;
L_0896E5C4:
    ctx.fpr[18] = ctx.fpr[12] - ctx.fpr[17];
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[18]) || std::isnan(ctx.fpr[15])) && ctx.fpr[18] == ctx.fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
        goto L_0896E5E4;
    }
    goto L_0896E5D8;
L_0896E5D8:
    ctx.fpr[20] = ctx.fpr[16] - ctx.fpr[19];
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[18];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    goto L_0896E5E4;
L_0896E5E4:
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[16];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[19];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896E664;
      }
      goto L_0896E604;
    }
L_0896E604:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[16];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896E664;
      }
      goto L_0896E62C;
    }
L_0896E62C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_0896E638;
L_0896E638:
    ctx.gpr[7] = (ctx.gpr[20] << 3u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0896E638;
      }
      goto L_0896E664;
    }
L_0896E664:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E69C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28812)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14571u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28808), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[5] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-28800), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28800)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28796), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28792), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28816)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28804), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28788)));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28784), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28760)));
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16268u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28752), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28744), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28764)));
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28756), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28748), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896E794u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6744));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896E794u) goto L_0896E794;
    return;
L_0896E794:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E7A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28192));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896E7A0u) goto L_0896E7A0;
    return;
L_0896E7A0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E7ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6740));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896E7ACu) goto L_0896E7AC;
    return;
L_0896E7AC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E7B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28180));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896E7B8u) goto L_0896E7B8;
    return;
L_0896E7B8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E7C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6736));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896E7C4u) goto L_0896E7C4;
    return;
L_0896E7C4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E7D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28168));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896E7D0u) goto L_0896E7D0;
    return;
L_0896E7D0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E7DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6732));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896E7DCu) goto L_0896E7DC;
    return;
L_0896E7DC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E7E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28156));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896E7E8u) goto L_0896E7E8;
    return;
L_0896E7E8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E7F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6728));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896E7F4u) goto L_0896E7F4;
    return;
L_0896E7F4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E800u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28144));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896E800u) goto L_0896E800;
    return;
L_0896E800:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E80Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6724));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896E80Cu) goto L_0896E80C;
    return;
L_0896E80C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E818u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28132));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896E818u) goto L_0896E818;
    return;
L_0896E818:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E824u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6720));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896E824u) goto L_0896E824;
    return;
L_0896E824:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E830u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28120));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896E830u) goto L_0896E830;
    return;
L_0896E830:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E83Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6716));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896E83Cu) goto L_0896E83C;
    return;
L_0896E83C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E848u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28108));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896E848u) goto L_0896E848;
    return;
L_0896E848:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E854u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6712));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896E854u) goto L_0896E854;
    return;
L_0896E854:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E860u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28096));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896E860u) goto L_0896E860;
    return;
L_0896E860:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E86Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6708));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896E86Cu) goto L_0896E86C;
    return;
L_0896E86C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E878u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28084));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896E878u) goto L_0896E878;
    return;
L_0896E878:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E884u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6704));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896E884u) goto L_0896E884;
    return;
L_0896E884:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E890u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28072));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896E890u) goto L_0896E890;
    return;
L_0896E890:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E89Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6700));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896E89Cu) goto L_0896E89C;
    return;
L_0896E89C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E8A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28060));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896E8A8u) goto L_0896E8A8;
    return;
L_0896E8A8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E8B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6696));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896E8B4u) goto L_0896E8B4;
    return;
L_0896E8B4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E8C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28048));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896E8C0u) goto L_0896E8C0;
    return;
L_0896E8C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E8CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6692));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896E8CCu) goto L_0896E8CC;
    return;
L_0896E8CC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E8D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28036));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896E8D8u) goto L_0896E8D8;
    return;
L_0896E8D8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E8E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6688));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896E8E4u) goto L_0896E8E4;
    return;
L_0896E8E4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E8F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28024));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896E8F0u) goto L_0896E8F0;
    return;
L_0896E8F0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E8FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6684));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896E8FCu) goto L_0896E8FC;
    return;
L_0896E8FC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E908u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28012));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896E908u) goto L_0896E908;
    return;
L_0896E908:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E914u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6680));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896E914u) goto L_0896E914;
    return;
L_0896E914:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E920u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28000));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896E920u) goto L_0896E920;
    return;
L_0896E920:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E92Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6676));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896E92Cu) goto L_0896E92C;
    return;
L_0896E92C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E938u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27988));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896E938u) goto L_0896E938;
    return;
L_0896E938:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E944u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6672));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896E944u) goto L_0896E944;
    return;
L_0896E944:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E950u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27976));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896E950u) goto L_0896E950;
    return;
L_0896E950:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E95Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6668));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896E95Cu) goto L_0896E95C;
    return;
L_0896E95C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E968u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27964));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896E968u) goto L_0896E968;
    return;
L_0896E968:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E974u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6664));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896E974u) goto L_0896E974;
    return;
L_0896E974:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E980u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27952));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896E980u) goto L_0896E980;
    return;
L_0896E980:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E98Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6660));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896E98Cu) goto L_0896E98C;
    return;
L_0896E98C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E998u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27940));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896E998u) goto L_0896E998;
    return;
L_0896E998:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E9A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6656));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896E9A4u) goto L_0896E9A4;
    return;
L_0896E9A4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E9B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27928));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896E9B0u) goto L_0896E9B0;
    return;
L_0896E9B0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E9BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6652));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896E9BCu) goto L_0896E9BC;
    return;
L_0896E9BC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E9C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27916));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896E9C8u) goto L_0896E9C8;
    return;
L_0896E9C8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E9D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6648));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896E9D4u) goto L_0896E9D4;
    return;
L_0896E9D4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E9E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27904));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896E9E0u) goto L_0896E9E0;
    return;
L_0896E9E0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E9ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6644));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896E9ECu) goto L_0896E9EC;
    return;
L_0896E9EC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E9F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27892));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896E9F8u) goto L_0896E9F8;
    return;
L_0896E9F8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EA04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6640));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EA04u) goto L_0896EA04;
    return;
L_0896EA04:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EA10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27880));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EA10u) goto L_0896EA10;
    return;
L_0896EA10:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EA1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6636));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EA1Cu) goto L_0896EA1C;
    return;
L_0896EA1C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EA28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27868));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EA28u) goto L_0896EA28;
    return;
L_0896EA28:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EA34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6632));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EA34u) goto L_0896EA34;
    return;
L_0896EA34:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EA40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27856));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EA40u) goto L_0896EA40;
    return;
L_0896EA40:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EA4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6628));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EA4Cu) goto L_0896EA4C;
    return;
L_0896EA4C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EA58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27844));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EA58u) goto L_0896EA58;
    return;
L_0896EA58:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EA64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6624));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EA64u) goto L_0896EA64;
    return;
L_0896EA64:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EA70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27832));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EA70u) goto L_0896EA70;
    return;
L_0896EA70:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EA7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6620));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EA7Cu) goto L_0896EA7C;
    return;
L_0896EA7C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EA88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27820));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EA88u) goto L_0896EA88;
    return;
L_0896EA88:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EA94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6616));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EA94u) goto L_0896EA94;
    return;
L_0896EA94:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EAA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27808));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EAA0u) goto L_0896EAA0;
    return;
L_0896EAA0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EAACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6612));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EAACu) goto L_0896EAAC;
    return;
L_0896EAAC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EAB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27796));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EAB8u) goto L_0896EAB8;
    return;
L_0896EAB8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EAC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6608));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EAC4u) goto L_0896EAC4;
    return;
L_0896EAC4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EAD0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27784));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EAD0u) goto L_0896EAD0;
    return;
L_0896EAD0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EADCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6604));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EADCu) goto L_0896EADC;
    return;
L_0896EADC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EAE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27772));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EAE8u) goto L_0896EAE8;
    return;
L_0896EAE8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EAF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6600));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EAF4u) goto L_0896EAF4;
    return;
L_0896EAF4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EB00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27760));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EB00u) goto L_0896EB00;
    return;
L_0896EB00:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EB0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6596));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EB0Cu) goto L_0896EB0C;
    return;
L_0896EB0C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EB18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27748));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EB18u) goto L_0896EB18;
    return;
L_0896EB18:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EB24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6592));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EB24u) goto L_0896EB24;
    return;
L_0896EB24:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EB30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27736));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EB30u) goto L_0896EB30;
    return;
L_0896EB30:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EB3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6588));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EB3Cu) goto L_0896EB3C;
    return;
L_0896EB3C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EB48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27724));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EB48u) goto L_0896EB48;
    return;
L_0896EB48:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EB54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6584));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EB54u) goto L_0896EB54;
    return;
L_0896EB54:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EB60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27712));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EB60u) goto L_0896EB60;
    return;
L_0896EB60:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EB6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6580));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EB6Cu) goto L_0896EB6C;
    return;
L_0896EB6C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EB78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27700));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EB78u) goto L_0896EB78;
    return;
L_0896EB78:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EB84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6576));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EB84u) goto L_0896EB84;
    return;
L_0896EB84:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EB90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27688));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EB90u) goto L_0896EB90;
    return;
L_0896EB90:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EB9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6572));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EB9Cu) goto L_0896EB9C;
    return;
L_0896EB9C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EBA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27676));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EBA8u) goto L_0896EBA8;
    return;
L_0896EBA8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EBB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6568));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EBB4u) goto L_0896EBB4;
    return;
L_0896EBB4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EBC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27664));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EBC0u) goto L_0896EBC0;
    return;
L_0896EBC0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EBCCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6564));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EBCCu) goto L_0896EBCC;
    return;
L_0896EBCC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EBD8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27652));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EBD8u) goto L_0896EBD8;
    return;
L_0896EBD8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EBE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6560));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EBE4u) goto L_0896EBE4;
    return;
L_0896EBE4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EBF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27640));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EBF0u) goto L_0896EBF0;
    return;
L_0896EBF0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EBFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6556));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EBFCu) goto L_0896EBFC;
    return;
L_0896EBFC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EC08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27628));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EC08u) goto L_0896EC08;
    return;
L_0896EC08:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EC14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6552));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EC14u) goto L_0896EC14;
    return;
L_0896EC14:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EC20u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27616));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EC20u) goto L_0896EC20;
    return;
L_0896EC20:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EC2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6548));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EC2Cu) goto L_0896EC2C;
    return;
L_0896EC2C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EC38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27604));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EC38u) goto L_0896EC38;
    return;
L_0896EC38:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EC44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6544));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EC44u) goto L_0896EC44;
    return;
L_0896EC44:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EC50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27592));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EC50u) goto L_0896EC50;
    return;
L_0896EC50:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EC5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6540));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EC5Cu) goto L_0896EC5C;
    return;
L_0896EC5C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EC68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27580));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EC68u) goto L_0896EC68;
    return;
L_0896EC68:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EC74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6536));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EC74u) goto L_0896EC74;
    return;
L_0896EC74:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EC80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27568));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EC80u) goto L_0896EC80;
    return;
L_0896EC80:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EC8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6532));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896EC8Cu) goto L_0896EC8C;
    return;
L_0896EC8C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EC98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27556));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896EC98u) goto L_0896EC98;
    return;
L_0896EC98:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896ECA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6528));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896ECA4u) goto L_0896ECA4;
    return;
L_0896ECA4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896ECB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27544));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896ECB0u) goto L_0896ECB0;
    return;
L_0896ECB0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896ECBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6524));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896ECBCu) goto L_0896ECBC;
    return;
L_0896ECBC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896ECC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27532));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896ECC8u) goto L_0896ECC8;
    return;
L_0896ECC8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896ECD4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6520));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896ECD4u) goto L_0896ECD4;
    return;
L_0896ECD4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896ECE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27520));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896ECE0u) goto L_0896ECE0;
    return;
L_0896ECE0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896ECECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6516));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896ECECu) goto L_0896ECEC;
    return;
L_0896ECEC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896ECF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27508));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896ECF8u) goto L_0896ECF8;
    return;
L_0896ECF8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896ED04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6512));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896ED04u) goto L_0896ED04;
    return;
L_0896ED04:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896ED10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27496));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896ED10u) goto L_0896ED10;
    return;
L_0896ED10:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896ED1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6508));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896ED1Cu) goto L_0896ED1C;
    return;
L_0896ED1C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896ED28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27484));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896ED28u) goto L_0896ED28;
    return;
L_0896ED28:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896ED34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6504));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0896ED34u) goto L_0896ED34;
    return;
L_0896ED34:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896ED40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27472));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896ED40u) goto L_0896ED40;
    return;
L_0896ED40:
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x0896ED54u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6480), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x0896ED54u) goto L_0896ED54;
    return;
L_0896ED54:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_0896ED74;
      }
      goto L_0896ED64;
    }
L_0896ED64:
    ctx.gpr[31] = (0x0896ED6Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x0896ED6Cu) goto L_0896ED6C;
    return;
L_0896ED6C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (2230u << 16u);
    goto L_0896ED74;
L_0896ED74:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6480), ctx.gpr[4]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896ED8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27460));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0896ED8Cu) goto L_0896ED8C;
    return;
L_0896ED8C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896ED98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17332)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0896EDE4;
      }
      goto L_0896EDC4;
    }
L_0896EDC4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0896EDD0u);
    ctx.gpr[4] = (0u | 48u);
    goto L_0896EEC4;
L_0896EDD0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896EDEC;
      }
      goto L_0896EDDC;
    }
L_0896EDDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EDF8;
      }
      goto L_0896EDE4;
    }
L_0896EDE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EE34;
      }
      goto L_0896EDEC;
    }
L_0896EDEC:
    ctx.gpr[31] = (0x0896EDF4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0896EE50;
L_0896EDF4:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_0896EDF8;
L_0896EDF8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896EE08;
      }
      goto L_0896EE00;
    }
L_0896EE00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EE34;
      }
      goto L_0896EE08;
    }
L_0896EE08:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[18] & 255u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[31] = (0x0896EE34u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 130u, 0x0886493Cu>(ctx, &aot_mem) && ctx.pc == 0x0896EE34u) goto L_0896EE34;
    return;
L_0896EE34:
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
L_0896EE50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896EE64u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0896EF08;
L_0896EE64:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EE78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0896EEB0;
      }
      goto L_0896EE94;
    }
L_0896EE94:
    ctx.gpr[31] = (0x0896EE9Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896EF08;
L_0896EE9C:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EEB0;
      }
      goto L_0896EEA8;
    }
L_0896EEA8:
    ctx.gpr[31] = (0x0896EEB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896EEE4;
L_0896EEB0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EEC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896EED8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15292)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 627u, 0x08B02D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0896EED8u) goto L_0896EED8;
    return;
L_0896EED8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EEE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896EEFCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15292)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 635u, 0x08B02E0Cu>(ctx, &aot_mem) && ctx.pc == 0x0896EEFCu) goto L_0896EEFC;
    return;
L_0896EEFC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EF08:
    ctx.gpr[5] = (0u | 89u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EF2C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-27444)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27448)));
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2228u << 16u);
    ctx.gpr[8] = (2228u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2228u << 16u);
    ctx.gpr[11] = (2228u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-27440), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-27432), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-27436), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-27428), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-27424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EFA4:
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
L_0896EFD0:
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
L_0896EFF8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F000:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[8] = (2228u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[10] = (0u | 0u);
    goto L_0896F010;
L_0896F010:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(848))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[6] = (ctx.gpr[9] << 8u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[11] = (ctx.gpr[10] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[11]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1060)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896F08C;
      }
      goto L_0896F03C;
    }
L_0896F03C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896F070;
      }
      goto L_0896F050;
    }
L_0896F050:
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[10]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1060), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896F010;
      }
      goto L_0896F068;
    }
L_0896F068:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F09C;
      }
      goto L_0896F070;
    }
L_0896F070:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1060), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(848))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[10]));
      if (branch_taken) {
          goto L_0896F09C;
      }
      goto L_0896F08C;
    }
L_0896F08C:
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[10]));
      if (branch_taken) {
          goto L_0896F09C;
      }
      goto L_0896F09C;
    }
L_0896F09C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F0A4:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(848))))));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[6] = (ctx.gpr[9] << 8u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[9] << 9u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[10]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    ctx.gpr[10] = (17505u << 16u);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
      if (branch_taken) {
          goto L_0896F128;
      }
      goto L_0896F0D8;
    }
L_0896F0D8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(848))))));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[6] = (ctx.gpr[6] << 9u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(848))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1060), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(848))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0896F20C;
      }
      goto L_0896F128;
    }
L_0896F128:
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(30));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 63u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 63 ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
        goto L_0896F148;
    }
    goto L_0896F148;
L_0896F148:
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    if (static_cast<std::int32_t>(ctx.gpr[8]) <= 0) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_0896F1B4;
    }
    goto L_0896F154;
L_0896F154:
    ctx.gpr[9] = (ctx.gpr[8] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(28));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(848))))));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[6] = (ctx.gpr[6] << 8u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[9]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1060), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(848))))));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[6] = (ctx.gpr[6] << 9u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_0896F154;
      }
      goto L_0896F1B0;
    }
L_0896F1B0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_0896F1B4;
L_0896F1B4:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(848))))));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[6] = (ctx.gpr[6] << 9u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(848))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1060), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(848))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(30)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F20C;
      }
      goto L_0896F204;
    }
L_0896F204:
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_0896F20C;
L_0896F20C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F214:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896F238u);
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 166u, 0x088A0D74u>(ctx, &aot_mem) && ctx.pc == 0x0896F238u) goto L_0896F238;
    return;
L_0896F238:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17868));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(928));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[31] = (0x0896F25Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-24140));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 351u, 0x08AF5B00u>(ctx, &aot_mem) && ctx.pc == 0x0896F25Cu) goto L_0896F25C;
    return;
L_0896F25C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1141), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0896F288;
      }
      goto L_0896F274;
    }
L_0896F274:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0896F288;
L_0896F288:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(876), 0u);
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(836), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(66))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24020)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(336), ctx.gpr[5]);
    ctx.gpr[31] = (0x0896F2D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0896F494;
L_0896F2D0:
    ctx.gpr[6] = (16329u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[6] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(928), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(932), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(936), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (49236u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(937), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] | 15208u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(976), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(980), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(984), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (49097u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(985), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1024), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1028), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1032), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (16468u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1033), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] | 15208u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1072), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1076), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1080), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (19646u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 48160u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1081), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16255u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 55470u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(322))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15692u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(322))))));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(860), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(544), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(864), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(872), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(874), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(875), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(916), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_0896F418:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0896F460;
      }
      goto L_0896F434;
    }
L_0896F434:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17868));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896F44Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 515u, 0x0889E91Cu>(ctx, &aot_mem) && ctx.pc == 0x0896F44Cu) goto L_0896F44C;
    return;
L_0896F44C:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F460;
      }
      goto L_0896F458;
    }
L_0896F458:
    ctx.gpr[31] = (0x0896F460u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 513u, 0x0889E8F8u>(ctx, &aot_mem) && ctx.pc == 0x0896F460u) goto L_0896F460;
    return;
L_0896F460:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F474:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896F488u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1140), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 819u, 0x08A2FB88u>(ctx, &aot_mem) && ctx.pc == 0x0896F488u) goto L_0896F488;
    return;
L_0896F488:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F494:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896F4A8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 538u, 0x0889EABCu>(ctx, &aot_mem) && ctx.pc == 0x0896F4A8u) goto L_0896F4A8;
    return;
L_0896F4A8:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0896F4B0;
L_0896F4B0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1120), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896F4B0;
      }
      goto L_0896F4C4;
    }
L_0896F4C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x0896F4D0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1120));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 609u, 0x08973D94u>(ctx, &aot_mem) && ctx.pc == 0x0896F4D0u) goto L_0896F4D0;
    return;
L_0896F4D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F4E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F50C;
      }
      goto L_0896F504;
    }
L_0896F504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F570;
      }
      goto L_0896F50C;
    }
L_0896F50C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (2228u << 16u);
    goto L_0896F518;
L_0896F518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F560;
      }
      goto L_0896F52C;
    }
L_0896F52C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1140)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F55C;
      }
      goto L_0896F538;
    }
L_0896F538:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(120));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0896F550u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896F550u) goto L_0896F550;
    return;
L_0896F550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_0896F55C;
L_0896F55C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1140), static_cast<std::uint8_t>(0u));
    goto L_0896F560;
L_0896F560:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896F518;
      }
      goto L_0896F570;
    }
L_0896F570:
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
L_0896F588:
    ctx.gpr[10] = (2228u << 16u);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19200));
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[7] = (2229u << 16u);
    goto L_0896F5A8;
L_0896F5A8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[11]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F614;
      }
      goto L_0896F5BC;
    }
L_0896F5BC:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(916)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896F614;
      }
      goto L_0896F5C8;
    }
L_0896F5C8:
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(916), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[3] = (0u | 0u);
      if (branch_taken) {
          goto L_0896F5F0;
      }
      goto L_0896F5E0;
    }
L_0896F5E0:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[12] = (ctx.gpr[12] << 2u);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[12]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_0896F5F0;
L_0896F5F0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896F608;
      }
      goto L_0896F5F8;
    }
L_0896F5F8:
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_0896F614;
      }
      goto L_0896F608;
    }
L_0896F608:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(912)));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    goto L_0896F614;
L_0896F614:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896F5A8;
      }
      goto L_0896F624;
    }
L_0896F624:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F62C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F634:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0896F678u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x0896F678u) goto L_0896F678;
    return;
L_0896F678:
    ctx.gpr[4] = (0u | 192u);
    ctx.gpr[31] = (0x0896F684u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x0896F684u) goto L_0896F684;
    return;
L_0896F684:
    ctx.gpr[31] = (0x0896F68Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x0896F68Cu) goto L_0896F68C;
    return;
L_0896F68C:
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0896F774;
      }
      goto L_0896F69C;
    }
L_0896F69C:
    ctx.gpr[4] = (16329u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (16534u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52196u);
    ctx.gpr[21] = (ctx.gpr[17] << 2u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (2228u << 16u);
    goto L_0896F6C4;
L_0896F6C4:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x0896F6D0u);
    ctx.gpr[4] = (0u | 1152u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x0896F6D0u) goto L_0896F6D0;
    return;
L_0896F6D0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0896F6EC;
      }
      goto L_0896F6DC;
    }
L_0896F6DC:
    ctx.gpr[5] = (0u | 192u);
    ctx.gpr[31] = (0x0896F6E8u);
    ctx.gpr[6] = (0u | 4u);
    goto L_0896F214;
L_0896F6E8:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_0896F6EC;
L_0896F6EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-27356)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    ctx.gpr[31] = (0x0896F70Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A066A0u>(ctx, &aot_mem) && ctx.pc == 0x0896F70Cu) goto L_0896F70C;
    return;
L_0896F70C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 8u);
    ctx.gpr[16] = (ctx.gpr[16] ^ 1u);
    ctx.gpr[16] = (0u < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0896F748;
      }
      goto L_0896F734;
    }
L_0896F734:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896F740u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A288A8u>(ctx, &aot_mem) && ctx.pc == 0x0896F740u) goto L_0896F740;
    return;
L_0896F740:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F754;
      }
      goto L_0896F748;
    }
L_0896F748:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896F754u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A288A8u>(ctx, &aot_mem) && ctx.pc == 0x0896F754u) goto L_0896F754;
    return;
L_0896F754:
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(848), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(852), static_cast<std::uint16_t>(0u));
    ctx.gpr[31] = (0x0896F764u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x0896F764u) goto L_0896F764;
    return;
L_0896F764:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896F6C4;
      }
      goto L_0896F774;
    }
L_0896F774:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F7AC:
    ctx.gpr[5] = (0u | 1u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(875), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F7B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.gpr[17] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[4] = (17948u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 16282u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (17302u << 16u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (0u | 0u);
    goto L_0896F81C;
L_0896F81C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F890;
      }
      goto L_0896F830;
    }
L_0896F830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896F854u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x0896F854u) goto L_0896F854;
    return;
L_0896F854:
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896F890;
      }
      goto L_0896F878;
    }
L_0896F878:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896F890;
      }
      goto L_0896F888;
    }
L_0896F888:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
    goto L_0896F890;
L_0896F890:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896F81C;
      }
      goto L_0896F8A0;
    }
L_0896F8A0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896F8C0;
      }
      goto L_0896F8AC;
    }
L_0896F8AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0896F8C4;
      }
      goto L_0896F8C0;
    }
L_0896F8C0:
    ctx.gpr[2] = (0u | 0u);
    goto L_0896F8C4;
L_0896F8C4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F8F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896F908u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27304));
    goto L_0896EFA4;
L_0896F908:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F930;
      }
      goto L_0896F918;
    }
L_0896F918:
    ctx.gpr[16] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-27356)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F940;
      }
      goto L_0896F928;
    }
L_0896F928:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F948;
      }
      goto L_0896F930;
    }
L_0896F930:
    ctx.gpr[31] = (0x0896F938u);
    // nop
    goto L_0896FE10;
L_0896F938:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F988;
      }
      goto L_0896F940;
    }
L_0896F940:
    ctx.gpr[31] = (0x0896F948u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0896F998;
L_0896F948:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0896F950;
L_0896F950:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896F950;
      }
      goto L_0896F96C;
    }
L_0896F96C:
    ctx.gpr[31] = (0x0896F974u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x0896F974u) goto L_0896F974;
    return;
L_0896F974:
    ctx.gpr[4] = (0u | 192u);
    ctx.gpr[31] = (0x0896F980u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x0896F980u) goto L_0896F980;
    return;
L_0896F980:
    ctx.gpr[31] = (0x0896F988u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x0896F988u) goto L_0896F988;
    return;
L_0896F988:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F998:
    ctx.gpr[5] = (2228u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27356), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F9A4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(860)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F9AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896F9DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27288));
    goto L_0896EFA4;
L_0896F9DC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(864), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(872), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0896FA20;
      }
      goto L_0896FA0C;
    }
L_0896FA0C:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0896FA20;
L_0896FA20:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0896FA2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0896FA2Cu) goto L_0896FA2C;
    return;
L_0896FA2C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896FA50u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0896EFD0;
L_0896FA50:
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
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0896FA88u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0896EFD0;
L_0896FA88:
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(880), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896FAC8;
      }
      goto L_0896FAC4;
    }
L_0896FAC4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(880), static_cast<std::uint8_t>(0u));
    goto L_0896FAC8;
L_0896FAC8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 184u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 22050u);
    ctx.gpr[10] = (0u | 127u);
    ctx.gpr[11] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0896FAF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 956u, 0x08A9B858u>(ctx, &aot_mem) && ctx.pc == 0x0896FAF4u) goto L_0896FAF4;
    return;
L_0896FAF4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FB18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896FB34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27264));
    goto L_0896EFA4;
L_0896FB34:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(864), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(872), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 184u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 22050u);
    ctx.gpr[10] = (0u | 127u);
    ctx.gpr[11] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0896FB78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 956u, 0x08A9B858u>(ctx, &aot_mem) && ctx.pc == 0x0896FB78u) goto L_0896FB78;
    return;
L_0896FB78:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FB88:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(872))))));
    ctx.gpr[2] = (ctx.gpr[4] ^ 2u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FB98:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(872))))));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FBA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0896FC04;
      }
      goto L_0896FBDC;
    }
L_0896FBDC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(880)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_0896FC0C;
      }
      goto L_0896FBFC;
    }
L_0896FBFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FC14;
      }
      goto L_0896FC04;
    }
L_0896FC04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FD7C;
      }
      goto L_0896FC0C;
    }
L_0896FC0C:
    ctx.gpr[22] = (0u | 2u);
    ctx.gpr[17] = (0u | 3u);
    goto L_0896FC14;
L_0896FC14:
    ctx.gpr[6] = (ctx.gpr[22] << 4u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[22] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[18] = (0u | 12u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(928));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (0u | 4u);
        goto L_0896FC34;
    }
    goto L_0896FC34;
L_0896FC34:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1120)));
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
      if (branch_taken) {
          goto L_0896FC60;
      }
      goto L_0896FC48;
    }
L_0896FC48:
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
        goto L_0896FC64;
    }
    goto L_0896FC54;
L_0896FC54:
    ctx.gpr[31] = (0x0896FC5Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x0896FC5Cu) goto L_0896FC5C;
    return;
L_0896FC5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_0896FC60;
L_0896FC60:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_0896FC64;
L_0896FC64:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x0896FC78u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x0896FC78u) goto L_0896FC78;
    return;
L_0896FC78:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(880)));
    ctx.gpr[18] = (0u | 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (0u | 8u);
        goto L_0896FC8C;
    }
    goto L_0896FC8C;
L_0896FC8C:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1120)));
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), 0u);
      if (branch_taken) {
          goto L_0896FCB8;
      }
      goto L_0896FCA0;
    }
L_0896FCA0:
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
        goto L_0896FCBC;
    }
    goto L_0896FCAC;
L_0896FCAC:
    ctx.gpr[31] = (0x0896FCB4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x0896FCB4u) goto L_0896FCB4;
    return;
L_0896FCB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    goto L_0896FCB8;
L_0896FCB8:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_0896FCBC;
L_0896FCBC:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[31] = (0x0896FCD0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x0896FCD0u) goto L_0896FCD0;
    return;
L_0896FCD0:
    ctx.gpr[31] = (0x0896FCD8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 636u, 0x08A071B0u>(ctx, &aot_mem) && ctx.pc == 0x0896FCD8u) goto L_0896FCD8;
    return;
L_0896FCD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FCE0;
      }
      goto L_0896FCE0;
    }
L_0896FCE0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0896FCECu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 617u, 0x08A07080u>(ctx, &aot_mem) && ctx.pc == 0x0896FCECu) goto L_0896FCEC;
    return;
L_0896FCEC:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(928));
    ctx.gpr[31] = (0x0896FD0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 617u, 0x08A07080u>(ctx, &aot_mem) && ctx.pc == 0x0896FD0Cu) goto L_0896FD0C;
    return;
L_0896FD0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x0896FD18u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 491u, 0x08A05F10u>(ctx, &aot_mem) && ctx.pc == 0x0896FD18u) goto L_0896FD18;
    return;
L_0896FD18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x0896FD24u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 491u, 0x08A05F10u>(ctx, &aot_mem) && ctx.pc == 0x0896FD24u) goto L_0896FD24;
    return;
L_0896FD24:
    ctx.gpr[31] = (0x0896FD2Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x0896FD2Cu) goto L_0896FD2C;
    return;
L_0896FD2C:
    ctx.gpr[31] = (0x0896FD34u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x0896FD34u) goto L_0896FD34;
    return;
L_0896FD34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_0896FD5C;
    }
    goto L_0896FD44;
L_0896FD44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_0896FD5C;
    }
    goto L_0896FD50;
L_0896FD50:
    ctx.gpr[31] = (0x0896FD58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x0896FD58u) goto L_0896FD58;
    return;
L_0896FD58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_0896FD5C;
L_0896FD5C:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FD7C;
      }
      goto L_0896FD68;
    }
L_0896FD68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FD7C;
      }
      goto L_0896FD74;
    }
L_0896FD74:
    ctx.gpr[31] = (0x0896FD7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x0896FD7Cu) goto L_0896FD7C;
    return;
L_0896FD7C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FDA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (16320u << 16u);
      if (branch_taken) {
          goto L_0896FE00;
      }
      goto L_0896FDB4;
    }
L_0896FDB4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    goto L_0896FDBC;
L_0896FDBC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0896FDF8;
      }
      goto L_0896FDC8;
    }
L_0896FDC8:
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896FDF8;
      }
      goto L_0896FDEC;
    }
L_0896FDEC:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[8] = (ctx.gpr[8] | 64u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[8]));
    goto L_0896FDF8;
L_0896FDF8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896FDBC;
      }
      goto L_0896FE00;
    }
L_0896FE00:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FE08:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(864), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FE10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (2228u << 16u);
    goto L_0896FE24;
L_0896FE24:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896FE24;
      }
      goto L_0896FE40;
    }
L_0896FE40:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x0896FE4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27240));
    goto L_0896EFA4;
L_0896FE4C:
    ctx.gpr[31] = (0x0896FE54u);
    ctx.gpr[4] = (0u | 192u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x0896FE54u) goto L_0896FE54;
    return;
L_0896FE54:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FE60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1141)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896FF28;
      }
      goto L_0896FE74;
    }
L_0896FE74:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1141), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896FF28;
      }
      goto L_0896FECC;
    }
L_0896FECC:
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    ctx.gpr[5] = (17150u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 18000u);
    ctx.gpr[11] = (0u | 50u);
    ctx.gpr[31] = (0x0896FF28u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 956u, 0x08A9B858u>(ctx, &aot_mem) && ctx.pc == 0x0896FF28u) goto L_0896FF28;
    return;
L_0896FF28:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FF34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-944));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-29215)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(872), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(876), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(880), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(884), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(888), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(892), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(896), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(900), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(904), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(908), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(912), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(916), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(920), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(924), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(928), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0896FFA0;
      }
      goto L_0896FF84;
    }
L_0896FF84:
    ctx.gpr[31] = (0x0896FF8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0896F000;
L_0896FF8C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(850))))));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(848))))));
        goto L_0896FFC4;
    }
    goto L_0896FF98;
L_0896FF98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(848))))));
      if (branch_taken) {
          goto L_0896FFA8;
      }
      goto L_0896FFA0;
    }
L_0896FFA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 145u, 0x08970DACu>(ctx, &aot_mem); return;
      }
      goto L_0896FFA8;
    }
L_0896FFA8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 145u, 0x08970DACu>(ctx, &aot_mem); return;
      }
      goto L_0896FFC0;
    }
L_0896FFC0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(848))))));
    goto L_0896FFC4;
L_0896FFC4:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (16256u << 16u);
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.pc = 0x08970000u; return;
}

void recomp_unit_0090(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0090_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_90(Runtime &runtime) {
    runtime.register_generated_unit(90u, 0x0896C000u, 16384u, &recomp_unit_0090, &recomp_unit_0090_entry);
    runtime.register_function(0x0896C000u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C008u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C010u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C014u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C020u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C030u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C038u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C048u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C054u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C060u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C068u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C06Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C078u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C088u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C090u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C104u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C110u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C118u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C11Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C128u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C138u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C140u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C150u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C15Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C168u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C170u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C174u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C180u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C190u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C194u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C19Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C1B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C1BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C1F4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C248u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C254u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C260u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C26Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C278u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C284u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C290u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C29Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C2B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C2BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C308u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C310u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C318u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C334u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C358u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C370u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C380u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C3A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C3B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C3D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C418u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C440u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C460u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C494u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C4B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C4FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C504u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C510u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C530u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C538u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C544u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C550u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C564u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C570u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C578u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C580u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C588u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C590u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C59Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C608u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C618u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C624u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C630u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C640u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C648u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C650u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C658u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C660u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C668u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C67Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C688u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C690u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C698u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C708u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C718u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C724u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C730u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C744u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C74Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C754u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C75Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C764u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C774u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C77Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C784u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C78Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C794u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C79Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7F4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C804u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C80Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C81Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C828u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C834u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C840u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C854u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C85Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C864u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C86Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C874u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C87Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C88Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C894u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C89Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C8A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C8ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C8BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C8CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C8D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C8E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C8F4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C900u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C918u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C920u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C92Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C934u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C938u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C958u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C95Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C96Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C978u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C990u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C998u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA48u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA54u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA80u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA88u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA90u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CAACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CAB4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CAC0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CAC8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CAD0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CADCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CAE8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CB00u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CB10u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CB18u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CB20u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CB30u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CB70u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CBC8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CBD0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CCD0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CCECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CCF8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD0Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD14u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD1Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD2Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD34u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD3Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD44u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD50u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD60u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD64u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CDD0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CDD8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CDE0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CDF0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CDFCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CE08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CE18u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CE80u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CE9Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CEB0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CEF0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CEF8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF0Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF18u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF30u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF3Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF44u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF4Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF50u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF5Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF6Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF9Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CFB8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CFD0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CFD8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D01Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D06Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D074u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D084u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D090u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D0A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D0FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D118u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D128u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D140u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D158u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D198u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D1A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D1B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D1CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D1D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D1ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D1F4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D204u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D210u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D21Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D22Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D238u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D250u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D258u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D264u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D26Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D270u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D280u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D28Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2F4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D300u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D310u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D320u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D338u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D368u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D378u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D388u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D394u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D404u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D40Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D41Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D42Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D448u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D454u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D45Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D46Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D488u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D490u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D49Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D4ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D4BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D4D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D4D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D508u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D510u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D51Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D534u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D544u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D54Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D564u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D574u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D5DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D5ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D650u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D670u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D67Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D688u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D694u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D698u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D69Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D6ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D6B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D6DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D6E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D734u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D758u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D764u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D774u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D784u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D78Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D7C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D7D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D7E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D7F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D810u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D860u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D868u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D88Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D93Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D9A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D9ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D9D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D9E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D9F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA0Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA1Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA2Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA3Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA44u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA48u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA50u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA58u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA64u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA6Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA7Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA98u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DAA4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DAC0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DACCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DAE8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DAF4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB10u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB1Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB38u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB44u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB70u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB98u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DBA8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DBB4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DBD4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DBE0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DBFCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC30u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC4Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC58u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC74u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC80u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DCA8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DCD0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DCD8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DCE8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DCF4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DD14u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DD20u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DD3Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DD48u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DD64u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DD70u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DD8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DD98u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DDB4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DDC0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DDECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DE14u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DE24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DE30u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DE50u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DE5Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DE78u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DE84u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DEA0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DEACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DEC8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DED4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DEF0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DEFCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF4Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF54u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF58u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF68u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF74u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF90u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF9Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DFB8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DFC4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DFE0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DFECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E000u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E01Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E02Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E03Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E048u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E058u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E064u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E074u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E080u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E090u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E09Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E0A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E0C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E0D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E0DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E118u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E2CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E358u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E360u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E378u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E39Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E404u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E410u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E41Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E43Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E448u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E454u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E464u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E474u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E488u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E490u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E500u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E538u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E544u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E558u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E568u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E580u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E588u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E5B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E5C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E5D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E5E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E604u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E62Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E638u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E664u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E69Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E794u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7F4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E800u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E80Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E818u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E824u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E830u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E83Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E848u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E854u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E860u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E86Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E878u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E884u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E890u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E89Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E8A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E8B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E8C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E8CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E8D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E8E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E8F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E8FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E908u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E914u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E920u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E92Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E938u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E944u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E950u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E95Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E968u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E974u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E980u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E98Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E998u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E9A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E9B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E9BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E9C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E9D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E9E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E9ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E9F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA04u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA10u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA1Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA28u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA34u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA40u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA4Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA58u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA64u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA70u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA7Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA88u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA94u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EAA0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EAACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EAB8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EAC4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EAD0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EADCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EAE8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EAF4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB00u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB0Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB18u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB30u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB3Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB48u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB54u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB60u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB6Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB78u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB84u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB90u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB9Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBA8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBB4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBC0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBCCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBD8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBE4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBF0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBFCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC14u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC20u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC2Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC38u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC44u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC50u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC5Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC68u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC74u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC80u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC98u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECA4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECB0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECBCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECC8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECD4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECE0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECF8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED04u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED10u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED1Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED28u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED34u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED40u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED54u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED64u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED6Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED74u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED98u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EDC4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EDD0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EDDCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EDE4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EDECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EDF4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EDF8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE00u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE34u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE50u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE64u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE78u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE94u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE9Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EEA8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EEB0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EEC4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EED8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EEE4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EEFCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EF08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EF2Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EFA4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EFD0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EFF8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F000u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F010u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F03Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F050u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F068u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F070u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F08Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F09Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F0A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F0D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F128u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F148u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F154u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F1B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F1B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F204u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F20Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F214u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F238u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F25Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F274u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F288u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F2D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F418u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F434u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F44Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F458u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F460u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F474u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F488u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F494u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F504u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F50Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F518u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F52Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F538u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F550u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F55Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F560u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F570u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F588u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F5A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F5BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F5C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F5E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F5F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F5F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F608u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F614u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F624u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F62Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F634u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F678u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F684u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F68Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F69Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F6C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F6D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F6DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F6E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F6ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F70Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F734u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F740u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F748u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F754u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F764u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F774u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F7ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F7B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F81Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F830u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F854u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F878u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F888u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F890u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F8A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F8ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F8C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F8C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F8F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F908u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F918u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F928u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F930u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F938u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F940u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F948u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F950u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F96Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F974u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F980u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F988u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F998u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F9A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F9ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F9DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA0Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA20u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA2Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA50u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA88u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FAC4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FAC8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FAF4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB18u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB34u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB78u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB88u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB98u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBA4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBDCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBFCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC04u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC0Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC14u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC34u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC48u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC54u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC5Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC60u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC64u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC78u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCA0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCB4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCB8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCBCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCD0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCD8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCE0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD0Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD18u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD2Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD34u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD44u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD50u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD58u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD5Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD68u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD74u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD7Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDA8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDB4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDBCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDC8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDF8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE00u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE10u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE40u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE4Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE54u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE60u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE74u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FECCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF28u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF34u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF84u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF98u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFA0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFA8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFC0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFC4u, &recomp_unit_0090, "recomp_unit_0090");
}
} // namespace psprecomp
