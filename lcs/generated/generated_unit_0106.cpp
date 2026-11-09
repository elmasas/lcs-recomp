#include "lcs_controls.hpp"
#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "lcs_trainer.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0106[4080] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 6, 0, 7, 0, 0, 8, 0, 0, 0, 0,
    9, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 12, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17,
    0, 0, 0, 18, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 30, 0, 0, 0, 31, 0, 32, 0, 33,
    0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46,
    0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 50, 0, 0, 51, 0, 52, 0, 0, 53, 0,
    54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 69,
    0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 79, 0, 80, 0, 81,
    0, 82, 0, 83, 0, 84, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0,
    0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 97, 0, 98, 0, 99,
    0, 100, 0, 0, 0, 0, 101, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0, 120, 0,
    121, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0,
    142, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148,
    0, 0, 0, 0, 0, 0, 149, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0,
    0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 158, 0, 0, 0, 159, 0, 160, 0, 161, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168,
    0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0,
    0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 192, 193, 0, 194, 0, 0, 195, 196, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 200, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0,
    0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0,
    0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    226, 0, 227, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0,
    231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 0, 0, 236, 0, 0, 0,
    237, 0, 0, 0, 238, 0, 0, 239, 0, 240, 0, 241, 0, 242, 0, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 246, 247, 0, 248, 0, 0,
    0, 249, 0, 0, 250, 0, 251, 0, 252, 0, 0, 0, 253, 0, 0, 254, 0, 255, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 259, 0,
    260, 0, 261, 0, 262, 0, 263, 0, 264, 0, 265, 0, 0, 0, 266, 0, 267, 0, 0, 0, 268, 0, 269, 0, 270, 0, 271, 0, 272, 0, 0, 0,
    273, 0, 0, 274, 0, 0, 275, 0, 0, 276, 277, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 281, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 283, 0, 284, 0, 0, 285, 0, 0, 286, 0, 287, 0, 288, 0, 0, 289,
    0, 0, 0, 290, 0, 0, 0, 291, 0, 292, 0, 0, 0, 293, 0, 0, 294, 0, 0, 295, 0, 0, 296, 0, 0, 297, 298, 0, 299, 0, 0, 0,
    300, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 305, 0, 306, 0, 307, 0, 308, 0,
    0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 314, 0, 0, 315, 0, 316, 0, 0, 0, 317,
    0, 318, 0, 319, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 328, 0, 0, 329, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 0,
    332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 340,
    0, 341, 0, 342, 0, 0, 0, 343, 344, 0, 0, 345, 0, 0, 0, 0, 0, 346, 347, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350,
    0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 353, 0, 0, 0, 354, 0, 355, 0, 356, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364,
    0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 370, 0, 371, 0, 0, 0, 372, 0, 373, 0,
    0, 0, 0, 374, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 381, 0, 0, 0,
    382, 0, 0, 383, 0, 0, 384, 0, 0, 385, 386, 0, 387, 388, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 391, 0, 0, 392, 393, 0, 394,
    0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 399, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 403, 0, 404, 0,
    0, 405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    408, 0, 409, 0, 0, 410, 0, 0, 411, 0, 0, 412, 0, 0, 413, 0, 0, 0, 414, 0, 415, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 418,
    0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 423, 424, 0, 0, 425, 0, 426, 0, 0, 427, 0, 428, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 431, 0, 432, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0,
    435, 0, 0, 436, 0, 437, 0, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 440, 441, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 446, 0, 447, 0, 448, 0, 0, 449, 0, 450,
    0, 451, 0, 0, 452, 0, 453, 0, 454, 0, 0, 455, 0, 456, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 459, 460, 0, 461, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 464, 0, 465, 0, 466,
    0, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 469, 0, 470, 0, 0, 471, 0, 0, 472, 0, 0, 473, 0, 0, 474, 0, 475, 0, 0, 476,
    0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 479, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 482, 0, 0, 0, 0, 483, 0, 484, 0, 0, 0,
    485, 0, 0, 486, 487, 0, 0, 0, 488, 0, 489, 0, 490, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 495,
    0, 496, 0, 497, 0, 0, 498, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 501, 0, 0, 0, 0, 0, 502, 0, 0, 503, 0, 0, 504, 0, 0,
    505, 0, 0, 506, 507, 0, 508, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0,
    0, 511, 0, 512, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 0, 0, 515, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 518, 0, 0, 519, 0,
    0, 520, 0, 0, 521, 522, 0, 523, 0, 0, 524, 0, 0, 525, 0, 0, 0, 526, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 529, 0, 0, 0,
    0, 530, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 533, 0,
    534, 0, 0, 535, 0, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 540, 0, 0, 0, 0, 541, 542, 0, 0,
    0, 0, 0, 0, 0, 543, 0, 0, 544, 545, 0, 0, 0, 546, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 550, 0, 551, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 563, 0, 564, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 567, 0,
    568, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 570, 0, 571, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 574, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 578, 0, 0, 0, 0, 0, 0,
    0, 579, 0, 0, 580, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583,
    584, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 589, 0, 590, 0, 591, 0, 0, 0, 0, 0, 592, 0, 593, 0, 594, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 602, 0, 0, 603, 0, 0, 0, 0, 604, 0, 605, 0, 606, 0, 0, 0,
    607, 0, 0, 0, 608, 609, 0, 0, 610, 0, 0, 0, 611, 0, 0, 612, 0, 0, 0, 613, 0, 0, 614, 0, 0, 0, 615, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 621, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 625, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 630, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 633, 634, 0, 635, 0, 0, 0, 0, 636, 0, 0, 637, 0, 0, 0, 638, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 640,
    0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 643, 0, 0, 0, 0, 644, 0, 0, 0,
    645, 0, 646, 0, 0, 0, 647, 648, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 657, 0,
    658, 0, 0, 0, 0, 659, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 663, 0, 0, 0, 664, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 666, 0, 0, 0, 0, 667, 0, 0, 0, 668, 0, 669, 0, 0, 0, 670, 671,
    0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 675, 0, 0, 0, 0, 676, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 679, 0, 0, 680,
    0, 0, 0, 0, 681, 0, 682, 0, 0, 683, 0, 684, 0, 0, 685, 0, 686, 0, 0, 687, 0, 0, 0, 688, 0, 689, 0, 0, 0, 690, 0, 0,
    691, 0, 692, 0, 0, 0, 693, 0, 0, 0, 0, 694, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 696, 0, 697, 0, 698, 0, 0, 0, 0, 699, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 702, 0, 0, 703, 0, 704, 0, 0, 0, 0, 705, 0, 0,
    0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 707, 0, 0, 0, 708, 0, 0, 0, 0, 709, 0, 710, 0, 711, 0, 0, 0, 0, 712, 0, 0, 713, 714, 0, 0, 0, 715, 716,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 717,
};
void recomp_unit_0106_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089AC004u;
        entry_id = (entry_delta < 16320u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0106[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089AC004;
    case 2u: goto L_089AC014;
    case 3u: goto L_089AC024;
    case 4u: goto L_089AC04C;
    case 5u: goto L_089AC054;
    case 6u: goto L_089AC05C;
    case 7u: goto L_089AC064;
    case 8u: goto L_089AC070;
    case 9u: goto L_089AC084;
    case 10u: goto L_089AC094;
    case 11u: goto L_089AC0A8;
    case 12u: goto L_089AC0B4;
    case 13u: goto L_089AC0BC;
    case 14u: goto L_089AC0D0;
    case 15u: goto L_089AC0E0;
    case 16u: goto L_089AC0F0;
    case 17u: goto L_089AC100;
    case 18u: goto L_089AC110;
    case 19u: goto L_089AC118;
    case 20u: goto L_089AC128;
    case 21u: goto L_089AC144;
    case 22u: goto L_089AC160;
    case 23u: goto L_089AC1A0;
    case 24u: goto L_089AC1A8;
    case 25u: goto L_089AC1BC;
    case 26u: goto L_089AC1C4;
    case 27u: goto L_089AC1CC;
    case 28u: goto L_089AC1D4;
    case 29u: goto L_089AC1DC;
    case 30u: goto L_089AC1E0;
    case 31u: goto L_089AC1F0;
    case 32u: goto L_089AC1F8;
    case 33u: goto L_089AC200;
    case 34u: goto L_089AC214;
    case 35u: goto L_089AC220;
    case 36u: goto L_089AC238;
    case 37u: goto L_089AC244;
    case 38u: goto L_089AC254;
    case 39u: goto L_089AC264;
    case 40u: goto L_089AC274;
    case 41u: goto L_089AC284;
    case 42u: goto L_089AC2A8;
    case 43u: goto L_089AC2BC;
    case 44u: goto L_089AC2D0;
    case 45u: goto L_089AC2F4;
    case 46u: goto L_089AC300;
    case 47u: goto L_089AC30C;
    case 48u: goto L_089AC344;
    case 49u: goto L_089AC354;
    case 50u: goto L_089AC35C;
    case 51u: goto L_089AC368;
    case 52u: goto L_089AC370;
    case 53u: goto L_089AC37C;
    case 54u: goto L_089AC384;
    case 55u: goto L_089AC38C;
    case 56u: goto L_089AC3AC;
    case 57u: goto L_089AC3BC;
    case 58u: goto L_089AC3D0;
    case 59u: goto L_089AC3D8;
    case 60u: goto L_089AC3E4;
    case 61u: goto L_089AC41C;
    case 62u: goto L_089AC44C;
    case 63u: goto L_089AC46C;
    case 64u: goto L_089AC4A0;
    case 65u: goto L_089AC4AC;
    case 66u: goto L_089AC4C8;
    case 67u: goto L_089AC4DC;
    case 68u: goto L_089AC4F0;
    case 69u: goto L_089AC500;
    case 70u: goto L_089AC514;
    case 71u: goto L_089AC520;
    case 72u: goto L_089AC534;
    case 73u: goto L_089AC540;
    case 74u: goto L_089AC548;
    case 75u: goto L_089AC5F4;
    case 76u: goto L_089AC628;
    case 77u: goto L_089AC660;
    case 78u: goto L_089AC668;
    case 79u: goto L_089AC670;
    case 80u: goto L_089AC678;
    case 81u: goto L_089AC680;
    case 82u: goto L_089AC688;
    case 83u: goto L_089AC690;
    case 84u: goto L_089AC698;
    case 85u: goto L_089AC6A0;
    case 86u: goto L_089AC6AC;
    case 87u: goto L_089AC6D4;
    case 88u: goto L_089AC6F8;
    case 89u: goto L_089AC70C;
    case 90u: goto L_089AC728;
    case 91u: goto L_089AC738;
    case 92u: goto L_089AC748;
    case 93u: goto L_089AC760;
    case 94u: goto L_089AC7D0;
    case 95u: goto L_089AC7DC;
    case 96u: goto L_089AC7E8;
    case 97u: goto L_089AC7F0;
    case 98u: goto L_089AC7F8;
    case 99u: goto L_089AC800;
    case 100u: goto L_089AC808;
    case 101u: goto L_089AC81C;
    case 102u: goto L_089AC824;
    case 103u: goto L_089AC830;
    case 104u: goto L_089AC850;
    case 105u: goto L_089AC868;
    case 106u: goto L_089AC884;
    case 107u: goto L_089AC894;
    case 108u: goto L_089AC8A4;
    case 109u: goto L_089AC8BC;
    case 110u: goto L_089AC924;
    case 111u: goto L_089AC940;
    case 112u: goto L_089AC94C;
    case 113u: goto L_089AC978;
    case 114u: goto L_089AC9A4;
    case 115u: goto L_089AC9B0;
    case 116u: goto L_089AC9CC;
    case 117u: goto L_089AC9E0;
    case 118u: goto L_089AC9EC;
    case 119u: goto L_089AC9F4;
    case 120u: goto L_089AC9FC;
    case 121u: goto L_089ACA04;
    case 122u: goto L_089ACA0C;
    case 123u: goto L_089ACA18;
    case 124u: goto L_089ACA38;
    case 125u: goto L_089ACA4C;
    case 126u: goto L_089ACA80;
    case 127u: goto L_089ACB10;
    case 128u: goto L_089ACB20;
    case 129u: goto L_089ACB34;
    case 130u: goto L_089ACB40;
    case 131u: goto L_089ACBA4;
    case 132u: goto L_089ACBB4;
    case 133u: goto L_089ACBCC;
    case 134u: goto L_089ACBE0;
    case 135u: goto L_089ACBE4;
    case 136u: goto L_089ACC10;
    case 137u: goto L_089ACC18;
    case 138u: goto L_089ACC4C;
    case 139u: goto L_089ACCB8;
    case 140u: goto L_089ACCE0;
    case 141u: goto L_089ACCE8;
    case 142u: goto L_089ACD04;
    case 143u: goto L_089ACD10;
    case 144u: goto L_089ACD24;
    case 145u: goto L_089ACD38;
    case 146u: goto L_089ACD3C;
    case 147u: goto L_089ACD60;
    case 148u: goto L_089ACD80;
    case 149u: goto L_089ACD9C;
    case 150u: goto L_089ACDA0;
    case 151u: goto L_089ACDBC;
    case 152u: goto L_089ACDD0;
    case 153u: goto L_089ACDE8;
    case 154u: goto L_089ACDF8;
    case 155u: goto L_089ACE18;
    case 156u: goto L_089ACE34;
    case 157u: goto L_089ACE50;
    case 158u: goto L_089ACE90;
    case 159u: goto L_089ACEA0;
    case 160u: goto L_089ACEA8;
    case 161u: goto L_089ACEB0;
    case 162u: goto L_089ACEBC;
    case 163u: goto L_089ACECC;
    case 164u: goto L_089ACEF8;
    case 165u: goto L_089ACF00;
    case 166u: goto L_089ACF58;
    case 167u: goto L_089ACF60;
    case 168u: goto L_089ACF80;
    case 169u: goto L_089ACF94;
    case 170u: goto L_089ACFAC;
    case 171u: goto L_089ACFB0;
    case 172u: goto L_089AD020;
    case 173u: goto L_089AD040;
    case 174u: goto L_089AD098;
    case 175u: goto L_089AD0AC;
    case 176u: goto L_089AD0B4;
    case 177u: goto L_089AD0C8;
    case 178u: goto L_089AD0D4;
    case 179u: goto L_089AD0E4;
    case 180u: goto L_089AD118;
    case 181u: goto L_089AD144;
    case 182u: goto L_089AD14C;
    case 183u: goto L_089AD168;
    case 184u: goto L_089AD188;
    case 185u: goto L_089AD198;
    case 186u: goto L_089AD1AC;
    case 187u: goto L_089AD1BC;
    case 188u: goto L_089AD208;
    case 189u: goto L_089AD230;
    case 190u: goto L_089AD23C;
    case 191u: goto L_089AD248;
    case 192u: goto L_089AD254;
    case 193u: goto L_089AD258;
    case 194u: goto L_089AD260;
    case 195u: goto L_089AD26C;
    case 196u: goto L_089AD270;
    case 197u: goto L_089AD2A0;
    case 198u: goto L_089AD2D4;
    case 199u: goto L_089AD378;
    case 200u: goto L_089AD37C;
    case 201u: goto L_089AD3AC;
    case 202u: goto L_089AD3C0;
    case 203u: goto L_089AD3FC;
    case 204u: goto L_089AD42C;
    case 205u: goto L_089AD458;
    case 206u: goto L_089AD4C0;
    case 207u: goto L_089AD4C8;
    case 208u: goto L_089AD4D0;
    case 209u: goto L_089AD508;
    case 210u: goto L_089AD52C;
    case 211u: goto L_089AD54C;
    case 212u: goto L_089AD55C;
    case 213u: goto L_089AD56C;
    case 214u: goto L_089AD588;
    case 215u: goto L_089AD5B8;
    case 216u: goto L_089AD5C0;
    case 217u: goto L_089AD5C8;
    case 218u: goto L_089AD5E0;
    case 219u: goto L_089AD5F8;
    case 220u: goto L_089AD618;
    case 221u: goto L_089AD638;
    case 222u: goto L_089AD688;
    case 223u: goto L_089AD698;
    case 224u: goto L_089AD6A8;
    case 225u: goto L_089AD6C4;
    case 226u: goto L_089AD704;
    case 227u: goto L_089AD70C;
    case 228u: goto L_089AD714;
    case 229u: goto L_089AD72C;
    case 230u: goto L_089AD77C;
    case 231u: goto L_089AD784;
    case 232u: goto L_089AD794;
    case 233u: goto L_089AD7C0;
    case 234u: goto L_089AD7DC;
    case 235u: goto L_089AD7E4;
    case 236u: goto L_089AD7F4;
    case 237u: goto L_089AD804;
    case 238u: goto L_089AD814;
    case 239u: goto L_089AD820;
    case 240u: goto L_089AD828;
    case 241u: goto L_089AD830;
    case 242u: goto L_089AD838;
    case 243u: goto L_089AD848;
    case 244u: goto L_089AD854;
    case 245u: goto L_089AD860;
    case 246u: goto L_089AD86C;
    case 247u: goto L_089AD870;
    case 248u: goto L_089AD878;
    case 249u: goto L_089AD888;
    case 250u: goto L_089AD894;
    case 251u: goto L_089AD89C;
    case 252u: goto L_089AD8A4;
    case 253u: goto L_089AD8B4;
    case 254u: goto L_089AD8C0;
    case 255u: goto L_089AD8C8;
    case 256u: goto L_089AD8D4;
    case 257u: goto L_089AD8E4;
    case 258u: goto L_089AD8F4;
    case 259u: goto L_089AD8FC;
    case 260u: goto L_089AD904;
    case 261u: goto L_089AD90C;
    case 262u: goto L_089AD914;
    case 263u: goto L_089AD91C;
    case 264u: goto L_089AD924;
    case 265u: goto L_089AD92C;
    case 266u: goto L_089AD93C;
    case 267u: goto L_089AD944;
    case 268u: goto L_089AD954;
    case 269u: goto L_089AD95C;
    case 270u: goto L_089AD964;
    case 271u: goto L_089AD96C;
    case 272u: goto L_089AD974;
    case 273u: goto L_089AD984;
    case 274u: goto L_089AD990;
    case 275u: goto L_089AD99C;
    case 276u: goto L_089AD9A8;
    case 277u: goto L_089AD9AC;
    case 278u: goto L_089AD9B4;
    case 279u: goto L_089AD9DC;
    case 280u: goto L_089AD9E8;
    case 281u: goto L_089AD9F8;
    case 282u: goto L_089ADA38;
    case 283u: goto L_089ADA44;
    case 284u: goto L_089ADA4C;
    case 285u: goto L_089ADA58;
    case 286u: goto L_089ADA64;
    case 287u: goto L_089ADA6C;
    case 288u: goto L_089ADA74;
    case 289u: goto L_089ADA80;
    case 290u: goto L_089ADA90;
    case 291u: goto L_089ADAA0;
    case 292u: goto L_089ADAA8;
    case 293u: goto L_089ADAB8;
    case 294u: goto L_089ADAC4;
    case 295u: goto L_089ADAD0;
    case 296u: goto L_089ADADC;
    case 297u: goto L_089ADAE8;
    case 298u: goto L_089ADAEC;
    case 299u: goto L_089ADAF4;
    case 300u: goto L_089ADB04;
    case 301u: goto L_089ADB08;
    case 302u: goto L_089ADB20;
    case 303u: goto L_089ADB44;
    case 304u: goto L_089ADB5C;
    case 305u: goto L_089ADB64;
    case 306u: goto L_089ADB6C;
    case 307u: goto L_089ADB74;
    case 308u: goto L_089ADB7C;
    case 309u: goto L_089ADB88;
    case 310u: goto L_089ADB94;
    case 311u: goto L_089ADBB0;
    case 312u: goto L_089ADBC4;
    case 313u: goto L_089ADBCC;
    case 314u: goto L_089ADBDC;
    case 315u: goto L_089ADBE8;
    case 316u: goto L_089ADBF0;
    case 317u: goto L_089ADC00;
    case 318u: goto L_089ADC08;
    case 319u: goto L_089ADC10;
    case 320u: goto L_089ADC20;
    case 321u: goto L_089ADC30;
    case 322u: goto L_089ADC40;
    case 323u: goto L_089ADC50;
    case 324u: goto L_089ADC6C;
    case 325u: goto L_089ADC94;
    case 326u: goto L_089ADC9C;
    case 327u: goto L_089ADCC4;
    case 328u: goto L_089ADCC8;
    case 329u: goto L_089ADCD4;
    case 330u: goto L_089ADCDC;
    case 331u: goto L_089ADCE4;
    case 332u: goto L_089ADD04;
    case 333u: goto L_089ADD18;
    case 334u: goto L_089ADD2C;
    case 335u: goto L_089ADD34;
    case 336u: goto L_089ADD48;
    case 337u: goto L_089ADD50;
    case 338u: goto L_089ADD64;
    case 339u: goto L_089ADD78;
    case 340u: goto L_089ADD80;
    case 341u: goto L_089ADD88;
    case 342u: goto L_089ADD90;
    case 343u: goto L_089ADDA0;
    case 344u: goto L_089ADDA4;
    case 345u: goto L_089ADDB0;
    case 346u: goto L_089ADDC8;
    case 347u: goto L_089ADDCC;
    case 348u: goto L_089ADDD4;
    case 349u: goto L_089ADDEC;
    case 350u: goto L_089ADE00;
    case 351u: goto L_089ADE20;
    case 352u: goto L_089ADE30;
    case 353u: goto L_089ADE38;
    case 354u: goto L_089ADE48;
    case 355u: goto L_089ADE50;
    case 356u: goto L_089ADE58;
    case 357u: goto L_089ADE60;
    case 358u: goto L_089ADE7C;
    case 359u: goto L_089ADEB0;
    case 360u: goto L_089ADEC0;
    case 361u: goto L_089ADEC8;
    case 362u: goto L_089ADED0;
    case 363u: goto L_089ADEEC;
    case 364u: goto L_089ADF00;
    case 365u: goto L_089ADF08;
    case 366u: goto L_089ADF18;
    case 367u: goto L_089ADF2C;
    case 368u: goto L_089ADF44;
    case 369u: goto L_089ADF54;
    case 370u: goto L_089ADF5C;
    case 371u: goto L_089ADF64;
    case 372u: goto L_089ADF74;
    case 373u: goto L_089ADF7C;
    case 374u: goto L_089ADF90;
    case 375u: goto L_089ADF98;
    case 376u: goto L_089ADFA4;
    case 377u: goto L_089ADFBC;
    case 378u: goto L_089ADFC8;
    case 379u: goto L_089ADFE0;
    case 380u: goto L_089ADFEC;
    case 381u: goto L_089ADFF4;
    case 382u: goto L_089AE004;
    case 383u: goto L_089AE010;
    case 384u: goto L_089AE01C;
    case 385u: goto L_089AE028;
    case 386u: goto L_089AE02C;
    case 387u: goto L_089AE034;
    case 388u: goto L_089AE038;
    case 389u: goto L_089AE04C;
    case 390u: goto L_089AE058;
    case 391u: goto L_089AE068;
    case 392u: goto L_089AE074;
    case 393u: goto L_089AE078;
    case 394u: goto L_089AE080;
    case 395u: goto L_089AE0A0;
    case 396u: goto L_089AE0B4;
    case 397u: goto L_089AE0D4;
    case 398u: goto L_089AE124;
    case 399u: goto L_089AE12C;
    case 400u: goto L_089AE144;
    case 401u: goto L_089AE14C;
    case 402u: goto L_089AE16C;
    case 403u: goto L_089AE174;
    case 404u: goto L_089AE17C;
    case 405u: goto L_089AE188;
    case 406u: goto L_089AE1A8;
    case 407u: goto L_089AE1B0;
    case 408u: goto L_089AE204;
    case 409u: goto L_089AE20C;
    case 410u: goto L_089AE218;
    case 411u: goto L_089AE224;
    case 412u: goto L_089AE230;
    case 413u: goto L_089AE23C;
    case 414u: goto L_089AE24C;
    case 415u: goto L_089AE254;
    case 416u: goto L_089AE264;
    case 417u: goto L_089AE270;
    case 418u: goto L_089AE280;
    case 419u: goto L_089AE294;
    case 420u: goto L_089AE2A0;
    case 421u: goto L_089AE2B4;
    case 422u: goto L_089AE2BC;
    case 423u: goto L_089AE2D0;
    case 424u: goto L_089AE2D4;
    case 425u: goto L_089AE2E0;
    case 426u: goto L_089AE2E8;
    case 427u: goto L_089AE2F4;
    case 428u: goto L_089AE2FC;
    case 429u: goto L_089AE324;
    case 430u: goto L_089AE334;
    case 431u: goto L_089AE33C;
    case 432u: goto L_089AE344;
    case 433u: goto L_089AE348;
    case 434u: goto L_089AE370;
    case 435u: goto L_089AE384;
    case 436u: goto L_089AE390;
    case 437u: goto L_089AE398;
    case 438u: goto L_089AE3AC;
    case 439u: goto L_089AE3B4;
    case 440u: goto L_089AE3C8;
    case 441u: goto L_089AE3CC;
    case 442u: goto L_089AE3D8;
    case 443u: goto L_089AE400;
    case 444u: goto L_089AE448;
    case 445u: goto L_089AE450;
    case 446u: goto L_089AE45C;
    case 447u: goto L_089AE464;
    case 448u: goto L_089AE46C;
    case 449u: goto L_089AE478;
    case 450u: goto L_089AE480;
    case 451u: goto L_089AE488;
    case 452u: goto L_089AE494;
    case 453u: goto L_089AE49C;
    case 454u: goto L_089AE4A4;
    case 455u: goto L_089AE4B0;
    case 456u: goto L_089AE4B8;
    case 457u: goto L_089AE4C0;
    case 458u: goto L_089AE4D0;
    case 459u: goto L_089AE514;
    case 460u: goto L_089AE518;
    case 461u: goto L_089AE520;
    case 462u: goto L_089AE52C;
    case 463u: goto L_089AE56C;
    case 464u: goto L_089AE570;
    case 465u: goto L_089AE578;
    case 466u: goto L_089AE580;
    case 467u: goto L_089AE59C;
    case 468u: goto L_089AE5A8;
    case 469u: goto L_089AE5B4;
    case 470u: goto L_089AE5BC;
    case 471u: goto L_089AE5C8;
    case 472u: goto L_089AE5D4;
    case 473u: goto L_089AE5E0;
    case 474u: goto L_089AE5EC;
    case 475u: goto L_089AE5F4;
    case 476u: goto L_089AE600;
    case 477u: goto L_089AE610;
    case 478u: goto L_089AE624;
    case 479u: goto L_089AE62C;
    case 480u: goto L_089AE63C;
    case 481u: goto L_089AE64C;
    case 482u: goto L_089AE658;
    case 483u: goto L_089AE66C;
    case 484u: goto L_089AE674;
    case 485u: goto L_089AE684;
    case 486u: goto L_089AE690;
    case 487u: goto L_089AE694;
    case 488u: goto L_089AE6A4;
    case 489u: goto L_089AE6AC;
    case 490u: goto L_089AE6B4;
    case 491u: goto L_089AE6BC;
    case 492u: goto L_089AE6E4;
    case 493u: goto L_089AE71C;
    case 494u: goto L_089AE764;
    case 495u: goto L_089AE780;
    case 496u: goto L_089AE788;
    case 497u: goto L_089AE790;
    case 498u: goto L_089AE79C;
    case 499u: goto L_089AE7A8;
    case 500u: goto L_089AE7C0;
    case 501u: goto L_089AE7C8;
    case 502u: goto L_089AE7E0;
    case 503u: goto L_089AE7EC;
    case 504u: goto L_089AE7F8;
    case 505u: goto L_089AE804;
    case 506u: goto L_089AE810;
    case 507u: goto L_089AE814;
    case 508u: goto L_089AE81C;
    case 509u: goto L_089AE828;
    case 510u: goto L_089AE87C;
    case 511u: goto L_089AE888;
    case 512u: goto L_089AE890;
    case 513u: goto L_089AE89C;
    case 514u: goto L_089AE8AC;
    case 515u: goto L_089AE8C4;
    case 516u: goto L_089AE8CC;
    case 517u: goto L_089AE8E4;
    case 518u: goto L_089AE8F0;
    case 519u: goto L_089AE8FC;
    case 520u: goto L_089AE908;
    case 521u: goto L_089AE914;
    case 522u: goto L_089AE918;
    case 523u: goto L_089AE920;
    case 524u: goto L_089AE92C;
    case 525u: goto L_089AE938;
    case 526u: goto L_089AE948;
    case 527u: goto L_089AE950;
    case 528u: goto L_089AE968;
    case 529u: goto L_089AE974;
    case 530u: goto L_089AE988;
    case 531u: goto L_089AE998;
    case 532u: goto L_089AE9F0;
    case 533u: goto L_089AE9FC;
    case 534u: goto L_089AEA04;
    case 535u: goto L_089AEA10;
    case 536u: goto L_089AEA24;
    case 537u: goto L_089AEA34;
    case 538u: goto L_089AEA48;
    case 539u: goto L_089AEA58;
    case 540u: goto L_089AEA60;
    case 541u: goto L_089AEA74;
    case 542u: goto L_089AEA78;
    case 543u: goto L_089AEA98;
    case 544u: goto L_089AEAA4;
    case 545u: goto L_089AEAA8;
    case 546u: goto L_089AEAB8;
    case 547u: goto L_089AEABC;
    case 548u: goto L_089AEAEC;
    case 549u: goto L_089AEC58;
    case 550u: goto L_089AEC60;
    case 551u: goto L_089AEC68;
    case 552u: goto L_089AEC9C;
    case 553u: goto L_089AECBC;
    case 554u: goto L_089AECCC;
    case 555u: goto L_089AECF4;
    case 556u: goto L_089AED20;
    case 557u: goto L_089AEDA8;
    case 558u: goto L_089AEE2C;
    case 559u: goto L_089AEE58;
    case 560u: goto L_089AEE6C;
    case 561u: goto L_089AEE98;
    case 562u: goto L_089AEEAC;
    case 563u: goto L_089AEEB4;
    case 564u: goto L_089AEEBC;
    case 565u: goto L_089AEEC4;
    case 566u: goto L_089AEEE8;
    case 567u: goto L_089AEEFC;
    case 568u: goto L_089AEF04;
    case 569u: goto L_089AEF28;
    case 570u: goto L_089AEF44;
    case 571u: goto L_089AEF4C;
    case 572u: goto L_089AEF54;
    case 573u: goto L_089AEFC8;
    case 574u: goto L_089AEFD0;
    case 575u: goto L_089AEFD8;
    case 576u: goto L_089AF044;
    case 577u: goto L_089AF05C;
    case 578u: goto L_089AF068;
    case 579u: goto L_089AF088;
    case 580u: goto L_089AF094;
    case 581u: goto L_089AF0A4;
    case 582u: goto L_089AF0D0;
    case 583u: goto L_089AF100;
    case 584u: goto L_089AF104;
    case 585u: goto L_089AF114;
    case 586u: goto L_089AF13C;
    case 587u: goto L_089AF17C;
    case 588u: goto L_089AF1BC;
    case 589u: goto L_089AF1C4;
    case 590u: goto L_089AF1CC;
    case 591u: goto L_089AF1D4;
    case 592u: goto L_089AF1EC;
    case 593u: goto L_089AF1F4;
    case 594u: goto L_089AF1FC;
    case 595u: goto L_089AF264;
    case 596u: goto L_089AF2A8;
    case 597u: goto L_089AF2B8;
    case 598u: goto L_089AF328;
    case 599u: goto L_089AF338;
    case 600u: goto L_089AF348;
    case 601u: goto L_089AF3B0;
    case 602u: goto L_089AF3C4;
    case 603u: goto L_089AF3D0;
    case 604u: goto L_089AF3E4;
    case 605u: goto L_089AF3EC;
    case 606u: goto L_089AF3F4;
    case 607u: goto L_089AF404;
    case 608u: goto L_089AF414;
    case 609u: goto L_089AF418;
    case 610u: goto L_089AF424;
    case 611u: goto L_089AF434;
    case 612u: goto L_089AF440;
    case 613u: goto L_089AF450;
    case 614u: goto L_089AF45C;
    case 615u: goto L_089AF46C;
    case 616u: goto L_089AF4A8;
    case 617u: goto L_089AF4B4;
    case 618u: goto L_089AF4C4;
    case 619u: goto L_089AF4E8;
    case 620u: goto L_089AF53C;
    case 621u: goto L_089AF548;
    case 622u: goto L_089AF558;
    case 623u: goto L_089AF57C;
    case 624u: goto L_089AF5AC;
    case 625u: goto L_089AF5B8;
    case 626u: goto L_089AF5C8;
    case 627u: goto L_089AF610;
    case 628u: goto L_089AF63C;
    case 629u: goto L_089AF6E4;
    case 630u: goto L_089AF6F8;
    case 631u: goto L_089AF754;
    case 632u: goto L_089AF760;
    case 633u: goto L_089AF798;
    case 634u: goto L_089AF79C;
    case 635u: goto L_089AF7A4;
    case 636u: goto L_089AF7B8;
    case 637u: goto L_089AF7C4;
    case 638u: goto L_089AF7D4;
    case 639u: goto L_089AF7EC;
    case 640u: goto L_089AF800;
    case 641u: goto L_089AF810;
    case 642u: goto L_089AF850;
    case 643u: goto L_089AF860;
    case 644u: goto L_089AF874;
    case 645u: goto L_089AF884;
    case 646u: goto L_089AF88C;
    case 647u: goto L_089AF89C;
    case 648u: goto L_089AF8A0;
    case 649u: goto L_089AF8C0;
    case 650u: goto L_089AF8F0;
    case 651u: goto L_089AF91C;
    case 652u: goto L_089AF9C4;
    case 653u: goto L_089AF9D8;
    case 654u: goto L_089AFA34;
    case 655u: goto L_089AFA40;
    case 656u: goto L_089AFA78;
    case 657u: goto L_089AFA7C;
    case 658u: goto L_089AFA84;
    case 659u: goto L_089AFA98;
    case 660u: goto L_089AFAA4;
    case 661u: goto L_089AFAB4;
    case 662u: goto L_089AFACC;
    case 663u: goto L_089AFAE0;
    case 664u: goto L_089AFAF0;
    case 665u: goto L_089AFB30;
    case 666u: goto L_089AFB40;
    case 667u: goto L_089AFB54;
    case 668u: goto L_089AFB64;
    case 669u: goto L_089AFB6C;
    case 670u: goto L_089AFB7C;
    case 671u: goto L_089AFB80;
    case 672u: goto L_089AFBA0;
    case 673u: goto L_089AFBC0;
    case 674u: goto L_089AFBD0;
    case 675u: goto L_089AFC0C;
    case 676u: goto L_089AFC20;
    case 677u: goto L_089AFC2C;
    case 678u: goto L_089AFC68;
    case 679u: goto L_089AFC74;
    case 680u: goto L_089AFC80;
    case 681u: goto L_089AFC94;
    case 682u: goto L_089AFC9C;
    case 683u: goto L_089AFCA8;
    case 684u: goto L_089AFCB0;
    case 685u: goto L_089AFCBC;
    case 686u: goto L_089AFCC4;
    case 687u: goto L_089AFCD0;
    case 688u: goto L_089AFCE0;
    case 689u: goto L_089AFCE8;
    case 690u: goto L_089AFCF8;
    case 691u: goto L_089AFD04;
    case 692u: goto L_089AFD0C;
    case 693u: goto L_089AFD1C;
    case 694u: goto L_089AFD30;
    case 695u: goto L_089AFD38;
    case 696u: goto L_089AFD88;
    case 697u: goto L_089AFD90;
    case 698u: goto L_089AFD98;
    case 699u: goto L_089AFDAC;
    case 700u: goto L_089AFDC0;
    case 701u: goto L_089AFE48;
    case 702u: goto L_089AFE50;
    case 703u: goto L_089AFE5C;
    case 704u: goto L_089AFE64;
    case 705u: goto L_089AFE78;
    case 706u: goto L_089AFE8C;
    case 707u: goto L_089AFF14;
    case 708u: goto L_089AFF24;
    case 709u: goto L_089AFF38;
    case 710u: goto L_089AFF40;
    case 711u: goto L_089AFF48;
    case 712u: goto L_089AFF5C;
    case 713u: goto L_089AFF68;
    case 714u: goto L_089AFF6C;
    case 715u: goto L_089AFF7C;
    case 716u: goto L_089AFF80;
    case 717u: goto L_089AFFC0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089AC004:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[20] = (ctx.gpr[29] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (0u | 2u);
    goto L_089AC014;
L_089AC014:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089AC05C;
      }
      goto L_089AC024;
    }
L_089AC024:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(112));
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
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AC05C;
      }
      goto L_089AC04C;
    }
L_089AC04C:
    ctx.gpr[31] = (0x089AC054u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 87u, 0x088A06E0u>(ctx, &aot_mem) && ctx.pc == 0x089AC054u) goto L_089AC054;
    return;
L_089AC054:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC064;
      }
      goto L_089AC05C;
    }
L_089AC05C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC094;
      }
      goto L_089AC064;
    }
L_089AC064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC094;
      }
      goto L_089AC070;
    }
L_089AC070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC094;
      }
      goto L_089AC084;
    }
L_089AC084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(336)));
    ctx.gpr[17] = (ctx.gpr[16] << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    goto L_089AC094;
L_089AC094:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089AC014;
      }
      goto L_089AC0A8;
    }
L_089AC0A8:
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(2001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089AC0F0;
      }
      goto L_089AC0B4;
    }
L_089AC0B4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089AC0F0;
      }
      goto L_089AC0BC;
    }
L_089AC0BC:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC0F0;
      }
      goto L_089AC0D0;
    }
L_089AC0D0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x089AC0E0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x089AC0E0u) goto L_089AC0E0;
    return;
L_089AC0E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1796), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089AC3E4;
      }
      goto L_089AC0F0;
    }
L_089AC0F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1796), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089AC264;
      }
      goto L_089AC100;
    }
L_089AC100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AC264;
      }
      goto L_089AC110;
    }
L_089AC110:
    ctx.gpr[31] = (0x089AC118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089AC118u) goto L_089AC118;
    return;
L_089AC118:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC264;
      }
      goto L_089AC128;
    }
L_089AC128:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16964u << 16u);
      if (branch_taken) {
          goto L_089AC238;
      }
      goto L_089AC144;
    }
L_089AC144:
    ctx.gpr[30] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[23] = (0u | 4u);
    ctx.gpr[22] = (0u | 5u);
    ctx.gpr[21] = (0u | 19u);
    ctx.gpr[20] = (0u | 20u);
    goto L_089AC160;
L_089AC160:
    ctx.gpr[16] = (ctx.gpr[17] << 2u);
    ctx.gpr[16] = (ctx.gpr[19] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AC1A8;
      }
      goto L_089AC1A0;
    }
L_089AC1A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC238;
      }
      goto L_089AC1A8;
    }
L_089AC1A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    if (ctx.gpr[4] == ctx.gpr[23]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1828)));
        goto L_089AC1E0;
    }
    goto L_089AC1BC;
L_089AC1BC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    ctx.gpr[5] = (0u | 18u);
      if (branch_taken) {
          goto L_089AC1DC;
      }
      goto L_089AC1C4;
    }
L_089AC1C4:
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1828)));
        goto L_089AC1E0;
    }
    goto L_089AC1CC;
L_089AC1CC:
    if (ctx.gpr[4] == ctx.gpr[21]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1828)));
        goto L_089AC1E0;
    }
    goto L_089AC1D4;
L_089AC1D4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089AC220;
      }
      goto L_089AC1DC;
    }
L_089AC1DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1828)));
    goto L_089AC1E0;
L_089AC1E0:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AC220;
      }
      goto L_089AC1F0;
    }
L_089AC1F0:
    ctx.gpr[31] = (0x089AC1F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1828)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 358u, 0x0899E2A8u>(ctx, &aot_mem) && ctx.pc == 0x089AC1F8u) goto L_089AC1F8;
    return;
L_089AC1F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC220;
      }
      goto L_089AC200;
    }
L_089AC200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (0u | 37u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AC220;
      }
      goto L_089AC214;
    }
L_089AC214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1828)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089AC238;
      }
      goto L_089AC220;
    }
L_089AC220:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC160;
      }
      goto L_089AC238;
    }
L_089AC238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC254;
      }
      goto L_089AC244;
    }
L_089AC244:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089AC254u);
    ctx.gpr[5] = (0u | 37u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x089AC254u) goto L_089AC254;
    return;
L_089AC254:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1796), ctx.gpr[4]);
    goto L_089AC264;
L_089AC264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[17] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089AC3E4;
      }
      goto L_089AC274;
    }
L_089AC274:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x089AC284u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089AC284u) goto L_089AC284;
    return;
L_089AC284:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089AC3D8;
      }
      goto L_089AC2A8;
    }
L_089AC2A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC3E4;
      }
      goto L_089AC2BC;
    }
L_089AC2BC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16358u << 16u);
      if (branch_taken) {
          goto L_089AC3D0;
      }
      goto L_089AC2D0;
    }
L_089AC2D0:
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (16262u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (0u | 4000u);
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    goto L_089AC2F4;
L_089AC2F4:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1828)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC3BC;
      }
      goto L_089AC300;
    }
L_089AC300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089AC3BC;
      }
      goto L_089AC30C;
    }
L_089AC30C:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AC3BC;
      }
      goto L_089AC344;
    }
L_089AC344:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089AC354u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 594u, 0x088870A0u>(ctx, &aot_mem) && ctx.pc == 0x089AC354u) goto L_089AC354;
    return;
L_089AC354:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_089AC3BC;
      }
      goto L_089AC35C;
    }
L_089AC35C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089AC368u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 594u, 0x088870A0u>(ctx, &aot_mem) && ctx.pc == 0x089AC368u) goto L_089AC368;
    return;
L_089AC368:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC3BC;
      }
      goto L_089AC370;
    }
L_089AC370:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089AC37Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 644u, 0x089A2C04u>(ctx, &aot_mem) && ctx.pc == 0x089AC37Cu) goto L_089AC37C;
    return;
L_089AC37C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC3BC;
      }
      goto L_089AC384;
    }
L_089AC384:
    ctx.gpr[31] = (0x089AC38Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089AC38Cu) goto L_089AC38C;
    return;
L_089AC38C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[30] = (ctx.gpr[6] + static_cast<std::uint32_t>(10000));
    ctx.gpr[31] = (0x089AC3ACu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 633u, 0x089A2B30u>(ctx, &aot_mem) && ctx.pc == 0x089AC3ACu) goto L_089AC3AC;
    return;
L_089AC3AC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089AC3BCu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 633u, 0x089A2B30u>(ctx, &aot_mem) && ctx.pc == 0x089AC3BCu) goto L_089AC3BC;
    return;
L_089AC3BC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089AC2F4;
      }
      goto L_089AC3D0;
    }
L_089AC3D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC3E4;
      }
      goto L_089AC3D8;
    }
L_089AC3D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(200));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1784), ctx.gpr[4]);
    goto L_089AC3E4;
L_089AC3E4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC41C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x089AC44Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089AC44Cu) goto L_089AC44C;
    return;
L_089AC44C:
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(400));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_089AC548;
      }
      goto L_089AC46C;
    }
L_089AC46C:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1256)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x089AC4A0u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089AC4A0u) goto L_089AC4A0;
    return;
L_089AC4A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x089AC4ACu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089AC4ACu) goto L_089AC4AC;
    return;
L_089AC4AC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = ctx.fpr[13] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AC4DC;
      }
      goto L_089AC4C8;
    }
L_089AC4C8:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
      if (branch_taken) {
          goto L_089AC500;
      }
      goto L_089AC4DC;
    }
L_089AC4DC:
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AC500;
      }
      goto L_089AC4F0;
    }
L_089AC4F0:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_089AC500;
L_089AC500:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AC520;
      }
      goto L_089AC514;
    }
L_089AC514:
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089AC548;
      }
      goto L_089AC520;
    }
L_089AC520:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AC540;
      }
      goto L_089AC534;
    }
L_089AC534:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[24];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089AC548;
      }
      goto L_089AC540;
    }
L_089AC540:
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089AC548;
L_089AC548:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(752)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(756)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1244), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8144)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_089AC628;
      }
      goto L_089AC5F4;
    }
L_089AC5F4:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1244), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_089AC660;
      }
      goto L_089AC628;
    }
L_089AC628:
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[15] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1244), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_089AC660;
L_089AC660:
    ctx.gpr[31] = (0x089AC668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 534u, 0x088EAEDCu>(ctx, &aot_mem) && ctx.pc == 0x089AC668u) goto L_089AC668;
    return;
L_089AC668:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC680;
      }
      goto L_089AC670;
    }
L_089AC670:
    ctx.gpr[31] = (0x089AC678u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 491u, 0x088EABACu>(ctx, &aot_mem) && ctx.pc == 0x089AC678u) goto L_089AC678;
    return;
L_089AC678:
    // Strafing while firing a gun.
    if (lcs::lcs_free_aim_active()) ctx.gpr[2] = 1u;
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC94C;
      }
      goto L_089AC680;
    }
L_089AC680:
    ctx.gpr[31] = (0x089AC688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089AC688u) goto L_089AC688;
    return;
L_089AC688:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AC94C;
      }
      goto L_089AC690;
    }
L_089AC690:
    ctx.gpr[31] = (0x089AC698u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 388u, 0x0899E3A8u>(ctx, &aot_mem) && ctx.pc == 0x089AC698u) goto L_089AC698;
    return;
L_089AC698:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC94C;
      }
      goto L_089AC6A0;
    }
L_089AC6A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[31] = (0x089AC6ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 283u, 0x0899DC7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AC6ACu) goto L_089AC6AC;
    return;
L_089AC6AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1240)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1244)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[24] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[24] = std::sqrt(ctx.fpr[24]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[31] = (0x089AC6D4u);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089AC6D4u) goto L_089AC6D4;
    return;
L_089AC6D4:
    ctx.gpr[4] = (49097u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (48991u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] | 26355u);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089AC70C;
      }
      goto L_089AC6F8;
    }
L_089AC6F8:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_089AC738;
      }
      goto L_089AC70C;
    }
L_089AC70C:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AC738;
      }
      goto L_089AC728;
    }
L_089AC728:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_089AC738;
L_089AC738:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16223u << 16u);
      if (branch_taken) {
          goto L_089AC7D0;
      }
      goto L_089AC748;
    }
L_089AC748:
    ctx.gpr[4] = (ctx.gpr[4] | 26355u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AC7D0;
      }
      goto L_089AC760;
    }
L_089AC760:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
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
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
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
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089AC7D0;
L_089AC7D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089AC7DCu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089AC7DCu) goto L_089AC7DC;
    return;
L_089AC7DC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_089AC7F8;
      }
      goto L_089AC7E8;
    }
L_089AC7E8:
    ctx.gpr[31] = (0x089AC7F0u);
    ctx.gpr[5] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089AC7F0u) goto L_089AC7F0;
    return;
L_089AC7F0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_089AC7F8;
L_089AC7F8:
    ctx.gpr[31] = (0x089AC800u);
    ctx.gpr[5] = (0u | 41u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089AC800u) goto L_089AC800;
    return;
L_089AC800:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089AC81C;
      }
      goto L_089AC808;
    }
L_089AC808:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AC94C;
      }
      goto L_089AC81C;
    }
L_089AC81C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC94C;
      }
      goto L_089AC824;
    }
L_089AC824:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[31] = (0x089AC830u);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089AC830u) goto L_089AC830;
    return;
L_089AC830:
    ctx.gpr[4] = (16351u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26355u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089AC868;
      }
      goto L_089AC850;
    }
L_089AC850:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_089AC894;
      }
      goto L_089AC868;
    }
L_089AC868:
    ctx.gpr[4] = (49119u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26355u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16457u << 16u);
      if (branch_taken) {
          goto L_089AC894;
      }
      goto L_089AC884;
    }
L_089AC884:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_089AC894;
L_089AC894:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16223u << 16u);
      if (branch_taken) {
          goto L_089AC94C;
      }
      goto L_089AC8A4;
    }
L_089AC8A4:
    ctx.gpr[4] = (ctx.gpr[4] | 26355u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17204u << 16u);
      if (branch_taken) {
          goto L_089AC94C;
      }
      goto L_089AC8BC;
    }
L_089AC8BC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16457u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (49024u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(696)));
    ctx.gpr[8] = (16256u << 16u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x089AC924u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 193u, 0x0890D0E0u>(ctx, &aot_mem) && ctx.pc == 0x089AC924u) goto L_089AC924;
    return;
L_089AC924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(700)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089AC940u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 193u, 0x0890D0E0u>(ctx, &aot_mem) && ctx.pc == 0x089AC940u) goto L_089AC940;
    return;
L_089AC940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_089AC94C;
L_089AC94C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC978:
    lcs::trainer_update_position(rt, ctx.gpr[4]);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC9FC;
      }
      goto L_089AC9A4;
    }
L_089AC9A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC9F4;
      }
      goto L_089AC9B0;
    }
L_089AC9B0:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[31] = (0x089AC9CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 498u, 0x08A060BCu>(ctx, &aot_mem) && ctx.pc == 0x089AC9CCu) goto L_089AC9CC;
    return;
L_089AC9CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x089AC9E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x089AC9E0u) goto L_089AC9E0;
    return;
L_089AC9E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACA04;
      }
      goto L_089AC9EC;
    }
L_089AC9EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACBA4;
      }
      goto L_089AC9F4;
    }
L_089AC9F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACE34;
      }
      goto L_089AC9FC;
    }
L_089AC9FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACE34;
      }
      goto L_089ACA04;
    }
L_089ACA04:
    ctx.gpr[31] = (0x089ACA0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089ACA0Cu) goto L_089ACA0C;
    return;
L_089ACA0C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_089ACB20;
      }
      goto L_089ACA18;
    }
L_089ACA18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACB20;
      }
      goto L_089ACA38;
    }
L_089ACA38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089ACB20;
      }
      goto L_089ACA4C;
    }
L_089ACA4C:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (16261u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x089ACA80u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x089ACA80u) goto L_089ACA80;
    return;
L_089ACA80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x089ACB10u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x089ACB10u) goto L_089ACB10;
    return;
L_089ACB10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1240)));
      if (branch_taken) {
          goto L_089ACB40;
      }
      goto L_089ACB20;
    }
L_089ACB20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(1280));
    ctx.gpr[31] = (0x089ACB34u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 445u, 0x08AFA028u>(ctx, &aot_mem) && ctx.pc == 0x089ACB34u) goto L_089ACB34;
    return;
L_089ACB34:
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1240)));
    goto L_089ACB40;
L_089ACB40:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1244)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089ACD04;
      }
      goto L_089ACBA4;
    }
L_089ACBA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(325)));
    ctx.gpr[5] = (0u | 26u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1240)));
        goto L_089ACCE8;
    }
    goto L_089ACBB4;
L_089ACBB4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
        goto L_089ACBE4;
    }
    goto L_089ACBCC;
L_089ACBCC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1240)));
        goto L_089ACCE8;
    }
    goto L_089ACBE0;
L_089ACBE0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    goto L_089ACBE4;
L_089ACBE4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089ACC18;
      }
      goto L_089ACC10;
    }
L_089ACC10:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089ACC4C;
      }
      goto L_089ACC18;
    }
L_089ACC18:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089ACC4C;
L_089ACC4C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1240)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1244)));
    ctx.gpr[4] = (47747u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[18];
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ACCE0;
      }
      goto L_089ACCB8;
    }
L_089ACCB8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089ACCE0;
L_089ACCE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACD04;
      }
      goto L_089ACCE8;
    }
L_089ACCE8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1244)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_089ACD04;
L_089ACD04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
        goto L_089ACE18;
    }
    goto L_089ACD10;
L_089ACD10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_089ACD3C;
    }
    goto L_089ACD24;
L_089ACD24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
        goto L_089ACE18;
    }
    goto L_089ACD38;
L_089ACD38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089ACD3C;
L_089ACD3C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089ACD9C;
      }
      goto L_089ACD60;
    }
L_089ACD60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
        goto L_089ACDA0;
    }
    goto L_089ACD80;
L_089ACD80:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15107u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_089ACDE8;
      }
      goto L_089ACD9C;
    }
L_089ACD9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    goto L_089ACDA0;
L_089ACDA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACDD0;
      }
      goto L_089ACDBC;
    }
L_089ACDBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089ACDE8;
      }
      goto L_089ACDD0;
    }
L_089ACDD0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_089ACDE8;
L_089ACDE8:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
        goto L_089ACE18;
    }
    goto L_089ACDF8;
L_089ACDF8:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    goto L_089ACE18;
L_089ACE18:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_089ACE34;
L_089ACE34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACE50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-464));
    ctx.gpr[6] = (16268u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089ACEA8;
      }
      goto L_089ACE90;
    }
L_089ACE90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089ACEBC;
      }
      goto L_089ACEA0;
    }
L_089ACEA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
      if (branch_taken) {
          goto L_089ACEB0;
      }
      goto L_089ACEA8;
    }
L_089ACEA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD794;
      }
      goto L_089ACEB0;
    }
L_089ACEB0:
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (15363u << 16u);
      if (branch_taken) {
          goto L_089ACECC;
      }
      goto L_089ACEBC;
    }
L_089ACEBC:
    ctx.gpr[4] = (16358u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15363u << 16u);
    goto L_089ACECC;
L_089ACECC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25728));
    ctx.gpr[31] = (0x089ACEF8u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 569u, 0x0883AB50u>(ctx, &aot_mem) && ctx.pc == 0x089ACEF8u) goto L_089ACEF8;
    return;
L_089ACEF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD784;
      }
      goto L_089ACF00;
    }
L_089ACF00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x089ACF58u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C075Cu>(ctx, &aot_mem) && ctx.pc == 0x089ACF58u) goto L_089ACF58;
    return;
L_089ACF58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089ACFB0;
      }
      goto L_089ACF60;
    }
L_089ACF60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089ACFB0;
      }
      goto L_089ACF80;
    }
L_089ACF80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089ACFB0;
      }
      goto L_089ACF94;
    }
L_089ACF94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD0B4;
      }
      goto L_089ACFAC;
    }
L_089ACFAC:
    ctx.gpr[4] = (2229u << 16u);
    goto L_089ACFB0;
L_089ACFB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11056)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11008)));
    ctx.gpr[5] = (17279u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11060)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11012)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11064)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11016)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[17] + ctx.fpr[16];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[19] + ctx.fpr[13];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[31] = (0x089AD020u);
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089AD020u) goto L_089AD020;
    return;
L_089AD020:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28916)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28920)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089AD040u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089AD040u) goto L_089AD040;
    return;
L_089AD040:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(133), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(134), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(135), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x089AD098u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x089AD098u) goto L_089AD098;
    return;
L_089AD098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
        goto L_089AD0C8;
    }
    goto L_089AD0AC;
L_089AD0AC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_089AD270;
      }
      goto L_089AD0B4;
    }
L_089AD0B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089AD794;
      }
      goto L_089AD0C8;
    }
L_089AD0C8:
    ctx.gpr[5] = (0u | 54u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_089AD270;
    }
    goto L_089AD0D4;
L_089AD0D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_089AD270;
    }
    goto L_089AD0E4;
L_089AD0E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15185u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46872u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_089AD270;
    }
    goto L_089AD118;
L_089AD118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x089AD144u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 445u, 0x088D5FC0u>(ctx, &aot_mem) && ctx.pc == 0x089AD144u) goto L_089AD144;
    return;
L_089AD144:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD26C;
      }
      goto L_089AD14C;
    }
L_089AD14C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AD188;
      }
      goto L_089AD168;
    }
L_089AD168:
    ctx.gpr[9] = (16752u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 43u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089AD188u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 580u, 0x088DEE94u>(ctx, &aot_mem) && ctx.pc == 0x089AD188u) goto L_089AD188;
    return;
L_089AD188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD1BC;
      }
      goto L_089AD198;
    }
L_089AD198:
    ctx.gpr[6] = (50298u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089AD1ACu);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 315u, 0x08865724u>(ctx, &aot_mem) && ctx.pc == 0x089AD1ACu) goto L_089AD1AC;
    return;
L_089AD1AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089AD1BC;
L_089AD1BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (0u | 50u);
    ctx.gpr[31] = (0x089AD208u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 618u, 0x089D2840u>(ctx, &aot_mem) && ctx.pc == 0x089AD208u) goto L_089AD208;
    return;
L_089AD208:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AD260;
      }
      goto L_089AD230;
    }
L_089AD230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD258;
      }
      goto L_089AD23C;
    }
L_089AD23C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089AD258;
    }
    goto L_089AD248;
L_089AD248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089AD254u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089AD254u) goto L_089AD254;
    return;
L_089AD254:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089AD258;
L_089AD258:
    ctx.gpr[31] = (0x089AD260u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089AD260u) goto L_089AD260;
    return;
L_089AD260:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089AD794;
      }
      goto L_089AD26C;
    }
L_089AD26C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_089AD270;
L_089AD270:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15363u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089AD2D4;
      }
      goto L_089AD2A0;
    }
L_089AD2A0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25728));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_089AD37C;
    }
    goto L_089AD2D4;
L_089AD2D4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (16230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[6]);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 43u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089AD378u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 580u, 0x088DEE94u>(ctx, &aot_mem) && ctx.pc == 0x089AD378u) goto L_089AD378;
    return;
L_089AD378:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_089AD37C;
L_089AD37C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15107u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AD55C;
      }
      goto L_089AD3AC;
    }
L_089AD3AC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[12])) && ctx.fpr[20] == ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
        goto L_089AD3FC;
    }
    goto L_089AD3C0;
L_089AD3C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    goto L_089AD3FC;
L_089AD3FC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (48588u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089AD52C;
      }
      goto L_089AD42C;
    }
L_089AD42C:
    ctx.gpr[4] = (48163u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (0u | 163u);
    ctx.gpr[31] = (0x089AD458u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x089AD458u) goto L_089AD458;
    return;
L_089AD458:
    ctx.gpr[4] = (16396u << 16u);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[31] = (0x089AD4C0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 292u, 0x0890DE48u>(ctx, &aot_mem) && ctx.pc == 0x089AD4C0u) goto L_089AD4C0;
    return;
L_089AD4C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD4D0;
      }
      goto L_089AD4C8;
    }
L_089AD4C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089AD4D0;
L_089AD4D0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (15820u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[7] = (0u | 200u);
    ctx.gpr[31] = (0x089AD508u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 618u, 0x089D2840u>(ctx, &aot_mem) && ctx.pc == 0x089AD508u) goto L_089AD508;
    return;
L_089AD508:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28928), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28924), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089AD55C;
      }
      goto L_089AD52C;
    }
L_089AD52C:
    ctx.gpr[4] = (48419u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AD55C;
      }
      goto L_089AD54C;
    }
L_089AD54C:
    ctx.gpr[4] = (48291u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089AD55C;
L_089AD55C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28924)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD698;
      }
      goto L_089AD56C;
    }
L_089AD56C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28924)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AD698;
      }
      goto L_089AD588;
    }
L_089AD588:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[31] = (0x089AD5B8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 292u, 0x0890DE48u>(ctx, &aot_mem) && ctx.pc == 0x089AD5B8u) goto L_089AD5B8;
    return;
L_089AD5B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD5C8;
      }
      goto L_089AD5C0;
    }
L_089AD5C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089AD5C8;
L_089AD5C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AD698;
      }
      goto L_089AD5E0;
    }
L_089AD5E0:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28924), 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD698;
      }
      goto L_089AD5F8;
    }
L_089AD5F8:
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089AD618u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089AD618u) goto L_089AD618;
    return;
L_089AD618:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089AD638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089AD638u) goto L_089AD638;
    return;
L_089AD638:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[4] = (0u | 37u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089AD688u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x089AD688u) goto L_089AD688;
    return;
L_089AD688:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AD5F8;
      }
      goto L_089AD698;
    }
L_089AD698:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28928)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD77C;
      }
      goto L_089AD6A8;
    }
L_089AD6A8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28928)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AD77C;
      }
      goto L_089AD6C4;
    }
L_089AD6C4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(320), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(321), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.gpr[31] = (0x089AD704u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 292u, 0x0890DE48u>(ctx, &aot_mem) && ctx.pc == 0x089AD704u) goto L_089AD704;
    return;
L_089AD704:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD714;
      }
      goto L_089AD70C;
    }
L_089AD70C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089AD714;
L_089AD714:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AD77C;
      }
      goto L_089AD72C;
    }
L_089AD72C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28928), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (16528u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[7] = (0u | 1500u);
    ctx.gpr[31] = (0x089AD77Cu);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 618u, 0x089D2840u>(ctx, &aot_mem) && ctx.pc == 0x089AD77Cu) goto L_089AD77C;
    return;
L_089AD77C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD794;
      }
      goto L_089AD784;
    }
L_089AD784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_089AD794;
L_089AD794:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD7C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x089AD7DCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 379u, 0x0899E35Cu>(ctx, &aot_mem) && ctx.pc == 0x089AD7DCu) goto L_089AD7DC;
    return;
L_089AD7DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD828;
      }
      goto L_089AD7E4;
    }
L_089AD7E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AD828;
      }
      goto L_089AD7F4;
    }
L_089AD7F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AD814;
      }
      goto L_089AD804;
    }
L_089AD804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD828;
      }
      goto L_089AD814;
    }
L_089AD814:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
        goto L_089AD830;
    }
    goto L_089AD820;
L_089AD820:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD888;
      }
      goto L_089AD828;
    }
L_089AD828:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADB08;
      }
      goto L_089AD830;
    }
L_089AD830:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD888;
      }
      goto L_089AD838;
    }
L_089AD838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AD878;
      }
      goto L_089AD848;
    }
L_089AD848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD870;
      }
      goto L_089AD854;
    }
L_089AD854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089AD870;
    }
    goto L_089AD860;
L_089AD860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089AD86Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089AD86Cu) goto L_089AD86C;
    return;
L_089AD86C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089AD870;
L_089AD870:
    ctx.gpr[31] = (0x089AD878u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089AD878u) goto L_089AD878;
    return;
L_089AD878:
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), 0u);
      if (branch_taken) {
          goto L_089ADB08;
      }
      goto L_089AD888;
    }
L_089AD888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AD91C;
      }
      goto L_089AD894;
    }
L_089AD894:
    ctx.gpr[31] = (0x089AD89Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089AD89Cu) goto L_089AD89C;
    return;
L_089AD89C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AD90C;
      }
      goto L_089AD8A4;
    }
L_089AD8A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AD90C;
      }
      goto L_089AD8B4;
    }
L_089AD8B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AD90C;
      }
      goto L_089AD8C0;
    }
L_089AD8C0:
    ctx.gpr[31] = (0x089AD8C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089AD8C8u) goto L_089AD8C8;
    return;
L_089AD8C8:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_089AD8E4;
    }
    goto L_089AD8D4;
L_089AD8D4:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_089AD8E4;
      }
      goto L_089AD8E4;
    }
L_089AD8E4:
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x089AD8F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x089AD8F4u) goto L_089AD8F4;
    return;
L_089AD8F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AD914;
      }
      goto L_089AD8FC;
    }
L_089AD8FC:
    ctx.gpr[31] = (0x089AD904u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x089AD904u) goto L_089AD904;
    return;
L_089AD904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD914;
      }
      goto L_089AD90C;
    }
L_089AD90C:
    ctx.gpr[31] = (0x089AD914u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x089AD914u) goto L_089AD914;
    return;
L_089AD914:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADB08;
      }
      goto L_089AD91C;
    }
L_089AD91C:
    ctx.gpr[31] = (0x089AD924u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089AD924u) goto L_089AD924;
    return;
L_089AD924:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD944;
      }
      goto L_089AD92C;
    }
L_089AD92C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AD944;
      }
      goto L_089AD93C;
    }
L_089AD93C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), ctx.gpr[4]);
    goto L_089AD944;
L_089AD944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_089AD96C;
      }
      goto L_089AD954;
    }
L_089AD954:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089ADAA8;
      }
      goto L_089AD95C;
    }
L_089AD95C:
    ctx.gpr[31] = (0x089AD964u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x089AD964u) goto L_089AD964;
    return;
L_089AD964:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADB04;
      }
      goto L_089AD96C;
    }
L_089AD96C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089ADAA8;
      }
      goto L_089AD974;
    }
L_089AD974:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089AD9B4;
      }
      goto L_089AD984;
    }
L_089AD984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD9AC;
      }
      goto L_089AD990;
    }
L_089AD990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089AD9AC;
    }
    goto L_089AD99C;
L_089AD99C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089AD9A8u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089AD9A8u) goto L_089AD9A8;
    return;
L_089AD9A8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089AD9AC;
L_089AD9AC:
    ctx.gpr[31] = (0x089AD9B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089AD9B4u) goto L_089AD9B4;
    return;
L_089AD9B4:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADA4C;
      }
      goto L_089AD9DC;
    }
L_089AD9DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089ADA4C;
      }
      goto L_089AD9E8;
    }
L_089AD9E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[31] = (0x089AD9F8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 726u, 0x08977AB8u>(ctx, &aot_mem) && ctx.pc == 0x089AD9F8u) goto L_089AD9F8;
    return;
L_089AD9F8:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16964u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ADA4C;
      }
      goto L_089ADA38;
    }
L_089ADA38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089ADA44u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089ADA44u) goto L_089ADA44;
    return;
L_089ADA44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADAA0;
      }
      goto L_089ADA4C;
    }
L_089ADA4C:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089ADA6C;
      }
      goto L_089ADA58;
    }
L_089ADA58:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1168))))));
    ctx.gpr[31] = (0x089ADA64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x089ADA64u) goto L_089ADA64;
    return;
L_089ADA64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADAA0;
      }
      goto L_089ADA6C;
    }
L_089ADA6C:
    ctx.gpr[31] = (0x089ADA74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089ADA74u) goto L_089ADA74;
    return;
L_089ADA74:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_089ADA90;
    }
    goto L_089ADA80;
L_089ADA80:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_089ADA90;
      }
      goto L_089ADA90;
    }
L_089ADA90:
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x089ADAA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x089ADAA0u) goto L_089ADAA0;
    return;
L_089ADAA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADB04;
      }
      goto L_089ADAA8;
    }
L_089ADAA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
      if (branch_taken) {
          goto L_089ADAF4;
      }
      goto L_089ADAB8;
    }
L_089ADAB8:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089ADAF4;
      }
      goto L_089ADAC4;
    }
L_089ADAC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADAEC;
      }
      goto L_089ADAD0;
    }
L_089ADAD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089ADAEC;
    }
    goto L_089ADADC;
L_089ADADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089ADAE8u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089ADAE8u) goto L_089ADAE8;
    return;
L_089ADAE8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089ADAEC;
L_089ADAEC:
    ctx.gpr[31] = (0x089ADAF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089ADAF4u) goto L_089ADAF4;
    return;
L_089ADAF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(860)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[17]);
    ctx.gpr[31] = (0x089ADB04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089ADB04u) goto L_089ADB04;
    return;
L_089ADB04:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), 0u);
    goto L_089ADB08;
L_089ADB08:
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
L_089ADB20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1780)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089ADB6C;
      }
      goto L_089ADB44;
    }
L_089ADB44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADB6C;
      }
      goto L_089ADB5C;
    }
L_089ADB5C:
    ctx.gpr[31] = (0x089ADB64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 92u, 0x089A0714u>(ctx, &aot_mem) && ctx.pc == 0x089ADB64u) goto L_089ADB64;
    return;
L_089ADB64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADB88;
      }
      goto L_089ADB6C;
    }
L_089ADB6C:
    ctx.gpr[31] = (0x089ADB74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 67u, 0x089A0518u>(ctx, &aot_mem) && ctx.pc == 0x089ADB74u) goto L_089ADB74;
    return;
L_089ADB74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ADB88;
      }
      goto L_089ADB7C;
    }
L_089ADB7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
    goto L_089ADB88;
L_089ADB88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADE00;
      }
      goto L_089ADB94;
    }
L_089ADB94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089ADBCC;
      }
      goto L_089ADBB0;
    }
L_089ADBB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(784));
    ctx.gpr[31] = (0x089ADBC4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 42u, 0x08AA83C4u>(ctx, &aot_mem) && ctx.pc == 0x089ADBC4u) goto L_089ADBC4;
    return;
L_089ADBC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADBDC;
      }
      goto L_089ADBCC;
    }
L_089ADBCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    goto L_089ADBDC;
L_089ADBDC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(784));
    ctx.gpr[31] = (0x089ADBE8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 59u, 0x08AA85DCu>(ctx, &aot_mem) && ctx.pc == 0x089ADBE8u) goto L_089ADBE8;
    return;
L_089ADBE8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ADC10;
      }
      goto L_089ADBF0;
    }
L_089ADBF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ADE60;
      }
      goto L_089ADC00;
    }
L_089ADC00:
    ctx.gpr[31] = (0x089ADC08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 92u, 0x089A0714u>(ctx, &aot_mem) && ctx.pc == 0x089ADC08u) goto L_089ADC08;
    return;
L_089ADC08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADE60;
      }
      goto L_089ADC10;
    }
L_089ADC10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADE60;
      }
      goto L_089ADC20;
    }
L_089ADC20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ADE60;
      }
      goto L_089ADC30;
    }
L_089ADC30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ADE60;
      }
      goto L_089ADC40;
    }
L_089ADC40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089ADE60;
      }
      goto L_089ADC50;
    }
L_089ADC50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADE60;
      }
      goto L_089ADC6C;
    }
L_089ADC6C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[19] = (0u | 169u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089ADC94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 140u, 0x08850DD0u>(ctx, &aot_mem) && ctx.pc == 0x089ADC94u) goto L_089ADC94;
    return;
L_089ADC94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ADCC8;
      }
      goto L_089ADC9C;
    }
L_089ADC9C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089ADCC8;
      }
      goto L_089ADCC4;
    }
L_089ADCC4:
    ctx.gpr[17] = (0u | 1u);
    goto L_089ADCC8;
L_089ADCC8:
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[31] = (0x089ADCD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089ADCD4u) goto L_089ADCD4;
    return;
L_089ADCD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADD80;
      }
      goto L_089ADCDC;
    }
L_089ADCDC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADD80;
      }
      goto L_089ADCE4;
    }
L_089ADCE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADD50;
      }
      goto L_089ADD04;
    }
L_089ADD04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 49 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ADD2C;
      }
      goto L_089ADD18;
    }
L_089ADD18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089ADD34;
      }
      goto L_089ADD2C;
    }
L_089ADD2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 159u);
      if (branch_taken) {
          goto L_089ADDA4;
      }
      goto L_089ADD34;
    }
L_089ADD34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 47 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADDA4;
      }
      goto L_089ADD48;
    }
L_089ADD48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 44u);
      if (branch_taken) {
          goto L_089ADDA4;
      }
      goto L_089ADD50;
    }
L_089ADD50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADD78;
      }
      goto L_089ADD64;
    }
L_089ADD64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[5] = (0u | 157u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089ADDA4;
      }
      goto L_089ADD78;
    }
L_089ADD78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 159u);
      if (branch_taken) {
          goto L_089ADDA4;
      }
      goto L_089ADD80;
    }
L_089ADD80:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADDA4;
      }
      goto L_089ADD88;
    }
L_089ADD88:
    ctx.gpr[31] = (0x089ADD90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089ADD90u) goto L_089ADD90;
    return;
L_089ADD90:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADDA4;
      }
      goto L_089ADDA0;
    }
L_089ADDA0:
    ctx.gpr[19] = (0u | 159u);
    goto L_089ADDA4;
L_089ADDA4:
    ctx.gpr[4] = (0u | 169u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089ADDCC;
      }
      goto L_089ADDB0;
    }
L_089ADDB0:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089ADDC8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089ADDC8u) goto L_089ADDC8;
    return;
L_089ADDC8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089ADDCC;
L_089ADDCC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADDEC;
      }
      goto L_089ADDD4;
    }
L_089ADDD4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089ADDEC;
L_089ADDEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089ADE60;
      }
      goto L_089ADE00;
    }
L_089ADE00:
    ctx.gpr[4] = (18804u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1764)));
    ctx.gpr[4] = (ctx.gpr[4] | 9200u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ADE58;
      }
      goto L_089ADE20;
    }
L_089ADE20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1764)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x089ADE30u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(784));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 107u, 0x08AA8BF0u>(ctx, &aot_mem) && ctx.pc == 0x089ADE30u) goto L_089ADE30;
    return;
L_089ADE30:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ADE60;
      }
      goto L_089ADE38;
    }
L_089ADE38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ADE60;
      }
      goto L_089ADE48;
    }
L_089ADE48:
    ctx.gpr[31] = (0x089ADE50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 92u, 0x089A0714u>(ctx, &aot_mem) && ctx.pc == 0x089ADE50u) goto L_089ADE50;
    return;
L_089ADE50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADE60;
      }
      goto L_089ADE58;
    }
L_089ADE58:
    ctx.gpr[31] = (0x089ADE60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 92u, 0x089A0714u>(ctx, &aot_mem) && ctx.pc == 0x089ADE60u) goto L_089ADE60;
    return;
L_089ADE60:
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
L_089ADE7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 43u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089ADEC0;
      }
      goto L_089ADEB0;
    }
L_089ADEB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AE3D8;
      }
      goto L_089ADEC0;
    }
L_089ADEC0:
    ctx.gpr[31] = (0x089ADEC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 379u, 0x0899E35Cu>(ctx, &aot_mem) && ctx.pc == 0x089ADEC8u) goto L_089ADEC8;
    return;
L_089ADEC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE3D8;
      }
      goto L_089ADED0;
    }
L_089ADED0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (32u << 16u);
      if (branch_taken) {
          goto L_089ADF08;
      }
      goto L_089ADEEC;
    }
L_089ADEEC:
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089ADF00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 428u, 0x088D5E30u>(ctx, &aot_mem) && ctx.pc == 0x089ADF00u) goto L_089ADF00;
    return;
L_089ADF00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADF18;
      }
      goto L_089ADF08;
    }
L_089ADF08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADF7C;
      }
      goto L_089ADF18;
    }
L_089ADF18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089ADF44;
      }
      goto L_089ADF2C;
    }
L_089ADF2C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089ADF44u);
    ctx.gpr[5] = (0u | 169u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 156u, 0x089B0884u>(ctx, &aot_mem) && ctx.pc == 0x089ADF44u) goto L_089ADF44;
    return;
L_089ADF44:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADF74;
      }
      goto L_089ADF54;
    }
L_089ADF54:
    ctx.gpr[31] = (0x089ADF5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089ADF5Cu) goto L_089ADF5C;
    return;
L_089ADF5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADF74;
      }
      goto L_089ADF64;
    }
L_089ADF64:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089ADF74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 122u, 0x088A8660u>(ctx, &aot_mem) && ctx.pc == 0x089ADF74u) goto L_089ADF74;
    return;
L_089ADF74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE3D8;
      }
      goto L_089ADF7C;
    }
L_089ADF7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089ADFE0;
      }
      goto L_089ADF90;
    }
L_089ADF90:
    ctx.gpr[31] = (0x089ADF98u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089ADF98u) goto L_089ADF98;
    return;
L_089ADF98:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x089ADFA4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x089ADFA4u) goto L_089ADFA4;
    return;
L_089ADFA4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28908)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28912)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089ADFBCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 441u, 0x08AF6264u>(ctx, &aot_mem) && ctx.pc == 0x089ADFBCu) goto L_089ADFBC;
    return;
L_089ADFBC:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089ADFC8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x089ADFC8u) goto L_089ADFC8;
    return;
L_089ADFC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65520u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089ADFE0;
L_089ADFE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089AE038;
      }
      goto L_089ADFEC;
    }
L_089ADFEC:
    ctx.gpr[31] = (0x089ADFF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 727u, 0x0899FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089ADFF4u) goto L_089ADFF4;
    return;
L_089ADFF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[18]);
        goto L_089AE038;
    }
    goto L_089AE004;
L_089AE004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE02C;
      }
      goto L_089AE010;
    }
L_089AE010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089AE02C;
    }
    goto L_089AE01C;
L_089AE01C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089AE028u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089AE028u) goto L_089AE028;
    return;
L_089AE028:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089AE02C;
L_089AE02C:
    ctx.gpr[31] = (0x089AE034u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089AE034u) goto L_089AE034;
    return;
L_089AE034:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[18]);
    goto L_089AE038;
L_089AE038:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x089AE04Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 431u, 0x088A6D70u>(ctx, &aot_mem) && ctx.pc == 0x089AE04Cu) goto L_089AE04C;
    return;
L_089AE04C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1412)));
        goto L_089AE078;
    }
    goto L_089AE058;
L_089AE058:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[6] = (0u | 5u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1412)));
        goto L_089AE078;
    }
    goto L_089AE068;
L_089AE068:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AE12C;
      }
      goto L_089AE074;
    }
L_089AE074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1412)));
    goto L_089AE078;
L_089AE078:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
        goto L_089AE1B0;
    }
    goto L_089AE080;
L_089AE080:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
        goto L_089AE1B0;
    }
    goto L_089AE0A0;
L_089AE0A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
        goto L_089AE1B0;
    }
    goto L_089AE0B4;
L_089AE0B4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AE12C;
      }
      goto L_089AE0D4;
    }
L_089AE0D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (2231u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(32496));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089AE124u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 331u, 0x088CE988u>(ctx, &aot_mem) && ctx.pc == 0x089AE124u) goto L_089AE124;
    return;
L_089AE124:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
        goto L_089AE1B0;
    }
    goto L_089AE12C;
L_089AE12C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[31] = (0x089AE144u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089AE144u) goto L_089AE144;
    return;
L_089AE144:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE174;
      }
      goto L_089AE14C;
    }
L_089AE14C:
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 40u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089AE16Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-8144)));
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 580u, 0x088DEE94u>(ctx, &aot_mem) && ctx.pc == 0x089AE16Cu) goto L_089AE16C;
    return;
L_089AE16C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE1A8;
      }
      goto L_089AE174;
    }
L_089AE174:
    ctx.gpr[31] = (0x089AE17Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x089AE17Cu) goto L_089AE17C;
    return;
L_089AE17C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE1A8;
      }
      goto L_089AE188;
    }
L_089AE188:
    ctx.gpr[9] = (17530u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 40u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089AE1A8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 580u, 0x088DEE94u>(ctx, &aot_mem) && ctx.pc == 0x089AE1A8u) goto L_089AE1A8;
    return;
L_089AE1A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE3D8;
      }
      goto L_089AE1B0;
    }
L_089AE1B0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    ctx.gpr[5] = (65280u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[18] = (2202u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12064));
      if (branch_taken) {
          goto L_089AE20C;
      }
      goto L_089AE204;
    }
L_089AE204:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089AE20C;
L_089AE20C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089AE218u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089AE218u) goto L_089AE218;
    return;
L_089AE218:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE270;
      }
      goto L_089AE224;
    }
L_089AE224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089AE230u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089AE230u) goto L_089AE230;
    return;
L_089AE230:
    ctx.gpr[4] = (16640u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089AE254;
      }
      goto L_089AE23C;
    }
L_089AE23C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x089AE24Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089AE24Cu) goto L_089AE24C;
    return;
L_089AE24C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE264;
      }
      goto L_089AE254;
    }
L_089AE254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x089AE264u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089AE264u) goto L_089AE264;
    return;
L_089AE264:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089AE270;
L_089AE270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AE2E8;
      }
      goto L_089AE280;
    }
L_089AE280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089AE2BC;
      }
      goto L_089AE294;
    }
L_089AE294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1400)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE2BC;
      }
      goto L_089AE2A0;
    }
L_089AE2A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089AE2B4u);
    ctx.gpr[6] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089AE2B4u) goto L_089AE2B4;
    return;
L_089AE2B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089AE2D4;
      }
      goto L_089AE2BC;
    }
L_089AE2BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089AE2D0u);
    ctx.gpr[6] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089AE2D0u) goto L_089AE2D0;
    return;
L_089AE2D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089AE2D4;
L_089AE2D4:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089AE2E0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x089AE2E0u) goto L_089AE2E0;
    return;
L_089AE2E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE3D8;
      }
      goto L_089AE2E8;
    }
L_089AE2E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089AE2F4u);
    ctx.gpr[5] = (0u | 121u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089AE2F4u) goto L_089AE2F4;
    return;
L_089AE2F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE384;
      }
      goto L_089AE2FC;
    }
L_089AE2FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16329u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089AE33C;
      }
      goto L_089AE324;
    }
L_089AE324:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AE33C;
      }
      goto L_089AE334;
    }
L_089AE334:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = ctx.fpr[20] + ctx.fpr[24];
      if (branch_taken) {
          goto L_089AE348;
      }
      goto L_089AE33C;
    }
L_089AE33C:
    ctx.gpr[31] = (0x089AE344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089AE344u) goto L_089AE344;
    return;
L_089AE344:
    ctx.fpr[24] = ctx.fpr[0] + ctx.fpr[24];
    goto L_089AE348;
L_089AE348:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089AE370u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x089AE370u) goto L_089AE370;
    return;
L_089AE370:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x089AE384u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x089AE384u) goto L_089AE384;
    return;
L_089AE384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089AE390u);
    ctx.gpr[5] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 337u, 0x08865864u>(ctx, &aot_mem) && ctx.pc == 0x089AE390u) goto L_089AE390;
    return;
L_089AE390:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE3B4;
      }
      goto L_089AE398;
    }
L_089AE398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089AE3ACu);
    ctx.gpr[6] = (0u | 135u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089AE3ACu) goto L_089AE3AC;
    return;
L_089AE3AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089AE3CC;
      }
      goto L_089AE3B4;
    }
L_089AE3B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089AE3C8u);
    ctx.gpr[6] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089AE3C8u) goto L_089AE3C8;
    return;
L_089AE3C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089AE3CC;
L_089AE3CC:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089AE3D8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x089AE3D8u) goto L_089AE3D8;
    return;
L_089AE3D8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE400:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[11] = (0u | 11u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[11];
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_089AE580;
      }
      goto L_089AE448;
    }
L_089AE448:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089AE464;
      }
      goto L_089AE450;
    }
L_089AE450:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(908)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AE464;
      }
      goto L_089AE45C;
    }
L_089AE45C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089AE570;
      }
      goto L_089AE464;
    }
L_089AE464:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AE480;
      }
      goto L_089AE46C;
    }
L_089AE46C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(908)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE480;
      }
      goto L_089AE478;
    }
L_089AE478:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089AE570;
      }
      goto L_089AE480;
    }
L_089AE480:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE49C;
      }
      goto L_089AE488;
    }
L_089AE488:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AE49C;
      }
      goto L_089AE494;
    }
L_089AE494:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089AE570;
      }
      goto L_089AE49C;
    }
L_089AE49C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AE4B8;
      }
      goto L_089AE4A4;
    }
L_089AE4A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE4B8;
      }
      goto L_089AE4B0;
    }
L_089AE4B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089AE570;
      }
      goto L_089AE4B8;
    }
L_089AE4B8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE520;
      }
      goto L_089AE4C0;
    }
L_089AE4C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089AE520;
      }
      goto L_089AE4D0;
    }
L_089AE4D0:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1184));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AE518;
      }
      goto L_089AE514;
    }
L_089AE514:
    ctx.gpr[4] = (0u | 1u);
    goto L_089AE518;
L_089AE518:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE570;
      }
      goto L_089AE520;
    }
L_089AE520:
    ctx.gpr[5] = (ctx.gpr[20] | ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AE570;
      }
      goto L_089AE52C;
    }
L_089AE52C:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1184));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AE570;
      }
      goto L_089AE56C;
    }
L_089AE56C:
    ctx.gpr[4] = (0u | 1u);
    goto L_089AE570;
L_089AE570:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AE580;
      }
      goto L_089AE578;
    }
L_089AE578:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089AE6BC;
      }
      goto L_089AE580;
    }
L_089AE580:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(908)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(916), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(1184));
      if (branch_taken) {
          goto L_089AE5B4;
      }
      goto L_089AE59C;
    }
L_089AE59C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(908)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE5B4;
      }
      goto L_089AE5A8;
    }
L_089AE5A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(908)));
    ctx.gpr[31] = (0x089AE5B4u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(908));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089AE5B4u) goto L_089AE5B4;
    return;
L_089AE5B4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(908), ctx.gpr[20]);
      if (branch_taken) {
          goto L_089AE5C8;
      }
      goto L_089AE5BC;
    }
L_089AE5BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(908)));
    ctx.gpr[31] = (0x089AE5C8u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(908));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089AE5C8u) goto L_089AE5C8;
    return;
L_089AE5C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE5EC;
      }
      goto L_089AE5D4;
    }
L_089AE5D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE5EC;
      }
      goto L_089AE5E0;
    }
L_089AE5E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089AE5ECu);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089AE5ECu) goto L_089AE5EC;
    return;
L_089AE5EC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), ctx.gpr[18]);
      if (branch_taken) {
          goto L_089AE600;
      }
      goto L_089AE5F4;
    }
L_089AE5F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089AE600u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089AE600u) goto L_089AE600;
    return;
L_089AE600:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089AE62C;
      }
      goto L_089AE610;
    }
L_089AE610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AE62C;
      }
      goto L_089AE624;
    }
L_089AE624:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089AE62C;
      }
      goto L_089AE62C;
    }
L_089AE62C:
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
          goto L_089AE658;
      }
      goto L_089AE63C;
    }
L_089AE63C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AE658;
      }
      goto L_089AE64C;
    }
L_089AE64C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1312));
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
    goto L_089AE658;
L_089AE658:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089AE674;
      }
      goto L_089AE66C;
    }
L_089AE66C:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089AE674;
L_089AE674:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_089AE690;
      }
      goto L_089AE684;
    }
L_089AE684:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AE694;
      }
      goto L_089AE690;
    }
L_089AE690:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089AE694;
L_089AE694:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1204), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(908)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AE6B4;
      }
      goto L_089AE6A4;
    }
L_089AE6A4:
    ctx.gpr[31] = (0x089AE6ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089AE6E4;
L_089AE6AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE6BC;
      }
      goto L_089AE6B4;
    }
L_089AE6B4:
    ctx.gpr[31] = (0x089AE6BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089AEAEC;
L_089AE6BC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE6E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089AE71Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089AE71Cu) goto L_089AE71C;
    return;
L_089AE71C:
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1184));
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
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1200)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[18] = (0u | 11u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089AE828;
      }
      goto L_089AE764;
    }
L_089AE764:
    ctx.gpr[7] = (16128u << 16u);
    ctx.gpr[22] = (0u | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AE780u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 106u, 0x088C093Cu>(ctx, &aot_mem) && ctx.pc == 0x089AE780u) goto L_089AE780;
    return;
L_089AE780:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE828;
      }
      goto L_089AE788;
    }
L_089AE788:
    ctx.gpr[31] = (0x089AE790u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089AD7C0;
L_089AE790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AE7E0;
      }
      goto L_089AE79C;
    }
L_089AE79C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1204)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089AE7C8;
      }
      goto L_089AE7A8;
    }
L_089AE7A8:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AE7C0u);
    ctx.gpr[5] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 1049u, 0x08893758u>(ctx, &aot_mem) && ctx.pc == 0x089AE7C0u) goto L_089AE7C0;
    return;
L_089AE7C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE7E0;
      }
      goto L_089AE7C8;
    }
L_089AE7C8:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AE7E0u);
    ctx.gpr[5] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 1049u, 0x08893758u>(ctx, &aot_mem) && ctx.pc == 0x089AE7E0u) goto L_089AE7E0;
    return;
L_089AE7E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089AE81C;
      }
      goto L_089AE7EC;
    }
L_089AE7EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE814;
      }
      goto L_089AE7F8;
    }
L_089AE7F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089AE814;
    }
    goto L_089AE804;
L_089AE804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089AE810u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089AE810u) goto L_089AE810;
    return;
L_089AE810:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089AE814;
L_089AE814:
    ctx.gpr[31] = (0x089AE81Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089AE81Cu) goto L_089AE81C;
    return;
L_089AE81C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089AEABC;
      }
      goto L_089AE828;
    }
L_089AE828:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[9] = (ctx.gpr[16] + static_cast<std::uint32_t>(872));
    ctx.gpr[10] = (ctx.gpr[16] + static_cast<std::uint32_t>(904));
    ctx.gpr[5] = (18804u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 9214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x089AE87Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 760u, 0x08977E40u>(ctx, &aot_mem) && ctx.pc == 0x089AE87Cu) goto L_089AE87C;
    return;
L_089AE87C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(904))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AE92C;
      }
      goto L_089AE888;
    }
L_089AE888:
    ctx.gpr[31] = (0x089AE890u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089AD7C0;
L_089AE890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AE8E4;
      }
      goto L_089AE89C;
    }
L_089AE89C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1204)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AE8CC;
      }
      goto L_089AE8AC;
    }
L_089AE8AC:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AE8C4u);
    ctx.gpr[5] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 1049u, 0x08893758u>(ctx, &aot_mem) && ctx.pc == 0x089AE8C4u) goto L_089AE8C4;
    return;
L_089AE8C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE8E4;
      }
      goto L_089AE8CC;
    }
L_089AE8CC:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AE8E4u);
    ctx.gpr[5] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 1049u, 0x08893758u>(ctx, &aot_mem) && ctx.pc == 0x089AE8E4u) goto L_089AE8E4;
    return;
L_089AE8E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089AE920;
      }
      goto L_089AE8F0;
    }
L_089AE8F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE918;
      }
      goto L_089AE8FC;
    }
L_089AE8FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089AE918;
    }
    goto L_089AE908;
L_089AE908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089AE914u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089AE914u) goto L_089AE914;
    return;
L_089AE914:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089AE918;
L_089AE918:
    ctx.gpr[31] = (0x089AE920u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089AE920u) goto L_089AE920;
    return;
L_089AE920:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089AEABC;
      }
      goto L_089AE92C;
    }
L_089AE92C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(904))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089AE974;
      }
      goto L_089AE938;
    }
L_089AE938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1080)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AE974;
      }
      goto L_089AE948;
    }
L_089AE948:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089AE950;
L_089AE950:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(876)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(872), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089AE950;
      }
      goto L_089AE968;
    }
L_089AE968:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(904))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089AE974;
L_089AE974:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(904))))));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_089AEA24;
      }
      goto L_089AE988;
    }
L_089AE988:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[22] = (ctx.gpr[16] | 0u);
    goto L_089AE998;
L_089AE998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(872)));
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1200)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AEA10;
      }
      goto L_089AE9F0;
    }
L_089AE9F0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089AE9FCu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 106u, 0x088C093Cu>(ctx, &aot_mem) && ctx.pc == 0x089AE9FCu) goto L_089AE9FC;
    return;
L_089AE9FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEA10;
      }
      goto L_089AEA04;
    }
L_089AEA04:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089AEA24;
      }
      goto L_089AEA10;
    }
L_089AEA10:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(904))))));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089AE998;
      }
      goto L_089AEA24;
    }
L_089AEA24:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(906), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1080)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(906))))));
        goto L_089AEA78;
    }
    goto L_089AEA34;
L_089AEA34:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(904))))));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089AEA74;
      }
      goto L_089AEA48;
    }
L_089AEA48:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(872)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1080)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089AEA60;
      }
      goto L_089AEA58;
    }
L_089AEA58:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(906), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089AEA74;
      }
      goto L_089AEA60;
    }
L_089AEA60:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(904))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089AEA48;
      }
      goto L_089AEA74;
    }
L_089AEA74:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(906))))));
    goto L_089AEA78;
L_089AEA78:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1080), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), 0u);
    ctx.gpr[31] = (0x089AEA98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 727u, 0x0899FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089AEA98u) goto L_089AEA98;
    return;
L_089AEA98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AEAA8;
      }
      goto L_089AEAA4;
    }
L_089AEAA4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), ctx.gpr[17]);
    goto L_089AEAA8;
L_089AEAA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1204)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[18]);
    ctx.gpr[31] = (0x089AEAB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089AEAB8u) goto L_089AEAB8;
    return;
L_089AEAB8:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_089AEABC;
L_089AEABC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AEAEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1968));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1908), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1912), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1916), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1920), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1924), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1928), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1932), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1936), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1940), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1944), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1948), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1952), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1956), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1960), ctx.gpr[31]);
    ctx.gpr[5] = (48819u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(908)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16051u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(908)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1884), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(908)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 4u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1184));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1904), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1860), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089AEC9C;
      }
      goto L_089AEC58;
    }
L_089AEC58:
    ctx.gpr[31] = (0x089AEC60u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(908)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 825u, 0x0889FD24u>(ctx, &aot_mem) && ctx.pc == 0x089AEC60u) goto L_089AEC60;
    return;
L_089AEC60:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEC9C;
      }
      goto L_089AEC68;
    }
L_089AEC68:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089AEC9C;
L_089AEC9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1860)));
    ctx.gpr[16] = (ctx.gpr[29] | 0u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(908)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1884)));
    goto L_089AECBC;
L_089AECBC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089AECCCu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 113u, 0x0899CEACu>(ctx, &aot_mem) && ctx.pc == 0x089AECCCu) goto L_089AECCC;
    return;
L_089AECCC:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089AECBC;
      }
      goto L_089AECF4;
    }
L_089AECF4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    goto L_089AED20;
L_089AED20:
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    ctx.gpr[11] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[10]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089AED20;
      }
      goto L_089AEDA8;
    }
L_089AEDA8:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1868), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1884)));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1904)));
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
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
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
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089AEE2C;
L_089AEE2C:
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(320)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089AEE6C;
      }
      goto L_089AEE58;
    }
L_089AEE58:
    ctx.gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
        goto L_089AEE6C;
    }
    goto L_089AEE6C;
L_089AEE6C:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(320)));
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089AEEAC;
      }
      goto L_089AEE98;
    }
L_089AEE98:
    ctx.gpr[17] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
        goto L_089AEEAC;
    }
    goto L_089AEEAC;
L_089AEEAC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089AEF44;
      }
      goto L_089AEEB4;
    }
L_089AEEB4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089AEF44;
      }
      goto L_089AEEBC;
    }
L_089AEEBC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1868), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089AEEFC;
      }
      goto L_089AEEC4;
    }
L_089AEEC4:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089AEEE8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x089AEEE8u) goto L_089AEEE8;
    return;
L_089AEEE8:
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089AEEFC;
L_089AEEFC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AF044;
      }
      goto L_089AEF04;
    }
L_089AEF04:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[26];
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089AEF28u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x089AEF28u) goto L_089AEF28;
    return;
L_089AEF28:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF044;
      }
      goto L_089AEF44;
    }
L_089AEF44:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089AEFC8;
      }
      goto L_089AEF4C;
    }
L_089AEF4C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AEFC8;
      }
      goto L_089AEF54;
    }
L_089AEF54:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(320)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF044;
      }
      goto L_089AEFC8;
    }
L_089AEFC8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF044;
      }
      goto L_089AEFD0;
    }
L_089AEFD0:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089AF044;
      }
      goto L_089AEFD8;
    }
L_089AEFD8:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(320)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
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
    goto L_089AF044;
L_089AF044:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_089AEE2C;
      }
      goto L_089AF05C;
    }
L_089AF05C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1868)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AF1FC;
      }
      goto L_089AF068;
    }
L_089AF068:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(800), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(804), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(808), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    goto L_089AF088;
L_089AF088:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089AF094u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x089AF094u) goto L_089AF094;
    return;
L_089AF094:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089AF088;
      }
      goto L_089AF0A4;
    }
L_089AF0A4:
    ctx.gpr[4] = (16000u << 16u);
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
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(880));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    goto L_089AF0D0;
L_089AF0D0:
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
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AF104;
      }
      goto L_089AF100;
    }
L_089AF100:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089AF104;
L_089AF104:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089AF0D0;
      }
      goto L_089AF114;
    }
L_089AF114:
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (16268u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089AF13Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 316u, 0x08869F5Cu>(ctx, &aot_mem) && ctx.pc == 0x089AF13Cu) goto L_089AF13C;
    return;
L_089AF13C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1904)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1884)));
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(856), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AF1CC;
      }
      goto L_089AF17C;
    }
L_089AF17C:
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(864));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089AF1BCu);
    ctx.gpr[8] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 317u, 0x08869F90u>(ctx, &aot_mem) && ctx.pc == 0x089AF1BCu) goto L_089AF1BC;
    return;
L_089AF1BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF1D4;
      }
      goto L_089AF1C4;
    }
L_089AF1C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF1FC;
      }
      goto L_089AF1CC;
    }
L_089AF1CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089AFF80;
      }
      goto L_089AF1D4;
    }
L_089AF1D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1860)));
    ctx.gpr[5] = (0u | 11u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(916), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF1F4;
      }
      goto L_089AF1EC;
    }
L_089AF1EC:
    ctx.gpr[31] = (0x089AF1F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1860)));
    goto L_089AD7C0;
L_089AF1F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089AFF80;
      }
      goto L_089AF1FC;
    }
L_089AF1FC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    ctx.gpr[3] = (ctx.gpr[29] + static_cast<std::uint32_t>(928));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[13] = (0u | 11u);
    goto L_089AF264;
L_089AF264:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[14] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(320)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[14] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AF328;
      }
      goto L_089AF2A8;
    }
L_089AF2A8:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AF328;
      }
      goto L_089AF2B8;
    }
L_089AF2B8:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(320)));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[12] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF3B0;
      }
      goto L_089AF328;
    }
L_089AF328:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AF3B0;
      }
      goto L_089AF338;
    }
L_089AF338:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AF3B0;
      }
      goto L_089AF348;
    }
L_089AF348:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(320)));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.gpr[12] | 0u);
    goto L_089AF3B0;
L_089AF3B0:
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[12]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089AF264;
      }
      goto L_089AF3C4;
    }
L_089AF3C4:
    ctx.gpr[5] = (ctx.gpr[4] | ctx.gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089AF3F4;
      }
      goto L_089AF3D0;
    }
L_089AF3D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1860)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(916), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[13];
    // nop
      if (branch_taken) {
          goto L_089AF3EC;
      }
      goto L_089AF3E4;
    }
L_089AF3E4:
    ctx.gpr[31] = (0x089AF3ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1860)));
    goto L_089AD7C0;
L_089AF3EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089AFF80;
      }
      goto L_089AF3F4;
    }
L_089AF3F4:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(3));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089AF414;
      }
      goto L_089AF404;
    }
L_089AF404:
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[5]);
      if (branch_taken) {
          goto L_089AF418;
      }
      goto L_089AF414;
    }
L_089AF414:
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    goto L_089AF418;
L_089AF418:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[8] = (ctx.gpr[6] & 3u);
      if (branch_taken) {
          goto L_089AF434;
      }
      goto L_089AF424;
    }
L_089AF424:
    ctx.gpr[6] = (0u - ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[6] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (0u - ctx.gpr[8]);
      if (branch_taken) {
          goto L_089AF434;
      }
      goto L_089AF434;
    }
L_089AF434:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    if (static_cast<std::int32_t>(ctx.gpr[6]) >= 0) {
    ctx.gpr[6] = (ctx.gpr[6] & 3u);
        goto L_089AF450;
    }
    goto L_089AF440;
L_089AF440:
    ctx.gpr[6] = (0u - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u - ctx.gpr[6]);
      if (branch_taken) {
          goto L_089AF450;
      }
      goto L_089AF450;
    }
L_089AF450:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
        goto L_089AF46C;
    }
    goto L_089AF45C;
L_089AF45C:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_089AF46C;
      }
      goto L_089AF46C;
    }
L_089AF46C:
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1884)));
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(416));
    ctx.gpr[11] = (ctx.gpr[6] << 4u);
    ctx.gpr[11] = (ctx.gpr[29] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[8];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(416));
      if (branch_taken) {
          goto L_089AF4E8;
      }
      goto L_089AF4A8;
    }
L_089AF4A8:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(3));
    if (static_cast<std::int32_t>(ctx.gpr[9]) >= 0) {
    ctx.gpr[9] = (ctx.gpr[9] & 3u);
        goto L_089AF4C4;
    }
    goto L_089AF4B4;
L_089AF4B4:
    ctx.gpr[9] = (0u - ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (0u - ctx.gpr[9]);
      if (branch_taken) {
          goto L_089AF4C4;
      }
      goto L_089AF4C4;
    }
L_089AF4C4:
    ctx.gpr[11] = (ctx.gpr[9] << 4u);
    ctx.gpr[11] = (ctx.gpr[29] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089AF4A8;
      }
      goto L_089AF4E8;
    }
L_089AF4E8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1904)));
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[9] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1864), ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(496));
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(192));
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
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(496));
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1880), ctx.gpr[7]);
      if (branch_taken) {
          goto L_089AF57C;
      }
      goto L_089AF53C;
    }
L_089AF53C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5));
    if (static_cast<std::int32_t>(ctx.gpr[6]) >= 0) {
    ctx.gpr[6] = (ctx.gpr[6] & 3u);
        goto L_089AF558;
    }
    goto L_089AF548;
L_089AF548:
    ctx.gpr[6] = (0u - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u - ctx.gpr[6]);
      if (branch_taken) {
          goto L_089AF558;
      }
      goto L_089AF558;
    }
L_089AF558:
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF53C;
      }
      goto L_089AF57C;
    }
L_089AF57C:
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
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1872), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1876), ctx.gpr[4]);
    goto L_089AF5AC;
L_089AF5AC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089AF5B8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x089AF5B8u) goto L_089AF5B8;
    return;
L_089AF5B8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089AF5AC;
      }
      goto L_089AF5C8;
    }
L_089AF5C8:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1864)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), 0u);
    ctx.gpr[20] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1896), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1900), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_089AF8C0;
      }
      goto L_089AF610;
    }
L_089AF610:
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (49024u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(416));
    goto L_089AF63C;
L_089AF63C:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(996)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(992)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(976), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(980), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(984), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
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
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AF6F8;
      }
      goto L_089AF6E4;
    }
L_089AF6E4:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
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
    goto L_089AF6F8;
L_089AF6F8:
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x089AF754u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 489u, 0x088C697Cu>(ctx, &aot_mem) && ctx.pc == 0x089AF754u) goto L_089AF754;
    return;
L_089AF754:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AF79C;
      }
      goto L_089AF760;
    }
L_089AF760:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x089AF798u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 489u, 0x088C697Cu>(ctx, &aot_mem) && ctx.pc == 0x089AF798u) goto L_089AF798;
    return;
L_089AF798:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089AF79C;
L_089AF79C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF8A0;
      }
      goto L_089AF7A4;
    }
L_089AF7A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1860)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(908)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089AF89C;
      }
      goto L_089AF7B8;
    }
L_089AF7B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089AF89C;
      }
      goto L_089AF7C4;
    }
L_089AF7C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089AF89C;
      }
      goto L_089AF7D4;
    }
L_089AF7D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF88C;
      }
      goto L_089AF7EC;
    }
L_089AF7EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF810;
      }
      goto L_089AF800;
    }
L_089AF800:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1896), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1900), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089AF8C0;
      }
      goto L_089AF810;
    }
L_089AF810:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AF860;
      }
      goto L_089AF850;
    }
L_089AF850:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1896), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1900), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089AF8C0;
      }
      goto L_089AF860;
    }
L_089AF860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1860)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF884;
      }
      goto L_089AF874;
    }
L_089AF874:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1896), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1900), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089AF8C0;
      }
      goto L_089AF884;
    }
L_089AF884:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF8A0;
      }
      goto L_089AF88C;
    }
L_089AF88C:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1896), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1900), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089AF8C0;
      }
      goto L_089AF89C;
    }
L_089AF89C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), 0u);
    goto L_089AF8A0;
L_089AF8A0:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1864)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089AF63C;
      }
      goto L_089AF8C0;
    }
L_089AF8C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1872)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), 0u);
    ctx.gpr[20] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1888), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1892), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_089AFBA0;
      }
      goto L_089AF8F0;
    }
L_089AF8F0:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (49024u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(596));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1200));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(496));
    goto L_089AF91C;
L_089AF91C:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1124)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1120)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1108), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
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
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AF9D8;
      }
      goto L_089AF9C4;
    }
L_089AF9C4:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
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
    goto L_089AF9D8;
L_089AF9D8:
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x089AFA34u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 489u, 0x088C697Cu>(ctx, &aot_mem) && ctx.pc == 0x089AFA34u) goto L_089AFA34;
    return;
L_089AFA34:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AFA7C;
      }
      goto L_089AFA40;
    }
L_089AFA40:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x089AFA78u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 489u, 0x088C697Cu>(ctx, &aot_mem) && ctx.pc == 0x089AFA78u) goto L_089AFA78;
    return;
L_089AFA78:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089AFA7C;
L_089AFA7C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFB80;
      }
      goto L_089AFA84;
    }
L_089AFA84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1860)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(908)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089AFB7C;
      }
      goto L_089AFA98;
    }
L_089AFA98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089AFB7C;
      }
      goto L_089AFAA4;
    }
L_089AFAA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089AFB7C;
      }
      goto L_089AFAB4;
    }
L_089AFAB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AFB6C;
      }
      goto L_089AFACC;
    }
L_089AFACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AFAF0;
      }
      goto L_089AFAE0;
    }
L_089AFAE0:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1888), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1892), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089AFBA0;
      }
      goto L_089AFAF0;
    }
L_089AFAF0:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AFB40;
      }
      goto L_089AFB30;
    }
L_089AFB30:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1888), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1892), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089AFBA0;
      }
      goto L_089AFB40;
    }
L_089AFB40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1860)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AFB64;
      }
      goto L_089AFB54;
    }
L_089AFB54:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1888), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1892), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089AFBA0;
      }
      goto L_089AFB64;
    }
L_089AFB64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFB80;
      }
      goto L_089AFB6C;
    }
L_089AFB6C:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1888), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1892), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089AFBA0;
      }
      goto L_089AFB7C;
    }
L_089AFB7C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), 0u);
    goto L_089AFB80;
L_089AFB80:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1872)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089AF91C;
      }
      goto L_089AFBA0;
    }
L_089AFBA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1880)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[19] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1860)));
      if (branch_taken) {
          goto L_089AFC0C;
      }
      goto L_089AFBC0;
    }
L_089AFBC0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1216));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1880)));
    goto L_089AFBD0;
L_089AFBD0:
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[11] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089AFBD0;
      }
      goto L_089AFC0C;
    }
L_089AFC0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1876)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1232));
      if (branch_taken) {
          goto L_089AFC68;
      }
      goto L_089AFC20;
    }
L_089AFC20:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1876)));
    goto L_089AFC2C;
L_089AFC2C:
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[11] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[13];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089AFC2C;
      }
      goto L_089AFC68;
    }
L_089AFC68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFC9C;
      }
      goto L_089AFC74;
    }
L_089AFC74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1892)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFC9C;
      }
      goto L_089AFC80;
    }
L_089AFC80:
    ctx.gpr[4] = (0u | 2u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
        goto L_089AFC94;
    }
    goto L_089AFC94;
L_089AFC94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFD88;
      }
      goto L_089AFC9C;
    }
L_089AFC9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFCB0;
      }
      goto L_089AFCA8;
    }
L_089AFCA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_089AFD88;
      }
      goto L_089AFCB0;
    }
L_089AFCB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1892)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFCC4;
      }
      goto L_089AFCBC;
    }
L_089AFCBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_089AFD88;
      }
      goto L_089AFCC4;
    }
L_089AFCC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1896)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089AFCE8;
      }
      goto L_089AFCD0;
    }
L_089AFCD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1888)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AFCE8;
      }
      goto L_089AFCE0;
    }
L_089AFCE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_089AFD88;
      }
      goto L_089AFCE8;
    }
L_089AFCE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1896)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AFD0C;
      }
      goto L_089AFCF8;
    }
L_089AFCF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1888)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089AFD0C;
      }
      goto L_089AFD04;
    }
L_089AFD04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_089AFD88;
      }
      goto L_089AFD0C;
    }
L_089AFD0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
        goto L_089AFD38;
    }
    goto L_089AFD1C;
L_089AFD1C:
    ctx.gpr[4] = (0u | 2u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
        goto L_089AFD30;
    }
    goto L_089AFD30;
L_089AFD30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFD88;
      }
      goto L_089AFD38;
    }
L_089AFD38:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
        goto L_089AFD88;
    }
    goto L_089AFD88;
L_089AFD88:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089AFE50;
      }
      goto L_089AFD90;
    }
L_089AFD90:
    ctx.gpr[31] = (0x089AFD98u);
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089AFD98u) goto L_089AFD98;
    return;
L_089AFD98:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1880)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089AFF14;
      }
      goto L_089AFDAC;
    }
L_089AFDAC:
    ctx.gpr[9] = (16640u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1248));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(416));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1860)));
    goto L_089AFDC0;
L_089AFDC0:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(904))))));
    ctx.gpr[10] = (ctx.gpr[9] << 4u);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(920));
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1252)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1256)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(904))))));
    ctx.gpr[11] = (ctx.gpr[10] << 2u);
    ctx.gpr[11] = (ctx.gpr[7] + ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(872), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AFDC0;
      }
      goto L_089AFE48;
    }
L_089AFE48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFF14;
      }
      goto L_089AFE50;
    }
L_089AFE50:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AFF14;
      }
      goto L_089AFE5C;
    }
L_089AFE5C:
    ctx.gpr[31] = (0x089AFE64u);
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089AFE64u) goto L_089AFE64;
    return;
L_089AFE64:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1876)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089AFF14;
      }
      goto L_089AFE78;
    }
L_089AFE78:
    ctx.gpr[9] = (16640u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1264));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(496));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1860)));
    goto L_089AFE8C;
L_089AFE8C:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(904))))));
    ctx.gpr[10] = (ctx.gpr[9] << 4u);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(920));
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1264)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1268)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1272)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(904))))));
    ctx.gpr[11] = (ctx.gpr[10] << 2u);
    ctx.gpr[11] = (ctx.gpr[8] + ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(872), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AFE8C;
      }
      goto L_089AFF14;
    }
L_089AFF14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1860)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(904))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AFF48;
      }
      goto L_089AFF24;
    }
L_089AFF24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1860)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(916), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089AFF40;
      }
      goto L_089AFF38;
    }
L_089AFF38:
    ctx.gpr[31] = (0x089AFF40u);
    // nop
    goto L_089AD7C0;
L_089AFF40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089AFF80;
      }
      goto L_089AFF48;
    }
L_089AFF48:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1860)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(848)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(848), 0u);
    ctx.gpr[31] = (0x089AFF5Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 727u, 0x0899FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089AFF5Cu) goto L_089AFF5C;
    return;
L_089AFF5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_089AFF6C;
      }
      goto L_089AFF68;
    }
L_089AFF68:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(848), ctx.gpr[17]);
    goto L_089AFF6C;
L_089AFF6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1204)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(844), ctx.gpr[19]);
    ctx.gpr[31] = (0x089AFF7Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089AFF7Cu) goto L_089AFF7C;
    return;
L_089AFF7C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_089AFF80;
L_089AFF80:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1908)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1912)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1916)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1924)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1928)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1932)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1936)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1940)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1944)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1948)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1952)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1956)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1960)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1968));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AFFC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 31u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.pc = 0x089B0000u; return;
}

void recomp_unit_0106(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0106_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_106(Runtime &runtime) {
    runtime.register_generated_unit(106u, 0x089AC000u, 16384u, &recomp_unit_0106, &recomp_unit_0106_entry);
    runtime.register_function(0x089AC004u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC014u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC024u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC04Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC054u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC05Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC064u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC070u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC084u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC094u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC0A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC0B4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC0BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC0D0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC0E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC0F0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC100u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC110u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC118u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC128u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC144u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC160u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC1A0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC1A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC1BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC1C4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC1CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC1D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC1DCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC1E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC1F0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC1F8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC200u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC214u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC220u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC238u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC244u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC254u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC264u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC274u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC284u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC2A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC2BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC2D0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC2F4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC300u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC30Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC344u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC354u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC35Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC368u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC370u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC37Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC384u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC38Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC3ACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC3BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC3D0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC3D8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC3E4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC41Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC44Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC46Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC4A0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC4ACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC4C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC4DCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC4F0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC500u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC514u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC520u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC534u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC540u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC548u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC5F4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC628u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC660u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC668u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC670u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC678u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC680u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC688u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC690u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC698u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC6A0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC6ACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC6D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC6F8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC70Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC728u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC738u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC748u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC760u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC7D0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC7DCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC7E8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC7F0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC7F8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC800u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC808u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC81Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC824u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC830u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC850u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC868u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC884u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC894u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC8A4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC8BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC924u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC940u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC94Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC978u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC9A4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC9B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC9CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC9E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC9ECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC9F4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC9FCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACA04u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACA0Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACA18u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACA38u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACA4Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACA80u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACB10u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACB20u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACB34u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACB40u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACBA4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACBB4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACBCCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACBE0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACBE4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACC10u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACC18u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACC4Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACCB8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACCE0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACCE8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD04u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD10u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD24u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD38u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD3Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD60u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD80u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD9Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACDA0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACDBCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACDD0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACDE8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACDF8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACE18u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACE34u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACE50u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACE90u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACEA0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACEA8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACEB0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACEBCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACECCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACEF8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACF00u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACF58u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACF60u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACF80u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACF94u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACFACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACFB0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD020u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD040u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD098u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD0ACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD0B4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD0C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD0D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD0E4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD118u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD144u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD14Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD168u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD188u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD198u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD1ACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD1BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD208u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD230u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD23Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD248u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD254u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD258u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD260u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD26Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD270u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD2A0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD2D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD378u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD37Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD3ACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD3C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD3FCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD42Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD458u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD4C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD4C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD4D0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD508u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD52Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD54Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD55Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD56Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD588u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD5B8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD5C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD5C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD5E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD5F8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD618u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD638u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD688u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD698u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD6A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD6C4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD704u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD70Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD714u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD72Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD77Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD784u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD794u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD7C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD7DCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD7E4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD7F4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD804u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD814u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD820u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD828u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD830u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD838u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD848u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD854u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD860u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD86Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD870u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD878u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD888u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD894u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD89Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD8A4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD8B4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD8C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD8C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD8D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD8E4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD8F4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD8FCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD904u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD90Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD914u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD91Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD924u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD92Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD93Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD944u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD954u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD95Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD964u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD96Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD974u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD984u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD990u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD99Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD9A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD9ACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD9B4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD9DCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD9E8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD9F8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADA38u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADA44u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADA4Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADA58u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADA64u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADA6Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADA74u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADA80u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADA90u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADAA0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADAA8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADAB8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADAC4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADAD0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADADCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADAE8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADAECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADAF4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADB04u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADB08u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADB20u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADB44u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADB5Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADB64u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADB6Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADB74u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADB7Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADB88u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADB94u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADBB0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADBC4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADBCCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADBDCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADBE8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADBF0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADC00u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADC08u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADC10u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADC20u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADC30u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADC40u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADC50u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADC6Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADC94u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADC9Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADCC4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADCC8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADCD4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADCDCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADCE4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD04u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD18u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD2Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD34u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD48u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD50u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD64u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD78u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD80u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD88u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD90u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADDA0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADDA4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADDB0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADDC8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADDCCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADDD4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADDECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADE00u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADE20u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADE30u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADE38u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADE48u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADE50u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADE58u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADE60u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADE7Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADEB0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADEC0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADEC8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADED0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADEECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADF00u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADF08u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADF18u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADF2Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADF44u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADF54u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADF5Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADF64u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADF74u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADF7Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADF90u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADF98u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADFA4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADFBCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADFC8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADFE0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADFECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADFF4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE004u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE010u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE01Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE028u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE02Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE034u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE038u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE04Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE058u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE068u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE074u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE078u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE080u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE0A0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE0B4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE0D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE124u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE12Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE144u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE14Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE16Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE174u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE17Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE188u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE1A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE1B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE204u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE20Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE218u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE224u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE230u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE23Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE24Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE254u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE264u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE270u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE280u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE294u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE2A0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE2B4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE2BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE2D0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE2D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE2E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE2E8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE2F4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE2FCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE324u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE334u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE33Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE344u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE348u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE370u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE384u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE390u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE398u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE3ACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE3B4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE3C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE3CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE3D8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE400u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE448u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE450u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE45Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE464u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE46Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE478u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE480u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE488u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE494u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE49Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE4A4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE4B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE4B8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE4C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE4D0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE514u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE518u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE520u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE52Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE56Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE570u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE578u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE580u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE59Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE5A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE5B4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE5BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE5C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE5D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE5E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE5ECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE5F4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE600u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE610u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE624u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE62Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE63Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE64Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE658u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE66Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE674u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE684u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE690u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE694u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE6A4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE6ACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE6B4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE6BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE6E4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE71Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE764u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE780u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE788u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE790u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE79Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE7A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE7C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE7C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE7E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE7ECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE7F8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE804u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE810u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE814u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE81Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE828u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE87Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE888u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE890u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE89Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE8ACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE8C4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE8CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE8E4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE8F0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE8FCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE908u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE914u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE918u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE920u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE92Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE938u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE948u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE950u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE968u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE974u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE988u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE998u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE9F0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE9FCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA04u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA10u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA24u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA34u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA48u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA58u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA60u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA74u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA78u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA98u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEAA4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEAA8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEAB8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEABCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEAECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEC58u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEC60u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEC68u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEC9Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AECBCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AECCCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AECF4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AED20u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEDA8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEE2Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEE58u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEE6Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEE98u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEEACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEEB4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEEBCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEEC4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEEE8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEEFCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEF04u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEF28u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEF44u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEF4Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEF54u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEFC8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEFD0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEFD8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF044u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF05Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF068u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF088u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF094u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF0A4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF0D0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF100u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF104u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF114u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF13Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF17Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF1BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF1C4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF1CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF1D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF1ECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF1F4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF1FCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF264u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF2A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF2B8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF328u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF338u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF348u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF3B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF3C4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF3D0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF3E4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF3ECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF3F4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF404u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF414u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF418u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF424u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF434u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF440u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF450u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF45Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF46Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF4A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF4B4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF4C4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF4E8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF53Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF548u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF558u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF57Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF5ACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF5B8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF5C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF610u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF63Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF6E4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF6F8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF754u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF760u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF798u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF79Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF7A4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF7B8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF7C4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF7D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF7ECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF800u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF810u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF850u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF860u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF874u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF884u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF88Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF89Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF8A0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF8C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF8F0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF91Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF9C4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF9D8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFA34u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFA40u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFA78u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFA7Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFA84u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFA98u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFAA4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFAB4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFACCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFAE0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFAF0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB30u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB40u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB54u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB64u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB6Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB7Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB80u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFBA0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFBC0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFBD0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFC0Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFC20u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFC2Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFC68u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFC74u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFC80u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFC94u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFC9Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFCA8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFCB0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFCBCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFCC4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFCD0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFCE0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFCE8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFCF8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFD04u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFD0Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFD1Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFD30u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFD38u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFD88u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFD90u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFD98u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFDACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFDC0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFE48u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFE50u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFE5Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFE64u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFE78u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFE8Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFF14u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFF24u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFF38u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFF40u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFF48u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFF5Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFF68u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFF6Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFF7Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFF80u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFFC0u, &recomp_unit_0106, "recomp_unit_0106");
}
} // namespace psprecomp
