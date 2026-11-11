#include "lcs_controls.hpp"
#include "guest.hpp"  // [lcs-aim] guest_call
#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0080[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 6, 7, 0, 0, 0, 0, 0, 8,
    0, 9, 0, 10, 0, 0, 11, 0, 12, 0, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0,
    0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 0, 23,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 28,
    0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0,
    0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 41, 0, 42, 0, 43, 0, 44, 0, 45,
    0, 0, 0, 46, 0, 47, 0, 48, 0, 49, 50, 0, 51, 0, 52, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0,
    0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 70, 0, 71, 72, 0, 0, 0, 73, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 85, 0, 86, 0,
    87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 99, 0, 100, 0, 101, 0, 102, 0, 0, 0, 103, 0,
    104, 0, 105, 0, 0, 106, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 111, 0, 112, 0, 0, 0, 113, 0, 114, 0, 115, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 119,
    0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 127,
    0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 130, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 0, 0, 143, 0, 144, 0, 145, 0,
    0, 146, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0,
    152, 0, 153, 0, 154, 0, 155, 0, 156, 0, 0, 157, 0, 0, 158, 0, 159, 0, 160, 0, 161, 0, 0, 0, 162, 0, 163, 0, 164, 0, 165, 0,
    166, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 186, 0, 0,
    0, 0, 187, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 0, 196, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 201, 0, 0, 0, 202, 0, 0, 203, 0, 0,
    204, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 211, 0, 212, 0, 0, 0,
    0, 213, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0,
    0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 223, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 232, 0, 233, 0, 0, 234, 0, 235, 0, 0, 236, 0, 237, 0, 0, 238, 0, 239, 0, 240, 0, 241, 0, 242, 0, 243, 0, 0, 0,
    0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 248,
    0, 249, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0,
    0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 264, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0,
    267, 0, 268, 269, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 276, 0, 277, 0,
    0, 278, 0, 279, 0, 280, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0,
    287, 0, 288, 0, 289, 0, 290, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 302, 0, 0, 303, 0, 304, 0, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 307, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312, 0, 313, 0, 314, 0, 315, 0, 316, 317, 0, 318,
    0, 319, 0, 0, 0, 0, 320, 0, 321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 326, 0, 327, 0, 0, 0, 0, 0, 328, 0, 329, 330, 0, 0,
    0, 331, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 337, 0, 0, 0, 338, 0, 0,
    0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0,
    0, 0, 0, 345, 0, 346, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0,
    352, 0, 0, 0, 353, 0, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0,
    0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 362, 363, 0, 0, 0, 0, 364, 0, 0, 365, 0,
    0, 0, 366, 0, 367, 368, 0, 0, 369, 0, 0, 370, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0,
    373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 376, 0, 377, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 379, 0, 0, 380, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 385, 0,
    386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 388, 0, 0, 389, 0, 0, 390, 0, 391, 392, 0, 0, 0, 0, 393, 0,
    0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 398, 0, 0, 0, 399, 0,
    400, 0, 0, 0, 0, 401, 0, 402, 0, 403, 0, 404, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 409, 0, 0,
    0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 413, 0, 414, 0, 415, 0, 0, 416, 0, 417, 0, 0, 418, 0, 419, 0, 420, 0, 0, 0,
    421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 424, 0, 0, 425, 0, 0, 426, 0, 427, 0, 428, 0, 429, 0, 0, 0, 430, 0, 0, 0,
    0, 431, 0, 0, 0, 0, 432, 0, 433, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 436, 0, 437, 0, 0, 438, 439, 0, 440, 0, 0, 441, 0,
    0, 0, 442, 0, 0, 0, 0, 443, 0, 444, 0, 0, 445, 0, 0, 446, 447, 0, 448, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0,
    452, 0, 0, 0, 0, 453, 0, 0, 454, 0, 0, 455, 0, 456, 457, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0,
    0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0,
    0, 470, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 475, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0,
    0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 481, 0, 482, 0, 0, 0, 483, 0, 0, 484, 0, 485,
    0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 489, 0, 0, 0, 490, 0, 491, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 494, 0, 0, 495, 0, 0, 496, 497,
    0, 498, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 508, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 509, 0, 510, 0, 511, 0, 0, 0, 512, 0, 0, 513, 0, 0, 514, 0, 0, 515, 516, 0, 517, 0, 0, 0, 0,
    518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 522, 0, 0,
    0, 0, 0, 523, 0, 0, 524, 0, 0, 525, 0, 0, 0, 0, 526, 527, 0, 0, 0, 0, 528, 0, 0, 0, 529, 0, 0, 530, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 532, 0, 533, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 536, 0, 0, 537, 538, 0, 0, 539, 0, 0, 0, 540, 0,
    0, 541, 0, 542, 0, 543, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 546, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0,
    0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0,
    0, 0, 553, 0, 0, 554, 0, 0, 0, 555, 0, 0, 0, 0, 556, 0, 557, 0, 0, 558, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 560, 0, 561, 0, 562, 0, 0, 0, 0, 0, 0, 563, 0, 564, 0, 0, 565, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0,
    568, 0, 569, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 572, 0, 0, 573, 0, 0, 0, 0, 0,
    0, 0, 574, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 578, 0, 579, 0,
    580, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 583, 0, 584, 0, 0, 0, 0, 0, 585, 0, 586, 0, 0,
    0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 589, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 592, 593,
    0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 596, 0, 0, 0, 0, 0, 597, 0, 0, 598, 0, 599, 0, 600, 0, 601, 0,
    602, 0, 603, 0, 604, 0, 605, 0, 606, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 608, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0, 0, 617, 618, 0, 0, 619, 0, 0, 0, 620, 0, 0, 0, 621, 0, 622, 0, 0, 623,
    0, 0, 0, 0, 624, 0, 0, 625, 0, 0, 0, 626, 0, 627, 0, 628, 0, 629, 0, 630, 0, 0, 0, 0, 0, 0, 631, 0, 632, 0, 633, 0,
    0, 0, 634, 0, 0, 0, 635, 0, 0, 636, 0, 0, 0, 637, 0, 0, 0, 0, 638, 0, 639, 0, 0, 640, 0, 0, 0, 0, 641, 0, 642, 0,
    0, 643, 0, 0, 644, 0, 645, 0, 646, 0, 0, 0, 0, 0, 0, 647, 0, 648, 0, 0, 0, 0, 0, 649, 0, 650, 0, 0, 0, 0, 0, 651,
    652, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 654, 0, 655, 0, 0, 0, 656, 657, 0, 0, 0, 658, 0, 659, 0, 660, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 661, 0, 662, 0, 0, 663, 0, 664, 0, 0, 0, 665, 0, 0, 666, 0, 667, 0, 668, 0, 669, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 670, 0, 671, 0, 0, 672, 0, 673, 0, 0, 0, 0, 674, 0, 675, 0, 0, 676, 0, 0, 0, 0, 677, 0, 0, 678, 0, 679, 0,
    0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 682, 0, 683, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 685, 0, 0, 686, 0, 687, 0, 0, 688, 0, 689, 0, 690, 0, 0, 691, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 695, 0, 0, 696, 0, 0, 0, 697, 0, 698, 0, 699, 0, 0, 0, 700, 0, 0,
    0, 0, 701, 0, 702, 0, 703, 0, 704, 0, 705, 0, 706, 0, 0, 707, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 709, 0, 0, 0, 710, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 713, 0, 714, 0, 0, 715, 0, 716,
    0, 717, 0, 0, 718, 0, 0, 719, 0, 0, 720, 721, 722, 0, 723, 0, 724, 0, 0, 725, 0, 0, 726, 0, 0, 727, 728, 729, 730, 0, 731, 0,
    0, 732, 0, 0, 733, 0, 0, 734, 735, 736, 0, 737, 0, 738, 0, 0, 739, 0, 0, 740, 0, 0, 741, 742, 743, 744, 0, 745, 0, 746, 0, 0,
    0, 747, 0, 0, 0, 748, 0, 749, 0, 750, 0, 751, 0, 752, 753, 0, 754, 0, 755, 0, 756, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 758,
    0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 760, 0, 0, 0, 761, 0, 762, 0, 763, 0, 0, 764, 0, 765, 0, 766, 0, 767, 0, 768, 0, 0,
    769, 0, 770, 0, 0, 0, 771, 0, 772, 0, 0, 773, 0, 774, 0, 775, 0, 0, 776, 0, 777, 0, 778, 0, 0, 0, 779, 0, 780, 0, 0, 781,
    0, 0, 782, 0, 0, 0, 783, 0, 0, 0, 784, 0, 785, 0, 0, 786, 0, 787, 0, 788, 0, 0, 789, 0, 0, 0, 790, 0, 0, 791, 0, 0,
    792, 0, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 794, 0, 0, 0, 795, 0, 0, 0, 0, 0, 0, 0, 796, 0, 797, 0, 0, 0, 0,
    0, 0, 798, 0, 799, 0, 800, 0, 801, 0, 0, 0, 802, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0, 0, 804, 0, 805, 0, 806, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 809, 0, 0, 0, 810, 0, 0, 811, 0, 812, 0, 813, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 815, 0, 0, 0, 816, 0,
    0, 0, 817, 0, 818, 0, 819, 0, 0, 0, 0, 0, 0, 820, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0,
    0, 0, 0, 0, 0, 823, 0, 0, 0, 824, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 826, 0, 827, 0, 0, 0, 0, 0, 0, 0, 0,
    828, 0, 829, 0, 0, 0, 830, 0, 0, 0, 0, 0, 0, 831, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 0, 0, 0, 0, 0, 833, 0,
    834, 0, 0, 0, 835, 0, 0, 0, 0, 0, 836, 0, 0, 837, 0, 0, 0, 838, 0, 0, 839, 0, 840, 0, 841, 0, 0, 842, 0, 0, 0, 843,
    0, 844, 0, 0, 845, 846, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 847, 0,
    0, 848, 0, 0, 0, 849, 0, 0, 0, 0, 850, 0, 0, 851, 0, 852, 0, 0, 853, 0, 854, 0, 855, 0, 856, 0, 857, 0, 858, 859, 0, 0,
    860, 0, 0, 0, 0, 0, 0, 0, 0, 861, 0, 0, 0, 862, 0, 0, 863, 0, 0, 0, 864, 0, 865, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 866, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 867, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 868, 0, 0, 869, 0, 0, 0, 870, 0, 0, 0, 871, 0, 0, 0, 872, 0, 0, 0, 873, 0, 0, 0, 874, 0, 0,
    0, 875, 0, 0, 0, 0, 876, 0, 877, 0, 0, 878, 0, 879, 0, 0, 880, 0, 881, 0, 0, 882, 0, 0, 0, 0, 883, 0, 884, 0, 0, 885,
    886, 0, 887, 0, 0, 888, 0, 0, 889, 0, 0, 890, 891, 0, 892, 0, 0, 0, 893, 0, 894, 0, 0, 0, 895, 0, 896, 0, 0, 0, 0, 897,
    0, 898, 0, 0, 0, 0, 899, 0, 0, 900, 0, 0, 0, 0, 0, 0, 0, 0, 0, 901, 0, 902, 0, 0, 0, 0, 0, 0, 0, 0, 903, 0,
    0, 904, 0, 905, 0, 0, 0, 0, 0, 0, 0, 0, 906, 0, 0, 0, 907, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    908, 0, 909, 0, 0, 0, 0, 910, 0, 911, 0, 0, 0, 0, 912, 913, 0, 914, 0, 0, 0, 0, 915, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 916, 0, 0, 0, 917, 0, 0, 0, 0, 918, 0, 919, 0, 920, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 921, 0, 0, 0,
    922, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 923, 0, 924, 0, 0, 0, 0, 925, 0, 926, 0, 0, 0, 0, 927, 928,
};
void recomp_unit_0080_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08944000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0080[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08944000;
    case 2u: goto L_08944028;
    case 3u: goto L_08944040;
    case 4u: goto L_0894404C;
    case 5u: goto L_08944054;
    case 6u: goto L_08944060;
    case 7u: goto L_08944064;
    case 8u: goto L_0894407C;
    case 9u: goto L_08944084;
    case 10u: goto L_0894408C;
    case 11u: goto L_08944098;
    case 12u: goto L_089440A0;
    case 13u: goto L_089440AC;
    case 14u: goto L_089440B4;
    case 15u: goto L_089440BC;
    case 16u: goto L_089440E8;
    case 17u: goto L_08944104;
    case 18u: goto L_08944124;
    case 19u: goto L_08944130;
    case 20u: goto L_08944160;
    case 21u: goto L_08944168;
    case 22u: goto L_08944170;
    case 23u: goto L_0894417C;
    case 24u: goto L_089441A4;
    case 25u: goto L_089441B8;
    case 26u: goto L_089441DC;
    case 27u: goto L_089441F4;
    case 28u: goto L_089441FC;
    case 29u: goto L_08944204;
    case 30u: goto L_08944228;
    case 31u: goto L_08944230;
    case 32u: goto L_0894423C;
    case 33u: goto L_08944254;
    case 34u: goto L_0894425C;
    case 35u: goto L_08944274;
    case 36u: goto L_08944298;
    case 37u: goto L_089442A0;
    case 38u: goto L_089442C4;
    case 39u: goto L_089442CC;
    case 40u: goto L_089442D4;
    case 41u: goto L_089442DC;
    case 42u: goto L_089442E4;
    case 43u: goto L_089442EC;
    case 44u: goto L_089442F4;
    case 45u: goto L_089442FC;
    case 46u: goto L_0894430C;
    case 47u: goto L_08944314;
    case 48u: goto L_0894431C;
    case 49u: goto L_08944324;
    case 50u: goto L_08944328;
    case 51u: goto L_08944330;
    case 52u: goto L_08944338;
    case 53u: goto L_0894433C;
    case 54u: goto L_08944354;
    case 55u: goto L_08944388;
    case 56u: goto L_089443A0;
    case 57u: goto L_089443B0;
    case 58u: goto L_089443B4;
    case 59u: goto L_089443E4;
    case 60u: goto L_089443F0;
    case 61u: goto L_08944408;
    case 62u: goto L_08944428;
    case 63u: goto L_08944438;
    case 64u: goto L_08944454;
    case 65u: goto L_08944468;
    case 66u: goto L_08944498;
    case 67u: goto L_089444B0;
    case 68u: goto L_089444BC;
    case 69u: goto L_089444C8;
    case 70u: goto L_089444D0;
    case 71u: goto L_089444D8;
    case 72u: goto L_089444DC;
    case 73u: goto L_089444EC;
    case 74u: goto L_08944558;
    case 75u: goto L_08944578;
    case 76u: goto L_089445BC;
    case 77u: goto L_089445E8;
    case 78u: goto L_089445F0;
    case 79u: goto L_08944610;
    case 80u: goto L_08944628;
    case 81u: goto L_08944634;
    case 82u: goto L_0894463C;
    case 83u: goto L_08944650;
    case 84u: goto L_08944664;
    case 85u: goto L_08944670;
    case 86u: goto L_08944678;
    case 87u: goto L_08944680;
    case 88u: goto L_0894468C;
    case 89u: goto L_089446A8;
    case 90u: goto L_089446B8;
    case 91u: goto L_089446C4;
    case 92u: goto L_089446D4;
    case 93u: goto L_089446F0;
    case 94u: goto L_089446F8;
    case 95u: goto L_08944700;
    case 96u: goto L_08944720;
    case 97u: goto L_0894473C;
    case 98u: goto L_08944748;
    case 99u: goto L_08944750;
    case 100u: goto L_08944758;
    case 101u: goto L_08944760;
    case 102u: goto L_08944768;
    case 103u: goto L_08944778;
    case 104u: goto L_08944780;
    case 105u: goto L_08944788;
    case 106u: goto L_08944794;
    case 107u: goto L_089447A8;
    case 108u: goto L_089447B0;
    case 109u: goto L_089447E4;
    case 110u: goto L_08944860;
    case 111u: goto L_08944888;
    case 112u: goto L_08944890;
    case 113u: goto L_089448A0;
    case 114u: goto L_089448A8;
    case 115u: goto L_089448B0;
    case 116u: goto L_089448B4;
    case 117u: goto L_089448D8;
    case 118u: goto L_089448F0;
    case 119u: goto L_089448FC;
    case 120u: goto L_08944904;
    case 121u: goto L_0894491C;
    case 122u: goto L_08944938;
    case 123u: goto L_08944940;
    case 124u: goto L_08944950;
    case 125u: goto L_08944960;
    case 126u: goto L_08944974;
    case 127u: goto L_0894497C;
    case 128u: goto L_0894498C;
    case 129u: goto L_0894499C;
    case 130u: goto L_089449B0;
    case 131u: goto L_089449B4;
    case 132u: goto L_089449C4;
    case 133u: goto L_089449E0;
    case 134u: goto L_089449E8;
    case 135u: goto L_089449F0;
    case 136u: goto L_08944A10;
    case 137u: goto L_08944A2C;
    case 138u: goto L_08944A38;
    case 139u: goto L_08944A40;
    case 140u: goto L_08944A48;
    case 141u: goto L_08944A50;
    case 142u: goto L_08944A58;
    case 143u: goto L_08944A68;
    case 144u: goto L_08944A70;
    case 145u: goto L_08944A78;
    case 146u: goto L_08944A84;
    case 147u: goto L_08944A98;
    case 148u: goto L_08944AA0;
    case 149u: goto L_08944AC8;
    case 150u: goto L_08944AE4;
    case 151u: goto L_08944AF0;
    case 152u: goto L_08944B00;
    case 153u: goto L_08944B08;
    case 154u: goto L_08944B10;
    case 155u: goto L_08944B18;
    case 156u: goto L_08944B20;
    case 157u: goto L_08944B2C;
    case 158u: goto L_08944B38;
    case 159u: goto L_08944B40;
    case 160u: goto L_08944B48;
    case 161u: goto L_08944B50;
    case 162u: goto L_08944B60;
    case 163u: goto L_08944B68;
    case 164u: goto L_08944B70;
    case 165u: goto L_08944B78;
    case 166u: goto L_08944B80;
    case 167u: goto L_08944B84;
    case 168u: goto L_08944B90;
    case 169u: goto L_08944BB0;
    case 170u: goto L_08944BBC;
    case 171u: goto L_08944BDC;
    case 172u: goto L_08944C08;
    case 173u: goto L_08944C20;
    case 174u: goto L_08944C30;
    case 175u: goto L_08944C40;
    case 176u: goto L_08944C50;
    case 177u: goto L_08944C60;
    case 178u: goto L_08944C70;
    case 179u: goto L_08944C80;
    case 180u: goto L_08944C9C;
    case 181u: goto L_08944CAC;
    case 182u: goto L_08944CBC;
    case 183u: goto L_08944CC4;
    case 184u: goto L_08944CDC;
    case 185u: goto L_08944CE4;
    case 186u: goto L_08944CF4;
    case 187u: goto L_08944D08;
    case 188u: goto L_08944D10;
    case 189u: goto L_08944D1C;
    case 190u: goto L_08944D38;
    case 191u: goto L_08944D40;
    case 192u: goto L_08944D48;
    case 193u: goto L_08944D58;
    case 194u: goto L_08944D68;
    case 195u: goto L_08944D80;
    case 196u: goto L_08944D94;
    case 197u: goto L_08944D9C;
    case 198u: goto L_08944DA8;
    case 199u: goto L_08944DC4;
    case 200u: goto L_08944DD0;
    case 201u: goto L_08944DD8;
    case 202u: goto L_08944DE8;
    case 203u: goto L_08944DF4;
    case 204u: goto L_08944E00;
    case 205u: goto L_08944E10;
    case 206u: goto L_08944E1C;
    case 207u: goto L_08944E30;
    case 208u: goto L_08944E48;
    case 209u: goto L_08944E54;
    case 210u: goto L_08944E60;
    case 211u: goto L_08944E68;
    case 212u: goto L_08944E70;
    case 213u: goto L_08944E84;
    case 214u: goto L_08944E94;
    case 215u: goto L_08944EA0;
    case 216u: goto L_08944EB0;
    case 217u: goto L_08944EBC;
    case 218u: goto L_08944EE8;
    case 219u: goto L_08944EF4;
    case 220u: goto L_08944F0C;
    case 221u: goto L_08944F28;
    case 222u: goto L_08944F30;
    case 223u: goto L_08944F38;
    case 224u: goto L_08944F50;
    case 225u: goto L_08944F58;
    case 226u: goto L_08944F70;
    case 227u: goto L_08944F98;
    case 228u: goto L_08944FAC;
    case 229u: goto L_08944FBC;
    case 230u: goto L_08944FC4;
    case 231u: goto L_08944FE0;
    case 232u: goto L_0894500C;
    case 233u: goto L_08945014;
    case 234u: goto L_08945020;
    case 235u: goto L_08945028;
    case 236u: goto L_08945034;
    case 237u: goto L_0894503C;
    case 238u: goto L_08945048;
    case 239u: goto L_08945050;
    case 240u: goto L_08945058;
    case 241u: goto L_08945060;
    case 242u: goto L_08945068;
    case 243u: goto L_08945070;
    case 244u: goto L_08945088;
    case 245u: goto L_089450AC;
    case 246u: goto L_089450E0;
    case 247u: goto L_089450F4;
    case 248u: goto L_089450FC;
    case 249u: goto L_08945104;
    case 250u: goto L_08945108;
    case 251u: goto L_08945118;
    case 252u: goto L_08945144;
    case 253u: goto L_08945160;
    case 254u: goto L_0894516C;
    case 255u: goto L_08945178;
    case 256u: goto L_08945190;
    case 257u: goto L_089451A8;
    case 258u: goto L_089451C4;
    case 259u: goto L_089451CC;
    case 260u: goto L_089451D4;
    case 261u: goto L_089451EC;
    case 262u: goto L_08945234;
    case 263u: goto L_08945244;
    case 264u: goto L_0894524C;
    case 265u: goto L_08945250;
    case 266u: goto L_0894526C;
    case 267u: goto L_08945280;
    case 268u: goto L_08945288;
    case 269u: goto L_0894528C;
    case 270u: goto L_08945294;
    case 271u: goto L_089452AC;
    case 272u: goto L_089452B8;
    case 273u: goto L_089452C4;
    case 274u: goto L_089452DC;
    case 275u: goto L_089452E8;
    case 276u: goto L_089452F0;
    case 277u: goto L_089452F8;
    case 278u: goto L_08945304;
    case 279u: goto L_0894530C;
    case 280u: goto L_08945314;
    case 281u: goto L_0894531C;
    case 282u: goto L_08945328;
    case 283u: goto L_08945334;
    case 284u: goto L_08945348;
    case 285u: goto L_08945350;
    case 286u: goto L_08945374;
    case 287u: goto L_08945380;
    case 288u: goto L_08945388;
    case 289u: goto L_08945390;
    case 290u: goto L_08945398;
    case 291u: goto L_089453A0;
    case 292u: goto L_089453B0;
    case 293u: goto L_089453E8;
    case 294u: goto L_08945420;
    case 295u: goto L_08945430;
    case 296u: goto L_08945468;
    case 297u: goto L_0894549C;
    case 298u: goto L_089454A4;
    case 299u: goto L_089454A8;
    case 300u: goto L_089454BC;
    case 301u: goto L_089454D4;
    case 302u: goto L_089454DC;
    case 303u: goto L_089454E8;
    case 304u: goto L_089454F0;
    case 305u: goto L_08945510;
    case 306u: goto L_08945520;
    case 307u: goto L_08945528;
    case 308u: goto L_08945530;
    case 309u: goto L_08945538;
    case 310u: goto L_08945540;
    case 311u: goto L_08945548;
    case 312u: goto L_08945550;
    case 313u: goto L_08945558;
    case 314u: goto L_08945560;
    case 315u: goto L_08945568;
    case 316u: goto L_08945570;
    case 317u: goto L_08945574;
    case 318u: goto L_0894557C;
    case 319u: goto L_08945584;
    case 320u: goto L_08945598;
    case 321u: goto L_089455A0;
    case 322u: goto L_089455A8;
    case 323u: goto L_089455B0;
    case 324u: goto L_089455B8;
    case 325u: goto L_089455C0;
    case 326u: goto L_089455C8;
    case 327u: goto L_089455D0;
    case 328u: goto L_089455E8;
    case 329u: goto L_089455F0;
    case 330u: goto L_089455F4;
    case 331u: goto L_08945604;
    case 332u: goto L_08945610;
    case 333u: goto L_08945620;
    case 334u: goto L_08945630;
    case 335u: goto L_08945654;
    case 336u: goto L_0894565C;
    case 337u: goto L_08945664;
    case 338u: goto L_08945674;
    case 339u: goto L_08945688;
    case 340u: goto L_089456AC;
    case 341u: goto L_089456B4;
    case 342u: goto L_089456BC;
    case 343u: goto L_089456D4;
    case 344u: goto L_089456E8;
    case 345u: goto L_0894570C;
    case 346u: goto L_08945714;
    case 347u: goto L_0894571C;
    case 348u: goto L_0894572C;
    case 349u: goto L_08945740;
    case 350u: goto L_08945750;
    case 351u: goto L_0894575C;
    case 352u: goto L_08945780;
    case 353u: goto L_08945790;
    case 354u: goto L_089457A0;
    case 355u: goto L_089457A8;
    case 356u: goto L_089457E0;
    case 357u: goto L_089457F8;
    case 358u: goto L_08945818;
    case 359u: goto L_08945820;
    case 360u: goto L_08945834;
    case 361u: goto L_0894583C;
    case 362u: goto L_08945854;
    case 363u: goto L_08945858;
    case 364u: goto L_0894586C;
    case 365u: goto L_08945878;
    case 366u: goto L_08945888;
    case 367u: goto L_08945890;
    case 368u: goto L_08945894;
    case 369u: goto L_089458A0;
    case 370u: goto L_089458AC;
    case 371u: goto L_089458B4;
    case 372u: goto L_089458E8;
    case 373u: goto L_08945900;
    case 374u: goto L_08945930;
    case 375u: goto L_08945938;
    case 376u: goto L_08945940;
    case 377u: goto L_08945948;
    case 378u: goto L_08945950;
    case 379u: goto L_0894598C;
    case 380u: goto L_08945998;
    case 381u: goto L_089459A0;
    case 382u: goto L_089459A8;
    case 383u: goto L_089459E4;
    case 384u: goto L_089459F0;
    case 385u: goto L_089459F8;
    case 386u: goto L_08945A00;
    case 387u: goto L_08945A3C;
    case 388u: goto L_08945A40;
    case 389u: goto L_08945A4C;
    case 390u: goto L_08945A58;
    case 391u: goto L_08945A60;
    case 392u: goto L_08945A64;
    case 393u: goto L_08945A78;
    case 394u: goto L_08945A84;
    case 395u: goto L_08945A8C;
    case 396u: goto L_08945AA8;
    case 397u: goto L_08945ADC;
    case 398u: goto L_08945AE8;
    case 399u: goto L_08945AF8;
    case 400u: goto L_08945B00;
    case 401u: goto L_08945B14;
    case 402u: goto L_08945B1C;
    case 403u: goto L_08945B24;
    case 404u: goto L_08945B2C;
    case 405u: goto L_08945B38;
    case 406u: goto L_08945B48;
    case 407u: goto L_08945B58;
    case 408u: goto L_08945B68;
    case 409u: goto L_08945B74;
    case 410u: goto L_08945B84;
    case 411u: goto L_08945B90;
    case 412u: goto L_08945BA8;
    case 413u: goto L_08945BB0;
    case 414u: goto L_08945BB8;
    case 415u: goto L_08945BC0;
    case 416u: goto L_08945BCC;
    case 417u: goto L_08945BD4;
    case 418u: goto L_08945BE0;
    case 419u: goto L_08945BE8;
    case 420u: goto L_08945BF0;
    case 421u: goto L_08945C00;
    case 422u: goto L_08945C10;
    case 423u: goto L_08945C28;
    case 424u: goto L_08945C30;
    case 425u: goto L_08945C3C;
    case 426u: goto L_08945C48;
    case 427u: goto L_08945C50;
    case 428u: goto L_08945C58;
    case 429u: goto L_08945C60;
    case 430u: goto L_08945C70;
    case 431u: goto L_08945C84;
    case 432u: goto L_08945C98;
    case 433u: goto L_08945CA0;
    case 434u: goto L_08945CB0;
    case 435u: goto L_08945CC0;
    case 436u: goto L_08945CCC;
    case 437u: goto L_08945CD4;
    case 438u: goto L_08945CE0;
    case 439u: goto L_08945CE4;
    case 440u: goto L_08945CEC;
    case 441u: goto L_08945CF8;
    case 442u: goto L_08945D08;
    case 443u: goto L_08945D1C;
    case 444u: goto L_08945D24;
    case 445u: goto L_08945D30;
    case 446u: goto L_08945D3C;
    case 447u: goto L_08945D40;
    case 448u: goto L_08945D48;
    case 449u: goto L_08945D54;
    case 450u: goto L_08945D64;
    case 451u: goto L_08945D78;
    case 452u: goto L_08945D80;
    case 453u: goto L_08945D94;
    case 454u: goto L_08945DA0;
    case 455u: goto L_08945DAC;
    case 456u: goto L_08945DB4;
    case 457u: goto L_08945DB8;
    case 458u: goto L_08945DD8;
    case 459u: goto L_08945E04;
    case 460u: goto L_08945E30;
    case 461u: goto L_08945E78;
    case 462u: goto L_08945E84;
    case 463u: goto L_08945E94;
    case 464u: goto L_08945ED8;
    case 465u: goto L_08945FA0;
    case 466u: goto L_08945FD8;
    case 467u: goto L_08946004;
    case 468u: goto L_08946060;
    case 469u: goto L_08946078;
    case 470u: goto L_08946084;
    case 471u: goto L_0894608C;
    case 472u: goto L_08946094;
    case 473u: goto L_089460F0;
    case 474u: goto L_08946134;
    case 475u: goto L_08946140;
    case 476u: goto L_08946148;
    case 477u: goto L_08946170;
    case 478u: goto L_08946188;
    case 479u: goto L_0894619C;
    case 480u: goto L_089461C4;
    case 481u: goto L_089461D0;
    case 482u: goto L_089461D8;
    case 483u: goto L_089461E8;
    case 484u: goto L_089461F4;
    case 485u: goto L_089461FC;
    case 486u: goto L_08946204;
    case 487u: goto L_08946228;
    case 488u: goto L_08946250;
    case 489u: goto L_0894628C;
    case 490u: goto L_0894629C;
    case 491u: goto L_089462A4;
    case 492u: goto L_089462C4;
    case 493u: goto L_089462D4;
    case 494u: goto L_089462E0;
    case 495u: goto L_089462EC;
    case 496u: goto L_089462F8;
    case 497u: goto L_089462FC;
    case 498u: goto L_08946304;
    case 499u: goto L_08946308;
    case 500u: goto L_0894638C;
    case 501u: goto L_089463AC;
    case 502u: goto L_089463B4;
    case 503u: goto L_089463C8;
    case 504u: goto L_089463DC;
    case 505u: goto L_08946430;
    case 506u: goto L_08946468;
    case 507u: goto L_089464EC;
    case 508u: goto L_089464F4;
    case 509u: goto L_0894651C;
    case 510u: goto L_08946524;
    case 511u: goto L_0894652C;
    case 512u: goto L_0894653C;
    case 513u: goto L_08946548;
    case 514u: goto L_08946554;
    case 515u: goto L_08946560;
    case 516u: goto L_08946564;
    case 517u: goto L_0894656C;
    case 518u: goto L_08946580;
    case 519u: goto L_089465B8;
    case 520u: goto L_089465D8;
    case 521u: goto L_089465E8;
    case 522u: goto L_089465F4;
    case 523u: goto L_0894660C;
    case 524u: goto L_08946618;
    case 525u: goto L_08946624;
    case 526u: goto L_08946638;
    case 527u: goto L_0894663C;
    case 528u: goto L_08946650;
    case 529u: goto L_08946660;
    case 530u: goto L_0894666C;
    case 531u: goto L_089466BC;
    case 532u: goto L_089466C8;
    case 533u: goto L_089466D0;
    case 534u: goto L_089466F0;
    case 535u: goto L_08946740;
    case 536u: goto L_0894674C;
    case 537u: goto L_08946758;
    case 538u: goto L_0894675C;
    case 539u: goto L_08946768;
    case 540u: goto L_08946778;
    case 541u: goto L_08946784;
    case 542u: goto L_0894678C;
    case 543u: goto L_08946794;
    case 544u: goto L_089467A0;
    case 545u: goto L_089467C0;
    case 546u: goto L_089467D4;
    case 547u: goto L_089467E8;
    case 548u: goto L_08946804;
    case 549u: goto L_08946844;
    case 550u: goto L_08946850;
    case 551u: goto L_08946860;
    case 552u: goto L_08946874;
    case 553u: goto L_08946888;
    case 554u: goto L_08946894;
    case 555u: goto L_089468A4;
    case 556u: goto L_089468B8;
    case 557u: goto L_089468C0;
    case 558u: goto L_089468CC;
    case 559u: goto L_089468D8;
    case 560u: goto L_08946904;
    case 561u: goto L_0894690C;
    case 562u: goto L_08946914;
    case 563u: goto L_08946930;
    case 564u: goto L_08946938;
    case 565u: goto L_08946944;
    case 566u: goto L_0894694C;
    case 567u: goto L_08946978;
    case 568u: goto L_08946980;
    case 569u: goto L_08946988;
    case 570u: goto L_089469A8;
    case 571u: goto L_089469D0;
    case 572u: goto L_089469DC;
    case 573u: goto L_089469E8;
    case 574u: goto L_08946A08;
    case 575u: goto L_08946A18;
    case 576u: goto L_08946A3C;
    case 577u: goto L_08946A6C;
    case 578u: goto L_08946A70;
    case 579u: goto L_08946A78;
    case 580u: goto L_08946A80;
    case 581u: goto L_08946AA0;
    case 582u: goto L_08946AB8;
    case 583u: goto L_08946ACC;
    case 584u: goto L_08946AD4;
    case 585u: goto L_08946AEC;
    case 586u: goto L_08946AF4;
    case 587u: goto L_08946B0C;
    case 588u: goto L_08946B2C;
    case 589u: goto L_08946B44;
    case 590u: goto L_08946B48;
    case 591u: goto L_08946B74;
    case 592u: goto L_08946B78;
    case 593u: goto L_08946B7C;
    case 594u: goto L_08946BA0;
    case 595u: goto L_08946BB0;
    case 596u: goto L_08946BBC;
    case 597u: goto L_08946BD4;
    case 598u: goto L_08946BE0;
    case 599u: goto L_08946BE8;
    case 600u: goto L_08946BF0;
    case 601u: goto L_08946BF8;
    case 602u: goto L_08946C00;
    case 603u: goto L_08946C08;
    case 604u: goto L_08946C10;
    case 605u: goto L_08946C18;
    case 606u: goto L_08946C20;
    case 607u: goto L_08946C30;
    case 608u: goto L_08946C4C;
    case 609u: goto L_08946C58;
    case 610u: goto L_08946C68;
    case 611u: goto L_08946C9C;
    case 612u: goto L_08946CB4;
    case 613u: goto L_08946CD4;
    case 614u: goto L_08946CE0;
    case 615u: goto L_08946D10;
    case 616u: goto L_08946D24;
    case 617u: goto L_08946D38;
    case 618u: goto L_08946D3C;
    case 619u: goto L_08946D48;
    case 620u: goto L_08946D58;
    case 621u: goto L_08946D68;
    case 622u: goto L_08946D70;
    case 623u: goto L_08946D7C;
    case 624u: goto L_08946D90;
    case 625u: goto L_08946D9C;
    case 626u: goto L_08946DAC;
    case 627u: goto L_08946DB4;
    case 628u: goto L_08946DBC;
    case 629u: goto L_08946DC4;
    case 630u: goto L_08946DCC;
    case 631u: goto L_08946DE8;
    case 632u: goto L_08946DF0;
    case 633u: goto L_08946DF8;
    case 634u: goto L_08946E08;
    case 635u: goto L_08946E18;
    case 636u: goto L_08946E24;
    case 637u: goto L_08946E34;
    case 638u: goto L_08946E48;
    case 639u: goto L_08946E50;
    case 640u: goto L_08946E5C;
    case 641u: goto L_08946E70;
    case 642u: goto L_08946E78;
    case 643u: goto L_08946E84;
    case 644u: goto L_08946E90;
    case 645u: goto L_08946E98;
    case 646u: goto L_08946EA0;
    case 647u: goto L_08946EBC;
    case 648u: goto L_08946EC4;
    case 649u: goto L_08946EDC;
    case 650u: goto L_08946EE4;
    case 651u: goto L_08946EFC;
    case 652u: goto L_08946F00;
    case 653u: goto L_08946F20;
    case 654u: goto L_08946F30;
    case 655u: goto L_08946F38;
    case 656u: goto L_08946F48;
    case 657u: goto L_08946F4C;
    case 658u: goto L_08946F5C;
    case 659u: goto L_08946F64;
    case 660u: goto L_08946F6C;
    case 661u: goto L_08946F94;
    case 662u: goto L_08946F9C;
    case 663u: goto L_08946FA8;
    case 664u: goto L_08946FB0;
    case 665u: goto L_08946FC0;
    case 666u: goto L_08946FCC;
    case 667u: goto L_08946FD4;
    case 668u: goto L_08946FDC;
    case 669u: goto L_08946FE4;
    case 670u: goto L_0894700C;
    case 671u: goto L_08947014;
    case 672u: goto L_08947020;
    case 673u: goto L_08947028;
    case 674u: goto L_0894703C;
    case 675u: goto L_08947044;
    case 676u: goto L_08947050;
    case 677u: goto L_08947064;
    case 678u: goto L_08947070;
    case 679u: goto L_08947078;
    case 680u: goto L_08947090;
    case 681u: goto L_089470B8;
    case 682u: goto L_089470C4;
    case 683u: goto L_089470CC;
    case 684u: goto L_089470D4;
    case 685u: goto L_08947114;
    case 686u: goto L_08947120;
    case 687u: goto L_08947128;
    case 688u: goto L_08947134;
    case 689u: goto L_0894713C;
    case 690u: goto L_08947144;
    case 691u: goto L_08947150;
    case 692u: goto L_08947158;
    case 693u: goto L_0894718C;
    case 694u: goto L_089471A8;
    case 695u: goto L_089471B8;
    case 696u: goto L_089471C4;
    case 697u: goto L_089471D4;
    case 698u: goto L_089471DC;
    case 699u: goto L_089471E4;
    case 700u: goto L_089471F4;
    case 701u: goto L_08947208;
    case 702u: goto L_08947210;
    case 703u: goto L_08947218;
    case 704u: goto L_08947220;
    case 705u: goto L_08947228;
    case 706u: goto L_08947230;
    case 707u: goto L_0894723C;
    case 708u: goto L_08947244;
    case 709u: goto L_08947290;
    case 710u: goto L_089472A0;
    case 711u: goto L_089472AC;
    case 712u: goto L_089472DC;
    case 713u: goto L_089472E0;
    case 714u: goto L_089472E8;
    case 715u: goto L_089472F4;
    case 716u: goto L_089472FC;
    case 717u: goto L_08947304;
    case 718u: goto L_08947310;
    case 719u: goto L_0894731C;
    case 720u: goto L_08947328;
    case 721u: goto L_0894732C;
    case 722u: goto L_08947330;
    case 723u: goto L_08947338;
    case 724u: goto L_08947340;
    case 725u: goto L_0894734C;
    case 726u: goto L_08947358;
    case 727u: goto L_08947364;
    case 728u: goto L_08947368;
    case 729u: goto L_0894736C;
    case 730u: goto L_08947370;
    case 731u: goto L_08947378;
    case 732u: goto L_08947384;
    case 733u: goto L_08947390;
    case 734u: goto L_0894739C;
    case 735u: goto L_089473A0;
    case 736u: goto L_089473A4;
    case 737u: goto L_089473AC;
    case 738u: goto L_089473B4;
    case 739u: goto L_089473C0;
    case 740u: goto L_089473CC;
    case 741u: goto L_089473D8;
    case 742u: goto L_089473DC;
    case 743u: goto L_089473E0;
    case 744u: goto L_089473E4;
    case 745u: goto L_089473EC;
    case 746u: goto L_089473F4;
    case 747u: goto L_08947404;
    case 748u: goto L_08947414;
    case 749u: goto L_0894741C;
    case 750u: goto L_08947424;
    case 751u: goto L_0894742C;
    case 752u: goto L_08947434;
    case 753u: goto L_08947438;
    case 754u: goto L_08947440;
    case 755u: goto L_08947448;
    case 756u: goto L_08947450;
    case 757u: goto L_08947470;
    case 758u: goto L_0894747C;
    case 759u: goto L_0894749C;
    case 760u: goto L_089474A8;
    case 761u: goto L_089474B8;
    case 762u: goto L_089474C0;
    case 763u: goto L_089474C8;
    case 764u: goto L_089474D4;
    case 765u: goto L_089474DC;
    case 766u: goto L_089474E4;
    case 767u: goto L_089474EC;
    case 768u: goto L_089474F4;
    case 769u: goto L_08947500;
    case 770u: goto L_08947508;
    case 771u: goto L_08947518;
    case 772u: goto L_08947520;
    case 773u: goto L_0894752C;
    case 774u: goto L_08947534;
    case 775u: goto L_0894753C;
    case 776u: goto L_08947548;
    case 777u: goto L_08947550;
    case 778u: goto L_08947558;
    case 779u: goto L_08947568;
    case 780u: goto L_08947570;
    case 781u: goto L_0894757C;
    case 782u: goto L_08947588;
    case 783u: goto L_08947598;
    case 784u: goto L_089475A8;
    case 785u: goto L_089475B0;
    case 786u: goto L_089475BC;
    case 787u: goto L_089475C4;
    case 788u: goto L_089475CC;
    case 789u: goto L_089475D8;
    case 790u: goto L_089475E8;
    case 791u: goto L_089475F4;
    case 792u: goto L_08947600;
    case 793u: goto L_0894761C;
    case 794u: goto L_08947634;
    case 795u: goto L_08947644;
    case 796u: goto L_08947664;
    case 797u: goto L_0894766C;
    case 798u: goto L_08947688;
    case 799u: goto L_08947690;
    case 800u: goto L_08947698;
    case 801u: goto L_089476A0;
    case 802u: goto L_089476B0;
    case 803u: goto L_089476BC;
    case 804u: goto L_089476E0;
    case 805u: goto L_089476E8;
    case 806u: goto L_089476F0;
    case 807u: goto L_08947720;
    case 808u: goto L_0894774C;
    case 809u: goto L_0894778C;
    case 810u: goto L_0894779C;
    case 811u: goto L_089477A8;
    case 812u: goto L_089477B0;
    case 813u: goto L_089477B8;
    case 814u: goto L_089477D8;
    case 815u: goto L_089477E8;
    case 816u: goto L_089477F8;
    case 817u: goto L_08947808;
    case 818u: goto L_08947810;
    case 819u: goto L_08947818;
    case 820u: goto L_08947834;
    case 821u: goto L_0894784C;
    case 822u: goto L_08947878;
    case 823u: goto L_08947894;
    case 824u: goto L_089478A4;
    case 825u: goto L_089478B4;
    case 826u: goto L_089478D4;
    case 827u: goto L_089478DC;
    case 828u: goto L_08947900;
    case 829u: goto L_08947908;
    case 830u: goto L_08947918;
    case 831u: goto L_08947934;
    case 832u: goto L_08947954;
    case 833u: goto L_08947978;
    case 834u: goto L_08947980;
    case 835u: goto L_08947990;
    case 836u: goto L_089479A8;
    case 837u: goto L_089479B4;
    case 838u: goto L_089479C4;
    case 839u: goto L_089479D0;
    case 840u: goto L_089479D8;
    case 841u: goto L_089479E0;
    case 842u: goto L_089479EC;
    case 843u: goto L_089479FC;
    case 844u: goto L_08947A04;
    case 845u: goto L_08947A10;
    case 846u: goto L_08947A14;
    case 847u: goto L_08947A78;
    case 848u: goto L_08947A84;
    case 849u: goto L_08947A94;
    case 850u: goto L_08947AA8;
    case 851u: goto L_08947AB4;
    case 852u: goto L_08947ABC;
    case 853u: goto L_08947AC8;
    case 854u: goto L_08947AD0;
    case 855u: goto L_08947AD8;
    case 856u: goto L_08947AE0;
    case 857u: goto L_08947AE8;
    case 858u: goto L_08947AF0;
    case 859u: goto L_08947AF4;
    case 860u: goto L_08947B00;
    case 861u: goto L_08947B24;
    case 862u: goto L_08947B34;
    case 863u: goto L_08947B40;
    case 864u: goto L_08947B50;
    case 865u: goto L_08947B58;
    case 866u: goto L_08947B9C;
    case 867u: goto L_08947BE8;
    case 868u: goto L_08947C18;
    case 869u: goto L_08947C24;
    case 870u: goto L_08947C34;
    case 871u: goto L_08947C44;
    case 872u: goto L_08947C54;
    case 873u: goto L_08947C64;
    case 874u: goto L_08947C74;
    case 875u: goto L_08947C84;
    case 876u: goto L_08947C98;
    case 877u: goto L_08947CA0;
    case 878u: goto L_08947CAC;
    case 879u: goto L_08947CB4;
    case 880u: goto L_08947CC0;
    case 881u: goto L_08947CC8;
    case 882u: goto L_08947CD4;
    case 883u: goto L_08947CE8;
    case 884u: goto L_08947CF0;
    case 885u: goto L_08947CFC;
    case 886u: goto L_08947D00;
    case 887u: goto L_08947D08;
    case 888u: goto L_08947D14;
    case 889u: goto L_08947D20;
    case 890u: goto L_08947D2C;
    case 891u: goto L_08947D30;
    case 892u: goto L_08947D38;
    case 893u: goto L_08947D48;
    case 894u: goto L_08947D50;
    case 895u: goto L_08947D60;
    case 896u: goto L_08947D68;
    case 897u: goto L_08947D7C;
    case 898u: goto L_08947D84;
    case 899u: goto L_08947D98;
    case 900u: goto L_08947DA4;
    case 901u: goto L_08947DCC;
    case 902u: goto L_08947DD4;
    case 903u: goto L_08947DF8;
    case 904u: goto L_08947E04;
    case 905u: goto L_08947E0C;
    case 906u: goto L_08947E30;
    case 907u: goto L_08947E40;
    case 908u: goto L_08947E80;
    case 909u: goto L_08947E88;
    case 910u: goto L_08947E9C;
    case 911u: goto L_08947EA4;
    case 912u: goto L_08947EB8;
    case 913u: goto L_08947EBC;
    case 914u: goto L_08947EC4;
    case 915u: goto L_08947ED8;
    case 916u: goto L_08947F10;
    case 917u: goto L_08947F20;
    case 918u: goto L_08947F34;
    case 919u: goto L_08947F3C;
    case 920u: goto L_08947F44;
    case 921u: goto L_08947F70;
    case 922u: goto L_08947F80;
    case 923u: goto L_08947FC0;
    case 924u: goto L_08947FC8;
    case 925u: goto L_08947FDC;
    case 926u: goto L_08947FE4;
    case 927u: goto L_08947FF8;
    case 928u: goto L_08947FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08944000:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[31] = (0x08944028u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x08944028u) goto L_08944028;
    return;
L_08944028:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-30136), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-30132), ctx.gpr[19]);
      if (branch_taken) {
          goto L_089440BC;
      }
      goto L_08944040;
    }
L_08944040:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089440B4;
      }
      goto L_0894404C;
    }
L_0894404C:
    ctx.gpr[31] = (0x08944054u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 347u, 0x0897235Cu>(ctx, &aot_mem) && ctx.pc == 0x08944054u) goto L_08944054;
    return;
L_08944054:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (49408u << 16u);
      if (branch_taken) {
          goto L_08944098;
      }
      goto L_08944060;
    }
L_08944060:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08944064;
L_08944064:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944084;
      }
      goto L_0894407C;
    }
L_0894407C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[21] = (0u | 1u);
    goto L_08944084;
L_08944084:
    ctx.gpr[31] = (0x0894408Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 343u, 0x088658B8u>(ctx, &aot_mem) && ctx.pc == 0x0894408Cu) goto L_0894408C;
    return;
L_0894408C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944064;
      }
      goto L_08944098;
    }
L_08944098:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089440BC;
      }
      goto L_089440A0;
    }
L_089440A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-30168)));
    ctx.gpr[31] = (0x089440ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x089440ACu) goto L_089440AC;
    return;
L_089440AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089440BC;
      }
      goto L_089440B4;
    }
L_089440B4:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30136), 0u);
    goto L_089440BC;
L_089440BC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089440E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08944124;
      }
      goto L_08944104;
    }
L_08944104:
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08944124u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08944130;
L_08944124:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944130:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[16] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[7] = (0u | 12u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08944170;
      }
      goto L_08944160;
    }
L_08944160:
    ctx.gpr[31] = (0x08944168u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x08944168u) goto L_08944168;
    return;
L_08944168:
    ctx.gpr[31] = (0x08944170u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 331u, 0x088EE3ACu>(ctx, &aot_mem) && ctx.pc == 0x08944170u) goto L_08944170;
    return;
L_08944170:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0894417Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 609u, 0x0899F378u>(ctx, &aot_mem) && ctx.pc == 0x0894417Cu) goto L_0894417C;
    return;
L_0894417C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(1440));
    ctx.gpr[31] = (0x089441A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x089441A4u) goto L_089441A4;
    return;
L_089441A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
        goto L_089441B8;
    }
    goto L_089441B8;
L_089441B8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1436), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x089441DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x089441DCu) goto L_089441DC;
    return;
L_089441DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089441FC;
      }
      goto L_089441F4;
    }
L_089441F4:
    ctx.gpr[31] = (0x089441FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08944E30;
L_089441FC:
    ctx.gpr[31] = (0x08944204u);
    ctx.gpr[4] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08944204u) goto L_08944204;
    return;
L_08944204:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (32u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (0u | 201u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (0u | 57u);
        goto L_08944228;
    }
    goto L_08944228;
L_08944228:
    ctx.gpr[31] = (0x08944230u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x08944230u) goto L_08944230;
    return;
L_08944230:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944254;
      }
      goto L_0894423C;
    }
L_0894423C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08944254;
L_08944254:
    ctx.gpr[31] = (0x0894425Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 331u, 0x088EE3ACu>(ctx, &aot_mem) && ctx.pc == 0x0894425Cu) goto L_0894425C;
    return;
L_0894425C:
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
L_08944274:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08944298u);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 625u, 0x08942DC8u>(ctx, &aot_mem) && ctx.pc == 0x08944298u) goto L_08944298;
    return;
L_08944298:
    ctx.gpr[31] = (0x089442A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x089442A0u) goto L_089442A0;
    return;
L_089442A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(27452)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1428)));
      if (branch_taken) {
          goto L_089442D4;
      }
      goto L_089442C4;
    }
L_089442C4:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    ctx.gpr[6] = (0u | 11u);
      if (branch_taken) {
          goto L_089442D4;
      }
      goto L_089442CC;
    }
L_089442CC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089442E4;
      }
      goto L_089442D4;
    }
L_089442D4:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089442EC;
      }
      goto L_089442DC;
    }
L_089442DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0894433C;
      }
      goto L_089442E4;
    }
L_089442E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0894433C;
      }
      goto L_089442EC;
    }
L_089442EC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089442DC;
      }
      goto L_089442F4;
    }
L_089442F4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944314;
      }
      goto L_089442FC;
    }
L_089442FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 16u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_08944328;
    }
    goto L_0894430C;
L_0894430C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 22u);
      if (branch_taken) {
          goto L_0894431C;
      }
      goto L_08944314;
    }
L_08944314:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0894433C;
      }
      goto L_0894431C;
    }
L_0894431C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08944338;
      }
      goto L_08944324;
    }
L_08944324:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    goto L_08944328;
L_08944328:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08944338;
      }
      goto L_08944330;
    }
L_08944330:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0894433C;
      }
      goto L_08944338;
    }
L_08944338:
    ctx.gpr[2] = (0u | 1u);
    goto L_0894433C;
L_0894433C:
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
L_08944354:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08944388u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08944388u) goto L_08944388;
    return;
L_08944388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
        goto L_089443B4;
    }
    goto L_089443A0;
L_089443A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08944454;
      }
      goto L_089443B0;
    }
L_089443B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    goto L_089443B4;
L_089443B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (16095u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26355u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089443E4u);
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089443E4u) goto L_089443E4;
    return;
L_089443E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[31] = (0x089443F0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089443F0u) goto L_089443F0;
    return;
L_089443F0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08944428;
      }
      goto L_08944408;
    }
L_08944408:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08944454;
      }
      goto L_08944428;
    }
L_08944428:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08944454;
      }
      goto L_08944438;
    }
L_08944438:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08944454;
L_08944454:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944468:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08944498u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08944498u) goto L_08944498;
    return;
L_08944498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089444BC;
      }
      goto L_089444B0;
    }
L_089444B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089444D0;
      }
      goto L_089444BC;
    }
L_089444BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3229)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089444D8;
      }
      goto L_089444C8;
    }
L_089444C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089444DC;
      }
      goto L_089444D0;
    }
L_089444D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089444DC;
      }
      goto L_089444D8;
    }
L_089444D8:
    ctx.gpr[2] = (0u | 0u);
    goto L_089444DC;
L_089444DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089444EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x08944558u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08944558u) goto L_08944558;
    return;
L_08944558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08944578;
      }
      goto L_08944578;
    }
L_08944578:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[17];
    ctx.fpr[22] = std::sqrt(ctx.fpr[22]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089447B0;
      }
      goto L_089445BC;
    }
L_089445BC:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x089445E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08945088;
L_089445E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089447B0;
      }
      goto L_089445F0;
    }
L_089445F0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08944610u);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08944610u) goto L_08944610;
    return;
L_08944610:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_08944634;
      }
      goto L_08944628;
    }
L_08944628:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08944634;
L_08944634:
    ctx.gpr[31] = (0x0894463Cu);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x0894463Cu) goto L_0894463C;
    return;
L_0894463C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
        goto L_08944650;
    }
    goto L_08944650;
L_08944650:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[12];
      if (branch_taken) {
          goto L_08944670;
      }
      goto L_08944664;
    }
L_08944664:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_08944670;
L_08944670:
    ctx.gpr[31] = (0x08944678u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F7ACu>(ctx, &aot_mem) && ctx.pc == 0x08944678u) goto L_08944678;
    return;
L_08944678:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894468C;
      }
      goto L_08944680;
    }
L_08944680:
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_0894468C;
L_0894468C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089446C4;
      }
      goto L_089446A8;
    }
L_089446A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089446C4;
      }
      goto L_089446B8;
    }
L_089446B8:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_089446C4;
L_089446C4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944794;
      }
      goto L_089446D4;
    }
L_089446D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944794;
      }
      goto L_089446F0;
    }
L_089446F0:
    ctx.gpr[31] = (0x089446F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 751u, 0x08A2F85Cu>(ctx, &aot_mem) && ctx.pc == 0x089446F8u) goto L_089446F8;
    return;
L_089446F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944794;
      }
      goto L_08944700;
    }
L_08944700:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944788;
      }
      goto L_08944720;
    }
L_08944720:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0894473Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894473Cu) goto L_0894473C;
    return;
L_0894473C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08944780;
      }
      goto L_08944748;
    }
L_08944748:
    ctx.gpr[31] = (0x08944750u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 152u, 0x08980B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08944750u) goto L_08944750;
    return;
L_08944750:
    ctx.gpr[31] = (0x08944758u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08944758u) goto L_08944758;
    return;
L_08944758:
    ctx.gpr[31] = (0x08944760u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 272u, 0x089A5338u>(ctx, &aot_mem) && ctx.pc == 0x08944760u) goto L_08944760;
    return;
L_08944760:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08944778;
      }
      goto L_08944768;
    }
L_08944768:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08944780;
      }
      goto L_08944778;
    }
L_08944778:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089447B0;
      }
      goto L_08944780;
    }
L_08944780:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944794;
      }
      goto L_08944788;
    }
L_08944788:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_08944794;
L_08944794:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089447B0;
      }
      goto L_089447A8;
    }
L_089447A8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_089447B0;
L_089447B0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089447E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[18] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.fpr[14] = std::sqrt(ctx.fpr[14]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08944AA0;
      }
      goto L_08944860;
    }
L_08944860:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08944888u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1428));
    goto L_08945088;
L_08944888:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089448B4;
      }
      goto L_08944890;
    }
L_08944890:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944AA0;
      }
      goto L_089448A0;
    }
L_089448A0:
    ctx.gpr[31] = (0x089448A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 751u, 0x08A2F85Cu>(ctx, &aot_mem) && ctx.pc == 0x089448A8u) goto L_089448A8;
    return;
L_089448A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944AA0;
      }
      goto L_089448B0;
    }
L_089448B0:
    ctx.gpr[4] = (2232u << 16u);
    goto L_089448B4;
L_089448B4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089448D8u);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089448D8u) goto L_089448D8;
    return;
L_089448D8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_089448FC;
      }
      goto L_089448F0;
    }
L_089448F0:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089448FC;
L_089448FC:
    ctx.gpr[31] = (0x08944904u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08944904u) goto L_08944904;
    return;
L_08944904:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
        goto L_0894491C;
    }
    goto L_0894491C;
L_0894491C:
    ctx.gpr[4] = (16223u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26355u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08944AA0;
      }
      goto L_08944938;
    }
L_08944938:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894497C;
      }
      goto L_08944940;
    }
L_08944940:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08944960;
      }
      goto L_08944950;
    }
L_08944950:
    ctx.gpr[4] = (51139u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20480u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089449B4;
      }
      goto L_08944960;
    }
L_08944960:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
        goto L_08944974;
    }
    goto L_08944974;
L_08944974:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_089449B4;
      }
      goto L_0894497C;
    }
L_0894497C:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894499C;
      }
      goto L_0894498C;
    }
L_0894498C:
    ctx.gpr[4] = (51139u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20480u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089449B4;
      }
      goto L_0894499C;
    }
L_0894499C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
        goto L_089449B0;
    }
    goto L_089449B0;
L_089449B0:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    goto L_089449B4;
L_089449B4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944A84;
      }
      goto L_089449C4;
    }
L_089449C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944A84;
      }
      goto L_089449E0;
    }
L_089449E0:
    ctx.gpr[31] = (0x089449E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 751u, 0x08A2F85Cu>(ctx, &aot_mem) && ctx.pc == 0x089449E8u) goto L_089449E8;
    return;
L_089449E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944A84;
      }
      goto L_089449F0;
    }
L_089449F0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944A78;
      }
      goto L_08944A10;
    }
L_08944A10:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08944A2Cu);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08944A2Cu) goto L_08944A2C;
    return;
L_08944A2C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08944A70;
      }
      goto L_08944A38;
    }
L_08944A38:
    ctx.gpr[31] = (0x08944A40u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 152u, 0x08980B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08944A40u) goto L_08944A40;
    return;
L_08944A40:
    ctx.gpr[31] = (0x08944A48u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08944A48u) goto L_08944A48;
    return;
L_08944A48:
    ctx.gpr[31] = (0x08944A50u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 272u, 0x089A5338u>(ctx, &aot_mem) && ctx.pc == 0x08944A50u) goto L_08944A50;
    return;
L_08944A50:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08944A68;
      }
      goto L_08944A58;
    }
L_08944A58:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08944A70;
      }
      goto L_08944A68;
    }
L_08944A68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944AA0;
      }
      goto L_08944A70;
    }
L_08944A70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944A84;
      }
      goto L_08944A78;
    }
L_08944A78:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_08944A84;
L_08944A84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08944AA0;
      }
      goto L_08944A98;
    }
L_08944A98:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08944AA0;
L_08944AA0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944AC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(412)));
    ctx.gpr[7] = (32u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944B10;
      }
      goto L_08944AE4;
    }
L_08944AE4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08944B08;
      }
      goto L_08944AF0;
    }
L_08944AF0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(592)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944B40;
      }
      goto L_08944B00;
    }
L_08944B00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 10 ? 1u : 0u);
      if (branch_taken) {
          goto L_08944B18;
      }
      goto L_08944B08;
    }
L_08944B08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08944B84;
      }
      goto L_08944B10;
    }
L_08944B10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08944B84;
      }
      goto L_08944B18;
    }
L_08944B18:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944B40;
      }
      goto L_08944B20;
    }
L_08944B20:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08944B38;
      }
      goto L_08944B2C;
    }
L_08944B2C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 39u);
      if (branch_taken) {
          goto L_08944B48;
      }
      goto L_08944B38;
    }
L_08944B38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08944B84;
      }
      goto L_08944B40;
    }
L_08944B40:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    ctx.gpr[4] = (0u | 39u);
    goto L_08944B48;
L_08944B48:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08944B78;
      }
      goto L_08944B50;
    }
L_08944B50:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944B70;
      }
      goto L_08944B60;
    }
L_08944B60:
    ctx.gpr[31] = (0x08944B68u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 751u, 0x08A2F85Cu>(ctx, &aot_mem) && ctx.pc == 0x08944B68u) goto L_08944B68;
    return;
L_08944B68:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944B80;
      }
      goto L_08944B70;
    }
L_08944B70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08944B84;
      }
      goto L_08944B78;
    }
L_08944B78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08944B84;
      }
      goto L_08944B80;
    }
L_08944B80:
    ctx.gpr[2] = (0u | 1u);
    goto L_08944B84;
L_08944B84:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944B90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08944E00;
      }
      goto L_08944BB0;
    }
L_08944BB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944E00;
      }
      goto L_08944BBC;
    }
L_08944BBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08944BDCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08944BDCu) goto L_08944BDC;
    return;
L_08944BDC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(33) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08944DF4;
      }
      goto L_08944C08;
    }
L_08944C08:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31240)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944C20:
    ctx.gpr[4] = (15589u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 51450u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08944E1C;
      }
      goto L_08944C30;
    }
L_08944C30:
    ctx.gpr[4] = (15589u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 51450u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08944E1C;
      }
      goto L_08944C40;
    }
L_08944C40:
    ctx.gpr[4] = (15589u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 51450u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08944E1C;
      }
      goto L_08944C50;
    }
L_08944C50:
    ctx.gpr[4] = (15589u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 51450u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08944E1C;
      }
      goto L_08944C60;
    }
L_08944C60:
    ctx.gpr[4] = (15506u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14868u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08944E1C;
      }
      goto L_08944C70;
    }
L_08944C70:
    ctx.gpr[4] = (15648u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55676u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08944E1C;
      }
      goto L_08944C80;
    }
L_08944C80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08944CC4;
      }
      goto L_08944C9C;
    }
L_08944C9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 203u);
        goto L_08944CAC;
    }
    goto L_08944CAC;
L_08944CAC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08944CBCu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x08944CBCu) goto L_08944CBC;
    return;
L_08944CBC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944CE4;
      }
      goto L_08944CC4;
    }
L_08944CC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[5] & 8192u);
    ctx.gpr[17] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08944CF4;
      }
      goto L_08944CDC;
    }
L_08944CDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944D08;
      }
      goto L_08944CE4;
    }
L_08944CE4:
    ctx.gpr[4] = (15561u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08944E1C;
      }
      goto L_08944CF4;
    }
L_08944CF4:
    ctx.gpr[4] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    goto L_08944D08;
L_08944D08:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944D58;
      }
      goto L_08944D10;
    }
L_08944D10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[16] = (0u | 202u);
      if (branch_taken) {
          goto L_08944D38;
      }
      goto L_08944D1C;
    }
L_08944D1C:
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (0u | 205u);
        goto L_08944D38;
    }
    goto L_08944D38;
L_08944D38:
    ctx.gpr[31] = (0x08944D40u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x08944D40u) goto L_08944D40;
    return;
L_08944D40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944D58;
      }
      goto L_08944D48;
    }
L_08944D48:
    ctx.gpr[4] = (15506u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14868u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08944E1C;
      }
      goto L_08944D58;
    }
L_08944D58:
    ctx.gpr[4] = (15648u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55676u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08944E1C;
      }
      goto L_08944D68;
    }
L_08944D68:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[17] & 8192u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08944D94;
      }
      goto L_08944D80;
    }
L_08944D80:
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] & ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    goto L_08944D94;
L_08944D94:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08944DE8;
      }
      goto L_08944D9C;
    }
L_08944D9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 202u);
      if (branch_taken) {
          goto L_08944DC4;
      }
      goto L_08944DA8;
    }
L_08944DA8:
    ctx.gpr[4] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] & ctx.gpr[4]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 205u);
        goto L_08944DC4;
    }
    goto L_08944DC4;
L_08944DC4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08944DD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x08944DD0u) goto L_08944DD0;
    return;
L_08944DD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944DE8;
      }
      goto L_08944DD8;
    }
L_08944DD8:
    ctx.gpr[4] = (15506u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14868u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08944E1C;
      }
      goto L_08944DE8;
    }
L_08944DE8:
    ctx.gpr[4] = (49024u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08944E1C;
      }
      goto L_08944DF4;
    }
L_08944DF4:
    ctx.gpr[4] = (49024u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08944E1C;
      }
      goto L_08944E00;
    }
L_08944E00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944DF4;
      }
      goto L_08944E10;
    }
L_08944E10:
    ctx.gpr[4] = (15589u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 51450u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08944E1C;
L_08944E1C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944E30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08944E68;
      }
      goto L_08944E48;
    }
L_08944E48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08944E54u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 516u, 0x0899EDBCu>(ctx, &aot_mem) && ctx.pc == 0x08944E54u) goto L_08944E54;
    return;
L_08944E54:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08944E60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 331u, 0x088EE3ACu>(ctx, &aot_mem) && ctx.pc == 0x08944E60u) goto L_08944E60;
    return;
L_08944E60:
    ctx.gpr[31] = (0x08944E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 160u, 0x08868FC4u>(ctx, &aot_mem) && ctx.pc == 0x08944E68u) goto L_08944E68;
    return;
L_08944E68:
    ctx.gpr[31] = (0x08944E70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 321u, 0x088D5678u>(ctx, &aot_mem) && ctx.pc == 0x08944E70u) goto L_08944E70;
    return;
L_08944E70:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3229), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944E84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08944E94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 313u, 0x08ACD4A8u>(ctx, &aot_mem) && ctx.pc == 0x08944E94u) goto L_08944E94;
    return;
L_08944E94:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944EA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08944EB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 336u, 0x08ACD5E8u>(ctx, &aot_mem) && ctx.pc == 0x08944EB0u) goto L_08944EB0;
    return;
L_08944EB0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944EBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08944EE8u);
    ctx.gpr[5] = (0u | 141u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x08944EE8u) goto L_08944EE8;
    return;
L_08944EE8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944FC4;
      }
      goto L_08944EF4;
    }
L_08944EF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08944FC4;
      }
      goto L_08944F0C;
    }
L_08944F0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08944FC4;
      }
      goto L_08944F28;
    }
L_08944F28:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944FC4;
      }
      goto L_08944F30;
    }
L_08944F30:
    ctx.gpr[31] = (0x08944F38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 870u, 0x08A975E8u>(ctx, &aot_mem) && ctx.pc == 0x08944F38u) goto L_08944F38;
    return;
L_08944F38:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08944F70;
      }
      goto L_08944F50;
    }
L_08944F50:
    ctx.gpr[31] = (0x08944F58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 879u, 0x08A9764Cu>(ctx, &aot_mem) && ctx.pc == 0x08944F58u) goto L_08944F58;
    return;
L_08944F58:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08944FC4;
      }
      goto L_08944F70;
    }
L_08944F70:
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08944F98u);
    ctx.gpr[6] = (0u | 138u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08944F98u) goto L_08944F98;
    return;
L_08944F98:
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08944FACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18920));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x08944FACu) goto L_08944FAC;
    return;
L_08944FAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08944FC4;
      }
      goto L_08944FBC;
    }
L_08944FBC:
    ctx.gpr[31] = (0x08944FC4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x08944FC4u) goto L_08944FC4;
    return;
L_08944FC4:
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
L_08944FE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2972)));
    ctx.gpr[18] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894500Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x0894500Cu) goto L_0894500C;
    return;
L_0894500C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945068;
      }
      goto L_08945014;
    }
L_08945014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[31] = (0x08945020u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2976)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x08945020u) goto L_08945020;
    return;
L_08945020:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945060;
      }
      goto L_08945028;
    }
L_08945028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[31] = (0x08945034u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2980)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x08945034u) goto L_08945034;
    return;
L_08945034:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945058;
      }
      goto L_0894503C;
    }
L_0894503C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[31] = (0x08945048u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2984)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x08945048u) goto L_08945048;
    return;
L_08945048:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945070;
      }
      goto L_08945050;
    }
L_08945050:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2984), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08945070;
      }
      goto L_08945058;
    }
L_08945058:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2980), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08945070;
      }
      goto L_08945060;
    }
L_08945060:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2976), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08945070;
      }
      goto L_08945068;
    }
L_08945068:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2972), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08945070;
      }
      goto L_08945070;
    }
L_08945070:
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
L_08945088:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3229)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089450FC;
      }
      goto L_089450AC;
    }
L_089450AC:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x089450E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x089450E0u) goto L_089450E0;
    return;
L_089450E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08945104;
      }
      goto L_089450F4;
    }
L_089450F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08945108;
      }
      goto L_089450FC;
    }
L_089450FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08945108;
      }
      goto L_08945104;
    }
L_08945104:
    ctx.gpr[2] = (0u | 0u);
    goto L_08945108;
L_08945108:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945118:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089451CC;
      }
      goto L_08945144;
    }
L_08945144:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x08945160u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08945160u) goto L_08945160;
    return;
L_08945160:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[31] = (0x0894516Cu);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x0894516Cu) goto L_0894516C;
    return;
L_0894516C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08945178u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08945178u) goto L_08945178;
    return;
L_08945178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089451CC;
      }
      goto L_08945190;
    }
L_08945190:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
        goto L_089451A8;
    }
    goto L_089451A8;
L_089451A8:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089451CC;
      }
      goto L_089451C4;
    }
L_089451C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08945250;
      }
      goto L_089451CC;
    }
L_089451CC:
    ctx.gpr[31] = (0x089451D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x089451D4u) goto L_089451D4;
    return;
L_089451D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894524C;
      }
      goto L_089451EC;
    }
L_089451EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08945234;
    }
    goto L_08945234;
L_08945234:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894524C;
      }
      goto L_08945244;
    }
L_08945244:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08945250;
      }
      goto L_0894524C;
    }
L_0894524C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08945250;
L_08945250:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894526C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26096)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08945288;
      }
      goto L_08945280;
    }
L_08945280:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
      if (branch_taken) {
          goto L_0894528C;
      }
      goto L_08945288;
    }
L_08945288:
    ctx.gpr[2] = (0u | 0u);
    goto L_0894528C;
L_0894528C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945294:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089452B8;
      }
      goto L_089452AC;
    }
L_089452AC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089452B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 331u, 0x088EE3ACu>(ctx, &aot_mem) && ctx.pc == 0x089452B8u) goto L_089452B8;
    return;
L_089452B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089452C4:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 52 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_089452E8;
      }
      goto L_089452DC;
    }
L_089452DC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08945314;
      }
      goto L_089452E8;
    }
L_089452E8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 55 ? 1u : 0u);
      if (branch_taken) {
          goto L_08945304;
      }
      goto L_089452F0;
    }
L_089452F0:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945304;
      }
      goto L_089452F8;
    }
L_089452F8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08945314;
      }
      goto L_08945304;
    }
L_08945304:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945314;
      }
      goto L_0894530C;
    }
L_0894530C:
    ctx.gpr[4] = (0u | 46u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08945314;
L_08945314:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894531C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2995)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945348;
      }
      goto L_08945328;
    }
L_08945328:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2988)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945348;
      }
      goto L_08945334;
    }
L_08945334:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2988), 0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08945348;
L_08945348:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945350:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894549C;
      }
      goto L_08945374;
    }
L_08945374:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089453B0;
      }
      goto L_08945380;
    }
L_08945380:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089453E8;
      }
      goto L_08945388;
    }
L_08945388:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08945420;
      }
      goto L_08945390;
    }
L_08945390:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08945430;
      }
      goto L_08945398;
    }
L_08945398:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08945468;
      }
      goto L_089453A0;
    }
L_089453A0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894549C;
      }
      goto L_089453B0;
    }
L_089453B0:
    ctx.gpr[4] = (16221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46039u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894549C;
      }
      goto L_089453E8;
    }
L_089453E8:
    ctx.gpr[4] = (16221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46039u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894549C;
      }
      goto L_08945420;
    }
L_08945420:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894549C;
      }
      goto L_08945430;
    }
L_08945430:
    ctx.gpr[4] = (16221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46039u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894549C;
      }
      goto L_08945468;
    }
L_08945468:
    ctx.gpr[4] = (16221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46039u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0894549C;
L_0894549C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089454A4:
    ctx.gpr[7] = (0u | 0u);
    goto L_089454A8;
L_089454A8:
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3160)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089454DC;
      }
      goto L_089454BC;
    }
L_089454BC:
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089454A8;
      }
      goto L_089454D4;
    }
L_089454D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089454E8;
      }
      goto L_089454DC;
    }
L_089454DC:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(3160), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1788), 0u);
      if (branch_taken) {
          goto L_089454E8;
      }
      goto L_089454E8;
    }
L_089454E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089454F0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945528;
      }
      goto L_08945510;
    }
L_08945510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 26u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08945568;
      }
      goto L_08945520;
    }
L_08945520:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 27u);
      if (branch_taken) {
          goto L_08945530;
      }
      goto L_08945528;
    }
L_08945528:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08945574;
      }
      goto L_08945530;
    }
L_08945530:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 19u);
      if (branch_taken) {
          goto L_08945568;
      }
      goto L_08945538;
    }
L_08945538:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 20u);
      if (branch_taken) {
          goto L_08945568;
      }
      goto L_08945540;
    }
L_08945540:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 21u);
      if (branch_taken) {
          goto L_08945568;
      }
      goto L_08945548;
    }
L_08945548:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 30u);
      if (branch_taken) {
          goto L_08945568;
      }
      goto L_08945550;
    }
L_08945550:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 32u);
      if (branch_taken) {
          goto L_08945568;
      }
      goto L_08945558;
    }
L_08945558:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 33u);
      if (branch_taken) {
          goto L_08945568;
      }
      goto L_08945560;
    }
L_08945560:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08945570;
      }
      goto L_08945568;
    }
L_08945568:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08945574;
      }
      goto L_08945570;
    }
L_08945570:
    ctx.gpr[2] = (0u | 0u);
    goto L_08945574;
L_08945574:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894557C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(3228));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945584:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08945598u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08945604;
L_08945598:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089455E8;
      }
      goto L_089455A0;
    }
L_089455A0:
    ctx.gpr[31] = (0x089455A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08945620;
L_089455A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089455E8;
      }
      goto L_089455B0;
    }
L_089455B0:
    ctx.gpr[31] = (0x089455B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08945610;
L_089455B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089455E8;
      }
      goto L_089455C0;
    }
L_089455C0:
    ctx.gpr[31] = (0x089455C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 83u, 0x0891857Cu>(ctx, &aot_mem) && ctx.pc == 0x089455C8u) goto L_089455C8;
    return;
L_089455C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089455E8;
      }
      goto L_089455D0;
    }
L_089455D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3228)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089455F0;
      }
      goto L_089455E8;
    }
L_089455E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089455F4;
      }
      goto L_089455F0;
    }
L_089455F0:
    ctx.gpr[2] = (0u | 0u);
    goto L_089455F4;
L_089455F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945604:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] & 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945610:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3228)));
    ctx.gpr[2] = (ctx.gpr[4] & 4u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945620:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3228)));
    ctx.gpr[2] = (ctx.gpr[4] & 2u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945630:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08945674;
      }
      goto L_08945654;
    }
L_08945654:
    ctx.gpr[31] = (0x0894565Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08945584;
L_0894565C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945674;
      }
      goto L_08945664;
    }
L_08945664:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3228)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3220), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3228), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08945674;
L_08945674:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945688:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089456D4;
      }
      goto L_089456AC;
    }
L_089456AC:
    ctx.gpr[31] = (0x089456B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08945584;
L_089456B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089456D4;
      }
      goto L_089456BC;
    }
L_089456BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3228)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3220), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3228), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 2000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3224), ctx.gpr[4]);
    goto L_089456D4;
L_089456D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089456E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0894572C;
      }
      goto L_0894570C;
    }
L_0894570C:
    ctx.gpr[31] = (0x08945714u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08945584;
L_08945714:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894572C;
      }
      goto L_0894571C;
    }
L_0894571C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3228)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3220), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3228), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0894572C;
L_0894572C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945740:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089457A0;
      }
      goto L_08945750;
    }
L_08945750:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089457A0;
      }
      goto L_0894575C;
    }
L_0894575C:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3228)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3220)));
    ctx.gpr[7] = (ctx.gpr[7] | 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3228), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3220), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945790;
      }
      goto L_08945780;
    }
L_08945780:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1564), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089457A0;
      }
      goto L_08945790;
    }
L_08945790:
    ctx.gpr[4] = (16298u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 15729u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089457A0;
L_089457A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089457A8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[6] = (17530u << 16u);
    ctx.gpr[7] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3220)));
      if (branch_taken) {
          goto L_089457F8;
      }
      goto L_089457E0;
    }
L_089457E0:
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
      if (branch_taken) {
          goto L_08945818;
      }
      goto L_089457F8;
    }
L_089457F8:
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[6] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    goto L_08945818;
L_08945818:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3220), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3220)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
        goto L_08945834;
    }
    goto L_08945834;
L_08945834:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894583C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3228)));
    ctx.gpr[7] = (ctx.gpr[6] & 32u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08945858;
      }
      goto L_08945854;
    }
L_08945854:
    ctx.gpr[5] = (0u | 1u);
    goto L_08945858;
L_08945858:
    ctx.gpr[6] = (ctx.gpr[6] & 16u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945894;
      }
      goto L_0894586C;
    }
L_0894586C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945894;
      }
      goto L_08945878;
    }
L_08945878:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(836)));
    ctx.gpr[8] = (16256u << 16u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
      if (branch_taken) {
          goto L_08945890;
      }
      goto L_08945888;
    }
L_08945888:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1564), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08945894;
      }
      goto L_08945890;
    }
L_08945890:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08945894;
L_08945894:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3228), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3220), 0u);
      if (branch_taken) {
          goto L_089458AC;
      }
      goto L_089458A0;
    }
L_089458A0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3228)));
    ctx.gpr[5] = (ctx.gpr[5] | 32u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3228), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089458AC;
L_089458AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089458B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945940;
      }
      goto L_089458E8;
    }
L_089458E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3228)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945940;
      }
      goto L_08945900;
    }
L_08945900:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08945930u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08945604;
L_08945930:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945950;
      }
      goto L_08945938;
    }
L_08945938:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945998;
      }
      goto L_08945940;
    }
L_08945940:
    ctx.gpr[31] = (0x08945948u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0894583C;
L_08945948:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945A8C;
      }
      goto L_08945950;
    }
L_08945950:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(272)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3220)));
    ctx.gpr[7] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x0894598Cu);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 210u, 0x08A84FC8u>(ctx, &aot_mem) && ctx.pc == 0x0894598Cu) goto L_0894598C;
    return;
L_0894598C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945A40;
      }
      goto L_08945998;
    }
L_08945998:
    ctx.gpr[31] = (0x089459A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08945620;
L_089459A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089459F0;
      }
      goto L_089459A8;
    }
L_089459A8:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(274)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3220)));
    ctx.gpr[7] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089459E4u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 210u, 0x08A84FC8u>(ctx, &aot_mem) && ctx.pc == 0x089459E4u) goto L_089459E4;
    return;
L_089459E4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945A40;
      }
      goto L_089459F0;
    }
L_089459F0:
    ctx.gpr[31] = (0x089459F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08945610;
L_089459F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945A40;
      }
      goto L_08945A00;
    }
L_08945A00:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(276)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3220)));
    ctx.gpr[7] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08945A3Cu);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 210u, 0x08A84FC8u>(ctx, &aot_mem) && ctx.pc == 0x08945A3Cu) goto L_08945A3C;
    return;
L_08945A3C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08945A40;
L_08945A40:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08945A4Cu);
    ctx.gpr[4] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08945A4Cu) goto L_08945A4C;
    return;
L_08945A4C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08945A64;
      }
      goto L_08945A58;
    }
L_08945A58:
    ctx.gpr[31] = (0x08945A60u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 419u, 0x0891997Cu>(ctx, &aot_mem) && ctx.pc == 0x08945A60u) goto L_08945A60;
    return;
L_08945A60:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08945A64;
L_08945A64:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(116));
    ctx.gpr[31] = (0x08945A78u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 75u, 0x089C052Cu>(ctx, &aot_mem) && ctx.pc == 0x08945A78u) goto L_08945A78;
    return;
L_08945A78:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08945A84u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 429u, 0x08A5A3FCu>(ctx, &aot_mem) && ctx.pc == 0x08945A84u) goto L_08945A84;
    return;
L_08945A84:
    ctx.gpr[31] = (0x08945A8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0894583C;
L_08945A8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945AA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[18] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5736));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08945ADCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 86u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x08945ADCu) goto L_08945ADC;
    return;
L_08945ADC:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08945B00;
      }
      goto L_08945AE8;
    }
L_08945AE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08945AF8u);
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 290u, 0x088A9424u>(ctx, &aot_mem) && ctx.pc == 0x08945AF8u) goto L_08945AF8;
    return;
L_08945AF8:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08945B24;
      }
      goto L_08945B00;
    }
L_08945B00:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08945B14u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x08945B14u) goto L_08945B14;
    return;
L_08945B14:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
        goto L_08945B2C;
    }
    goto L_08945B1C;
L_08945B1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945B74;
      }
      goto L_08945B24;
    }
L_08945B24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08945DB8;
      }
      goto L_08945B2C;
    }
L_08945B2C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08945B38u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x08945B38u) goto L_08945B38;
    return;
L_08945B38:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08945B68;
    }
    goto L_08945B48;
L_08945B48:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08945B58u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08945B58u) goto L_08945B58;
    return;
L_08945B58:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_08945B68;
L_08945B68:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(178)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08945BB0;
      }
      goto L_08945B74;
    }
L_08945B74:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08945B84u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x08945B84u) goto L_08945B84;
    return;
L_08945B84:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945C50;
      }
      goto L_08945B90;
    }
L_08945B90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945BB8;
      }
      goto L_08945BA8;
    }
L_08945BA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945BD4;
      }
      goto L_08945BB0;
    }
L_08945BB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08945DB8;
      }
      goto L_08945BB8;
    }
L_08945BB8:
    ctx.gpr[31] = (0x08945BC0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 152u, 0x08980B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08945BC0u) goto L_08945BC0;
    return;
L_08945BC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08945BCCu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 272u, 0x089A5338u>(ctx, &aot_mem) && ctx.pc == 0x08945BCCu) goto L_08945BCC;
    return;
L_08945BCC:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08945BE8;
      }
      goto L_08945BD4;
    }
L_08945BD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945BF0;
      }
      goto L_08945BE0;
    }
L_08945BE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08945C10;
      }
      goto L_08945BE8;
    }
L_08945BE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08945DB8;
      }
      goto L_08945BF0;
    }
L_08945BF0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    ctx.gpr[31] = (0x08945C00u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08945C00u) goto L_08945C00;
    return;
L_08945C00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08945C10;
L_08945C10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(102)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945C58;
      }
      goto L_08945C28;
    }
L_08945C28:
    ctx.gpr[31] = (0x08945C30u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 86u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x08945C30u) goto L_08945C30;
    return;
L_08945C30:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08945C50;
      }
      goto L_08945C3C;
    }
L_08945C3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945C60;
      }
      goto L_08945C48;
    }
L_08945C48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_08945C84;
      }
      goto L_08945C50;
    }
L_08945C50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08945DB8;
      }
      goto L_08945C58;
    }
L_08945C58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08945DB8;
      }
      goto L_08945C60;
    }
L_08945C60:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(18));
    ctx.gpr[31] = (0x08945C70u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08945C70u) goto L_08945C70;
    return;
L_08945C70:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_08945C84;
L_08945C84:
    ctx.gpr[5] = (ctx.gpr[5] ^ 65535u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945C50;
      }
      goto L_08945C98;
    }
L_08945C98:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (0u | 65535u);
      if (branch_taken) {
          goto L_08945CC0;
      }
      goto L_08945CA0;
    }
L_08945CA0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(19));
    ctx.gpr[31] = (0x08945CB0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08945CB0u) goto L_08945CB0;
    return;
L_08945CB0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08945CC0;
L_08945CC0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08945CD4;
      }
      goto L_08945CCC;
    }
L_08945CCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08945CE4;
      }
      goto L_08945CD4;
    }
L_08945CD4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08945CE0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x08945CE0u) goto L_08945CE0;
    return;
L_08945CE0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08945CE4;
L_08945CE4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945C50;
      }
      goto L_08945CEC;
    }
L_08945CEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
        goto L_08945D1C;
    }
    goto L_08945CF8;
L_08945CF8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08945D08u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08945D08u) goto L_08945D08;
    return;
L_08945D08:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_08945D1C;
L_08945D1C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08945D30;
      }
      goto L_08945D24;
    }
L_08945D24:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_08945D40;
      }
      goto L_08945D30;
    }
L_08945D30:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08945D3Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x08945D3Cu) goto L_08945D3C;
    return;
L_08945D3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    goto L_08945D40;
L_08945D40:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945C50;
      }
      goto L_08945D48;
    }
L_08945D48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
        goto L_08945D78;
    }
    goto L_08945D54;
L_08945D54:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(21));
    ctx.gpr[31] = (0x08945D64u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08945D64u) goto L_08945D64;
    return;
L_08945D64:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_08945D78;
L_08945D78:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08945D94;
      }
      goto L_08945D80;
    }
L_08945D80:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
      if (branch_taken) {
          goto L_08945DAC;
      }
      goto L_08945D94;
    }
L_08945D94:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08945DA0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x08945DA0u) goto L_08945DA0;
    return;
L_08945DA0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    goto L_08945DAC;
L_08945DAC:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08945C50;
      }
      goto L_08945DB4;
    }
L_08945DB4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08945DB8;
L_08945DB8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945DD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (7168u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08945E04u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 663u, 0x089B68B0u>(ctx, &aot_mem) && ctx.pc == 0x08945E04u) goto L_08945E04;
    return;
L_08945E04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (7168u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945E30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-528));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[31]);
    ctx.gpr[31] = (0x08945E78u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08945E78u) goto L_08945E78;
    return;
L_08945E78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08945ED8;
      }
      goto L_08945E84;
    }
L_08945E84:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08945E94u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 436u, 0x088D5EECu>(ctx, &aot_mem) && ctx.pc == 0x08945E94u) goto L_08945E94;
    return;
L_08945E94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946204;
      }
      goto L_08945ED8;
    }
L_08945ED8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08945FA0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 511u, 0x08A06548u>(ctx, &aot_mem) && ctx.pc == 0x08945FA0u) goto L_08945FA0;
    return;
L_08945FA0:
    ctx.gpr[4] = (16373u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 48651u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
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
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08946094;
      }
      goto L_08945FD8;
    }
L_08945FD8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08946004u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 624u, 0x08942DA0u>(ctx, &aot_mem) && ctx.pc == 0x08946004u) goto L_08946004;
    return;
L_08946004:
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
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08946060u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 624u, 0x08942DA0u>(ctx, &aot_mem) && ctx.pc == 0x08946060u) goto L_08946060;
    return;
L_08946060:
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894608C;
      }
      goto L_08946078;
    }
L_08946078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894608C;
      }
      goto L_08946084;
    }
L_08946084:
    ctx.gpr[31] = (0x0894608Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x0894608Cu) goto L_0894608C;
    return;
L_0894608C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089461D8;
      }
      goto L_08946094;
    }
L_08946094:
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089460F0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A066A0u>(ctx, &aot_mem) && ctx.pc == 0x089460F0u) goto L_089460F0;
    return;
L_089460F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08946140;
      }
      goto L_08946134;
    }
L_08946134:
    ctx.gpr[4] = (17106u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08946148;
      }
      goto L_08946140;
    }
L_08946140:
    ctx.gpr[4] = (49874u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08946148;
L_08946148:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[31] = (0x08946170u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 498u, 0x08A060BCu>(ctx, &aot_mem) && ctx.pc == 0x08946170u) goto L_08946170;
    return;
L_08946170:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08946188u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 624u, 0x08942DA0u>(ctx, &aot_mem) && ctx.pc == 0x08946188u) goto L_08946188;
    return;
L_08946188:
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
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0894619Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x0894619Cu) goto L_0894619C;
    return;
L_0894619C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089461D8;
      }
      goto L_089461C4;
    }
L_089461C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089461D8;
      }
      goto L_089461D0;
    }
L_089461D0:
    ctx.gpr[31] = (0x089461D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089461D8u) goto L_089461D8;
    return;
L_089461D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089461FC;
      }
      goto L_089461E8;
    }
L_089461E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089461FC;
      }
      goto L_089461F4;
    }
L_089461F4:
    ctx.gpr[31] = (0x089461FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089461FCu) goto L_089461FC;
    return;
L_089461FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946204;
      }
      goto L_08946204;
    }
L_08946204:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08946228:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x08946250u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 340u, 0x089A5734u>(ctx, &aot_mem) && ctx.pc == 0x08946250u) goto L_08946250;
    return;
L_08946250:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18428));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2999), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(2064));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(3008));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0894628Cu);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894628Cu) goto L_0894628C;
    return;
L_0894628C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3232), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3229), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0894629Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08946430;
L_0894629C:
    ctx.gpr[31] = (0x089462A4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 236u, 0x08ACCEA0u>(ctx, &aot_mem) && ctx.pc == 0x089462A4u) goto L_089462A4;
    return;
L_089462A4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2928), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1720), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2952), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2949), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089462C4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 516u, 0x0899EDBCu>(ctx, &aot_mem) && ctx.pc == 0x089462C4u) goto L_089462C4;
    return;
L_089462C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08946308;
      }
      goto L_089462D4;
    }
L_089462D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089462FC;
      }
      goto L_089462E0;
    }
L_089462E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089462FC;
    }
    goto L_089462EC;
L_089462EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089462F8u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089462F8u) goto L_089462F8;
    return;
L_089462F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089462FC;
L_089462FC:
    ctx.gpr[31] = (0x08946304u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x08946304u) goto L_08946304;
    return;
L_08946304:
    ctx.gpr[4] = (0u | 1u);
    goto L_08946308;
L_08946308:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2944), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2940), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2936), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2950), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2968), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2956), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2960), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2964), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2996), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2997), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2998), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3188), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3196), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3200), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3204), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3212), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2984), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2980), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2976), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2972), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3037), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(3040));
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    goto L_0894638C;
L_0894638C:
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
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3136), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0894638C;
      }
      goto L_089463AC;
    }
L_089463AC:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089463B4;
L_089463B4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3160), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089463B4;
      }
      goto L_089463C8;
    }
L_089463C8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(3184), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3216), 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x089463DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31228));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x089463DCu) goto L_089463DC;
    return;
L_089463DC:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30168), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3220), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3228), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3224), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3208), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08946430:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2992), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2993), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[31] = (0x08946468u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7128));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 375u, 0x088EA07Cu>(ctx, &aot_mem) && ctx.pc == 0x08946468u) goto L_08946468;
    return;
L_08946468:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2994), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2995), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2988), 0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1328), 0u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1388), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1392), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1396), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(596), 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x089464ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 61u, 0x089A04ACu>(ctx, &aot_mem) && ctx.pc == 0x089464ECu) goto L_089464EC;
    return;
L_089464EC:
    ctx.gpr[31] = (0x089464F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 92u, 0x089A0714u>(ctx, &aot_mem) && ctx.pc == 0x089464F4u) goto L_089464F4;
    return;
L_089464F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946524;
      }
      goto L_0894651C;
    }
L_0894651C:
    ctx.gpr[31] = (0x08946524u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 545u, 0x0884E1D0u>(ctx, &aot_mem) && ctx.pc == 0x08946524u) goto L_08946524;
    return;
L_08946524:
    ctx.gpr[31] = (0x0894652Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 321u, 0x08865778u>(ctx, &aot_mem) && ctx.pc == 0x0894652Cu) goto L_0894652C;
    return;
L_0894652C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894656C;
      }
      goto L_0894653C;
    }
L_0894653C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946564;
      }
      goto L_08946548;
    }
L_08946548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_08946564;
    }
    goto L_08946554;
L_08946554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08946560u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08946560u) goto L_08946560;
    return;
L_08946560:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_08946564;
L_08946564:
    ctx.gpr[31] = (0x0894656Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x0894656Cu) goto L_0894656C;
    return;
L_0894656C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08946580u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08946580u) goto L_08946580;
    return;
L_08946580:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), 0u);
    ctx.gpr[4] = (0u | 31u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(744), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (61440u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2950), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2968), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x089465B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08947B9C;
L_089465B8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2997), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 50u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3188), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089465F4;
      }
      goto L_089465D8;
    }
L_089465D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089465F4;
      }
      goto L_089465E8;
    }
L_089465E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_089465F4;
L_089465F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1924), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1960), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3229), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946650;
      }
      goto L_0894660C;
    }
L_0894660C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08946618u);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08946618u) goto L_08946618;
    return;
L_08946618:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2228u << 16u);
      if (branch_taken) {
          goto L_0894663C;
      }
      goto L_08946624;
    }
L_08946624:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(246)));
    ctx.gpr[31] = (0x08946638u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 194u, 0x0883D0B8u>(ctx, &aot_mem) && ctx.pc == 0x08946638u) goto L_08946638;
    return;
L_08946638:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_0894663C;
L_0894663C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3232), ctx.gpr[19]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08946650u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08946650u) goto L_08946650;
    return;
L_08946650:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08946660u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 489u, 0x08A05EE4u>(ctx, &aot_mem) && ctx.pc == 0x08946660u) goto L_08946660;
    return;
L_08946660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[31] = (0x0894666Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x0894666Cu) goto L_0894666C;
    return;
L_0894666C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089466D0;
      }
      goto L_089466BC;
    }
L_089466BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089466D0;
      }
      goto L_089466C8;
    }
L_089466C8:
    ctx.gpr[31] = (0x089466D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089466D0u) goto L_089466D0;
    return;
L_089466D0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089466F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2950)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[17] = (2229u << 16u);
      if (branch_taken) {
          goto L_0894674C;
      }
      goto L_08946740;
    }
L_08946740:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2950)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2950), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0894674C;
L_0894674C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2950)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894675C;
      }
      goto L_08946758;
    }
L_08946758:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2968), 0u);
    goto L_0894675C;
L_0894675C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946778;
      }
      goto L_08946768;
    }
L_08946768:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08946778;
L_08946778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0894678C;
      }
      goto L_08946784;
    }
L_08946784:
    ctx.gpr[31] = (0x0894678Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 149u, 0x0894CC34u>(ctx, &aot_mem) && ctx.pc == 0x0894678Cu) goto L_0894678C;
    return;
L_0894678C:
    ctx.gpr[31] = (0x08946794u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 222u, 0x0894D2C4u>(ctx, &aot_mem) && ctx.pc == 0x08946794u) goto L_08946794;
    return;
L_08946794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089467E8;
      }
      goto L_089467A0;
    }
L_089467A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089467E8;
      }
      goto L_089467C0;
    }
L_089467C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089467E8;
      }
      goto L_089467D4;
    }
L_089467D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08946888;
      }
      goto L_089467E8;
    }
L_089467E8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946888;
      }
      goto L_08946804;
    }
L_08946804:
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
    ctx.gpr[5] = (16608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08946844u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 72u, 0x088C8430u>(ctx, &aot_mem) && ctx.pc == 0x08946844u) goto L_08946844;
    return;
L_08946844:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946874;
      }
      goto L_08946850;
    }
L_08946850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08946874;
      }
      goto L_08946860;
    }
L_08946860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08946888;
      }
      goto L_08946874;
    }
L_08946874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_08946888;
L_08946888:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2993)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089468CC;
      }
      goto L_08946894;
    }
L_08946894:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2992)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_089468C0;
      }
      goto L_089468A4;
    }
L_089468A4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2992), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x089468B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7128));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 375u, 0x088EA07Cu>(ctx, &aot_mem) && ctx.pc == 0x089468B8u) goto L_089468B8;
    return;
L_089468B8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2993), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089468CC;
      }
      goto L_089468C0;
    }
L_089468C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2992)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2992), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089468CC;
L_089468CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946904;
      }
      goto L_089468D8;
    }
L_089468D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2992)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(7128));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (17279u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x08946904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 372u, 0x088EA044u>(ctx, &aot_mem) && ctx.pc == 0x08946904u) goto L_08946904;
    return;
L_08946904:
    ctx.gpr[31] = (0x0894690Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 312u, 0x089B10ECu>(ctx, &aot_mem) && ctx.pc == 0x0894690Cu) goto L_0894690C;
    return;
L_0894690C:
    ctx.gpr[31] = (0x08946914u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 256u, 0x0894D5C8u>(ctx, &aot_mem) && ctx.pc == 0x08946914u) goto L_08946914;
    return;
L_08946914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946980;
      }
      goto L_08946930;
    }
L_08946930:
    ctx.gpr[31] = (0x08946938u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 625u, 0x08942DC8u>(ctx, &aot_mem) && ctx.pc == 0x08946938u) goto L_08946938;
    return;
L_08946938:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08946944u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 243u, 0x08ACCF90u>(ctx, &aot_mem) && ctx.pc == 0x08946944u) goto L_08946944;
    return;
L_08946944:
    ctx.gpr[31] = (0x0894694Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 720u, 0x0883BA30u>(ctx, &aot_mem) && ctx.pc == 0x0894694Cu) goto L_0894694C;
    return;
L_0894694C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[22] = (0u | 55u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[23] = (0u | 4u);
      if (branch_taken) {
          goto L_08946988;
      }
      goto L_08946978;
    }
L_08946978:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
      if (branch_taken) {
          goto L_08946B7C;
      }
      goto L_08946980;
    }
L_08946980:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947B58;
      }
      goto L_08946988;
    }
L_08946988:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x089469A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x089469A8u) goto L_089469A8;
    return;
L_089469A8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (32u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (0u | 201u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 57u);
        goto L_089469D0;
    }
    goto L_089469D0;
L_089469D0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089469DCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089469DCu) goto L_089469DC;
    return;
L_089469DC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946AF4;
      }
      goto L_089469E8;
    }
L_089469E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08946AF4;
      }
      goto L_08946A08;
    }
L_08946A08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08946AF4;
      }
      goto L_08946A18;
    }
L_08946A18:
    ctx.gpr[4] = (16102u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3200)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (2230u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-8107));
      if (branch_taken) {
          goto L_08946A70;
      }
      goto L_08946A3C;
    }
L_08946A3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3200)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15444u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 65012u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08946A70;
      }
      goto L_08946A6C;
    }
L_08946A6C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3200), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08946A70;
L_08946A70:
    ctx.gpr[31] = (0x08946A78u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 9u, 0x08A98040u>(ctx, &aot_mem) && ctx.pc == 0x08946A78u) goto L_08946A78;
    return;
L_08946A78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946AD4;
      }
      goto L_08946A80;
    }
L_08946A80:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1440)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08946AD4;
      }
      goto L_08946AA0;
    }
L_08946AA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08946AD4;
      }
      goto L_08946AB8;
    }
L_08946AB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08946ACCu);
    ctx.gpr[6] = (0u | 190u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x08946ACCu) goto L_08946ACC;
    return;
L_08946ACC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946B78;
      }
      goto L_08946AD4;
    }
L_08946AD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3200)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08946AECu);
    ctx.gpr[6] = (0u | 191u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x08946AECu) goto L_08946AEC;
    return;
L_08946AEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946B78;
      }
      goto L_08946AF4;
    }
L_08946AF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3200)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08946B78;
      }
      goto L_08946B0C;
    }
L_08946B0C:
    ctx.gpr[4] = (16102u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3200)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3200)));
        goto L_08946B48;
    }
    goto L_08946B2C;
L_08946B2C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 192u);
    ctx.gpr[31] = (0x08946B44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x08946B44u) goto L_08946B44;
    return;
L_08946B44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3200)));
    goto L_08946B48;
L_08946B48:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15172u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08946B78;
      }
      goto L_08946B74;
    }
L_08946B74:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3200), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08946B78;
L_08946B78:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    goto L_08946B7C;
L_08946B7C:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08946BD4;
      }
      goto L_08946BA0;
    }
L_08946BA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08946BD4;
      }
      goto L_08946BB0;
    }
L_08946BB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946BD4;
      }
      goto L_08946BBC;
    }
L_08946BBC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 52u);
    ctx.gpr[31] = (0x08946BD4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x08946BD4u) goto L_08946BD4;
    return;
L_08946BD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946D3C;
      }
      goto L_08946BE0;
    }
L_08946BE0:
    ctx.gpr[31] = (0x08946BE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08945584;
L_08946BE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946D3C;
      }
      goto L_08946BF0;
    }
L_08946BF0:
    ctx.gpr[31] = (0x08946BF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089457A8;
L_08946BF8:
    ctx.gpr[31] = (0x08946C00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08945820;
L_08946C00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_08946C10;
      }
      goto L_08946C08;
    }
L_08946C08:
    ctx.gpr[31] = (0x08946C10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0894583C;
L_08946C10:
    ctx.gpr[31] = (0x08946C18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08945620;
L_08946C18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946D3C;
      }
      goto L_08946C20;
    }
L_08946C20:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946D3C;
      }
      goto L_08946C30;
    }
L_08946C30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08946D3C;
      }
      goto L_08946C4C;
    }
L_08946C4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08946D3C;
      }
      goto L_08946C58;
    }
L_08946C58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08946D3C;
      }
      goto L_08946C68;
    }
L_08946C68:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[6] = (17530u << 16u);
    ctx.gpr[7] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3224)));
      if (branch_taken) {
          goto L_08946CB4;
      }
      goto L_08946C9C;
    }
L_08946C9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08946CD4;
      }
      goto L_08946CB4;
    }
L_08946CB4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[5] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_08946CD4;
L_08946CD4:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3224), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08946D3C;
      }
      goto L_08946CE0;
    }
L_08946CE0:
    ctx.gpr[4] = (0u | 2000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3224), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30172)));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08946D24;
      }
      goto L_08946D10;
    }
L_08946D10:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08946D38;
      }
      goto L_08946D24;
    }
L_08946D24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_08946D38;
L_08946D38:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08946D3C;
L_08946D3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08946D70;
      }
      goto L_08946D48;
    }
L_08946D48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08946D70;
      }
      goto L_08946D58;
    }
L_08946D58:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08946D68u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 716u, 0x089433D0u>(ctx, &aot_mem) && ctx.pc == 0x08946D68u) goto L_08946D68;
    return;
L_08946D68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946D90;
      }
      goto L_08946D70;
    }
L_08946D70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08946D90;
      }
      goto L_08946D7C;
    }
L_08946D7C:
    ctx.gpr[5] = (16025u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08946D90u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 716u, 0x089433D0u>(ctx, &aot_mem) && ctx.pc == 0x08946D90u) goto L_08946D90;
    return;
L_08946D90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08946DB4;
      }
      goto L_08946D9C;
    }
L_08946D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08946DC4;
      }
      goto L_08946DAC;
    }
L_08946DAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946DF8;
      }
      goto L_08946DB4;
    }
L_08946DB4:
    ctx.gpr[31] = (0x08946DBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08944E30;
L_08946DBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947B58;
      }
      goto L_08946DC4;
    }
L_08946DC4:
    ctx.gpr[31] = (0x08946DCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08944E30;
L_08946DCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4000));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946DF0;
      }
      goto L_08946DE8;
    }
L_08946DE8:
    ctx.gpr[31] = (0x08946DF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 432u, 0x089A1E6Cu>(ctx, &aot_mem) && ctx.pc == 0x08946DF0u) goto L_08946DF0;
    return;
L_08946DF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947B58;
      }
      goto L_08946DF8;
    }
L_08946DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08946F9C;
      }
      goto L_08946E08;
    }
L_08946E08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08946F9C;
      }
      goto L_08946E18;
    }
L_08946E18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946F94;
      }
      goto L_08946E24;
    }
L_08946E24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946F94;
      }
      goto L_08946E34;
    }
L_08946E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x08946E48u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 215u, 0x08A293C4u>(ctx, &aot_mem) && ctx.pc == 0x08946E48u) goto L_08946E48;
    return;
L_08946E48:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08946F94;
      }
      goto L_08946E50;
    }
L_08946E50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08946E5Cu);
    ctx.gpr[5] = (0u | 79u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x08946E5Cu) goto L_08946E5C;
    return;
L_08946E5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(543)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08946F64;
      }
      goto L_08946E70;
    }
L_08946E70:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946F64;
      }
      goto L_08946E78;
    }
L_08946E78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08946E84u);
    ctx.gpr[5] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x08946E84u) goto L_08946E84;
    return;
L_08946E84:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946F64;
      }
      goto L_08946E90;
    }
L_08946E90:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
        goto L_08946F00;
    }
    goto L_08946E98;
L_08946E98:
    ctx.gpr[31] = (0x08946EA0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 27u, 0x08A980DCu>(ctx, &aot_mem) && ctx.pc == 0x08946EA0u) goto L_08946EA0;
    return;
L_08946EA0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08946F64;
      }
      goto L_08946EBC;
    }
L_08946EBC:
    ctx.gpr[31] = (0x08946EC4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 810u, 0x08A972E0u>(ctx, &aot_mem) && ctx.pc == 0x08946EC4u) goto L_08946EC4;
    return;
L_08946EC4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08946F64;
      }
      goto L_08946EDC;
    }
L_08946EDC:
    ctx.gpr[31] = (0x08946EE4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1088u, 0x08A97F64u>(ctx, &aot_mem) && ctx.pc == 0x08946EE4u) goto L_08946EE4;
    return;
L_08946EE4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08946F64;
      }
      goto L_08946EFC;
    }
L_08946EFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    goto L_08946F00;
L_08946F00:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(543)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(543), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946F38;
      }
      goto L_08946F20;
    }
L_08946F20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08946F30u);
    ctx.gpr[6] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08946F30u) goto L_08946F30;
    return;
L_08946F30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08946F4C;
      }
      goto L_08946F38;
    }
L_08946F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08946F48u);
    ctx.gpr[6] = (0u | 79u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08946F48u) goto L_08946F48;
    return;
L_08946F48:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08946F4C;
L_08946F4C:
    ctx.gpr[5] = (2184u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08946F5Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25484));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x08946F5Cu) goto L_08946F5C;
    return;
L_08946F5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947B58;
      }
      goto L_08946F64;
    }
L_08946F64:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946F94;
      }
      goto L_08946F6C;
    }
L_08946F6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(224));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (0u | 15u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08946F94u);
    ctx.gpr[6] = (0u | 79u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946F94u) goto L_08946F94;
    return;
L_08946F94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947B58;
      }
      goto L_08946F9C;
    }
L_08946F9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946FB0;
      }
      goto L_08946FA8;
    }
L_08946FA8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), ctx.gpr[4]);
    goto L_08946FB0;
L_08946FB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946FCC;
      }
      goto L_08946FC0;
    }
L_08946FC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08946FCCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08944EBC;
L_08946FCC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947064;
      }
      goto L_08946FD4;
    }
L_08946FD4:
    ctx.gpr[31] = (0x08946FDCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 16u, 0x08A9807Cu>(ctx, &aot_mem) && ctx.pc == 0x08946FDCu) goto L_08946FDC;
    return;
L_08946FDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947064;
      }
      goto L_08946FE4;
    }
L_08946FE4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x0894700Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 339u, 0x088EE418u>(ctx, &aot_mem) && ctx.pc == 0x0894700Cu) goto L_0894700C;
    return;
L_0894700C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947064;
      }
      goto L_08947014;
    }
L_08947014:
    ctx.gpr[4] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 28u);
      if (branch_taken) {
          goto L_08947028;
      }
      goto L_08947020;
    }
L_08947020:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08947044;
      }
      goto L_08947028;
    }
L_08947028:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 59u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0894703Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x0894703Cu) goto L_0894703C;
    return;
L_0894703C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947064;
      }
      goto L_08947044;
    }
L_08947044:
    ctx.gpr[4] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08947064;
      }
      goto L_08947050;
    }
L_08947050:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 60u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08947064u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08947064u) goto L_08947064;
    return;
L_08947064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 63 ? 1u : 0u);
      if (branch_taken) {
          goto L_0894766C;
      }
      goto L_08947070;
    }
L_08947070:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894766C;
      }
      goto L_08947078;
    }
L_08947078:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31384)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08947090:
    ctx.gpr[6] = (15820u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.gpr[5] = (0u | 57u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[17] = (0u | 5u);
    ctx.gpr[20] = (0u | 12u);
    ctx.gpr[19] = (2228u << 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[21] = (8u << 16u);
      if (branch_taken) {
          goto L_089470CC;
      }
      goto L_089470B8;
    }
L_089470B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089470CC;
      }
      goto L_089470C4;
    }
L_089470C4:
    ctx.gpr[31] = (0x089470CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 814u, 0x0888B764u>(ctx, &aot_mem) && ctx.pc == 0x089470CCu) goto L_089470CC;
    return;
L_089470CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947688;
      }
      goto L_089470D4;
    }
L_089470D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[6] = (0u | 28u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (0u | 5u);
    ctx.gpr[20] = (0u | 12u);
    ctx.gpr[19] = (2228u << 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[21] = (8u << 16u);
      if (branch_taken) {
          goto L_0894713C;
      }
      goto L_08947114;
    }
L_08947114:
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894713C;
      }
      goto L_08947120;
    }
L_08947120:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947150;
      }
      goto L_08947128;
    }
L_08947128:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08947134u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 750u, 0x089436B4u>(ctx, &aot_mem) && ctx.pc == 0x08947134u) goto L_08947134;
    return;
L_08947134:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947150;
      }
      goto L_0894713C;
    }
L_0894713C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947150;
      }
      goto L_08947144;
    }
L_08947144:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08947150u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 200u, 0x08948D90u>(ctx, &aot_mem) && ctx.pc == 0x08947150u) goto L_08947150;
    return;
L_08947150:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947688;
      }
      goto L_08947158;
    }
L_08947158:
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
    ctx.gpr[17] = (0u | 5u);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2228u << 16u);
    ctx.gpr[20] = (0u | 12u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (8u << 16u);
      if (branch_taken) {
          goto L_089471A8;
      }
      goto L_0894718C;
    }
L_0894718C:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[17] = (0u | 5u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (0u | 12u);
    ctx.gpr[19] = (2228u << 16u);
    ctx.gpr[21] = (8u << 16u);
    goto L_089471A8;
L_089471A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_089471D4;
      }
      goto L_089471B8;
    }
L_089471B8:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08947208;
      }
      goto L_089471C4;
    }
L_089471C4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08947210;
      }
      goto L_089471D4;
    }
L_089471D4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_089471F4;
      }
      goto L_089471DC;
    }
L_089471DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947208;
      }
      goto L_089471E4;
    }
L_089471E4:
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08947210;
      }
      goto L_089471F4;
    }
L_089471F4:
    ctx.gpr[4] = (16358u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08947210;
      }
      goto L_08947208;
    }
L_08947208:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08947210;
L_08947210:
    ctx.gpr[31] = (0x08947218u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08947B9C;
L_08947218:
    ctx.gpr[31] = (0x08947220u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 510u, 0x089AA50Cu>(ctx, &aot_mem) && ctx.pc == 0x08947220u) goto L_08947220;
    return;
L_08947220:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894723C;
      }
      goto L_08947228;
    }
L_08947228:
    ctx.gpr[31] = (0x08947230u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x08947230u) goto L_08947230;
    return;
L_08947230:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894723Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x0894723Cu) goto L_0894723C;
    return;
L_0894723C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947688;
      }
      goto L_08947244;
    }
L_08947244:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1312)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1316)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[20] = (0u | 12u);
    ctx.gpr[19] = (2228u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (8u << 16u);
      if (branch_taken) {
          goto L_089472A0;
      }
      goto L_08947290;
    }
L_08947290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_089472AC;
    }
    goto L_089472A0;
L_089472A0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089472E0;
      }
      goto L_089472AC;
    }
L_089472AC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_089472E0;
      }
      goto L_089472DC;
    }
L_089472DC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089472E0;
L_089472E0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894741C;
      }
      goto L_089472E8;
    }
L_089472E8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894741C;
      }
      goto L_089472F4;
    }
L_089472F4:
    ctx.gpr[31] = (0x089472FCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 79u, 0x08A982F0u>(ctx, &aot_mem) && ctx.pc == 0x089472FCu) goto L_089472FC;
    return;
L_089472FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089473EC;
      }
      goto L_08947304;
    }
L_08947304:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25332)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
        goto L_08947338;
    }
    goto L_08947310;
L_08947310:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0894732C;
      }
      goto L_0894731C;
    }
L_0894731C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(52))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08947330;
      }
      goto L_08947328;
    }
L_08947328:
    ctx.gpr[5] = (0u | 1u);
    goto L_0894732C;
L_0894732C:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08947330;
L_08947330:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08947370;
      }
      goto L_08947338;
    }
L_08947338:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0894734C;
      }
      goto L_08947340;
    }
L_08947340:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(68))))));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (0u | 1u);
        goto L_08947368;
    }
    goto L_0894734C;
L_0894734C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20))))));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
        goto L_0894736C;
    }
    goto L_08947358;
L_08947358:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(70))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0894736C;
      }
      goto L_08947364;
    }
L_08947364:
    ctx.gpr[5] = (0u | 1u);
    goto L_08947368;
L_08947368:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_0894736C;
L_0894736C:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08947370;
L_08947370:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089473EC;
      }
      goto L_08947378;
    }
L_08947378:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25332)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(22))))));
        goto L_089473AC;
    }
    goto L_08947384;
L_08947384:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089473A0;
      }
      goto L_08947390;
    }
L_08947390:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(54))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089473A4;
      }
      goto L_0894739C;
    }
L_0894739C:
    ctx.gpr[4] = (0u | 1u);
    goto L_089473A0;
L_089473A0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089473A4;
L_089473A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089473E4;
      }
      goto L_089473AC;
    }
L_089473AC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089473C0;
      }
      goto L_089473B4;
    }
L_089473B4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(72))))));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089473DC;
    }
    goto L_089473C0;
L_089473C0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(24))))));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_089473E0;
    }
    goto L_089473CC;
L_089473CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(74))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089473E0;
      }
      goto L_089473D8;
    }
L_089473D8:
    ctx.gpr[4] = (0u | 1u);
    goto L_089473DC;
L_089473DC:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089473E0;
L_089473E0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089473E4;
L_089473E4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894741C;
      }
      goto L_089473EC;
    }
L_089473EC:
    ctx.gpr[31] = (0x089473F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089473F4u) goto L_089473F4;
    return;
L_089473F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08947414;
      }
      goto L_08947404;
    }
L_08947404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894741C;
      }
      goto L_08947414;
    }
L_08947414:
    ctx.gpr[31] = (0x0894741Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x0894741Cu) goto L_0894741C;
    return;
L_0894741C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947438;
      }
      goto L_08947424;
    }
L_08947424:
    ctx.gpr[31] = (0x0894742Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 136u, 0x08A98578u>(ctx, &aot_mem) && ctx.pc == 0x0894742Cu) goto L_0894742C;
    return;
L_0894742C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947438;
      }
      goto L_08947434;
    }
L_08947434:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), ctx.gpr[17]);
    goto L_08947438;
L_08947438:
    ctx.gpr[31] = (0x08947440u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08947B9C;
L_08947440:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947688;
      }
      goto L_08947448;
    }
L_08947448:
    ctx.gpr[31] = (0x08947450u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08944E30;
L_08947450:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[17] = (0u | 5u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (0u | 12u);
    ctx.gpr[19] = (2228u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (8u << 16u);
      if (branch_taken) {
          goto L_08947688;
      }
      goto L_08947470;
    }
L_08947470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x0894747Cu);
    ctx.gpr[5] = (0u | 2048u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 337u, 0x08865864u>(ctx, &aot_mem) && ctx.pc == 0x0894747Cu) goto L_0894747C;
    return;
L_0894747C:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[17] = (0u | 5u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (0u | 12u);
    ctx.gpr[19] = (2228u << 16u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[21] = (8u << 16u);
      if (branch_taken) {
          goto L_08947548;
      }
      goto L_0894749C;
    }
L_0894749C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947548;
      }
      goto L_089474A8;
    }
L_089474A8:
    ctx.gpr[22] = (2232u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12960));
    ctx.gpr[31] = (0x089474B8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 339u, 0x088EE418u>(ctx, &aot_mem) && ctx.pc == 0x089474B8u) goto L_089474B8;
    return;
L_089474B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089474DC;
      }
      goto L_089474C0;
    }
L_089474C0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947548;
      }
      goto L_089474C8;
    }
L_089474C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089474D4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 200u, 0x08948D90u>(ctx, &aot_mem) && ctx.pc == 0x089474D4u) goto L_089474D4;
    return;
L_089474D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947548;
      }
      goto L_089474DC;
    }
L_089474DC:
    ctx.gpr[31] = (0x089474E4u);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(400));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 491u, 0x088EABACu>(ctx, &aot_mem) && ctx.pc == 0x089474E4u) goto L_089474E4;
    return;
L_089474E4:
    // Manual aim (keyboard and mouse): hold the aim button with a gun while
    // standing still, as the PSP game only aims from a standstill. The gun is
    // raised with the game's own CPed::SetPointGunAt(nullptr) (0x088D534C:
    // PED_AIM_GUN, the weapon's aim animation) and lowered on release with
    // CPed::ClearPointGunAt (0x088D5678). While aiming, Lee turns with the
    // camera on the spot and the window holds his movement
    // (lcs_manual_aim_pose); the game's own movement and animation code runs
    // unchanged.
    if (!lcs::lcs_auto_aim()) {
        const std::uint32_t ped = ctx.gpr[16];
        const std::uint32_t weapon_type = aot_mem.aot_load32(
            ped + 1428u + static_cast<std::uint32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ped + 1720u))) * 28u);
        const bool gun = lcs::lcs_free_aim_weapon(weapon_type);
        const bool held = gun && ctx.gpr[18] != 0u && lcs::lcs_manual_aim_held();
        static bool raised_by_aim = false;
        const bool pointing = (aot_mem.aot_load32(ped + 0x194u) & 8u) != 0u;
        const std::uint32_t state = aot_mem.aot_load32(ped + 0x34Cu);
        // Something else (damage, a cutscene, a car) already put the gun down.
        if (raised_by_aim && !pointing) raised_by_aim = false;
        if (held && !raised_by_aim) {
            const float speed_x = std::bit_cast<float>(aot_mem.aot_load32(ped + 112u));
            const float speed_y = std::bit_cast<float>(aot_mem.aot_load32(ped + 116u));
            const bool standing = speed_x * speed_x + speed_y * speed_y < 0.0004f;
            if (standing && !pointing && state == 1u) {
                // guest_call runs it to its return, through calls into other units.
                AllegrexContext point = ctx;
                (void)lcs::decomp::guest_call(point, 0x088D534Cu, {ped, 0u});
                raised_by_aim = (aot_mem.aot_load32(ped + 0x194u) & 8u) != 0u;
            }
        } else if (!held && raised_by_aim) {
            // A lock-on target (+0x6BC) is the game's own business.
            if (aot_mem.aot_load32(ped + 0x6BCu) == 0u) {
                AllegrexContext clear = ctx;
                (void)lcs::decomp::guest_call(clear, 0x088D5678u, {ped});
            }
            raised_by_aim = false;
        }
        const bool aiming = raised_by_aim;
        lcs::lcs_set_free_aim(aiming);
        lcs::lcs_set_manual_aim_pose(aiming);
        if (aiming) {
            const std::uint32_t camera = 0x08B832A0u + 400u + aot_mem.aot_load8(0x08B832A0u + 127u) * 656u;
            const float forward_x = std::bit_cast<float>(aot_mem.aot_load32(camera + 416u));
            const float forward_y = std::bit_cast<float>(aot_mem.aot_load32(camera + 420u));
            const std::uint32_t heading = std::bit_cast<std::uint32_t>(std::atan2(-forward_x, forward_y));
            aot_mem.aot_store32(ped + 1248u, heading);
            aot_mem.aot_store32(ped + 1252u, heading);
        }
    }
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947508;
      }
      goto L_089474EC;
    }
L_089474EC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947548;
      }
      goto L_089474F4;
    }
L_089474F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08947500u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 787u, 0x08943A74u>(ctx, &aot_mem) && ctx.pc == 0x08947500u) goto L_08947500;
    return;
L_08947500:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947548;
      }
      goto L_08947508;
    }
L_08947508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08947534;
      }
      goto L_08947518;
    }
L_08947518:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947548;
      }
      goto L_08947520;
    }
L_08947520:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894752Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 729u, 0x08943508u>(ctx, &aot_mem) && ctx.pc == 0x0894752Cu) goto L_0894752C;
    return;
L_0894752C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947548;
      }
      goto L_08947534;
    }
L_08947534:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947548;
      }
      goto L_0894753C;
    }
L_0894753C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08947548u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 142u, 0x08948900u>(ctx, &aot_mem) && ctx.pc == 0x08947548u) goto L_08947548;
    return;
L_08947548:
    ctx.gpr[31] = (0x08947550u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x08947550u) goto L_08947550;
    return;
L_08947550:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894757C;
      }
      goto L_08947558;
    }
L_08947558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894757C;
      }
      goto L_08947568;
    }
L_08947568:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894757C;
      }
      goto L_08947570;
    }
L_08947570:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894757Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 310u, 0x0894996Cu>(ctx, &aot_mem) && ctx.pc == 0x0894757Cu) goto L_0894757C;
    return;
L_0894757C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3229)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089475BC;
      }
      goto L_08947588;
    }
L_08947588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089475A8;
      }
      goto L_08947598;
    }
L_08947598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089475BC;
      }
      goto L_089475A8;
    }
L_089475A8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089475BC;
      }
      goto L_089475B0;
    }
L_089475B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089475BCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 252u, 0x089491A4u>(ctx, &aot_mem) && ctx.pc == 0x089475BCu) goto L_089475BC;
    return;
L_089475BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947688;
      }
      goto L_089475C4;
    }
L_089475C4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089475D8;
      }
      goto L_089475CC;
    }
L_089475CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089475D8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 142u, 0x08948900u>(ctx, &aot_mem) && ctx.pc == 0x089475D8u) goto L_089475D8;
    return;
L_089475D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947634;
      }
      goto L_089475E8;
    }
L_089475E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089475F4u);
    ctx.gpr[5] = (0u | 136u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089475F4u) goto L_089475F4;
    return;
L_089475F4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947634;
      }
      goto L_08947600;
    }
L_08947600:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08947634;
      }
      goto L_0894761C;
    }
L_0894761C:
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08947634u);
    ctx.gpr[6] = (0u | 140u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x08947634u) goto L_08947634;
    return;
L_08947634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947664;
      }
      goto L_08947644;
    }
L_08947644:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[17] = (0u | 5u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (0u | 12u);
    ctx.gpr[19] = (2228u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (8u << 16u);
      if (branch_taken) {
          goto L_08947688;
      }
      goto L_08947664;
    }
L_08947664:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947B58;
      }
      goto L_0894766C;
    }
L_0894766C:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[17] = (0u | 5u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (0u | 12u);
    ctx.gpr[19] = (2228u << 16u);
    ctx.gpr[21] = (8u << 16u);
    goto L_08947688;
L_08947688:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089476E0;
      }
      goto L_08947690;
    }
L_08947690:
    ctx.gpr[31] = (0x08947698u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 358u, 0x0899E2A8u>(ctx, &aot_mem) && ctx.pc == 0x08947698u) goto L_08947698;
    return;
L_08947698:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089476E0;
      }
      goto L_089476A0;
    }
L_089476A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089476E0;
      }
      goto L_089476B0;
    }
L_089476B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089476BCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 651u, 0x0894B150u>(ctx, &aot_mem) && ctx.pc == 0x089476BCu) goto L_089476BC;
    return;
L_089476BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x089476E0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 328u, 0x08855A6Cu>(ctx, &aot_mem) && ctx.pc == 0x089476E0u) goto L_089476E0;
    return;
L_089476E0:
    ctx.gpr[31] = (0x089476E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 749u, 0x0894B6CCu>(ctx, &aot_mem) && ctx.pc == 0x089476E8u) goto L_089476E8;
    return;
L_089476E8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089479E0;
      }
      goto L_089476F0;
    }
L_089476F0:
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
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089479E0;
      }
      goto L_08947720;
    }
L_08947720:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(456)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089479E0;
      }
      goto L_0894774C;
    }
L_0894774C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1780), 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(816)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(820)));
      if (branch_taken) {
          goto L_0894779C;
      }
      goto L_0894778C;
    }
L_0894778C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[12])) && ctx.fpr[14] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089477B0;
      }
      goto L_0894779C;
    }
L_0894779C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x089477A8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089477A8u) goto L_089477A8;
    return;
L_089477A8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089477B0;
      }
      goto L_089477B0;
    }
L_089477B0:
    ctx.gpr[31] = (0x089477B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089477B8u) goto L_089477B8;
    return;
L_089477B8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08947808;
      }
      goto L_089477D8;
    }
L_089477D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08947808;
      }
      goto L_089477E8;
    }
L_089477E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08947808;
      }
      goto L_089477F8;
    }
L_089477F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08947818;
      }
      goto L_08947808;
    }
L_08947808:
    ctx.gpr[31] = (0x08947810u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 92u, 0x089A0714u>(ctx, &aot_mem) && ctx.pc == 0x08947810u) goto L_08947810;
    return;
L_08947810:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089479E0;
      }
      goto L_08947818;
    }
L_08947818:
    ctx.gpr[4] = (16134u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16568u << 16u);
      if (branch_taken) {
          goto L_089479D8;
      }
      goto L_08947834;
    }
L_08947834:
    ctx.gpr[4] = (ctx.gpr[4] | 20105u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16423u << 16u);
      if (branch_taken) {
          goto L_089479D8;
      }
      goto L_0894784C;
    }
L_0894784C:
    ctx.gpr[4] = (ctx.gpr[4] | 36151u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (16968u << 16u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[26]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (20224u << 16u);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08947908;
      }
      goto L_08947878;
    }
L_08947878:
    ctx.gpr[4] = (16490u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 37504u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08947908;
      }
      goto L_08947894;
    }
L_08947894:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x089478A4u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[30];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089478A4u) goto L_089478A4;
    return;
L_089478A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x089478B4u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[30];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089478B4u) goto L_089478B4;
    return;
L_089478B4:
    ctx.gpr[4] = (18804u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1764)));
    ctx.gpr[4] = (ctx.gpr[4] | 9200u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089478DC;
      }
      goto L_089478D4;
    }
L_089478D4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08947908;
      }
      goto L_089478DC;
    }
L_089478DC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1764)));
    ctx.fpr[14] = ctx.fpr[26] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) & 0x7FFFFFFFu);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08947908;
      }
      goto L_08947900;
    }
L_08947900:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08947908;
      }
      goto L_08947908;
    }
L_08947908:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08947918u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 79u, 0x089A05ACu>(ctx, &aot_mem) && ctx.pc == 0x08947918u) goto L_08947918;
    return;
L_08947918:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8144)));
        goto L_08947954;
    }
    goto L_08947934;
L_08947934:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08947978;
      }
      goto L_08947954;
    }
L_08947954:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[18] = (32768u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    goto L_08947978;
L_08947978:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.gpr[4] = (16544u << 16u);
      if (branch_taken) {
          goto L_08947990;
      }
      goto L_08947980;
    }
L_08947980:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (16544u << 16u);
    goto L_08947990;
L_08947990:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[24];
        goto L_089479B4;
    }
    goto L_089479A8;
L_089479A8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089479C4;
      }
      goto L_089479B4;
    }
L_089479B4:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089479C4;
L_089479C4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089479D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x089479D0u) goto L_089479D0;
    return;
L_089479D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089479E0;
      }
      goto L_089479D8;
    }
L_089479D8:
    ctx.gpr[31] = (0x089479E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 92u, 0x089A0714u>(ctx, &aot_mem) && ctx.pc == 0x089479E0u) goto L_089479E0;
    return;
L_089479E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    if (ctx.gpr[4] != ctx.gpr[17]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
        goto L_08947A14;
    }
    goto L_089479EC;
L_089479EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
        goto L_08947A14;
    }
    goto L_089479FC;
L_089479FC:
    ctx.gpr[31] = (0x08947A04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 92u, 0x089A0714u>(ctx, &aot_mem) && ctx.pc == 0x08947A04u) goto L_08947A04;
    return;
L_08947A04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08947A10u);
    ctx.gpr[5] = (0u | 250u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x08947A10u) goto L_08947A10;
    return;
L_08947A10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    goto L_08947A14;
L_08947A14:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[17];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08947AB4;
      }
      goto L_08947A78;
    }
L_08947A78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2952)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08947A94;
      }
      goto L_08947A84;
    }
L_08947A84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(500));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2952), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08947ABC;
      }
      goto L_08947A94;
    }
L_08947A94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2952)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947ABC;
      }
      goto L_08947AA8;
    }
L_08947AA8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2949), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08947ABC;
      }
      goto L_08947AB4;
    }
L_08947AB4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2952), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2949), static_cast<std::uint8_t>(0u));
    goto L_08947ABC;
L_08947ABC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-30152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947AF4;
      }
      goto L_08947AC8;
    }
L_08947AC8:
    ctx.gpr[31] = (0x08947AD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08947AD0u) goto L_08947AD0;
    return;
L_08947AD0:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08947AF4;
      }
      goto L_08947AD8;
    }
L_08947AD8:
    ctx.gpr[31] = (0x08947AE0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08947AE0u) goto L_08947AE0;
    return;
L_08947AE0:
    ctx.gpr[31] = (0x08947AE8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 79u, 0x08A982F0u>(ctx, &aot_mem) && ctx.pc == 0x08947AE8u) goto L_08947AE8;
    return;
L_08947AE8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947AF4;
      }
      goto L_08947AF0;
    }
L_08947AF0:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(-30152), static_cast<std::uint8_t>(0u));
    goto L_08947AF4;
L_08947AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08947B40;
      }
      goto L_08947B00;
    }
L_08947B00:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1432)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08947B34;
      }
      goto L_08947B24;
    }
L_08947B24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08947B40;
      }
      goto L_08947B34;
    }
L_08947B34:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3212), ctx.gpr[4]);
    goto L_08947B40;
L_08947B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947B58;
      }
      goto L_08947B50;
    }
L_08947B50:
    ctx.gpr[31] = (0x08947B58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 762u, 0x08A2F8E8u>(ctx, &aot_mem) && ctx.pc == 0x08947B58u) goto L_08947B58;
    return;
L_08947B58:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08947B9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 240u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08947C18;
      }
      goto L_08947BE8;
    }
L_08947BE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-241));
    ctx.gpr[6] = (ctx.gpr[4] & 240u);
    ctx.gpr[6] = (ctx.gpr[6] >> 4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(420), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08947C18;
L_08947C18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08947C24u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x08947C24u) goto L_08947C24;
    return;
L_08947C24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08947C34u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x08947C34u) goto L_08947C34;
    return;
L_08947C34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08947C44u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x08947C44u) goto L_08947C44;
    return;
L_08947C44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08947C54u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x08947C54u) goto L_08947C54;
    return;
L_08947C54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08947C64u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x08947C64u) goto L_08947C64;
    return;
L_08947C64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08947C74u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x08947C74u) goto L_08947C74;
    return;
L_08947C74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08947C84u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x08947C84u) goto L_08947C84;
    return;
L_08947C84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08947CE8;
      }
      goto L_08947C98;
    }
L_08947C98:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947CAC;
      }
      goto L_08947CA0;
    }
L_08947CA0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08947CACu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x08947CACu) goto L_08947CAC;
    return;
L_08947CAC:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947CC0;
      }
      goto L_08947CB4;
    }
L_08947CB4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08947CC0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x08947CC0u) goto L_08947CC0;
    return;
L_08947CC0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947CD4;
      }
      goto L_08947CC8;
    }
L_08947CC8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08947CD4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x08947CD4u) goto L_08947CD4;
    return;
L_08947CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_08947CE8;
L_08947CE8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947D00;
      }
      goto L_08947CF0;
    }
L_08947CF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08947CFCu);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x08947CFCu) goto L_08947CFC;
    return;
L_08947CFC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08947D00;
L_08947D00:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947D30;
      }
      goto L_08947D08;
    }
L_08947D08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08947D14u);
    ctx.gpr[5] = (0u | 41u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x08947D14u) goto L_08947D14;
    return;
L_08947D14:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947D30;
      }
      goto L_08947D20;
    }
L_08947D20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08947D2Cu);
    ctx.gpr[5] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x08947D2Cu) goto L_08947D2C;
    return;
L_08947D2C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08947D30;
L_08947D30:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947D48;
      }
      goto L_08947D38;
    }
L_08947D38:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 100u, 0x089486C0u>(ctx, &aot_mem); return;
      }
      goto L_08947D48;
    }
L_08947D48:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947D60;
      }
      goto L_08947D50;
    }
L_08947D50:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 100u, 0x089486C0u>(ctx, &aot_mem); return;
      }
      goto L_08947D60;
    }
L_08947D60:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08947D7C;
      }
      goto L_08947D68;
    }
L_08947D68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08947D98;
      }
      goto L_08947D7C;
    }
L_08947D7C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947F20;
      }
      goto L_08947D84;
    }
L_08947D84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08947F20;
      }
      goto L_08947D98;
    }
L_08947D98:
    ctx.gpr[4] = (16640u << 16u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08947DCC;
      }
      goto L_08947DA4;
    }
L_08947DA4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08947DF8;
      }
      goto L_08947DCC;
    }
L_08947DCC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947DF8;
      }
      goto L_08947DD4;
    }
L_08947DD4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08947DF8;
L_08947DF8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[21]);
    ctx.gpr[31] = (0x08947E04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 887u, 0x089A3C28u>(ctx, &aot_mem) && ctx.pc == 0x08947E04u) goto L_08947E04;
    return;
L_08947E04:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947F10;
      }
      goto L_08947E0C;
    }
L_08947E0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2936)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30116)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30120)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30108)));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30112)));
      if (branch_taken) {
          goto L_08947EA4;
      }
      goto L_08947E30;
    }
L_08947E30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947EA4;
      }
      goto L_08947E40;
    }
L_08947E40:
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
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08947E80u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 72u, 0x088C8430u>(ctx, &aot_mem) && ctx.pc == 0x08947E80u) goto L_08947E80;
    return;
L_08947E80:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947EA4;
      }
      goto L_08947E88;
    }
L_08947E88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08947E9Cu);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x08947E9Cu) goto L_08947E9C;
    return;
L_08947E9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08947EBC;
      }
      goto L_08947EA4;
    }
L_08947EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x08947EB8u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x08947EB8u) goto L_08947EB8;
    return;
L_08947EB8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08947EBC;
L_08947EBC:
    ctx.gpr[31] = (0x08947EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08947EC4u) goto L_08947EC4;
    return;
L_08947EC4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08947ED8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08947ED8u) goto L_08947ED8;
    return;
L_08947ED8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    goto L_08947F10;
L_08947F10:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 100u, 0x089486C0u>(ctx, &aot_mem); return;
      }
      goto L_08947F20;
    }
L_08947F20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 19u, 0x08948184u>(ctx, &aot_mem); return;
      }
      goto L_08947F34;
    }
L_08947F34:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 19u, 0x08948184u>(ctx, &aot_mem); return;
      }
      goto L_08947F3C;
    }
L_08947F3C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[21]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948050u>(ctx, &aot_mem); return;
      }
      goto L_08947F44;
    }
L_08947F44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2936)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30116)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30120)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30112)));
    ctx.gpr[4] = (16512u << 16u);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08947FE4;
      }
      goto L_08947F70;
    }
L_08947F70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947FE4;
      }
      goto L_08947F80;
    }
L_08947F80:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08947FC0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 72u, 0x088C8430u>(ctx, &aot_mem) && ctx.pc == 0x08947FC0u) goto L_08947FC0;
    return;
L_08947FC0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947FE4;
      }
      goto L_08947FC8;
    }
L_08947FC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08947FDCu);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x08947FDCu) goto L_08947FDC;
    return;
L_08947FDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08947FFC;
      }
      goto L_08947FE4;
    }
L_08947FE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x08947FF8u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x08947FF8u) goto L_08947FF8;
    return;
L_08947FF8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08947FFC;
L_08947FFC:
    ctx.gpr[31] = (0x08948004u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0080(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0080_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_80(Runtime &runtime) {
    runtime.register_generated_unit(80u, 0x08944000u, 16384u, &recomp_unit_0080, &recomp_unit_0080_entry);
    runtime.register_function(0x08944000u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944028u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944040u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894404Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944054u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944060u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944064u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894407Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944084u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894408Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944098u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089440A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089440ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089440B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089440BCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089440E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944104u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944124u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944130u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944160u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944168u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944170u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894417Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089441A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089441B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089441DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089441F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089441FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944204u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944228u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944230u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894423Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944254u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894425Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944274u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944298u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089442A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089442C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089442CCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089442D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089442DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089442E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089442ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089442F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089442FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894430Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944314u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894431Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944324u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944328u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944330u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944338u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894433Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944354u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944388u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089443A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089443B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089443B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089443E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089443F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944408u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944428u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944438u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944454u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944468u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944498u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089444B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089444BCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089444C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089444D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089444D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089444DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089444ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944558u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944578u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089445BCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089445E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089445F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944610u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944628u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944634u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894463Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944650u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944664u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944670u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944678u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944680u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894468Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089446A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089446B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089446C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089446D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089446F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089446F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944700u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944720u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894473Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944748u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944750u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944758u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944760u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944768u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944778u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944780u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944788u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944794u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089447A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089447B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089447E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944860u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944888u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944890u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089448A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089448A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089448B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089448B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089448D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089448F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089448FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944904u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894491Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944938u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944940u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944950u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944960u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944974u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894497Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894498Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894499Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089449B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089449B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089449C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089449E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089449E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089449F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A10u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A2Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A38u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A40u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A50u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A68u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A70u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A84u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A98u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944AA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944AC8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944AE4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944AF0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B00u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B08u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B10u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B18u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B20u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B2Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B38u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B40u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B50u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B60u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B68u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B70u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B80u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B84u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B90u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944BB0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944BBCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944BDCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C08u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C20u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C40u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C50u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C60u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C70u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C80u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C9Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944CACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944CBCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944CC4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944CDCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944CE4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944CF4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D08u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D10u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D1Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D38u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D40u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D68u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D80u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D94u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D9Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944DA8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944DC4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944DD0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944DD8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944DE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944DF4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E00u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E10u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E1Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E54u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E60u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E68u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E70u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E84u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E94u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944EA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944EB0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944EBCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944EE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944EF4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F0Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F28u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F38u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F50u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F70u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F98u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944FACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944FBCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944FC4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944FE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894500Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945014u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945020u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945028u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945034u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894503Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945048u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945050u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945058u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945060u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945068u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945070u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945088u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089450ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089450E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089450F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089450FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945104u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945108u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945118u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945144u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945160u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894516Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945178u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945190u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089451A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089451C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089451CCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089451D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089451ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945234u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945244u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894524Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945250u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894526Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945280u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945288u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894528Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945294u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089452ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089452B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089452C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089452DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089452E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089452F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089452F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945304u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894530Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945314u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894531Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945328u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945334u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945348u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945350u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945374u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945380u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945388u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945390u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945398u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089453A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089453B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089453E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945420u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945430u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945468u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894549Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454BCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945510u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945520u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945528u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945530u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945538u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945540u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945548u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945550u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945558u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945560u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945568u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945570u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945574u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894557Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945584u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945598u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089455A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089455A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089455B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089455B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089455C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089455C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089455D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089455E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089455F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089455F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945604u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945610u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945620u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945630u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945654u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894565Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945664u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945674u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945688u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089456ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089456B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089456BCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089456D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089456E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894570Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945714u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894571Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894572Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945740u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945750u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894575Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945780u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945790u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089457A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089457A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089457E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089457F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945818u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945820u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945834u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894583Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945854u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945858u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894586Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945878u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945888u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945890u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945894u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089458A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089458ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089458B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089458E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945900u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945930u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945938u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945940u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945948u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945950u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894598Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945998u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089459A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089459A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089459E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089459F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089459F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A00u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A3Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A40u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A4Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A60u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A64u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A84u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A8Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945AA8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945ADCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945AE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945AF8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B00u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B14u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B1Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B24u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B2Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B38u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B68u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B74u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B84u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B90u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BA8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BB0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BB8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BCCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BD4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BF0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C00u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C10u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C28u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C3Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C50u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C60u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C70u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C84u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C98u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945CA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945CB0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945CC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945CCCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945CD4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945CE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945CE4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945CECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945CF8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D08u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D1Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D24u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D3Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D40u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D54u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D64u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D80u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D94u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945DA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945DACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945DB4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945DB8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945DD8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945E04u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945E30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945E78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945E84u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945E94u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945ED8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945FA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945FD8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946004u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946060u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946078u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946084u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894608Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946094u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089460F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946134u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946140u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946148u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946170u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946188u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894619Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089461C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089461D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089461D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089461E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089461F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089461FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946204u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946228u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946250u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894628Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894629Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089462A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089462C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089462D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089462E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089462ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089462F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089462FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946304u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946308u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894638Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089463ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089463B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089463C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089463DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946430u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946468u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089464ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089464F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894651Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946524u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894652Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894653Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946548u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946554u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946560u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946564u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894656Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946580u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089465B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089465D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089465E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089465F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894660Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946618u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946624u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946638u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894663Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946650u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946660u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894666Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089466BCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089466C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089466D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089466F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946740u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894674Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946758u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894675Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946768u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946778u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946784u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894678Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946794u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089467A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089467C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089467D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089467E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946804u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946844u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946850u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946860u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946874u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946888u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946894u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089468A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089468B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089468C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089468CCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089468D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946904u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894690Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946914u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946930u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946938u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946944u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894694Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946978u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946980u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946988u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089469A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089469D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089469DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089469E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A08u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A18u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A3Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A6Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A70u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A80u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946AA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946AB8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946ACCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946AD4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946AECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946AF4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B0Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B2Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B44u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B74u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B7Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946BA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946BB0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946BBCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946BD4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946BE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946BE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946BF0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946BF8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C00u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C08u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C10u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C18u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C20u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C4Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C68u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C9Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946CB4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946CD4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946CE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D10u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D24u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D38u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D3Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D68u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D70u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D7Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D90u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D9Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946DACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946DB4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946DBCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946DC4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946DCCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946DE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946DF0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946DF8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E08u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E18u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E24u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E34u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E50u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E5Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E70u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E84u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E90u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E98u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946EA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946EBCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946EC4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946EDCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946EE4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946EFCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F00u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F20u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F38u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F4Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F5Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F64u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F6Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F94u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F9Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946FA8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946FB0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946FC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946FCCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946FD4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946FDCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946FE4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894700Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947014u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947020u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947028u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894703Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947044u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947050u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947064u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947070u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947078u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947090u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089470B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089470C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089470CCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089470D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947114u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947120u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947128u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947134u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894713Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947144u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947150u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947158u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894718Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089471A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089471B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089471C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089471D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089471DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089471E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089471F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947208u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947210u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947218u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947220u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947228u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947230u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894723Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947244u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947290u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947304u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947310u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894731Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947328u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894732Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947330u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947338u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947340u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894734Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947358u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947364u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947368u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894736Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947370u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947378u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947384u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947390u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894739Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473CCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947404u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947414u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894741Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947424u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894742Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947434u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947438u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947440u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947448u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947450u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947470u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894747Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894749Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947500u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947508u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947518u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947520u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894752Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947534u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894753Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947548u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947550u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947558u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947568u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947570u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894757Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947588u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947598u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475BCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475CCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947600u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894761Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947634u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947644u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947664u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894766Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947688u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947690u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947698u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089476A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089476B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089476BCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089476E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089476E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089476F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947720u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894774Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894778Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894779Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089477A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089477B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089477B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089477D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089477E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089477F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947808u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947810u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947818u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947834u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894784Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947878u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947894u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089478A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089478B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089478D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089478DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947900u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947908u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947918u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947934u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947954u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947978u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947980u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947990u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089479A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089479B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089479C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089479D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089479D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089479E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089479ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089479FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A04u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A10u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A14u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A84u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A94u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947AA8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947AB4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947ABCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947AC8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947AD0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947AD8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947AE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947AE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947AF0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947AF4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B00u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B24u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B34u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B40u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B50u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B9Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947BE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C18u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C24u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C34u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C44u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C54u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C64u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C74u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C84u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C98u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CB4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CC8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CD4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CF0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CFCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D00u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D08u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D14u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D20u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D2Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D38u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D50u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D60u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D68u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D7Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D84u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D98u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947DA4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947DCCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947DD4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947DF8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E04u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E0Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E40u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E80u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E88u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E9Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947EA4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947EB8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947EBCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947EC4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947ED8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F10u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F20u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F34u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F3Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F44u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F70u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F80u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947FC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947FC8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947FDCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947FE4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947FF8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947FFCu, &recomp_unit_0080, "recomp_unit_0080");
}
} // namespace psprecomp
