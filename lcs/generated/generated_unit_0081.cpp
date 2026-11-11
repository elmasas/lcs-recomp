#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "lcs_mouse.hpp"
#include "lcs_controls.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0081[4090] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0,
    19, 0, 20, 0, 21, 0, 0, 0, 22, 0, 23, 0, 0, 0, 24, 0, 25, 0, 0, 26, 0, 27, 0, 0, 28, 0, 29, 0, 0, 30, 0, 0,
    31, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 35, 36, 0, 37, 0, 38, 0, 39, 0, 0, 40, 0, 0, 41, 0, 42, 0, 0, 43, 0, 44,
    0, 45, 0, 0, 46, 0, 47, 0, 48, 0, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0, 52, 0, 53, 0, 54, 0, 0, 0, 55, 0, 0, 56,
    0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 62, 0, 63, 0,
    64, 0, 65, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71,
    0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 82, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85,
    0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0,
    0, 92, 0, 0, 0, 0, 0, 93, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 102, 0, 103, 0, 104, 0, 0, 0, 105, 0, 106,
    0, 0, 0, 107, 0, 108, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 113, 0, 114, 0, 0, 0, 115, 0, 116, 0,
    0, 0, 117, 0, 118, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 123, 0, 124, 125, 0, 126, 127, 0,
    128, 0, 129, 0, 0, 0, 0, 130, 0, 0, 131, 0, 132, 0, 0, 133, 0, 134, 0, 0, 135, 0, 136, 0, 0, 0, 137, 0, 138, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0,
    147, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 151, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 155,
    0, 0, 0, 156, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 162, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 165, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0,
    170, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0,
    0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 182, 183,
    0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 0, 192, 0, 0,
    0, 0, 193, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 196, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 202, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 208, 0, 209, 0, 210, 0,
    0, 0, 211, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 215, 0, 216, 0, 217, 0, 218, 0, 219, 0, 220, 0, 221, 0, 0, 222, 223,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 226, 0, 227, 0, 228, 229, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    232, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0,
    0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 245, 0,
    246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0,
    0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0,
    0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0,
    0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 280, 281,
    0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 284, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 293, 294, 0, 0, 295, 0, 0, 296, 0, 297, 298, 0, 0, 299, 0, 0, 300, 0, 301, 302, 0, 0, 303, 0, 0, 304, 0, 305,
    306, 0, 0, 307, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 314, 0, 315, 316, 317, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0,
    0, 0, 328, 0, 329, 0, 0, 0, 330, 0, 331, 0, 332, 0, 0, 0, 333, 0, 334, 0, 335, 0, 336, 0, 337, 0, 338, 0, 339, 0, 0, 340,
    0, 0, 0, 341, 0, 0, 342, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 353, 0, 354, 0, 0, 355, 0, 0, 0, 356, 357, 0,
    0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 0, 364, 0, 0, 365, 0, 0, 366, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0,
    0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 374,
    0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380,
    0, 0, 381, 0, 382, 0, 0, 0, 383, 0, 0, 384, 0, 0, 385, 0, 0, 386, 387, 0, 388, 0, 0, 389, 0, 390, 0, 391, 0, 0, 0, 0,
    0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 395, 0, 396, 0, 397, 0, 398, 0, 399, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 405,
    0, 0, 406, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 410, 0, 0, 411, 0, 412,
    0, 413, 0, 0, 414, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 417, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 426, 0, 0, 427, 0,
    428, 0, 0, 429, 0, 430, 0, 0, 431, 0, 432, 0, 433, 0, 0, 434, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 437, 0, 438, 0, 439, 0, 0, 440, 0, 441, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0,
    444, 0, 445, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450,
    0, 451, 0, 452, 0, 453, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 456, 457, 0, 0, 458, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 461,
    0, 462, 0, 463, 0, 464, 0, 465, 0, 466, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 476, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 0, 480, 0, 481,
    0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 484, 0, 0, 485, 486, 0, 487, 0, 488, 0, 0, 489, 0, 0, 0, 490, 0, 0, 491, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 492, 0, 493, 0, 0, 494, 0, 0, 495, 0, 496, 497, 0, 0, 0, 498, 0, 499, 0, 0, 0, 0, 0, 0, 0, 500,
    0, 0, 501, 0, 502, 0, 0, 503, 0, 0, 504, 0, 505, 0, 506, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 510,
    0, 0, 0, 0, 511, 512, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516,
    0, 517, 0, 518, 0, 519, 0, 520, 0, 521, 0, 522, 0, 523, 0, 524, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0,
    527, 0, 0, 528, 0, 529, 0, 0, 530, 0, 0, 531, 0, 532, 0, 533, 0, 0, 0, 534, 0, 535, 0, 536, 0, 0, 0, 537, 0, 0, 0, 538,
    0, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 543, 0, 0,
    544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 547, 0, 548, 0, 549, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0,
    0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 554, 0, 555, 0, 0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0,
    0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 562, 0, 0,
    0, 0, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566,
    0, 0, 0, 567, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 570, 0, 571, 0, 0, 0, 0, 572, 0, 573, 0, 574, 0,
    0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0,
    578, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 581, 0, 0, 0, 582, 0, 0, 0, 583,
    0, 0, 0, 584, 0, 0, 0, 0, 0, 585, 0, 0, 586, 0, 0, 0, 587, 0, 0, 588, 0, 0, 0, 589, 0, 590, 0, 0, 0, 591, 592, 0,
    593, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 596, 0, 0, 597, 0, 598, 0, 0, 0, 599, 600, 0, 0, 601, 0, 0, 0, 602, 0, 0, 0,
    603, 0, 0, 0, 0, 604, 0, 0, 605, 0, 0, 0, 606, 0, 0, 0, 607, 0, 0, 608, 0, 609, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0,
    0, 612, 0, 0, 613, 0, 614, 0, 0, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 618, 0, 0, 0,
    0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 623, 0, 0, 624, 0, 0, 625, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0, 629, 630, 0, 631, 0, 0, 0, 632, 0, 0,
    0, 633, 0, 0, 0, 634, 0, 635, 0, 0, 0, 0, 0, 636, 0, 0, 637, 0, 0, 0, 638, 0, 0, 0, 639, 0, 0, 0, 640, 0, 0, 0,
    0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 0, 644, 0, 645, 0, 646, 647, 0, 648,
    0, 0, 0, 649, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 653, 0,
    0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 657, 0, 658, 0, 659, 0, 0, 0, 0, 660,
    0, 0, 661, 0, 662, 0, 663, 0, 664, 0, 665, 0, 666, 0, 0, 0, 667, 0, 668, 0, 0, 669, 0, 0, 0, 0, 0, 0, 670, 0, 671, 0,
    672, 0, 673, 0, 0, 0, 0, 0, 674, 0, 675, 0, 676, 0, 0, 0, 0, 677, 0, 678, 0, 679, 0, 680, 0, 0, 0, 681, 0, 682, 0, 683,
    0, 684, 0, 685, 0, 0, 0, 0, 0, 0, 686, 0, 687, 0, 688, 0, 689, 0, 0, 0, 0, 0, 690, 0, 691, 0, 692, 0, 0, 0, 0, 0,
    0, 693, 0, 0, 694, 0, 695, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 697, 0, 0, 698, 699, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0,
    701, 0, 0, 0, 0, 702, 0, 703, 0, 704, 0, 0, 0, 705, 0, 706, 0, 707, 0, 0, 0, 708, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 711, 0, 712, 713, 0, 0, 714, 0, 0, 715, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 717, 0, 0, 0, 718, 0, 0, 719, 0, 0, 0, 720, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 723, 0,
    724, 0, 0, 0, 0, 0, 0, 0, 725, 0, 726, 0, 727, 0, 0, 728, 0, 0, 0, 729, 0, 730, 0, 0, 731, 0, 0, 0, 0, 732, 0, 0,
    733, 0, 734, 0, 0, 735, 0, 736, 0, 737, 0, 738, 0, 739, 0, 0, 0, 740, 0, 0, 741, 0, 0, 0, 742, 0, 0, 0, 743, 0, 744, 0,
    745, 0, 0, 746, 0, 0, 0, 0, 747, 0, 0, 748, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 750, 0, 0, 751, 0, 752, 0, 0, 0, 0, 753, 0, 754, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 756, 0, 0, 757, 0, 0, 0,
    0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 760, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 762, 763, 0, 764, 0, 765,
    0, 766, 0, 0, 0, 0, 0, 0, 0, 767, 0, 768, 769, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 771, 0, 0, 772, 0, 773, 0, 0,
    0, 774, 0, 0, 0, 775, 0, 0, 0, 776, 0, 0, 0, 777, 0, 0, 0, 778, 0, 0, 0, 779, 0, 0, 0, 780, 0, 0, 0, 781, 0, 0,
    0, 782, 0, 0, 0, 783, 0, 0, 0, 784, 0, 0, 785, 0, 786, 0, 0, 0, 787, 0, 0, 0, 788, 0, 0, 0, 789, 0, 0, 0, 790, 0,
    0, 791, 0, 792, 0, 793, 0, 794, 0, 0, 0, 795, 0, 0, 796, 0, 797, 0, 798, 0, 0, 799, 0, 800, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 804, 805, 0, 806, 0, 0, 807, 0, 808, 0,
    0, 0, 0, 0, 0, 809, 0, 0, 0, 0, 0, 810, 0, 811, 812, 0, 813, 0, 0, 814, 0, 815, 0, 0, 0, 0, 0, 816, 0, 817, 818, 0,
    819, 0, 0, 820, 0, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0,
    0, 823, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 824, 0, 825, 0, 0, 826, 0, 827, 0, 0, 0,
    0, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 829, 0, 0, 830, 0, 0, 0, 0, 831, 0, 0, 0, 0, 0, 832, 0, 833, 0, 0, 0, 834,
    0, 835, 0, 836, 0, 0, 0, 837, 0, 0, 0, 838, 0, 0, 839, 0, 0, 840, 0, 0, 0, 0, 841, 842, 0, 843, 0, 0, 0, 844, 845, 0,
    0, 846, 0, 0, 0, 847, 0, 848, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 849, 0, 850, 0, 0, 851, 0, 0, 0, 0, 0, 0,
    0, 852, 0, 0, 853, 0, 0, 0, 0, 0, 854, 0, 0, 0, 855, 0, 0, 0, 856, 0, 0, 0, 857, 0, 0, 0, 858, 0, 0, 859, 0, 0,
    0, 860, 0, 0, 0, 861, 0, 0, 0, 862, 0, 863, 0, 864, 0, 0, 0, 865, 0, 866, 0, 0, 867, 0, 0, 0, 868, 0, 0, 0, 869, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 870, 0, 871, 0, 0, 0, 0, 0, 0, 0, 0, 0, 872, 0, 0, 0, 0, 0, 873, 0, 0,
    0, 874, 0, 0, 875, 0, 0, 0, 876, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 877, 0, 878, 0, 0, 0, 0, 0, 0, 0, 879,
    0, 0, 0, 880, 0, 0, 881, 0, 0, 0, 882, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 883, 0, 884,
};
void recomp_unit_0081_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08948004u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0081[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08948004;
    case 2u: goto L_08948018;
    case 3u: goto L_08948050;
    case 4u: goto L_08948064;
    case 5u: goto L_08948074;
    case 6u: goto L_08948084;
    case 7u: goto L_0894809C;
    case 8u: goto L_089480A4;
    case 9u: goto L_089480B4;
    case 10u: goto L_089480C8;
    case 11u: goto L_089480D8;
    case 12u: goto L_089480E8;
    case 13u: goto L_08948128;
    case 14u: goto L_08948130;
    case 15u: goto L_08948148;
    case 16u: goto L_08948150;
    case 17u: goto L_08948160;
    case 18u: goto L_08948178;
    case 19u: goto L_08948184;
    case 20u: goto L_0894818C;
    case 21u: goto L_08948194;
    case 22u: goto L_089481A4;
    case 23u: goto L_089481AC;
    case 24u: goto L_089481BC;
    case 25u: goto L_089481C4;
    case 26u: goto L_089481D0;
    case 27u: goto L_089481D8;
    case 28u: goto L_089481E4;
    case 29u: goto L_089481EC;
    case 30u: goto L_089481F8;
    case 31u: goto L_08948204;
    case 32u: goto L_0894820C;
    case 33u: goto L_08948218;
    case 34u: goto L_08948224;
    case 35u: goto L_08948230;
    case 36u: goto L_08948234;
    case 37u: goto L_0894823C;
    case 38u: goto L_08948244;
    case 39u: goto L_0894824C;
    case 40u: goto L_08948258;
    case 41u: goto L_08948264;
    case 42u: goto L_0894826C;
    case 43u: goto L_08948278;
    case 44u: goto L_08948280;
    case 45u: goto L_08948288;
    case 46u: goto L_08948294;
    case 47u: goto L_0894829C;
    case 48u: goto L_089482A4;
    case 49u: goto L_089482B4;
    case 50u: goto L_089482BC;
    case 51u: goto L_089482C4;
    case 52u: goto L_089482D4;
    case 53u: goto L_089482DC;
    case 54u: goto L_089482E4;
    case 55u: goto L_089482F4;
    case 56u: goto L_08948300;
    case 57u: goto L_0894831C;
    case 58u: goto L_08948328;
    case 59u: goto L_0894833C;
    case 60u: goto L_08948358;
    case 61u: goto L_08948360;
    case 62u: goto L_08948374;
    case 63u: goto L_0894837C;
    case 64u: goto L_08948384;
    case 65u: goto L_0894838C;
    case 66u: goto L_08948394;
    case 67u: goto L_089483A0;
    case 68u: goto L_089483BC;
    case 69u: goto L_089483D0;
    case 70u: goto L_089483EC;
    case 71u: goto L_08948400;
    case 72u: goto L_0894841C;
    case 73u: goto L_08948438;
    case 74u: goto L_08948454;
    case 75u: goto L_08948474;
    case 76u: goto L_089484A8;
    case 77u: goto L_089484B8;
    case 78u: goto L_089484CC;
    case 79u: goto L_089484D4;
    case 80u: goto L_089484E4;
    case 81u: goto L_089484F8;
    case 82u: goto L_089484FC;
    case 83u: goto L_08948544;
    case 84u: goto L_08948558;
    case 85u: goto L_08948580;
    case 86u: goto L_08948588;
    case 87u: goto L_089485B0;
    case 88u: goto L_089485BC;
    case 89u: goto L_089485C4;
    case 90u: goto L_089485EC;
    case 91u: goto L_089485F4;
    case 92u: goto L_08948608;
    case 93u: goto L_08948620;
    case 94u: goto L_08948628;
    case 95u: goto L_08948630;
    case 96u: goto L_0894864C;
    case 97u: goto L_08948668;
    case 98u: goto L_08948684;
    case 99u: goto L_089486AC;
    case 100u: goto L_089486C0;
    case 101u: goto L_089486D0;
    case 102u: goto L_089486D8;
    case 103u: goto L_089486E0;
    case 104u: goto L_089486E8;
    case 105u: goto L_089486F8;
    case 106u: goto L_08948700;
    case 107u: goto L_08948710;
    case 108u: goto L_08948718;
    case 109u: goto L_08948728;
    case 110u: goto L_08948730;
    case 111u: goto L_08948744;
    case 112u: goto L_0894874C;
    case 113u: goto L_0894875C;
    case 114u: goto L_08948764;
    case 115u: goto L_08948774;
    case 116u: goto L_0894877C;
    case 117u: goto L_0894878C;
    case 118u: goto L_08948794;
    case 119u: goto L_089487A8;
    case 120u: goto L_089487B4;
    case 121u: goto L_089487CC;
    case 122u: goto L_089487E0;
    case 123u: goto L_089487E4;
    case 124u: goto L_089487EC;
    case 125u: goto L_089487F0;
    case 126u: goto L_089487F8;
    case 127u: goto L_089487FC;
    case 128u: goto L_08948804;
    case 129u: goto L_0894880C;
    case 130u: goto L_08948820;
    case 131u: goto L_0894882C;
    case 132u: goto L_08948834;
    case 133u: goto L_08948840;
    case 134u: goto L_08948848;
    case 135u: goto L_08948854;
    case 136u: goto L_0894885C;
    case 137u: goto L_0894886C;
    case 138u: goto L_08948874;
    case 139u: goto L_089488A8;
    case 140u: goto L_089488BC;
    case 141u: goto L_089488C8;
    case 142u: goto L_08948900;
    case 143u: goto L_08948940;
    case 144u: goto L_0894895C;
    case 145u: goto L_0894896C;
    case 146u: goto L_0894897C;
    case 147u: goto L_08948984;
    case 148u: goto L_0894898C;
    case 149u: goto L_089489A0;
    case 150u: goto L_089489B0;
    case 151u: goto L_089489C4;
    case 152u: goto L_089489C8;
    case 153u: goto L_089489E8;
    case 154u: goto L_089489F8;
    case 155u: goto L_08948A00;
    case 156u: goto L_08948A10;
    case 157u: goto L_08948A1C;
    case 158u: goto L_08948A24;
    case 159u: goto L_08948A3C;
    case 160u: goto L_08948A64;
    case 161u: goto L_08948A78;
    case 162u: goto L_08948A7C;
    case 163u: goto L_08948AA8;
    case 164u: goto L_08948AB8;
    case 165u: goto L_08948ABC;
    case 166u: goto L_08948AC4;
    case 167u: goto L_08948AD0;
    case 168u: goto L_08948ADC;
    case 169u: goto L_08948AEC;
    case 170u: goto L_08948B04;
    case 171u: goto L_08948B18;
    case 172u: goto L_08948B28;
    case 173u: goto L_08948B44;
    case 174u: goto L_08948B4C;
    case 175u: goto L_08948B60;
    case 176u: goto L_08948B78;
    case 177u: goto L_08948B8C;
    case 178u: goto L_08948B94;
    case 179u: goto L_08948BC4;
    case 180u: goto L_08948C64;
    case 181u: goto L_08948C6C;
    case 182u: goto L_08948C7C;
    case 183u: goto L_08948C80;
    case 184u: goto L_08948C8C;
    case 185u: goto L_08948CAC;
    case 186u: goto L_08948CC4;
    case 187u: goto L_08948CCC;
    case 188u: goto L_08948CD4;
    case 189u: goto L_08948CDC;
    case 190u: goto L_08948CE4;
    case 191u: goto L_08948CEC;
    case 192u: goto L_08948CF8;
    case 193u: goto L_08948D0C;
    case 194u: goto L_08948D20;
    case 195u: goto L_08948D28;
    case 196u: goto L_08948D38;
    case 197u: goto L_08948D40;
    case 198u: goto L_08948D4C;
    case 199u: goto L_08948D58;
    case 200u: goto L_08948D90;
    case 201u: goto L_08948DB4;
    case 202u: goto L_08948E10;
    case 203u: goto L_08948E18;
    case 204u: goto L_08948E28;
    case 205u: goto L_08948E38;
    case 206u: goto L_08948E54;
    case 207u: goto L_08948E5C;
    case 208u: goto L_08948E6C;
    case 209u: goto L_08948E74;
    case 210u: goto L_08948E7C;
    case 211u: goto L_08948E8C;
    case 212u: goto L_08948E98;
    case 213u: goto L_08948EA8;
    case 214u: goto L_08948EB8;
    case 215u: goto L_08948EC0;
    case 216u: goto L_08948EC8;
    case 217u: goto L_08948ED0;
    case 218u: goto L_08948ED8;
    case 219u: goto L_08948EE0;
    case 220u: goto L_08948EE8;
    case 221u: goto L_08948EF0;
    case 222u: goto L_08948EFC;
    case 223u: goto L_08948F00;
    case 224u: goto L_08948F28;
    case 225u: goto L_08948F30;
    case 226u: goto L_08948F38;
    case 227u: goto L_08948F40;
    case 228u: goto L_08948F48;
    case 229u: goto L_08948F4C;
    case 230u: goto L_08948F54;
    case 231u: goto L_08948F5C;
    case 232u: goto L_08948F84;
    case 233u: goto L_08948FA0;
    case 234u: goto L_08948FA8;
    case 235u: goto L_08948FDC;
    case 236u: goto L_08949008;
    case 237u: goto L_08949018;
    case 238u: goto L_08949030;
    case 239u: goto L_08949064;
    case 240u: goto L_0894907C;
    case 241u: goto L_08949098;
    case 242u: goto L_089490B4;
    case 243u: goto L_089490EC;
    case 244u: goto L_089490F4;
    case 245u: goto L_089490FC;
    case 246u: goto L_08949104;
    case 247u: goto L_0894912C;
    case 248u: goto L_08949148;
    case 249u: goto L_08949150;
    case 250u: goto L_08949164;
    case 251u: goto L_08949188;
    case 252u: goto L_089491A4;
    case 253u: goto L_089491F8;
    case 254u: goto L_0894920C;
    case 255u: goto L_0894927C;
    case 256u: goto L_089492C0;
    case 257u: goto L_089492D8;
    case 258u: goto L_089492E4;
    case 259u: goto L_08949318;
    case 260u: goto L_08949340;
    case 261u: goto L_08949454;
    case 262u: goto L_089494E8;
    case 263u: goto L_089494F8;
    case 264u: goto L_08949508;
    case 265u: goto L_08949518;
    case 266u: goto L_08949528;
    case 267u: goto L_08949538;
    case 268u: goto L_0894955C;
    case 269u: goto L_0894956C;
    case 270u: goto L_089495B4;
    case 271u: goto L_089495EC;
    case 272u: goto L_08949618;
    case 273u: goto L_08949628;
    case 274u: goto L_08949654;
    case 275u: goto L_089496A4;
    case 276u: goto L_089496BC;
    case 277u: goto L_089496C4;
    case 278u: goto L_089496D8;
    case 279u: goto L_089496E8;
    case 280u: goto L_089496FC;
    case 281u: goto L_08949700;
    case 282u: goto L_08949714;
    case 283u: goto L_08949724;
    case 284u: goto L_08949738;
    case 285u: goto L_0894973C;
    case 286u: goto L_0894975C;
    case 287u: goto L_08949798;
    case 288u: goto L_089497A0;
    case 289u: goto L_089497AC;
    case 290u: goto L_089497C4;
    case 291u: goto L_08949858;
    case 292u: goto L_0894986C;
    case 293u: goto L_08949894;
    case 294u: goto L_08949898;
    case 295u: goto L_089498A4;
    case 296u: goto L_089498B0;
    case 297u: goto L_089498B8;
    case 298u: goto L_089498BC;
    case 299u: goto L_089498C8;
    case 300u: goto L_089498D4;
    case 301u: goto L_089498DC;
    case 302u: goto L_089498E0;
    case 303u: goto L_089498EC;
    case 304u: goto L_089498F8;
    case 305u: goto L_08949900;
    case 306u: goto L_08949904;
    case 307u: goto L_08949910;
    case 308u: goto L_0894991C;
    case 309u: goto L_08949924;
    case 310u: goto L_0894996C;
    case 311u: goto L_089499AC;
    case 312u: goto L_089499B8;
    case 313u: goto L_089499D0;
    case 314u: goto L_089499D8;
    case 315u: goto L_089499E0;
    case 316u: goto L_089499E4;
    case 317u: goto L_089499E8;
    case 318u: goto L_08949A04;
    case 319u: goto L_08949A10;
    case 320u: goto L_08949A24;
    case 321u: goto L_08949A30;
    case 322u: goto L_08949A38;
    case 323u: goto L_08949A40;
    case 324u: goto L_08949A48;
    case 325u: goto L_08949A50;
    case 326u: goto L_08949A60;
    case 327u: goto L_08949A70;
    case 328u: goto L_08949A8C;
    case 329u: goto L_08949A94;
    case 330u: goto L_08949AA4;
    case 331u: goto L_08949AAC;
    case 332u: goto L_08949AB4;
    case 333u: goto L_08949AC4;
    case 334u: goto L_08949ACC;
    case 335u: goto L_08949AD4;
    case 336u: goto L_08949ADC;
    case 337u: goto L_08949AE4;
    case 338u: goto L_08949AEC;
    case 339u: goto L_08949AF4;
    case 340u: goto L_08949B00;
    case 341u: goto L_08949B10;
    case 342u: goto L_08949B1C;
    case 343u: goto L_08949B24;
    case 344u: goto L_08949B2C;
    case 345u: goto L_08949B48;
    case 346u: goto L_08949B50;
    case 347u: goto L_08949B5C;
    case 348u: goto L_08949B64;
    case 349u: goto L_08949B98;
    case 350u: goto L_08949BA8;
    case 351u: goto L_08949BC0;
    case 352u: goto L_08949BCC;
    case 353u: goto L_08949BD4;
    case 354u: goto L_08949BDC;
    case 355u: goto L_08949BE8;
    case 356u: goto L_08949BF8;
    case 357u: goto L_08949BFC;
    case 358u: goto L_08949C08;
    case 359u: goto L_08949C30;
    case 360u: goto L_08949C58;
    case 361u: goto L_08949C80;
    case 362u: goto L_08949CA8;
    case 363u: goto L_08949CB0;
    case 364u: goto L_08949CBC;
    case 365u: goto L_08949CC8;
    case 366u: goto L_08949CD4;
    case 367u: goto L_08949CD8;
    case 368u: goto L_08949CF8;
    case 369u: goto L_08949D0C;
    case 370u: goto L_08949D14;
    case 371u: goto L_08949D3C;
    case 372u: goto L_08949D64;
    case 373u: goto L_08949D78;
    case 374u: goto L_08949D80;
    case 375u: goto L_08949DA4;
    case 376u: goto L_08949DB8;
    case 377u: goto L_08949DC0;
    case 378u: goto L_08949DD4;
    case 379u: goto L_08949DF0;
    case 380u: goto L_08949E00;
    case 381u: goto L_08949E0C;
    case 382u: goto L_08949E14;
    case 383u: goto L_08949E24;
    case 384u: goto L_08949E30;
    case 385u: goto L_08949E3C;
    case 386u: goto L_08949E48;
    case 387u: goto L_08949E4C;
    case 388u: goto L_08949E54;
    case 389u: goto L_08949E60;
    case 390u: goto L_08949E68;
    case 391u: goto L_08949E70;
    case 392u: goto L_08949E94;
    case 393u: goto L_08949EBC;
    case 394u: goto L_08949EE4;
    case 395u: goto L_08949F0C;
    case 396u: goto L_08949F14;
    case 397u: goto L_08949F1C;
    case 398u: goto L_08949F24;
    case 399u: goto L_08949F2C;
    case 400u: goto L_08949F38;
    case 401u: goto L_08949F44;
    case 402u: goto L_08949F50;
    case 403u: goto L_08949F60;
    case 404u: goto L_08949F74;
    case 405u: goto L_08949F80;
    case 406u: goto L_08949F8C;
    case 407u: goto L_08949F98;
    case 408u: goto L_08949FD8;
    case 409u: goto L_08949FE4;
    case 410u: goto L_08949FEC;
    case 411u: goto L_08949FF8;
    case 412u: goto L_0894A000;
    case 413u: goto L_0894A008;
    case 414u: goto L_0894A014;
    case 415u: goto L_0894A020;
    case 416u: goto L_0894A038;
    case 417u: goto L_0894A044;
    case 418u: goto L_0894A048;
    case 419u: goto L_0894A068;
    case 420u: goto L_0894A090;
    case 421u: goto L_0894A0AC;
    case 422u: goto L_0894A0B4;
    case 423u: goto L_0894A0BC;
    case 424u: goto L_0894A0D8;
    case 425u: goto L_0894A0E8;
    case 426u: goto L_0894A0F0;
    case 427u: goto L_0894A0FC;
    case 428u: goto L_0894A104;
    case 429u: goto L_0894A110;
    case 430u: goto L_0894A118;
    case 431u: goto L_0894A124;
    case 432u: goto L_0894A12C;
    case 433u: goto L_0894A134;
    case 434u: goto L_0894A140;
    case 435u: goto L_0894A148;
    case 436u: goto L_0894A16C;
    case 437u: goto L_0894A194;
    case 438u: goto L_0894A19C;
    case 439u: goto L_0894A1A4;
    case 440u: goto L_0894A1B0;
    case 441u: goto L_0894A1B8;
    case 442u: goto L_0894A1D8;
    case 443u: goto L_0894A1FC;
    case 444u: goto L_0894A204;
    case 445u: goto L_0894A20C;
    case 446u: goto L_0894A218;
    case 447u: goto L_0894A224;
    case 448u: goto L_0894A24C;
    case 449u: goto L_0894A268;
    case 450u: goto L_0894A280;
    case 451u: goto L_0894A288;
    case 452u: goto L_0894A290;
    case 453u: goto L_0894A298;
    case 454u: goto L_0894A2A8;
    case 455u: goto L_0894A2B8;
    case 456u: goto L_0894A2C4;
    case 457u: goto L_0894A2C8;
    case 458u: goto L_0894A2D4;
    case 459u: goto L_0894A2DC;
    case 460u: goto L_0894A2F4;
    case 461u: goto L_0894A300;
    case 462u: goto L_0894A308;
    case 463u: goto L_0894A310;
    case 464u: goto L_0894A318;
    case 465u: goto L_0894A320;
    case 466u: goto L_0894A328;
    case 467u: goto L_0894A334;
    case 468u: goto L_0894A364;
    case 469u: goto L_0894A38C;
    case 470u: goto L_0894A3D8;
    case 471u: goto L_0894A408;
    case 472u: goto L_0894A424;
    case 473u: goto L_0894A42C;
    case 474u: goto L_0894A448;
    case 475u: goto L_0894A45C;
    case 476u: goto L_0894A48C;
    case 477u: goto L_0894A494;
    case 478u: goto L_0894A4D8;
    case 479u: goto L_0894A4E4;
    case 480u: goto L_0894A4F8;
    case 481u: goto L_0894A500;
    case 482u: goto L_0894A514;
    case 483u: goto L_0894A524;
    case 484u: goto L_0894A52C;
    case 485u: goto L_0894A538;
    case 486u: goto L_0894A53C;
    case 487u: goto L_0894A544;
    case 488u: goto L_0894A54C;
    case 489u: goto L_0894A558;
    case 490u: goto L_0894A568;
    case 491u: goto L_0894A574;
    case 492u: goto L_0894A59C;
    case 493u: goto L_0894A5A4;
    case 494u: goto L_0894A5B0;
    case 495u: goto L_0894A5BC;
    case 496u: goto L_0894A5C4;
    case 497u: goto L_0894A5C8;
    case 498u: goto L_0894A5D8;
    case 499u: goto L_0894A5E0;
    case 500u: goto L_0894A600;
    case 501u: goto L_0894A60C;
    case 502u: goto L_0894A614;
    case 503u: goto L_0894A620;
    case 504u: goto L_0894A62C;
    case 505u: goto L_0894A634;
    case 506u: goto L_0894A63C;
    case 507u: goto L_0894A644;
    case 508u: goto L_0894A660;
    case 509u: goto L_0894A670;
    case 510u: goto L_0894A680;
    case 511u: goto L_0894A694;
    case 512u: goto L_0894A698;
    case 513u: goto L_0894A6A4;
    case 514u: goto L_0894A6B8;
    case 515u: goto L_0894A6CC;
    case 516u: goto L_0894A700;
    case 517u: goto L_0894A708;
    case 518u: goto L_0894A710;
    case 519u: goto L_0894A718;
    case 520u: goto L_0894A720;
    case 521u: goto L_0894A728;
    case 522u: goto L_0894A730;
    case 523u: goto L_0894A738;
    case 524u: goto L_0894A740;
    case 525u: goto L_0894A74C;
    case 526u: goto L_0894A76C;
    case 527u: goto L_0894A784;
    case 528u: goto L_0894A790;
    case 529u: goto L_0894A798;
    case 530u: goto L_0894A7A4;
    case 531u: goto L_0894A7B0;
    case 532u: goto L_0894A7B8;
    case 533u: goto L_0894A7C0;
    case 534u: goto L_0894A7D0;
    case 535u: goto L_0894A7D8;
    case 536u: goto L_0894A7E0;
    case 537u: goto L_0894A7F0;
    case 538u: goto L_0894A800;
    case 539u: goto L_0894A814;
    case 540u: goto L_0894A824;
    case 541u: goto L_0894A84C;
    case 542u: goto L_0894A86C;
    case 543u: goto L_0894A878;
    case 544u: goto L_0894A884;
    case 545u: goto L_0894A8D0;
    case 546u: goto L_0894A8F0;
    case 547u: goto L_0894A918;
    case 548u: goto L_0894A920;
    case 549u: goto L_0894A928;
    case 550u: goto L_0894A948;
    case 551u: goto L_0894A970;
    case 552u: goto L_0894A990;
    case 553u: goto L_0894A9B8;
    case 554u: goto L_0894A9C0;
    case 555u: goto L_0894A9C8;
    case 556u: goto L_0894A9D8;
    case 557u: goto L_0894A9F0;
    case 558u: goto L_0894AA0C;
    case 559u: goto L_0894AA48;
    case 560u: goto L_0894AA5C;
    case 561u: goto L_0894AA6C;
    case 562u: goto L_0894AA78;
    case 563u: goto L_0894AA98;
    case 564u: goto L_0894AAA8;
    case 565u: goto L_0894AAB8;
    case 566u: goto L_0894AB00;
    case 567u: goto L_0894AB10;
    case 568u: goto L_0894AB14;
    case 569u: goto L_0894AB40;
    case 570u: goto L_0894AB50;
    case 571u: goto L_0894AB58;
    case 572u: goto L_0894AB6C;
    case 573u: goto L_0894AB74;
    case 574u: goto L_0894AB7C;
    case 575u: goto L_0894AB90;
    case 576u: goto L_0894ABD8;
    case 577u: goto L_0894ABEC;
    case 578u: goto L_0894AC04;
    case 579u: goto L_0894AC24;
    case 580u: goto L_0894AC58;
    case 581u: goto L_0894AC60;
    case 582u: goto L_0894AC70;
    case 583u: goto L_0894AC80;
    case 584u: goto L_0894AC90;
    case 585u: goto L_0894ACA8;
    case 586u: goto L_0894ACB4;
    case 587u: goto L_0894ACC4;
    case 588u: goto L_0894ACD0;
    case 589u: goto L_0894ACE0;
    case 590u: goto L_0894ACE8;
    case 591u: goto L_0894ACF8;
    case 592u: goto L_0894ACFC;
    case 593u: goto L_0894AD04;
    case 594u: goto L_0894AD10;
    case 595u: goto L_0894AD20;
    case 596u: goto L_0894AD30;
    case 597u: goto L_0894AD3C;
    case 598u: goto L_0894AD44;
    case 599u: goto L_0894AD54;
    case 600u: goto L_0894AD58;
    case 601u: goto L_0894AD64;
    case 602u: goto L_0894AD74;
    case 603u: goto L_0894AD84;
    case 604u: goto L_0894AD98;
    case 605u: goto L_0894ADA4;
    case 606u: goto L_0894ADB4;
    case 607u: goto L_0894ADC4;
    case 608u: goto L_0894ADD0;
    case 609u: goto L_0894ADD8;
    case 610u: goto L_0894ADE8;
    case 611u: goto L_0894ADF8;
    case 612u: goto L_0894AE08;
    case 613u: goto L_0894AE14;
    case 614u: goto L_0894AE1C;
    case 615u: goto L_0894AE2C;
    case 616u: goto L_0894AE40;
    case 617u: goto L_0894AEE8;
    case 618u: goto L_0894AEF4;
    case 619u: goto L_0894AF0C;
    case 620u: goto L_0894AF30;
    case 621u: goto L_0894AF38;
    case 622u: goto L_0894AF5C;
    case 623u: goto L_0894AF88;
    case 624u: goto L_0894AF94;
    case 625u: goto L_0894AFA0;
    case 626u: goto L_0894AFAC;
    case 627u: goto L_0894AFBC;
    case 628u: goto L_0894AFCC;
    case 629u: goto L_0894AFDC;
    case 630u: goto L_0894AFE0;
    case 631u: goto L_0894AFE8;
    case 632u: goto L_0894AFF8;
    case 633u: goto L_0894B008;
    case 634u: goto L_0894B018;
    case 635u: goto L_0894B020;
    case 636u: goto L_0894B038;
    case 637u: goto L_0894B044;
    case 638u: goto L_0894B054;
    case 639u: goto L_0894B064;
    case 640u: goto L_0894B074;
    case 641u: goto L_0894B098;
    case 642u: goto L_0894B0BC;
    case 643u: goto L_0894B0D4;
    case 644u: goto L_0894B0E4;
    case 645u: goto L_0894B0EC;
    case 646u: goto L_0894B0F4;
    case 647u: goto L_0894B0F8;
    case 648u: goto L_0894B100;
    case 649u: goto L_0894B110;
    case 650u: goto L_0894B11C;
    case 651u: goto L_0894B150;
    case 652u: goto L_0894B174;
    case 653u: goto L_0894B17C;
    case 654u: goto L_0894B188;
    case 655u: goto L_0894B1AC;
    case 656u: goto L_0894B1CC;
    case 657u: goto L_0894B1DC;
    case 658u: goto L_0894B1E4;
    case 659u: goto L_0894B1EC;
    case 660u: goto L_0894B200;
    case 661u: goto L_0894B20C;
    case 662u: goto L_0894B214;
    case 663u: goto L_0894B21C;
    case 664u: goto L_0894B224;
    case 665u: goto L_0894B22C;
    case 666u: goto L_0894B234;
    case 667u: goto L_0894B244;
    case 668u: goto L_0894B24C;
    case 669u: goto L_0894B258;
    case 670u: goto L_0894B274;
    case 671u: goto L_0894B27C;
    case 672u: goto L_0894B284;
    case 673u: goto L_0894B28C;
    case 674u: goto L_0894B2A4;
    case 675u: goto L_0894B2AC;
    case 676u: goto L_0894B2B4;
    case 677u: goto L_0894B2C8;
    case 678u: goto L_0894B2D0;
    case 679u: goto L_0894B2D8;
    case 680u: goto L_0894B2E0;
    case 681u: goto L_0894B2F0;
    case 682u: goto L_0894B2F8;
    case 683u: goto L_0894B300;
    case 684u: goto L_0894B308;
    case 685u: goto L_0894B310;
    case 686u: goto L_0894B32C;
    case 687u: goto L_0894B334;
    case 688u: goto L_0894B33C;
    case 689u: goto L_0894B344;
    case 690u: goto L_0894B35C;
    case 691u: goto L_0894B364;
    case 692u: goto L_0894B36C;
    case 693u: goto L_0894B388;
    case 694u: goto L_0894B394;
    case 695u: goto L_0894B39C;
    case 696u: goto L_0894B3B4;
    case 697u: goto L_0894B3C8;
    case 698u: goto L_0894B3D4;
    case 699u: goto L_0894B3D8;
    case 700u: goto L_0894B3F8;
    case 701u: goto L_0894B404;
    case 702u: goto L_0894B418;
    case 703u: goto L_0894B420;
    case 704u: goto L_0894B428;
    case 705u: goto L_0894B438;
    case 706u: goto L_0894B440;
    case 707u: goto L_0894B448;
    case 708u: goto L_0894B458;
    case 709u: goto L_0894B46C;
    case 710u: goto L_0894B498;
    case 711u: goto L_0894B4B0;
    case 712u: goto L_0894B4B8;
    case 713u: goto L_0894B4BC;
    case 714u: goto L_0894B4C8;
    case 715u: goto L_0894B4D4;
    case 716u: goto L_0894B4E0;
    case 717u: goto L_0894B510;
    case 718u: goto L_0894B520;
    case 719u: goto L_0894B52C;
    case 720u: goto L_0894B53C;
    case 721u: goto L_0894B54C;
    case 722u: goto L_0894B568;
    case 723u: goto L_0894B57C;
    case 724u: goto L_0894B584;
    case 725u: goto L_0894B5A4;
    case 726u: goto L_0894B5AC;
    case 727u: goto L_0894B5B4;
    case 728u: goto L_0894B5C0;
    case 729u: goto L_0894B5D0;
    case 730u: goto L_0894B5D8;
    case 731u: goto L_0894B5E4;
    case 732u: goto L_0894B5F8;
    case 733u: goto L_0894B604;
    case 734u: goto L_0894B60C;
    case 735u: goto L_0894B618;
    case 736u: goto L_0894B620;
    case 737u: goto L_0894B628;
    case 738u: goto L_0894B630;
    case 739u: goto L_0894B638;
    case 740u: goto L_0894B648;
    case 741u: goto L_0894B654;
    case 742u: goto L_0894B664;
    case 743u: goto L_0894B674;
    case 744u: goto L_0894B67C;
    case 745u: goto L_0894B684;
    case 746u: goto L_0894B690;
    case 747u: goto L_0894B6A4;
    case 748u: goto L_0894B6B0;
    case 749u: goto L_0894B6CC;
    case 750u: goto L_0894B70C;
    case 751u: goto L_0894B718;
    case 752u: goto L_0894B720;
    case 753u: goto L_0894B734;
    case 754u: goto L_0894B73C;
    case 755u: goto L_0894B750;
    case 756u: goto L_0894B768;
    case 757u: goto L_0894B774;
    case 758u: goto L_0894B788;
    case 759u: goto L_0894B7AC;
    case 760u: goto L_0894B7BC;
    case 761u: goto L_0894B7D4;
    case 762u: goto L_0894B7EC;
    case 763u: goto L_0894B7F0;
    case 764u: goto L_0894B7F8;
    case 765u: goto L_0894B800;
    case 766u: goto L_0894B808;
    case 767u: goto L_0894B828;
    case 768u: goto L_0894B830;
    case 769u: goto L_0894B834;
    case 770u: goto L_0894B854;
    case 771u: goto L_0894B864;
    case 772u: goto L_0894B870;
    case 773u: goto L_0894B878;
    case 774u: goto L_0894B888;
    case 775u: goto L_0894B898;
    case 776u: goto L_0894B8A8;
    case 777u: goto L_0894B8B8;
    case 778u: goto L_0894B8C8;
    case 779u: goto L_0894B8D8;
    case 780u: goto L_0894B8E8;
    case 781u: goto L_0894B8F8;
    case 782u: goto L_0894B908;
    case 783u: goto L_0894B918;
    case 784u: goto L_0894B928;
    case 785u: goto L_0894B934;
    case 786u: goto L_0894B93C;
    case 787u: goto L_0894B94C;
    case 788u: goto L_0894B95C;
    case 789u: goto L_0894B96C;
    case 790u: goto L_0894B97C;
    case 791u: goto L_0894B988;
    case 792u: goto L_0894B990;
    case 793u: goto L_0894B998;
    case 794u: goto L_0894B9A0;
    case 795u: goto L_0894B9B0;
    case 796u: goto L_0894B9BC;
    case 797u: goto L_0894B9C4;
    case 798u: goto L_0894B9CC;
    case 799u: goto L_0894B9D8;
    case 800u: goto L_0894B9E0;
    case 801u: goto L_0894BA14;
    case 802u: goto L_0894BA30;
    case 803u: goto L_0894BA54;
    case 804u: goto L_0894BA5C;
    case 805u: goto L_0894BA60;
    case 806u: goto L_0894BA68;
    case 807u: goto L_0894BA74;
    case 808u: goto L_0894BA7C;
    case 809u: goto L_0894BA98;
    case 810u: goto L_0894BAB0;
    case 811u: goto L_0894BAB8;
    case 812u: goto L_0894BABC;
    case 813u: goto L_0894BAC4;
    case 814u: goto L_0894BAD0;
    case 815u: goto L_0894BAD8;
    case 816u: goto L_0894BAF0;
    case 817u: goto L_0894BAF8;
    case 818u: goto L_0894BAFC;
    case 819u: goto L_0894BB04;
    case 820u: goto L_0894BB10;
    case 821u: goto L_0894BB2C;
    case 822u: goto L_0894BB74;
    case 823u: goto L_0894BB88;
    case 824u: goto L_0894BBD8;
    case 825u: goto L_0894BBE0;
    case 826u: goto L_0894BBEC;
    case 827u: goto L_0894BBF4;
    case 828u: goto L_0894BC18;
    case 829u: goto L_0894BC30;
    case 830u: goto L_0894BC3C;
    case 831u: goto L_0894BC50;
    case 832u: goto L_0894BC68;
    case 833u: goto L_0894BC70;
    case 834u: goto L_0894BC80;
    case 835u: goto L_0894BC88;
    case 836u: goto L_0894BC90;
    case 837u: goto L_0894BCA0;
    case 838u: goto L_0894BCB0;
    case 839u: goto L_0894BCBC;
    case 840u: goto L_0894BCC8;
    case 841u: goto L_0894BCDC;
    case 842u: goto L_0894BCE0;
    case 843u: goto L_0894BCE8;
    case 844u: goto L_0894BCF8;
    case 845u: goto L_0894BCFC;
    case 846u: goto L_0894BD08;
    case 847u: goto L_0894BD18;
    case 848u: goto L_0894BD20;
    case 849u: goto L_0894BD54;
    case 850u: goto L_0894BD5C;
    case 851u: goto L_0894BD68;
    case 852u: goto L_0894BD88;
    case 853u: goto L_0894BD94;
    case 854u: goto L_0894BDAC;
    case 855u: goto L_0894BDBC;
    case 856u: goto L_0894BDCC;
    case 857u: goto L_0894BDDC;
    case 858u: goto L_0894BDEC;
    case 859u: goto L_0894BDF8;
    case 860u: goto L_0894BE08;
    case 861u: goto L_0894BE18;
    case 862u: goto L_0894BE28;
    case 863u: goto L_0894BE30;
    case 864u: goto L_0894BE38;
    case 865u: goto L_0894BE48;
    case 866u: goto L_0894BE50;
    case 867u: goto L_0894BE5C;
    case 868u: goto L_0894BE6C;
    case 869u: goto L_0894BE7C;
    case 870u: goto L_0894BEB0;
    case 871u: goto L_0894BEB8;
    case 872u: goto L_0894BEE0;
    case 873u: goto L_0894BEF8;
    case 874u: goto L_0894BF08;
    case 875u: goto L_0894BF14;
    case 876u: goto L_0894BF24;
    case 877u: goto L_0894BF58;
    case 878u: goto L_0894BF60;
    case 879u: goto L_0894BF80;
    case 880u: goto L_0894BF90;
    case 881u: goto L_0894BF9C;
    case 882u: goto L_0894BFAC;
    case 883u: goto L_0894BFE0;
    case 884u: goto L_0894BFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08948004:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08948018u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08948018u) goto L_08948018;
    return;
L_08948018:
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
    goto L_08948050;
L_08948050:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2936)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08948074;
      }
      goto L_08948064;
    }
L_08948064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089480A4;
      }
      goto L_08948074;
    }
L_08948074:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089480A4;
      }
      goto L_08948084;
    }
L_08948084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0894809Cu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x0894809Cu) goto L_0894809C;
    return;
L_0894809C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08948178;
      }
      goto L_089480A4;
    }
L_089480A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08948178;
      }
      goto L_089480B4;
    }
L_089480B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2936)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948150;
      }
      goto L_089480C8;
    }
L_089480C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948150;
      }
      goto L_089480D8;
    }
L_089480D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08948150;
      }
      goto L_089480E8;
    }
L_089480E8:
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
    ctx.gpr[31] = (0x08948128u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 72u, 0x088C8430u>(ctx, &aot_mem) && ctx.pc == 0x08948128u) goto L_08948128;
    return;
L_08948128:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948150;
      }
      goto L_08948130;
    }
L_08948130:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08948148u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x08948148u) goto L_08948148;
    return;
L_08948148:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08948178;
      }
      goto L_08948150;
    }
L_08948150:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08948178;
      }
      goto L_08948160;
    }
L_08948160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08948178u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x08948178u) goto L_08948178;
    return;
L_08948178:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089486C0;
      }
      goto L_08948184;
    }
L_08948184:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[20] = (0u | 5u);
      if (branch_taken) {
          goto L_08948264;
      }
      goto L_0894818C;
    }
L_0894818C:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089481AC;
      }
      goto L_08948194;
    }
L_08948194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x089481A4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089481A4u) goto L_089481A4;
    return;
L_089481A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089481BC;
      }
      goto L_089481AC;
    }
L_089481AC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089481BC;
L_089481BC:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_089481D0;
      }
      goto L_089481C4;
    }
L_089481C4:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x089481D0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x089481D0u) goto L_089481D0;
    return;
L_089481D0:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089481E4;
      }
      goto L_089481D8;
    }
L_089481D8:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089481E4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x089481E4u) goto L_089481E4;
    return;
L_089481E4:
    ctx.gpr[31] = (0x089481ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 879u, 0x088B3FBCu>(ctx, &aot_mem) && ctx.pc == 0x089481ECu) goto L_089481EC;
    return;
L_089481EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089481F8u);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089481F8u) goto L_089481F8;
    return;
L_089481F8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894820C;
      }
      goto L_08948204;
    }
L_08948204:
    ctx.gpr[31] = (0x0894820Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 879u, 0x088B3FBCu>(ctx, &aot_mem) && ctx.pc == 0x0894820Cu) goto L_0894820C;
    return;
L_0894820C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08948218u);
    ctx.gpr[5] = (0u | 41u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x08948218u) goto L_08948218;
    return;
L_08948218:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948234;
      }
      goto L_08948224;
    }
L_08948224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08948230u);
    ctx.gpr[5] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x08948230u) goto L_08948230;
    return;
L_08948230:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08948234;
L_08948234:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948244;
      }
      goto L_0894823C;
    }
L_0894823C:
    ctx.gpr[31] = (0x08948244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 879u, 0x088B3FBCu>(ctx, &aot_mem) && ctx.pc == 0x08948244u) goto L_08948244;
    return;
L_08948244:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948258;
      }
      goto L_0894824C;
    }
L_0894824C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08948258u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 870u, 0x088B3F48u>(ctx, &aot_mem) && ctx.pc == 0x08948258u) goto L_08948258;
    return;
L_08948258:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[22] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), ctx.gpr[4]);
    goto L_08948264;
L_08948264:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948280;
      }
      goto L_0894826C;
    }
L_0894826C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08948278u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 870u, 0x088B3F48u>(ctx, &aot_mem) && ctx.pc == 0x08948278u) goto L_08948278;
    return;
L_08948278:
    ctx.gpr[31] = (0x08948280u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 887u, 0x089A3C28u>(ctx, &aot_mem) && ctx.pc == 0x08948280u) goto L_08948280;
    return;
L_08948280:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894829C;
      }
      goto L_08948288;
    }
L_08948288:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08948294u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 870u, 0x088B3F48u>(ctx, &aot_mem) && ctx.pc == 0x08948294u) goto L_08948294;
    return;
L_08948294:
    ctx.gpr[31] = (0x0894829Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 887u, 0x089A3C28u>(ctx, &aot_mem) && ctx.pc == 0x0894829Cu) goto L_0894829C;
    return;
L_0894829C:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_089482BC;
      }
      goto L_089482A4;
    }
L_089482A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x089482B4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089482B4u) goto L_089482B4;
    return;
L_089482B4:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089482BC;
L_089482BC:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_089482DC;
      }
      goto L_089482C4;
    }
L_089482C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x089482D4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089482D4u) goto L_089482D4;
    return;
L_089482D4:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089482DC;
L_089482DC:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894831C;
      }
      goto L_089482E4;
    }
L_089482E4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894831C;
      }
      goto L_089482F4;
    }
L_089482F4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08948300u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 870u, 0x088B3F48u>(ctx, &aot_mem) && ctx.pc == 0x08948300u) goto L_08948300;
    return;
L_08948300:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0894831C;
L_0894831C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0894838C;
      }
      goto L_08948328;
    }
L_08948328:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2936)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894837C;
      }
      goto L_0894833C;
    }
L_0894833C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2936)));
    ctx.gpr[4] = (49942u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948374;
      }
      goto L_08948358;
    }
L_08948358:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948374;
      }
      goto L_08948360;
    }
L_08948360:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894837C;
      }
      goto L_08948374;
    }
L_08948374:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), ctx.gpr[4]);
    goto L_0894837C;
L_0894837C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894838C;
      }
      goto L_08948384;
    }
L_08948384:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), ctx.gpr[4]);
    goto L_0894838C;
L_0894838C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948580;
      }
      goto L_08948394;
    }
L_08948394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[4] = (16076u << 16u);
      if (branch_taken) {
          goto L_089483BC;
      }
      goto L_089483A0;
    }
L_089483A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948580;
      }
      goto L_089483BC;
    }
L_089483BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089483EC;
      }
      goto L_089483D0;
    }
L_089483D0:
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089486C0;
      }
      goto L_089483EC;
    }
L_089483EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16204u << 16u);
      if (branch_taken) {
          goto L_08948454;
      }
      goto L_08948400;
    }
L_08948400:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948454;
      }
      goto L_0894841C;
    }
L_0894841C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089486C0;
      }
      goto L_08948438;
    }
L_08948438:
    ctx.gpr[4] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16640u << 16u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089486C0;
      }
      goto L_08948454;
    }
L_08948454:
    ctx.gpr[4] = (16076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948544;
      }
      goto L_08948474;
    }
L_08948474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[17] = (2202u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(15416));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089484D4;
      }
      goto L_089484A8;
    }
L_089484A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089484B8u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089484B8u) goto L_089484B8;
    return;
L_089484B8:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089484CCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 50u, 0x088B447Cu>(ctx, &aot_mem) && ctx.pc == 0x089484CCu) goto L_089484CC;
    return;
L_089484CC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089484FC;
      }
      goto L_089484D4;
    }
L_089484D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089484E4u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089484E4u) goto L_089484E4;
    return;
L_089484E4:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089484F8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 50u, 0x088B447Cu>(ctx, &aot_mem) && ctx.pc == 0x089484F8u) goto L_089484F8;
    return;
L_089484F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089484FC;
L_089484FC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (50298u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089486C0;
      }
      goto L_08948544;
    }
L_08948544:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089486C0;
      }
      goto L_08948558;
    }
L_08948558:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (49024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089486C0;
      }
      goto L_08948580;
    }
L_08948580:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089485B0;
      }
      goto L_08948588;
    }
L_08948588:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089486C0;
      }
      goto L_089485B0;
    }
L_089485B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08948630;
      }
      goto L_089485BC;
    }
L_089485BC:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_089485F4;
      }
      goto L_089485C4;
    }
L_089485C4:
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (16384u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089485ECu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089485ECu) goto L_089485EC;
    return;
L_089485EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08948620;
      }
      goto L_089485F4;
    }
L_089485F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948620;
      }
      goto L_08948608;
    }
L_08948608:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49152u << 16u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08948620;
L_08948620:
    ctx.gpr[31] = (0x08948628u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 719u, 0x0894340Cu>(ctx, &aot_mem) && ctx.pc == 0x08948628u) goto L_08948628;
    return;
L_08948628:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089486C0;
      }
      goto L_08948630;
    }
L_08948630:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948668;
      }
      goto L_0894864C;
    }
L_0894864C:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089486C0;
      }
      goto L_08948668;
    }
L_08948668:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_089486AC;
      }
      goto L_08948684;
    }
L_08948684:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089486C0;
      }
      goto L_089486AC;
    }
L_089486AC:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), ctx.gpr[4]);
    goto L_089486C0;
L_089486C0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089487A8;
      }
      goto L_089486D0;
    }
L_089486D0:
    ctx.gpr[31] = (0x089486D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 304u, 0x089454F0u>(ctx, &aot_mem) && ctx.pc == 0x089486D8u) goto L_089486D8;
    return;
L_089486D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948744;
      }
      goto L_089486E0;
    }
L_089486E0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089486F8;
      }
      goto L_089486E8;
    }
L_089486E8:
    ctx.gpr[4] = (16249u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39321u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089486F8;
L_089486F8:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948710;
      }
      goto L_08948700;
    }
L_08948700:
    ctx.gpr[4] = (16249u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39321u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08948710;
L_08948710:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948728;
      }
      goto L_08948718;
    }
L_08948718:
    ctx.gpr[4] = (16249u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39321u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08948728;
L_08948728:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089488C8;
      }
      goto L_08948730;
    }
L_08948730:
    ctx.gpr[4] = (16249u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39321u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089488C8;
      }
      goto L_08948744;
    }
L_08948744:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894875C;
      }
      goto L_0894874C;
    }
L_0894874C:
    ctx.gpr[4] = (16294u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0894875C;
L_0894875C:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948774;
      }
      goto L_08948764;
    }
L_08948764:
    ctx.gpr[4] = (16294u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08948774;
L_08948774:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894878C;
      }
      goto L_0894877C;
    }
L_0894877C:
    ctx.gpr[4] = (16294u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0894878C;
L_0894878C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089488C8;
      }
      goto L_08948794;
    }
L_08948794:
    ctx.gpr[4] = (16294u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089488C8;
      }
      goto L_089487A8;
    }
L_089487A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2995)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894886C;
      }
      goto L_089487B4;
    }
L_089487B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2988)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0894880C;
      }
      goto L_089487CC;
    }
L_089487CC:
    ctx.gpr[5] = (16256u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2995), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089487E4;
      }
      goto L_089487E0;
    }
L_089487E0:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089487E4;
L_089487E4:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_089487F0;
      }
      goto L_089487EC;
    }
L_089487EC:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089487F0;
L_089487F0:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089487FC;
      }
      goto L_089487F8;
    }
L_089487F8:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089487FC;
L_089487FC:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089488C8;
      }
      goto L_08948804;
    }
L_08948804:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089488C8;
      }
      goto L_0894880C;
    }
L_0894880C:
    ctx.gpr[5] = (16042u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 43691u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894882C;
      }
      goto L_08948820;
    }
L_08948820:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0894882C;
L_0894882C:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948840;
      }
      goto L_08948834;
    }
L_08948834:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08948840;
L_08948840:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948854;
      }
      goto L_08948848;
    }
L_08948848:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08948854;
L_08948854:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089488C8;
      }
      goto L_0894885C;
    }
L_0894885C:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089488C8;
      }
      goto L_0894886C;
    }
L_0894886C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089488C8;
      }
      goto L_08948874;
    }
L_08948874:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089488BC;
      }
      goto L_089488A8;
    }
L_089488A8:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089488C8;
      }
      goto L_089488BC;
    }
L_089488BC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089488C8;
L_089488C8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
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
L_08948900:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.gpr[31] = (0x08948940u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 168u, 0x08944B90u>(ctx, &aot_mem) && ctx.pc == 0x08948940u) goto L_08948940;
    return;
L_08948940:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0894895Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 870u, 0x08A975E8u>(ctx, &aot_mem) && ctx.pc == 0x0894895Cu) goto L_0894895C;
    return;
L_0894895C:
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0894896Cu);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 879u, 0x08A9764Cu>(ctx, &aot_mem) && ctx.pc == 0x0894896Cu) goto L_0894896C;
    return;
L_0894896C:
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894897Cu);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 65u, 0x08944468u>(ctx, &aot_mem) && ctx.pc == 0x0894897Cu) goto L_0894897C;
    return;
L_0894897C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[28] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0894898C;
      }
      goto L_08948984;
    }
L_08948984:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_0894898C;
L_0894898C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_089489C4;
      }
      goto L_089489A0;
    }
L_089489A0:
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_089489C8;
    }
    goto L_089489B0;
L_089489B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089489E8;
      }
      goto L_089489C4;
    }
L_089489C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089489C8;
L_089489C8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[30] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] / ctx.fpr[14];
    goto L_089489E8;
L_089489E8:
    ctx.set_fpu_condition((ctx.fpr[30] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948A00;
      }
      goto L_089489F8;
    }
L_089489F8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948AC4;
      }
      goto L_08948A00;
    }
L_08948A00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948A64;
      }
      goto L_08948A10;
    }
L_08948A10:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08948A1Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08948A1Cu) goto L_08948A1C;
    return;
L_08948A1C:
    ctx.gpr[31] = (0x08948A24u);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08948A24u) goto L_08948A24;
    return;
L_08948A24:
    ctx.gpr[5] = (0u | 41u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[28]));
    ctx.gpr[18] = (0u | 36u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08948A78;
      }
      goto L_08948A3C;
    }
L_08948A3C:
    ctx.gpr[6] = (15360u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08948A7C;
      }
      goto L_08948A64;
    }
L_08948A64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08948D58;
      }
      goto L_08948A78;
    }
L_08948A78:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08948A7C;
L_08948A7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15759u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[30] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948AB8;
      }
      goto L_08948AA8;
    }
L_08948AA8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08948ABC;
      }
      goto L_08948AB8;
    }
L_08948AB8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_08948ABC;
L_08948ABC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08948AD0;
      }
      goto L_08948AC4;
    }
L_08948AC4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (0u | 41u);
    ctx.gpr[18] = (0u | 36u);
    goto L_08948AD0;
L_08948AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08948C80;
      }
      goto L_08948ADC;
    }
L_08948ADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948C6C;
      }
      goto L_08948AEC;
    }
L_08948AEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948C80;
      }
      goto L_08948B04;
    }
L_08948B04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (512u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948C80;
      }
      goto L_08948B18;
    }
L_08948B18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16153u << 16u);
      if (branch_taken) {
          goto L_08948B44;
      }
      goto L_08948B28;
    }
L_08948B28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(312)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948C80;
      }
      goto L_08948B44;
    }
L_08948B44:
    ctx.gpr[31] = (0x08948B4Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(292)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08948B4Cu) goto L_08948B4C;
    return;
L_08948B4C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08948B60u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08948B60u) goto L_08948B60;
    return;
L_08948B60:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30140)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30144)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08948B78u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08948B78u) goto L_08948B78;
    return;
L_08948B78:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08948B8Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 524u, 0x08AF6874u>(ctx, &aot_mem) && ctx.pc == 0x08948B8Cu) goto L_08948B8C;
    return;
L_08948B8C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08948C80;
      }
      goto L_08948B94;
    }
L_08948B94:
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
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948C80;
      }
      goto L_08948BC4;
    }
L_08948BC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
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
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49216u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08948C64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08948C64u) goto L_08948C64;
    return;
L_08948C64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08948C80;
      }
      goto L_08948C6C;
    }
L_08948C6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948C80;
      }
      goto L_08948C7C;
    }
L_08948C7C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_08948C80;
L_08948C80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08948CCC;
      }
      goto L_08948C8C;
    }
L_08948C8C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08948CACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08948CACu) goto L_08948CAC;
    return;
L_08948CAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948CDC;
      }
      goto L_08948CC4;
    }
L_08948CC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08948D28;
      }
      goto L_08948CCC;
    }
L_08948CCC:
    ctx.gpr[31] = (0x08948CD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 866u, 0x08947B9Cu>(ctx, &aot_mem) && ctx.pc == 0x08948CD4u) goto L_08948CD4;
    return;
L_08948CD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08948D58;
      }
      goto L_08948CDC;
    }
L_08948CDC:
    ctx.gpr[31] = (0x08948CE4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 136u, 0x08A98578u>(ctx, &aot_mem) && ctx.pc == 0x08948CE4u) goto L_08948CE4;
    return;
L_08948CE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948D28;
      }
      goto L_08948CEC;
    }
L_08948CEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948D20;
      }
      goto L_08948CF8;
    }
L_08948CF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948D20;
      }
      goto L_08948D0C;
    }
L_08948D0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948D28;
      }
      goto L_08948D20;
    }
L_08948D20:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), ctx.gpr[4]);
    goto L_08948D28;
L_08948D28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08948D40;
      }
      goto L_08948D38;
    }
L_08948D38:
    ctx.gpr[31] = (0x08948D40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 866u, 0x08947B9Cu>(ctx, &aot_mem) && ctx.pc == 0x08948D40u) goto L_08948D40;
    return;
L_08948D40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08948D4Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 666u, 0x08943114u>(ctx, &aot_mem) && ctx.pc == 0x08948D4Cu) goto L_08948D4C;
    return;
L_08948D4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08948D58u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 821u, 0x08943DB0u>(ctx, &aot_mem) && ctx.pc == 0x08948D58u) goto L_08948D58;
    return;
L_08948D58:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08948D90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08948DB4u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_0894B150;
L_08948DB4:
    ctx.gpr[4] = (49942u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2936)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17302u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] | 52429u);
    ctx.gpr[18] = (2232u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.gpr[31] = (0x08948E10u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 97u, 0x08A983B0u>(ctx, &aot_mem) && ctx.pc == 0x08948E10u) goto L_08948E10;
    return;
L_08948E10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948E5C;
      }
      goto L_08948E18;
    }
L_08948E18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948E5C;
      }
      goto L_08948E28;
    }
L_08948E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08948E5C;
      }
      goto L_08948E38;
    }
L_08948E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u | 60000u);
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08948E54u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 659u, 0x08887620u>(ctx, &aot_mem) && ctx.pc == 0x08948E54u) goto L_08948E54;
    return;
L_08948E54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08948EA8;
      }
      goto L_08948E5C;
    }
L_08948E5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948EA8;
      }
      goto L_08948E6C;
    }
L_08948E6C:
    ctx.gpr[31] = (0x08948E74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 97u, 0x08A983B0u>(ctx, &aot_mem) && ctx.pc == 0x08948E74u) goto L_08948E74;
    return;
L_08948E74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948E8C;
      }
      goto L_08948E7C;
    }
L_08948E7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08948EA8;
      }
      goto L_08948E8C;
    }
L_08948E8C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08948E98u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 686u, 0x088877F4u>(ctx, &aot_mem) && ctx.pc == 0x08948E98u) goto L_08948E98;
    return;
L_08948E98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_08948EA8;
L_08948EA8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948EE0;
      }
      goto L_08948EB8;
    }
L_08948EB8:
    ctx.gpr[31] = (0x08948EC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 79u, 0x08A982F0u>(ctx, &aot_mem) && ctx.pc == 0x08948EC0u) goto L_08948EC0;
    return;
L_08948EC0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949188;
      }
      goto L_08948EC8;
    }
L_08948EC8:
    ctx.gpr[31] = (0x08948ED0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 321u, 0x088D5678u>(ctx, &aot_mem) && ctx.pc == 0x08948ED0u) goto L_08948ED0;
    return;
L_08948ED0:
    ctx.gpr[31] = (0x08948ED8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 331u, 0x088EE3ACu>(ctx, &aot_mem) && ctx.pc == 0x08948ED8u) goto L_08948ED8;
    return;
L_08948ED8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949188;
      }
      goto L_08948EE0;
    }
L_08948EE0:
    ctx.gpr[31] = (0x08948EE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 79u, 0x08A982F0u>(ctx, &aot_mem) && ctx.pc == 0x08948EE8u) goto L_08948EE8;
    return;
L_08948EE8:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
        goto L_08948F00;
    }
    goto L_08948EF0;
L_08948EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948F30;
      }
      goto L_08948EFC;
    }
L_08948EFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    goto L_08948F00;
L_08948F00:
    ctx.gpr[19] = (0u | 266u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[18] = (2230u << 16u);
      if (branch_taken) {
          goto L_08948F48;
      }
      goto L_08948F28;
    }
L_08948F28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08948F4C;
      }
      goto L_08948F30;
    }
L_08948F30:
    ctx.gpr[31] = (0x08948F38u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x08948F38u) goto L_08948F38;
    return;
L_08948F38:
    ctx.gpr[31] = (0x08948F40u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 331u, 0x088EE3ACu>(ctx, &aot_mem) && ctx.pc == 0x08948F40u) goto L_08948F40;
    return;
L_08948F40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949188;
      }
      goto L_08948F48;
    }
L_08948F48:
    ctx.gpr[19] = (0u | 333u);
    goto L_08948F4C;
L_08948F4C:
    ctx.gpr[31] = (0x08948F54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 16u, 0x08A9807Cu>(ctx, &aot_mem) && ctx.pc == 0x08948F54u) goto L_08948F54;
    return;
L_08948F54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949018;
      }
      goto L_08948F5C;
    }
L_08948F5C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1444)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949018;
      }
      goto L_08948F84;
    }
L_08948F84:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08948FA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 306u, 0x08851D00u>(ctx, &aot_mem) && ctx.pc == 0x08948FA0u) goto L_08948FA0;
    return;
L_08948FA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949018;
      }
      goto L_08948FA8;
    }
L_08948FA8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08948FDCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 624u, 0x08942DA0u>(ctx, &aot_mem) && ctx.pc == 0x08948FDCu) goto L_08948FDC;
    return;
L_08948FDC:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08949008u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 187u, 0x08855100u>(ctx, &aot_mem) && ctx.pc == 0x08949008u) goto L_08949008;
    return;
L_08949008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3212), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949164;
      }
      goto L_08949018;
    }
L_08949018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3212)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089490F4;
      }
      goto L_08949030;
    }
L_08949030:
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
        goto L_0894907C;
    }
    goto L_08949064;
L_08949064:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08949098;
      }
      goto L_0894907C;
    }
L_0894907C:
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[4] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08949098;
L_08949098:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3212)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089490F4;
      }
      goto L_089490B4;
    }
L_089490B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 57u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x089490ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x089490ECu) goto L_089490EC;
    return;
L_089490EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949164;
      }
      goto L_089490F4;
    }
L_089490F4:
    ctx.gpr[31] = (0x089490FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 16u, 0x08A9807Cu>(ctx, &aot_mem) && ctx.pc == 0x089490FCu) goto L_089490FC;
    return;
L_089490FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949164;
      }
      goto L_08949104;
    }
L_08949104:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1444)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949164;
      }
      goto L_0894912C;
    }
L_0894912C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08949148u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 306u, 0x08851D00u>(ctx, &aot_mem) && ctx.pc == 0x08949148u) goto L_08949148;
    return;
L_08949148:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949164;
      }
      goto L_08949150;
    }
L_08949150:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 59u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08949164u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08949164u) goto L_08949164;
    return;
L_08949164:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08949188u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 328u, 0x08855A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08949188u) goto L_08949188;
    return;
L_08949188:
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
L_089491A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(668), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(676), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(680), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(684), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(688), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(692), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(700), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(716), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(724), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(728), ctx.gpr[31]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089491F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 266u, 0x08A98B08u>(ctx, &aot_mem) && ctx.pc == 0x089491F8u) goto L_089491F8;
    return;
L_089491F8:
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.fpr[26] = lcs::lcs_mouse_vehicle_camera_axis_x(ctx.fpr[26]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0894920Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 281u, 0x08A98C0Cu>(ctx, &aot_mem) && ctx.pc == 0x0894920Cu) goto L_0894920C;
    return;
L_0894920C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[22] = lcs::lcs_mouse_vehicle_camera_axis_y(ctx.fpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(400));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0894927Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 609u, 0x088EBB74u>(ctx, &aot_mem) && ctx.pc == 0x0894927Cu) goto L_0894927C;
    return;
L_0894927C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x089492C0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 489u, 0x08A05EE4u>(ctx, &aot_mem) && ctx.pc == 0x089492C0u) goto L_089492C0;
    return;
L_089492C0:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[31] = (0x089492D8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x089492D8u) goto L_089492D8;
    return;
L_089492D8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089492E4u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 511u, 0x08A06548u>(ctx, &aot_mem) && ctx.pc == 0x089492E4u) goto L_089492E4;
    return;
L_089492E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.gpr[31] = (0x08949318u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 511u, 0x08A06548u>(ctx, &aot_mem) && ctx.pc == 0x08949318u) goto L_08949318;
    return;
L_08949318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08949340u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 624u, 0x08942DA0u>(ctx, &aot_mem) && ctx.pc == 0x08949340u) goto L_08949340;
    return;
L_08949340:
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
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[28];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08949454u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 624u, 0x08942DA0u>(ctx, &aot_mem) && ctx.pc == 0x08949454u) goto L_08949454;
    return;
L_08949454:
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
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[28];
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17116u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
      if (branch_taken) {
          goto L_08949508;
      }
      goto L_089494E8;
    }
L_089494E8:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894955C;
      }
      goto L_089494F8;
    }
L_089494F8:
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894955C;
      }
      goto L_08949508;
    }
L_08949508:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08949538;
      }
      goto L_08949518;
    }
L_08949518:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894955C;
      }
      goto L_08949528;
    }
L_08949528:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894955C;
      }
      goto L_08949538;
    }
L_08949538:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3232)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_0894955C;
L_0894955C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0894956Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 624u, 0x08942DA0u>(ctx, &aot_mem) && ctx.pc == 0x0894956Cu) goto L_0894956C;
    return;
L_0894956C:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x089495B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x089495B4u) goto L_089495B4;
    return;
L_089495B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089495ECu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A066A0u>(ctx, &aot_mem) && ctx.pc == 0x089495ECu) goto L_089495EC;
    return;
L_089495EC:
    ctx.gpr[4] = (14749u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18770u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08949618u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x08949618u) goto L_08949618;
    return;
L_08949618:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08949628u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 624u, 0x08942DA0u>(ctx, &aot_mem) && ctx.pc == 0x08949628u) goto L_08949628;
    return;
L_08949628:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08949654u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 624u, 0x08942DA0u>(ctx, &aot_mem) && ctx.pc == 0x08949654u) goto L_08949654;
    return;
L_08949654:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089496A4u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 241u, 0x08A1D350u>(ctx, &aot_mem) && ctx.pc == 0x089496A4u) goto L_089496A4;
    return;
L_089496A4:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089496BCu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 241u, 0x08A1D350u>(ctx, &aot_mem) && ctx.pc == 0x089496BCu) goto L_089496BC;
    return;
L_089496BC:
    ctx.gpr[31] = (0x089496C4u);
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D380u>(ctx, &aot_mem) && ctx.pc == 0x089496C4u) goto L_089496C4;
    return;
L_089496C4:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (49884u << 16u);
      if (branch_taken) {
          goto L_08949700;
      }
      goto L_089496D8;
    }
L_089496D8:
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2228u << 16u);
      if (branch_taken) {
          goto L_0894975C;
      }
      goto L_089496E8;
    }
L_089496E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30104)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894975C;
      }
      goto L_089496FC;
    }
L_089496FC:
    ctx.gpr[4] = (49884u << 16u);
    goto L_08949700;
L_08949700:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3232)));
        goto L_0894973C;
    }
    goto L_08949714;
L_08949714:
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2228u << 16u);
      if (branch_taken) {
          goto L_0894975C;
      }
      goto L_08949724;
    }
L_08949724:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30104)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894975C;
      }
      goto L_08949738;
    }
L_08949738:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3232)));
    goto L_0894973C;
L_0894973C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30104), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_0894975C;
L_0894975C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08949798u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 489u, 0x088C697Cu>(ctx, &aot_mem) && ctx.pc == 0x08949798u) goto L_08949798;
    return;
L_08949798:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
        goto L_08949898;
    }
    goto L_089497A0;
L_089497A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    if (ctx.gpr[4] == ctx.gpr[19]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
        goto L_08949898;
    }
    goto L_089497AC;
L_089497AC:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.gpr[31] = (0x089497C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 624u, 0x08942DA0u>(ctx, &aot_mem) && ctx.pc == 0x089497C4u) goto L_089497C4;
    return;
L_089497C4:
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
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[28];
    ctx.gpr[4] = (16948u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17144u << 16u);
      if (branch_taken) {
          goto L_08949894;
      }
      goto L_08949858;
    }
L_08949858:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08949894;
      }
      goto L_0894986C;
    }
L_0894986C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3232)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08949894;
L_08949894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    goto L_08949898;
L_08949898:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
        goto L_089498BC;
    }
    goto L_089498A4;
L_089498A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
        goto L_089498BC;
    }
    goto L_089498B0;
L_089498B0:
    ctx.gpr[31] = (0x089498B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089498B8u) goto L_089498B8;
    return;
L_089498B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_089498BC;
L_089498BC:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
        goto L_089498E0;
    }
    goto L_089498C8;
L_089498C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
        goto L_089498E0;
    }
    goto L_089498D4;
L_089498D4:
    ctx.gpr[31] = (0x089498DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089498DCu) goto L_089498DC;
    return;
L_089498DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    goto L_089498E0;
L_089498E0:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
        goto L_08949904;
    }
    goto L_089498EC;
L_089498EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
        goto L_08949904;
    }
    goto L_089498F8;
L_089498F8:
    ctx.gpr[31] = (0x08949900u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08949900u) goto L_08949900;
    return;
L_08949900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    goto L_08949904;
L_08949904:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949924;
      }
      goto L_08949910;
    }
L_08949910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949924;
      }
      goto L_0894991C;
    }
L_0894991C:
    ctx.gpr[31] = (0x08949924u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08949924u) goto L_08949924;
    return;
L_08949924:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(676)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(680)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(684)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(688)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(692)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(708)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(712)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(716)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(724)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(728)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894996C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-624));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(604), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), ctx.gpr[31]);
    ctx.gpr[31] = (0x089499ACu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 86u, 0x08A98340u>(ctx, &aot_mem) && ctx.pc == 0x089499ACu) goto L_089499AC;
    return;
L_089499AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3208)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089499E4;
      }
      goto L_089499B8;
    }
L_089499B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3208)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3208), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3208)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_089499E8;
    }
    goto L_089499D0;
L_089499D0:
    ctx.gpr[31] = (0x089499D8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 79u, 0x08A982F0u>(ctx, &aot_mem) && ctx.pc == 0x089499D8u) goto L_089499D8;
    return;
L_089499D8:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_089499E8;
    }
    goto L_089499E0;
L_089499E0:
    ctx.gpr[20] = (0u | 1u);
    goto L_089499E4;
L_089499E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    goto L_089499E8;
L_089499E8:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08949A04u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08949A04u) goto L_08949A04;
    return;
L_08949A04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08949A40;
      }
      goto L_08949A10;
    }
L_08949A10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949A40;
      }
      goto L_08949A24;
    }
L_08949A24:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08949A30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 331u, 0x088EE3ACu>(ctx, &aot_mem) && ctx.pc == 0x08949A30u) goto L_08949A30;
    return;
L_08949A30:
    ctx.gpr[31] = (0x08949A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 160u, 0x08868FC4u>(ctx, &aot_mem) && ctx.pc == 0x08949A38u) goto L_08949A38;
    return;
L_08949A38:
    ctx.gpr[31] = (0x08949A40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 321u, 0x088D5678u>(ctx, &aot_mem) && ctx.pc == 0x08949A40u) goto L_08949A40;
    return;
L_08949A40:
    ctx.gpr[31] = (0x08949A48u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 97u, 0x08A983B0u>(ctx, &aot_mem) && ctx.pc == 0x08949A48u) goto L_08949A48;
    return;
L_08949A48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949A94;
      }
      goto L_08949A50;
    }
L_08949A50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949A94;
      }
      goto L_08949A60;
    }
L_08949A60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08949A94;
      }
      goto L_08949A70;
    }
L_08949A70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u | 60000u);
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08949A8Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 659u, 0x08887620u>(ctx, &aot_mem) && ctx.pc == 0x08949A8Cu) goto L_08949A8C;
    return;
L_08949A8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949B10;
      }
      goto L_08949A94;
    }
L_08949A94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949B10;
      }
      goto L_08949AA4;
    }
L_08949AA4:
    ctx.gpr[31] = (0x08949AACu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 97u, 0x08A983B0u>(ctx, &aot_mem) && ctx.pc == 0x08949AACu) goto L_08949AAC;
    return;
L_08949AAC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949AF4;
      }
      goto L_08949AB4;
    }
L_08949AB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08949AF4;
      }
      goto L_08949AC4;
    }
L_08949AC4:
    ctx.gpr[31] = (0x08949ACCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 136u, 0x08A98578u>(ctx, &aot_mem) && ctx.pc == 0x08949ACCu) goto L_08949ACC;
    return;
L_08949ACC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949AF4;
      }
      goto L_08949AD4;
    }
L_08949AD4:
    ctx.gpr[31] = (0x08949ADCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 98u, 0x08A983B8u>(ctx, &aot_mem) && ctx.pc == 0x08949ADCu) goto L_08949ADC;
    return;
L_08949ADC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949AF4;
      }
      goto L_08949AE4;
    }
L_08949AE4:
    ctx.gpr[31] = (0x08949AECu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1100u, 0x08A97FD4u>(ctx, &aot_mem) && ctx.pc == 0x08949AECu) goto L_08949AEC;
    return;
L_08949AEC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949B10;
      }
      goto L_08949AF4;
    }
L_08949AF4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08949B00u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 686u, 0x088877F4u>(ctx, &aot_mem) && ctx.pc == 0x08949B00u) goto L_08949B00;
    return;
L_08949B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_08949B10;
L_08949B10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3229)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949B2C;
      }
      goto L_08949B1C;
    }
L_08949B1C:
    ctx.gpr[31] = (0x08949B24u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 79u, 0x08A982F0u>(ctx, &aot_mem) && ctx.pc == 0x08949B24u) goto L_08949B24;
    return;
L_08949B24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949B50;
      }
      goto L_08949B2C;
    }
L_08949B2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (17096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08949B64;
      }
      goto L_08949B48;
    }
L_08949B48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949BA8;
      }
      goto L_08949B50;
    }
L_08949B50:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3229), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08949B5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 207u, 0x08944E30u>(ctx, &aot_mem) && ctx.pc == 0x08949B5Cu) goto L_08949B5C;
    return;
L_08949B5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B11C;
      }
      goto L_08949B64;
    }
L_08949B64:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30160)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (16288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08949B98;
    }
    goto L_08949B98;
L_08949B98:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1722), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08949BCC;
      }
      goto L_08949BA8;
    }
L_08949BA8:
    ctx.gpr[4] = (17146u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08949BC0;
    }
    goto L_08949BC0;
L_08949BC0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1722), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08949BCC;
L_08949BCC:
    ctx.gpr[31] = (0x08949BD4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 79u, 0x08A982F0u>(ctx, &aot_mem) && ctx.pc == 0x08949BD4u) goto L_08949BD4;
    return;
L_08949BD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08949BE8;
      }
      goto L_08949BDC;
    }
L_08949BDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949BFC;
      }
      goto L_08949BE8;
    }
L_08949BE8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23516)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949BFC;
      }
      goto L_08949BF8;
    }
L_08949BF8:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23516), static_cast<std::uint8_t>(0u));
    goto L_08949BFC;
L_08949BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949F0C;
      }
      goto L_08949C08;
    }
L_08949C08:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[18] = (0u | 30u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08949CA8;
      }
      goto L_08949C30;
    }
L_08949C30:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08949CA8;
      }
      goto L_08949C58;
    }
L_08949C58:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08949CA8;
      }
      goto L_08949C80;
    }
L_08949C80:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08949F0C;
      }
      goto L_08949CA8;
    }
L_08949CA8:
    ctx.gpr[31] = (0x08949CB0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 86u, 0x08A98340u>(ctx, &aot_mem) && ctx.pc == 0x08949CB0u) goto L_08949CB0;
    return;
L_08949CB0:
    ctx.gpr[21] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12960));
      if (branch_taken) {
          goto L_08949CC8;
      }
      goto L_08949CBC;
    }
L_08949CBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_08949CD8;
    }
    goto L_08949CC8;
L_08949CC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949E60;
      }
      goto L_08949CD4;
    }
L_08949CD4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    goto L_08949CD8;
L_08949CD8:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08949D14;
      }
      goto L_08949CF8;
    }
L_08949CF8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08949D0Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 317u, 0x088EE2C8u>(ctx, &aot_mem) && ctx.pc == 0x08949D0Cu) goto L_08949D0C;
    return;
L_08949D0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949DD4;
      }
      goto L_08949D14;
    }
L_08949D14:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08949D64;
      }
      goto L_08949D3C;
    }
L_08949D3C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 29u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_08949D80;
    }
    goto L_08949D64;
L_08949D64:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08949D78u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 317u, 0x088EE2C8u>(ctx, &aot_mem) && ctx.pc == 0x08949D78u) goto L_08949D78;
    return;
L_08949D78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949DD4;
      }
      goto L_08949D80;
    }
L_08949D80:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08949DC0;
      }
      goto L_08949DA4;
    }
L_08949DA4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 46u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08949DB8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 317u, 0x088EE2C8u>(ctx, &aot_mem) && ctx.pc == 0x08949DB8u) goto L_08949DB8;
    return;
L_08949DB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949DD4;
      }
      goto L_08949DC0;
    }
L_08949DC0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 34u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08949DD4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 317u, 0x088EE2C8u>(ctx, &aot_mem) && ctx.pc == 0x08949DD4u) goto L_08949DD4;
    return;
L_08949DD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (17530u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08949DF0u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x08949DF0u) goto L_08949DF0;
    return;
L_08949DF0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949E14;
      }
      goto L_08949E00;
    }
L_08949E00:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08949E0Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 266u, 0x088D534Cu>(ctx, &aot_mem) && ctx.pc == 0x08949E0Cu) goto L_08949E0C;
    return;
L_08949E0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949E60;
      }
      goto L_08949E14;
    }
L_08949E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08949E54;
      }
      goto L_08949E24;
    }
L_08949E24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949E4C;
      }
      goto L_08949E30;
    }
L_08949E30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_08949E4C;
    }
    goto L_08949E3C;
L_08949E3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08949E48u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08949E48u) goto L_08949E48;
    return;
L_08949E48:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_08949E4C;
L_08949E4C:
    ctx.gpr[31] = (0x08949E54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x08949E54u) goto L_08949E54;
    return;
L_08949E54:
    ctx.gpr[4] = (0u | 12u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894B11C;
      }
      goto L_08949E60;
    }
L_08949E60:
    ctx.gpr[31] = (0x08949E68u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 339u, 0x088EE418u>(ctx, &aot_mem) && ctx.pc == 0x08949E68u) goto L_08949E68;
    return;
L_08949E68:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949F0C;
      }
      goto L_08949E70;
    }
L_08949E70:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08949F24;
      }
      goto L_08949E94;
    }
L_08949E94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08949F24;
      }
      goto L_08949EBC;
    }
L_08949EBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08949F24;
      }
      goto L_08949EE4;
    }
L_08949EE4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08949F24;
      }
      goto L_08949F0C;
    }
L_08949F0C:
    ctx.gpr[31] = (0x08949F14u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 9u, 0x08A98040u>(ctx, &aot_mem) && ctx.pc == 0x08949F14u) goto L_08949F14;
    return;
L_08949F14:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
        goto L_08949F2C;
    }
    goto L_08949F1C;
L_08949F1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A1B8;
      }
      goto L_08949F24;
    }
L_08949F24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B11C;
      }
      goto L_08949F2C;
    }
L_08949F2C:
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894A1B8;
      }
      goto L_08949F38;
    }
L_08949F38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3229)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949F50;
      }
      goto L_08949F44;
    }
L_08949F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_08949F50;
L_08949F50:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894A218;
      }
      goto L_08949F60;
    }
L_08949F60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 16u);
      if (branch_taken) {
          goto L_08949FEC;
      }
      goto L_08949F74;
    }
L_08949F74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949FEC;
      }
      goto L_08949F80;
    }
L_08949F80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08949F98;
      }
      goto L_08949F8C;
    }
L_08949F8C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2960), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08949FD8;
      }
      goto L_08949F98;
    }
L_08949F98:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30156)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2960)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2960), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08949FD8;
L_08949FD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[31] = (0x08949FE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 228u, 0x088D91E4u>(ctx, &aot_mem) && ctx.pc == 0x08949FE4u) goto L_08949FE4;
    return;
L_08949FE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A218;
      }
      goto L_08949FEC;
    }
L_08949FEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894A038;
      }
      goto L_08949FF8;
    }
L_08949FF8:
    ctx.gpr[31] = (0x0894A000u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 16u, 0x08A9807Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A000u) goto L_0894A000;
    return;
L_0894A000:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A014;
      }
      goto L_0894A008;
    }
L_0894A008:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2964), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0894A044;
      }
      goto L_0894A014;
    }
L_0894A014:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2964)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_0894A048;
    }
    goto L_0894A020;
L_0894A020:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2960)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8120)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2960), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894A044;
      }
      goto L_0894A038;
    }
L_0894A038:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2964), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2960), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0894A044;
L_0894A044:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    goto L_0894A048;
L_0894A048:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A0AC;
      }
      goto L_0894A068;
    }
L_0894A068:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894A0AC;
      }
      goto L_0894A090;
    }
L_0894A090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A118;
      }
      goto L_0894A0AC;
    }
L_0894A0AC:
    ctx.gpr[31] = (0x0894A0B4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 16u, 0x08A9807Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A0B4u) goto L_0894A0B4;
    return;
L_0894A0B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A218;
      }
      goto L_0894A0BC;
    }
L_0894A0BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894A0E8;
      }
      goto L_0894A0D8;
    }
L_0894A0D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894A104;
      }
      goto L_0894A0E8;
    }
L_0894A0E8:
    ctx.gpr[31] = (0x0894A0F0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 9u, 0x08A98040u>(ctx, &aot_mem) && ctx.pc == 0x0894A0F0u) goto L_0894A0F0;
    return;
L_0894A0F0:
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[31] = (0x0894A0FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 603u, 0x088DAB5Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A0FCu) goto L_0894A0FC;
    return;
L_0894A0FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A218;
      }
      goto L_0894A104;
    }
L_0894A104:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894A110u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 228u, 0x088D91E4u>(ctx, &aot_mem) && ctx.pc == 0x0894A110u) goto L_0894A110;
    return;
L_0894A110:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A218;
      }
      goto L_0894A118;
    }
L_0894A118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_0894A148;
    }
    goto L_0894A124;
L_0894A124:
    ctx.gpr[31] = (0x0894A12Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 16u, 0x08A9807Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A12Cu) goto L_0894A12C;
    return;
L_0894A12C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A218;
      }
      goto L_0894A134;
    }
L_0894A134:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894A140u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 228u, 0x088D91E4u>(ctx, &aot_mem) && ctx.pc == 0x0894A140u) goto L_0894A140;
    return;
L_0894A140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A218;
      }
      goto L_0894A148;
    }
L_0894A148:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894A194;
      }
      goto L_0894A16C;
    }
L_0894A16C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894A1A4;
      }
      goto L_0894A194;
    }
L_0894A194:
    ctx.gpr[31] = (0x0894A19Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 16u, 0x08A9807Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A19Cu) goto L_0894A19C;
    return;
L_0894A19C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A218;
      }
      goto L_0894A1A4;
    }
L_0894A1A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894A1B0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 228u, 0x088D91E4u>(ctx, &aot_mem) && ctx.pc == 0x0894A1B0u) goto L_0894A1B0;
    return;
L_0894A1B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A218;
      }
      goto L_0894A1B8;
    }
L_0894A1B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894A218;
      }
      goto L_0894A1D8;
    }
L_0894A1D8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2964), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0894A218;
      }
      goto L_0894A1FC;
    }
L_0894A1FC:
    ctx.gpr[31] = (0x0894A204u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 339u, 0x088EE418u>(ctx, &aot_mem) && ctx.pc == 0x0894A204u) goto L_0894A204;
    return;
L_0894A204:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A218;
      }
      goto L_0894A20C;
    }
L_0894A20C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894A218u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 266u, 0x088D534Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A218u) goto L_0894A218;
    return;
L_0894A218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A288;
      }
      goto L_0894A224;
    }
L_0894A224:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894A288;
      }
      goto L_0894A24C;
    }
L_0894A24C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 6u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A288;
      }
      goto L_0894A268;
    }
L_0894A268:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894A288;
      }
      goto L_0894A280;
    }
L_0894A280:
    ctx.gpr[31] = (0x0894A288u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 207u, 0x08944E30u>(ctx, &aot_mem) && ctx.pc == 0x0894A288u) goto L_0894A288;
    return;
L_0894A288:
    ctx.gpr[31] = (0x0894A290u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 79u, 0x08A982F0u>(ctx, &aot_mem) && ctx.pc == 0x0894A290u) goto L_0894A290;
    return;
L_0894A290:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AB58;
      }
      goto L_0894A298;
    }
L_0894A298:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894AB58;
      }
      goto L_0894A2A8;
    }
L_0894A2A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[21] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[18] = (2232u << 16u);
      if (branch_taken) {
          goto L_0894A2C8;
      }
      goto L_0894A2B8;
    }
L_0894A2B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894AB58;
      }
      goto L_0894A2C4;
    }
L_0894A2C4:
    ctx.gpr[18] = (2232u << 16u);
    goto L_0894A2C8;
L_0894A2C8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12960));
    ctx.gpr[31] = (0x0894A2D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 339u, 0x088EE418u>(ctx, &aot_mem) && ctx.pc == 0x0894A2D4u) goto L_0894A2D4;
    return;
L_0894A2D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894AB58;
      }
      goto L_0894A2DC;
    }
L_0894A2DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AB58;
      }
      goto L_0894A2F4;
    }
L_0894A2F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3208)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_0894A318;
      }
      goto L_0894A300;
    }
L_0894A300:
    ctx.gpr[31] = (0x0894A308u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 786u, 0x08A97200u>(ctx, &aot_mem) && ctx.pc == 0x0894A308u) goto L_0894A308;
    return;
L_0894A308:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3229)));
        goto L_0894A320;
    }
    goto L_0894A310;
L_0894A310:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A500;
      }
      goto L_0894A318;
    }
L_0894A318:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B11C;
      }
      goto L_0894A320;
    }
L_0894A320:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A500;
      }
      goto L_0894A328;
    }
L_0894A328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A500;
      }
      goto L_0894A334;
    }
L_0894A334:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894A500;
      }
      goto L_0894A364;
    }
L_0894A364:
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3229), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(664), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894A38Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 460u, 0x08945E30u>(ctx, &aot_mem) && ctx.pc == 0x0894A38Cu) goto L_0894A38C;
    return;
L_0894A38C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(400));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0894A3D8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 609u, 0x088EBB74u>(ctx, &aot_mem) && ctx.pc == 0x0894A3D8u) goto L_0894A3D8;
    return;
L_0894A3D8:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0894A408u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 241u, 0x08A1D350u>(ctx, &aot_mem) && ctx.pc == 0x0894A408u) goto L_0894A408;
    return;
L_0894A408:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0894A424u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 241u, 0x08A1D350u>(ctx, &aot_mem) && ctx.pc == 0x0894A424u) goto L_0894A424;
    return;
L_0894A424:
    ctx.gpr[31] = (0x0894A42Cu);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D380u>(ctx, &aot_mem) && ctx.pc == 0x0894A42Cu) goto L_0894A42C;
    return;
L_0894A42C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (49884u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17116u << 16u);
      if (branch_taken) {
          goto L_0894A45C;
      }
      goto L_0894A448;
    }
L_0894A448:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894A494;
      }
      goto L_0894A45C;
    }
L_0894A45C:
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x0894A48Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x0894A48Cu) goto L_0894A48C;
    return;
L_0894A48C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0894A494;
L_0894A494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0894A4D8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 168u, 0x0886905Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A4D8u) goto L_0894A4D8;
    return;
L_0894A4D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[31] = (0x0894A4E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 516u, 0x0899EDBCu>(ctx, &aot_mem) && ctx.pc == 0x0894A4E4u) goto L_0894A4E4;
    return;
L_0894A4E4:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-30152), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[31] = (0x0894A4F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 266u, 0x088D534Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A4F8u) goto L_0894A4F8;
    return;
L_0894A4F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AB7C;
      }
      goto L_0894A500;
    }
L_0894A500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A614;
      }
      goto L_0894A514;
    }
L_0894A514:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23516)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0894A5A4;
      }
      goto L_0894A524;
    }
L_0894A524:
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
        goto L_0894A53C;
    }
    goto L_0894A52C;
L_0894A52C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A544;
      }
      goto L_0894A538;
    }
L_0894A538:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    goto L_0894A53C;
L_0894A53C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A5C8;
      }
      goto L_0894A544;
    }
L_0894A544:
    ctx.gpr[31] = (0x0894A54Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0894BB2C;
L_0894A54C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A5C8;
      }
      goto L_0894A558;
    }
L_0894A558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A5C8;
      }
      goto L_0894A568;
    }
L_0894A568:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3229)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A5C8;
      }
      goto L_0894A574;
    }
L_0894A574:
    ctx.gpr[10] = (16204u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] | 52429u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0894A59Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 168u, 0x0886905Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A59Cu) goto L_0894A59C;
    return;
L_0894A59C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A5C8;
      }
      goto L_0894A5A4;
    }
L_0894A5A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23516)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A5BC;
      }
      goto L_0894A5B0;
    }
L_0894A5B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A5C8;
      }
      goto L_0894A5BC;
    }
L_0894A5BC:
    ctx.gpr[31] = (0x0894A5C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0894BB2C;
L_0894A5C4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_0894A5C8;
L_0894A5C8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A60C;
      }
      goto L_0894A5D8;
    }
L_0894A5D8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A60C;
      }
      goto L_0894A5E0;
    }
L_0894A5E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A60C;
      }
      goto L_0894A600;
    }
L_0894A600:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3236), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0894A60C;
L_0894A60C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AB7C;
      }
      goto L_0894A614;
    }
L_0894A614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A634;
      }
      goto L_0894A620;
    }
L_0894A620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
        goto L_0894A644;
    }
    goto L_0894A62C;
L_0894A62C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A6CC;
      }
      goto L_0894A634;
    }
L_0894A634:
    ctx.gpr[31] = (0x0894A63Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 207u, 0x08944E30u>(ctx, &aot_mem) && ctx.pc == 0x0894A63Cu) goto L_0894A63C;
    return;
L_0894A63C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B11C;
      }
      goto L_0894A644;
    }
L_0894A644:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A6CC;
      }
      goto L_0894A660;
    }
L_0894A660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0894A698;
      }
      goto L_0894A670;
    }
L_0894A670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A730;
      }
      goto L_0894A680;
    }
L_0894A680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0894A730;
      }
      goto L_0894A694;
    }
L_0894A694:
    ctx.gpr[4] = (2230u << 16u);
    goto L_0894A698;
L_0894A698:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29516)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A6CC;
      }
      goto L_0894A6A4;
    }
L_0894A6A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[5] = (0u | 54u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894A730;
      }
      goto L_0894A6B8;
    }
L_0894A6B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894A730;
      }
      goto L_0894A6CC;
    }
L_0894A6CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.gpr[31] = (0x0894A700u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 244u, 0x08945088u>(ctx, &aot_mem) && ctx.pc == 0x0894A700u) goto L_0894A700;
    return;
L_0894A700:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A720;
      }
      goto L_0894A708;
    }
L_0894A708:
    ctx.gpr[31] = (0x0894A710u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 479u, 0x088D642Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A710u) goto L_0894A710;
    return;
L_0894A710:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
        goto L_0894A740;
    }
    goto L_0894A718;
L_0894A718:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A784;
      }
      goto L_0894A720;
    }
L_0894A720:
    ctx.gpr[31] = (0x0894A728u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 207u, 0x08944E30u>(ctx, &aot_mem) && ctx.pc == 0x0894A728u) goto L_0894A728;
    return;
L_0894A728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B11C;
      }
      goto L_0894A730;
    }
L_0894A730:
    ctx.gpr[31] = (0x0894A738u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 207u, 0x08944E30u>(ctx, &aot_mem) && ctx.pc == 0x0894A738u) goto L_0894A738;
    return;
L_0894A738:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B11C;
      }
      goto L_0894A740;
    }
L_0894A740:
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A784;
      }
      goto L_0894A74C;
    }
L_0894A74C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x0894A76Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A76Cu) goto L_0894A76C;
    return;
L_0894A76C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A720;
      }
      goto L_0894A784;
    }
L_0894A784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A798;
      }
      goto L_0894A790;
    }
L_0894A790:
    ctx.gpr[31] = (0x0894A798u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 54u, 0x08944354u>(ctx, &aot_mem) && ctx.pc == 0x0894A798u) goto L_0894A798;
    return;
L_0894A798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A7F0;
      }
      goto L_0894A7A4;
    }
L_0894A7A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3229)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A7F0;
      }
      goto L_0894A7B0;
    }
L_0894A7B0:
    ctx.gpr[31] = (0x0894A7B8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 154u, 0x08A9864Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A7B8u) goto L_0894A7B8;
    return;
L_0894A7B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A7D0;
      }
      goto L_0894A7C0;
    }
L_0894A7C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894A7D0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 27u, 0x0894C1F4u>(ctx, &aot_mem) && ctx.pc == 0x0894A7D0u) goto L_0894A7D0;
    return;
L_0894A7D0:
    ctx.gpr[31] = (0x0894A7D8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 162u, 0x08A9869Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A7D8u) goto L_0894A7D8;
    return;
L_0894A7D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A7F0;
      }
      goto L_0894A7E0;
    }
L_0894A7E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894A7F0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 27u, 0x0894C1F4u>(ctx, &aot_mem) && ctx.pc == 0x0894A7F0u) goto L_0894A7F0;
    return;
L_0894A7F0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23516)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894AB50;
      }
      goto L_0894A800;
    }
L_0894A800:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0894A814u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 317u, 0x088EE2C8u>(ctx, &aot_mem) && ctx.pc == 0x0894A814u) goto L_0894A814;
    return;
L_0894A814:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(127)));
        goto L_0894AB14;
    }
    goto L_0894A824;
L_0894A824:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0894A878;
      }
      goto L_0894A84C;
    }
L_0894A84C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x0894A86Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A86Cu) goto L_0894A86C;
    return;
L_0894A86C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0894A884;
      }
      goto L_0894A878;
    }
L_0894A878:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3032), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3024), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_0894AB10;
      }
      goto L_0894A884;
    }
L_0894A884:
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[17] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[7] = (17692u << 16u);
    ctx.gpr[8] = (16256u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 16384u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3236)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_0894A8F0;
      }
      goto L_0894A8D0;
    }
L_0894A8D0:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[15];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
      if (branch_taken) {
          goto L_0894A918;
      }
      goto L_0894A8F0;
    }
L_0894A8F0:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[15];
    ctx.gpr[5] = (32768u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[16];
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    goto L_0894A918;
L_0894A918:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[5] = (20352u << 16u);
      if (branch_taken) {
          goto L_0894A928;
      }
      goto L_0894A920;
    }
L_0894A920:
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[19];
    goto L_0894A928;
L_0894A928:
    ctx.fpr[17] = ctx.fpr[14] + ctx.fpr[17];
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3236), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[17]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_0894A948;
    }
    goto L_0894A948;
L_0894A948:
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3028), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3028), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3240)));
      if (branch_taken) {
          goto L_0894A990;
      }
      goto L_0894A970;
    }
L_0894A970:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0894A9B8;
      }
      goto L_0894A990;
    }
L_0894A990:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_0894A9B8;
L_0894A9B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[4] = (20352u << 16u);
      if (branch_taken) {
          goto L_0894A9C8;
      }
      goto L_0894A9C0;
    }
L_0894A9C0:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_0894A9C8;
L_0894A9C8:
    ctx.fpr[12] = ctx.fpr[17] + ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3036)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894A9F0;
      }
      goto L_0894A9D8;
    }
L_0894A9D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3240)));
    ctx.gpr[4] = (17146u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3036), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0894A9F0;
L_0894A9F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3240)));
    ctx.fpr[18] = ctx.fpr[12] / ctx.fpr[18];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
        goto L_0894AA0C;
    }
    goto L_0894AA0C;
L_0894AA0C:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3032), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3032), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3024), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AB10;
      }
      goto L_0894AA48;
    }
L_0894AA48:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0894AA78;
      }
      goto L_0894AA5C;
    }
L_0894AA5C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x0894AA6Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0894AA6Cu) goto L_0894AA6C;
    return;
L_0894AA6C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0894AA78;
L_0894AA78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
        goto L_0894AAB8;
    }
    goto L_0894AA98;
L_0894AA98:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(385));
    ctx.gpr[31] = (0x0894AAA8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0894AAA8u) goto L_0894AAA8;
    return;
L_0894AAA8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(385)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    goto L_0894AAB8;
L_0894AAB8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x0894AB00u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x0894AB00u) goto L_0894AB00;
    return;
L_0894AB00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3024), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0894AB10;
L_0894AB10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(127)));
    goto L_0894AB14;
L_0894AB14:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894AB50;
      }
      goto L_0894AB40;
    }
L_0894AB40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0894AB50u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 316u, 0x088EE2B4u>(ctx, &aot_mem) && ctx.pc == 0x0894AB50u) goto L_0894AB50;
    return;
L_0894AB50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AB7C;
      }
      goto L_0894AB58;
    }
L_0894AB58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AB7C;
      }
      goto L_0894AB6C;
    }
L_0894AB6C:
    ctx.gpr[31] = (0x0894AB74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 207u, 0x08944E30u>(ctx, &aot_mem) && ctx.pc == 0x0894AB74u) goto L_0894AB74;
    return;
L_0894AB74:
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3208), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0894AB7C;
L_0894AB7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B100;
      }
      goto L_0894AB90;
    }
L_0894AB90:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_0894AC04;
      }
      goto L_0894ABD8;
    }
L_0894ABD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(784));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0894ABECu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 42u, 0x08AA83C4u>(ctx, &aot_mem) && ctx.pc == 0x0894ABECu) goto L_0894ABEC;
    return;
L_0894ABEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AE2C;
      }
      goto L_0894AC04;
    }
L_0894AC04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AE1C;
      }
      goto L_0894AC24;
    }
L_0894AC24:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2224u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0894AC58u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18044));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894AC58u) goto L_0894AC58;
    return;
L_0894AC58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894ADD8;
      }
      goto L_0894AC60;
    }
L_0894AC60:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_0894AC90;
    }
    goto L_0894AC70;
L_0894AC70:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.gpr[31] = (0x0894AC80u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0894AC80u) goto L_0894AC80;
    return;
L_0894AC80:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_0894AC90;
L_0894AC90:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 65535u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AD98;
      }
      goto L_0894ACA8;
    }
L_0894ACA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (0u | 65535u);
      if (branch_taken) {
          goto L_0894ACD0;
      }
      goto L_0894ACB4;
    }
L_0894ACB4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(417));
    ctx.gpr[31] = (0x0894ACC4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0894ACC4u) goto L_0894ACC4;
    return;
L_0894ACC4:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(417)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0894ACD0;
L_0894ACD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    if (ctx.gpr[5] != ctx.gpr[23]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3))))));
        goto L_0894ACE8;
    }
    goto L_0894ACE0;
L_0894ACE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0894ACFC;
      }
      goto L_0894ACE8;
    }
L_0894ACE8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x0894ACF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x0894ACF8u) goto L_0894ACF8;
    return;
L_0894ACF8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0894ACFC;
L_0894ACFC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AD98;
      }
      goto L_0894AD04;
    }
L_0894AD04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_0894AD30;
    }
    goto L_0894AD10;
L_0894AD10:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(418));
    ctx.gpr[31] = (0x0894AD20u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0894AD20u) goto L_0894AD20;
    return;
L_0894AD20:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(418)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_0894AD30;
L_0894AD30:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    if (ctx.gpr[5] != ctx.gpr[23]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3))))));
        goto L_0894AD44;
    }
    goto L_0894AD3C;
L_0894AD3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0894AD58;
      }
      goto L_0894AD44;
    }
L_0894AD44:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x0894AD54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x0894AD54u) goto L_0894AD54;
    return;
L_0894AD54:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_0894AD58;
L_0894AD58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_0894AD84;
    }
    goto L_0894AD64;
L_0894AD64:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(419));
    ctx.gpr[31] = (0x0894AD74u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0894AD74u) goto L_0894AD74;
    return;
L_0894AD74:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(419)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_0894AD84;
L_0894AD84:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894ADD0;
      }
      goto L_0894AD98;
    }
L_0894AD98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_0894ADC4;
    }
    goto L_0894ADA4;
L_0894ADA4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(420));
    ctx.gpr[31] = (0x0894ADB4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0894ADB4u) goto L_0894ADB4;
    return;
L_0894ADB4:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_0894ADC4;
L_0894ADC4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
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
    goto L_0894ADD0;
L_0894ADD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AE14;
      }
      goto L_0894ADD8;
    }
L_0894ADD8:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_0894AE08;
    }
    goto L_0894ADE8;
L_0894ADE8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(421));
    ctx.gpr[31] = (0x0894ADF8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0894ADF8u) goto L_0894ADF8;
    return;
L_0894ADF8:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(421)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_0894AE08;
L_0894AE08:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
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
    goto L_0894AE14;
L_0894AE14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AE2C;
      }
      goto L_0894AE1C;
    }
L_0894AE1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    goto L_0894AE2C;
L_0894AE2C:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AEE8;
      }
      goto L_0894AE40;
    }
L_0894AE40:
    ctx.gpr[4] = (16416u << 16u);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3028)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3024)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3028)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3024)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0894AEE8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x0894AEE8u) goto L_0894AEE8;
    return;
L_0894AEE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3229)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894AF5C;
      }
      goto L_0894AEF4;
    }
L_0894AEF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16204u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0894AF38;
      }
      goto L_0894AF0C;
    }
L_0894AF0C:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0894AF30u);
    ctx.gpr[8] = (0u | 225u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 168u, 0x0886905Cu>(ctx, &aot_mem) && ctx.pc == 0x0894AF30u) goto L_0894AF30;
    return;
L_0894AF30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AF5C;
      }
      goto L_0894AF38;
    }
L_0894AF38:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0894AF5Cu);
    ctx.gpr[8] = (0u | 225u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 168u, 0x0886905Cu>(ctx, &aot_mem) && ctx.pc == 0x0894AF5Cu) goto L_0894AF5C;
    return;
L_0894AF5C:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(3008));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B020;
      }
      goto L_0894AF88;
    }
L_0894AF88:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B020;
      }
      goto L_0894AF94;
    }
L_0894AF94:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(336)));
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
        goto L_0894AFE0;
    }
    goto L_0894AFA0;
L_0894AFA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
        goto L_0894AFCC;
    }
    goto L_0894AFAC;
L_0894AFAC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[31] = (0x0894AFBCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0894AFBCu) goto L_0894AFBC;
    return;
L_0894AFBC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    goto L_0894AFCC;
L_0894AFCC:
    ctx.gpr[5] = (0u | 41u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B018;
      }
      goto L_0894AFDC;
    }
L_0894AFDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    goto L_0894AFE0;
L_0894AFE0:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
        goto L_0894B008;
    }
    goto L_0894AFE8;
L_0894AFE8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(513));
    ctx.gpr[31] = (0x0894AFF8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0894AFF8u) goto L_0894AFF8;
    return;
L_0894AFF8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(513)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    goto L_0894B008;
L_0894B008:
    ctx.gpr[5] = (0u | 45u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B020;
      }
      goto L_0894B018;
    }
L_0894B018:
    ctx.gpr[31] = (0x0894B020u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 207u, 0x08944E30u>(ctx, &aot_mem) && ctx.pc == 0x0894B020u) goto L_0894B020;
    return;
L_0894B020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B064;
      }
      goto L_0894B038;
    }
L_0894B038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B0F8;
      }
      goto L_0894B044;
    }
L_0894B044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B064;
      }
      goto L_0894B054;
    }
L_0894B054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B0F8;
      }
      goto L_0894B064;
    }
L_0894B064:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27452)));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
      if (branch_taken) {
          goto L_0894B098;
      }
      goto L_0894B074;
    }
L_0894B074:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B0BC;
      }
      goto L_0894B098;
    }
L_0894B098:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
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
    goto L_0894B0BC;
L_0894B0BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
      if (branch_taken) {
          goto L_0894B0E4;
      }
      goto L_0894B0D4;
    }
L_0894B0D4:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894B0F4;
      }
      goto L_0894B0E4;
    }
L_0894B0E4:
    ctx.gpr[31] = (0x0894B0ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x0894B0ECu) goto L_0894B0EC;
    return;
L_0894B0EC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0894B0F4;
      }
      goto L_0894B0F4;
    }
L_0894B0F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0894B0F8;
L_0894B0F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B110;
      }
      goto L_0894B100;
    }
L_0894B100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B110;
      }
      goto L_0894B110;
    }
L_0894B110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2996), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0894B11C;
L_0894B11C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(604)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B150:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894B174u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 83u, 0x0891857Cu>(ctx, &aot_mem) && ctx.pc == 0x0894B174u) goto L_0894B174;
    return;
L_0894B174:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B648;
      }
      goto L_0894B17C;
    }
L_0894B17C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B648;
      }
      goto L_0894B188;
    }
L_0894B188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-30152)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 34u);
      if (branch_taken) {
          goto L_0894B36C;
      }
      goto L_0894B1AC;
    }
L_0894B1AC:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0894B36C;
      }
      goto L_0894B1CC;
    }
L_0894B1CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B36C;
      }
      goto L_0894B1DC;
    }
L_0894B1DC:
    ctx.gpr[31] = (0x0894B1E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 72u, 0x08A982A4u>(ctx, &aot_mem) && ctx.pc == 0x0894B1E4u) goto L_0894B1E4;
    return;
L_0894B1E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B2A4;
      }
      goto L_0894B1EC;
    }
L_0894B1EC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2388))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
      if (branch_taken) {
          goto L_0894B36C;
      }
      goto L_0894B200;
    }
L_0894B200:
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_0894B36C;
      }
      goto L_0894B20C;
    }
L_0894B20C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 39u);
      if (branch_taken) {
          goto L_0894B36C;
      }
      goto L_0894B214;
    }
L_0894B214:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_0894B36C;
      }
      goto L_0894B21C;
    }
L_0894B21C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 40u);
      if (branch_taken) {
          goto L_0894B36C;
      }
      goto L_0894B224;
    }
L_0894B224:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 46u);
      if (branch_taken) {
          goto L_0894B36C;
      }
      goto L_0894B22C;
    }
L_0894B22C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B36C;
      }
      goto L_0894B234;
    }
L_0894B234:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    goto L_0894B244;
L_0894B244:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B258;
      }
      goto L_0894B24C;
    }
L_0894B24C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
      if (branch_taken) {
          goto L_0894B36C;
      }
      goto L_0894B258;
    }
L_0894B258:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B28C;
      }
      goto L_0894B274;
    }
L_0894B274:
    ctx.gpr[31] = (0x0894B27Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 306u, 0x08851D00u>(ctx, &aot_mem) && ctx.pc == 0x0894B27Cu) goto L_0894B27C;
    return;
L_0894B27C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B28C;
      }
      goto L_0894B284;
    }
L_0894B284:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
      if (branch_taken) {
          goto L_0894B36C;
      }
      goto L_0894B28C;
    }
L_0894B28C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2948))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
      if (branch_taken) {
          goto L_0894B244;
      }
      goto L_0894B2A4;
    }
L_0894B2A4:
    ctx.gpr[31] = (0x0894B2ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 65u, 0x08A98258u>(ctx, &aot_mem) && ctx.pc == 0x0894B2ACu) goto L_0894B2AC;
    return;
L_0894B2AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
      if (branch_taken) {
          goto L_0894B36C;
      }
      goto L_0894B2B4;
    }
L_0894B2B4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2388))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_0894B36C;
      }
      goto L_0894B2C8;
    }
L_0894B2C8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_0894B36C;
      }
      goto L_0894B2D0;
    }
L_0894B2D0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 46u);
      if (branch_taken) {
          goto L_0894B36C;
      }
      goto L_0894B2D8;
    }
L_0894B2D8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B36C;
      }
      goto L_0894B2E0;
    }
L_0894B2E0:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[19] = (0u | 9u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2948))))));
    goto L_0894B2F0;
L_0894B2F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0894B300;
      }
      goto L_0894B2F8;
    }
L_0894B2F8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2948))))));
    goto L_0894B300;
L_0894B300:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B310;
      }
      goto L_0894B308;
    }
L_0894B308:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
      if (branch_taken) {
          goto L_0894B36C;
      }
      goto L_0894B310;
    }
L_0894B310:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B344;
      }
      goto L_0894B32C;
    }
L_0894B32C:
    ctx.gpr[31] = (0x0894B334u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 306u, 0x08851D00u>(ctx, &aot_mem) && ctx.pc == 0x0894B334u) goto L_0894B334;
    return;
L_0894B334:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B344;
      }
      goto L_0894B33C;
    }
L_0894B33C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
      if (branch_taken) {
          goto L_0894B36C;
      }
      goto L_0894B344;
    }
L_0894B344:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2948))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B364;
      }
      goto L_0894B35C;
    }
L_0894B35C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
      if (branch_taken) {
          goto L_0894B36C;
      }
      goto L_0894B364;
    }
L_0894B364:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B2F0;
      }
      goto L_0894B36C;
    }
L_0894B36C:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x0894B388u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x0894B388u) goto L_0894B388;
    return;
L_0894B388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_0894B3D8;
    }
    goto L_0894B394;
L_0894B394:
    ctx.gpr[31] = (0x0894B39Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 9u, 0x08A98040u>(ctx, &aot_mem) && ctx.pc == 0x0894B39Cu) goto L_0894B39C;
    return;
L_0894B39C:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894B3C8;
      }
      goto L_0894B3B4;
    }
L_0894B3B4:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 33u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_0894B3D8;
    }
    goto L_0894B3C8;
L_0894B3C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1440)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0894B404;
      }
      goto L_0894B3D4;
    }
L_0894B3D4:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    goto L_0894B3D8;
L_0894B3D8:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0894B648;
      }
      goto L_0894B3F8;
    }
L_0894B3F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1440)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0894B648;
      }
      goto L_0894B404;
    }
L_0894B404:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2388))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    ctx.gpr[6] = (0u | 7u);
      if (branch_taken) {
          goto L_0894B440;
      }
      goto L_0894B418;
    }
L_0894B418:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 8u);
      if (branch_taken) {
          goto L_0894B440;
      }
      goto L_0894B420;
    }
L_0894B420:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B440;
      }
      goto L_0894B428;
    }
L_0894B428:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0894B448;
      }
      goto L_0894B438;
    }
L_0894B438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B5B4;
      }
      goto L_0894B440;
    }
L_0894B440:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B6B0;
      }
      goto L_0894B448;
    }
L_0894B448:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0894B458u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0894B458u) goto L_0894B458;
    return;
L_0894B458:
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_0894B57C;
      }
      goto L_0894B46C;
    }
L_0894B46C:
    ctx.gpr[4] = (ctx.gpr[8] << 5u);
    ctx.gpr[9] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[3] = (0u | 80u);
    ctx.gpr[12] = (0u | 2u);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-8));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[4]);
    goto L_0894B498;
L_0894B498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_0894B4B8;
    }
    goto L_0894B4B0;
L_0894B4B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_0894B4BC;
      }
      goto L_0894B4B8;
    }
L_0894B4B8:
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[9]);
    goto L_0894B4BC;
L_0894B4BC:
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B568;
      }
      goto L_0894B4C8;
    }
L_0894B4C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B568;
      }
      goto L_0894B4D4;
    }
L_0894B4D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(1512)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B568;
      }
      goto L_0894B4E0;
    }
L_0894B4E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[11] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[11] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[2] = (ctx.gpr[7] | 0u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[11]) < 1 ? 1u : 0u);
    if (ctx.gpr[14] != 0u) {
    ctx.gpr[2] = (ctx.gpr[11] | 0u);
        goto L_0894B510;
    }
    goto L_0894B510;
L_0894B510:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1440), ctx.gpr[2]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(648)));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B568;
      }
      goto L_0894B520;
    }
L_0894B520:
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(646)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) > 0;
    // nop
      if (branch_taken) {
          goto L_0894B568;
      }
      goto L_0894B52C;
    }
L_0894B52C:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[11] = (ctx.gpr[11] & 64u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B568;
      }
      goto L_0894B53C;
    }
L_0894B53C:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(68)));
    ctx.gpr[11] = (ctx.gpr[11] & 496u);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0894B568;
      }
      goto L_0894B54C;
    }
L_0894B54C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1440), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1509))))));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(648), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(1512), 0u);
    goto L_0894B568;
L_0894B568:
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1760));
      if (branch_taken) {
          goto L_0894B498;
      }
      goto L_0894B57C;
    }
L_0894B57C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B5AC;
      }
      goto L_0894B584;
    }
L_0894B584:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1440)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_0894B5AC;
      }
      goto L_0894B5A4;
    }
L_0894B5A4:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0894B5AC;
L_0894B5AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2948))))));
      if (branch_taken) {
          goto L_0894B5C0;
      }
      goto L_0894B5B4;
    }
L_0894B5B4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2948))))));
    goto L_0894B5C0;
L_0894B5C0:
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[7] = (0u | 15u);
    ctx.gpr[8] = (0u | 14u);
    ctx.gpr[9] = (0u | 12u);
    goto L_0894B5D0;
L_0894B5D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0894B5E4;
      }
      goto L_0894B5D8;
    }
L_0894B5D8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0894B648;
      }
      goto L_0894B5E4;
    }
L_0894B5E4:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[10] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_0894B60C;
      }
      goto L_0894B5F8;
    }
L_0894B5F8:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1428)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894B60C;
      }
      goto L_0894B604;
    }
L_0894B604:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0894B648;
      }
      goto L_0894B60C;
    }
L_0894B60C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1440)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0894B638;
      }
      goto L_0894B618;
    }
L_0894B618:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0894B638;
      }
      goto L_0894B620;
    }
L_0894B620:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0894B638;
      }
      goto L_0894B628;
    }
L_0894B628:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0894B638;
      }
      goto L_0894B630;
    }
L_0894B630:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0894B648;
      }
      goto L_0894B638;
    }
L_0894B638:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
      if (branch_taken) {
          goto L_0894B5D0;
      }
      goto L_0894B648;
    }
L_0894B648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B6B0;
      }
      goto L_0894B654;
    }
L_0894B654:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894B6B0;
      }
      goto L_0894B664;
    }
L_0894B664:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 22u);
      if (branch_taken) {
          goto L_0894B6B0;
      }
      goto L_0894B674;
    }
L_0894B674:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 17u);
      if (branch_taken) {
          goto L_0894B6B0;
      }
      goto L_0894B67C;
    }
L_0894B67C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_0894B6B0;
      }
      goto L_0894B684;
    }
L_0894B684:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1420)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B6B0;
      }
      goto L_0894B690;
    }
L_0894B690:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (50298u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894B6A4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 460u, 0x088D6300u>(ctx, &aot_mem) && ctx.pc == 0x0894B6A4u) goto L_0894B6A4;
    return;
L_0894B6A4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[31] = (0x0894B6B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 16u, 0x089440E8u>(ctx, &aot_mem) && ctx.pc == 0x0894B6B0u) goto L_0894B6B0;
    return;
L_0894B6B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B6CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894B70Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x0894B70Cu) goto L_0894B70C;
    return;
L_0894B70C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0894B718u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x0894B718u) goto L_0894B718;
    return;
L_0894B718:
    ctx.gpr[31] = (0x0894B720u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 856u, 0x08A9751Cu>(ctx, &aot_mem) && ctx.pc == 0x0894B720u) goto L_0894B720;
    return;
L_0894B720:
    ctx.gpr[4] = (0u - ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0894B734u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x0894B734u) goto L_0894B734;
    return;
L_0894B734:
    ctx.gpr[31] = (0x0894B73Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 888u, 0x08A976B0u>(ctx, &aot_mem) && ctx.pc == 0x0894B73Cu) goto L_0894B73C;
    return;
L_0894B73C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0894B750u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x0894B750u) goto L_0894B750;
    return;
L_0894B750:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 30u);
      if (branch_taken) {
          goto L_0894B7F0;
      }
      goto L_0894B768;
    }
L_0894B768:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3229)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B7F0;
      }
      goto L_0894B774;
    }
L_0894B774:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B7F0;
      }
      goto L_0894B788;
    }
L_0894B788:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1428));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B7F0;
      }
      goto L_0894B7AC;
    }
L_0894B7AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[5] = (48991u << 16u);
      if (branch_taken) {
          goto L_0894B7F0;
      }
      goto L_0894B7BC;
    }
L_0894B7BC:
    ctx.gpr[5] = (ctx.gpr[5] | 26355u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (16223u << 16u);
      if (branch_taken) {
          goto L_0894B7EC;
      }
      goto L_0894B7D4;
    }
L_0894B7D4:
    ctx.gpr[5] = (ctx.gpr[5] | 26355u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894B7F0;
      }
      goto L_0894B7EC;
    }
L_0894B7EC:
    ctx.gpr[4] = (0u | 1u);
    goto L_0894B7F0;
L_0894B7F0:
    // Free aim strafes as the game does when locked on: with the stick past 50 degrees off the camera (f22, the game's
    // own angle), the back, left and right walks, the body kept to the camera. The lock-on target isn't needed.
    if (lcs::lcs_free_aim_active()) ctx.gpr[4] = std::fabs(ctx.fpr[22]) > 0.87266463f ? 1u : 0u;
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_0894B834;
    }
    goto L_0894B7F8;
L_0894B7F8:
    ctx.gpr[31] = (0x0894B800u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 388u, 0x0899E3A8u>(ctx, &aot_mem) && ctx.pc == 0x0894B800u) goto L_0894B800;
    return;
L_0894B800:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_0894B834;
    }
    goto L_0894B808;
L_0894B808:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x0894B828u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 291u, 0x08851C88u>(ctx, &aot_mem) && ctx.pc == 0x0894B828u) goto L_0894B828;
    return;
L_0894B828:
    // The game strafes with one-handed guns only (0x08851C88). Free aim strafes with any gun, as Classic Axis does.
    if (lcs::lcs_free_aim_active()) ctx.gpr[2] = 1u;
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B9E0;
      }
      goto L_0894B830;
    }
L_0894B830:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    goto L_0894B834;
L_0894B834:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0894B878;
      }
      goto L_0894B854;
    }
L_0894B854:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[4] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894BB10;
      }
      goto L_0894B864;
    }
L_0894B864:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(744), ctx.gpr[4]);
    ctx.gpr[31] = (0x0894B870u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 651u, 0x08942FE8u>(ctx, &aot_mem) && ctx.pc == 0x0894B870u) goto L_0894B870;
    return;
L_0894B870:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BB10;
      }
      goto L_0894B878;
    }
L_0894B878:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B918;
      }
      goto L_0894B888;
    }
L_0894B888:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B918;
      }
      goto L_0894B898;
    }
L_0894B898:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B918;
      }
      goto L_0894B8A8;
    }
L_0894B8A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 23u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B918;
      }
      goto L_0894B8B8;
    }
L_0894B8B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B918;
      }
      goto L_0894B8C8;
    }
L_0894B8C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B918;
      }
      goto L_0894B8D8;
    }
L_0894B8D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B918;
      }
      goto L_0894B8E8;
    }
L_0894B8E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B918;
      }
      goto L_0894B8F8;
    }
L_0894B8F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B918;
      }
      goto L_0894B908;
    }
L_0894B908:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B93C;
      }
      goto L_0894B918;
    }
L_0894B918:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[4] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894BB10;
      }
      goto L_0894B928;
    }
L_0894B928:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(744), ctx.gpr[4]);
    ctx.gpr[31] = (0x0894B934u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 651u, 0x08942FE8u>(ctx, &aot_mem) && ctx.pc == 0x0894B934u) goto L_0894B934;
    return;
L_0894B934:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BB10;
      }
      goto L_0894B93C;
    }
L_0894B93C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B96C;
      }
      goto L_0894B94C;
    }
L_0894B94C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0894B96C;
      }
      goto L_0894B95C;
    }
L_0894B95C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B990;
      }
      goto L_0894B96C;
    }
L_0894B96C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[4] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894BB10;
      }
      goto L_0894B97C;
    }
L_0894B97C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(744), ctx.gpr[4]);
    ctx.gpr[31] = (0x0894B988u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 651u, 0x08942FE8u>(ctx, &aot_mem) && ctx.pc == 0x0894B988u) goto L_0894B988;
    return;
L_0894B988:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BB10;
      }
      goto L_0894B990;
    }
L_0894B990:
    ctx.gpr[31] = (0x0894B998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 140u, 0x08850DD0u>(ctx, &aot_mem) && ctx.pc == 0x0894B998u) goto L_0894B998;
    return;
L_0894B998:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
      if (branch_taken) {
          goto L_0894B9C4;
      }
      goto L_0894B9A0;
    }
L_0894B9A0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894BB10;
      }
      goto L_0894B9B0;
    }
L_0894B9B0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(744), ctx.gpr[4]);
    ctx.gpr[31] = (0x0894B9BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 651u, 0x08942FE8u>(ctx, &aot_mem) && ctx.pc == 0x0894B9BCu) goto L_0894B9BC;
    return;
L_0894B9BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BB10;
      }
      goto L_0894B9C4;
    }
L_0894B9C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0894BB10;
      }
      goto L_0894B9CC;
    }
L_0894B9CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(744), ctx.gpr[17]);
    ctx.gpr[31] = (0x0894B9D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 651u, 0x08942FE8u>(ctx, &aot_mem) && ctx.pc == 0x0894B9D8u) goto L_0894B9D8;
    return;
L_0894B9D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BB10;
      }
      goto L_0894B9E0;
    }
L_0894B9E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[22];
    ctx.gpr[5] = (49169u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] | 13854u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
      if (branch_taken) {
          goto L_0894BA30;
      }
      goto L_0894BA14;
    }
L_0894BA14:
    ctx.gpr[6] = (16401u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 13854u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894BA7C;
      }
      goto L_0894BA30;
    }
L_0894BA30:
    ctx.gpr[6] = (16457u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0894BA5C;
      }
      goto L_0894BA54;
    }
L_0894BA54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 57u);
      if (branch_taken) {
          goto L_0894BA60;
      }
      goto L_0894BA5C;
    }
L_0894BA5C:
    ctx.gpr[4] = (0u | 54u);
    goto L_0894BA60;
L_0894BA60:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894BB10;
      }
      goto L_0894BA68;
    }
L_0894BA68:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(744), ctx.gpr[4]);
    ctx.gpr[31] = (0x0894BA74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 651u, 0x08942FE8u>(ctx, &aot_mem) && ctx.pc == 0x0894BA74u) goto L_0894BA74;
    return;
L_0894BA74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BB10;
      }
      goto L_0894BA7C;
    }
L_0894BA7C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (16329u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4059u);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_0894BAD8;
      }
      goto L_0894BA98;
    }
L_0894BA98:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0894BAB8;
      }
      goto L_0894BAB0;
    }
L_0894BAB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 58u);
      if (branch_taken) {
          goto L_0894BABC;
      }
      goto L_0894BAB8;
    }
L_0894BAB8:
    ctx.gpr[4] = (0u | 55u);
    goto L_0894BABC;
L_0894BABC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894BB10;
      }
      goto L_0894BAC4;
    }
L_0894BAC4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(744), ctx.gpr[4]);
    ctx.gpr[31] = (0x0894BAD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 651u, 0x08942FE8u>(ctx, &aot_mem) && ctx.pc == 0x0894BAD0u) goto L_0894BAD0;
    return;
L_0894BAD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BB10;
      }
      goto L_0894BAD8;
    }
L_0894BAD8:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0894BAF8;
      }
      goto L_0894BAF0;
    }
L_0894BAF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 59u);
      if (branch_taken) {
          goto L_0894BAFC;
      }
      goto L_0894BAF8;
    }
L_0894BAF8:
    ctx.gpr[4] = (0u | 56u);
    goto L_0894BAFC;
L_0894BAFC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894BB10;
      }
      goto L_0894BB04;
    }
L_0894BB04:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(744), ctx.gpr[4]);
    ctx.gpr[31] = (0x0894BB10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 651u, 0x08942FE8u>(ctx, &aot_mem) && ctx.pc == 0x0894BB10u) goto L_0894BB10;
    return;
L_0894BB10:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894BB2C:
    // FindWeaponLockOnTarget.
    if (!lcs::lcs_auto_aim()) {
        ctx.gpr[2] = 0u;
        jump_target = ctx.gpr[31];
        local_pc = jump_target;
        if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
        ctx.pc = jump_target;
        return;
    }
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894BB74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x0894BB74u) goto L_0894BB74;
    return;
L_0894BB74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0894BBF4;
      }
      goto L_0894BB88;
    }
L_0894BB88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894BBE0;
      }
      goto L_0894BBD8;
    }
L_0894BBD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 26u, 0x0894C1D0u>(ctx, &aot_mem); return;
      }
      goto L_0894BBE0;
    }
L_0894BBE0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894BBECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 516u, 0x0899EDBCu>(ctx, &aot_mem) && ctx.pc == 0x0894BBECu) goto L_0894BBEC;
    return;
L_0894BBEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 26u, 0x0894C1D0u>(ctx, &aot_mem); return;
      }
      goto L_0894BBF4;
    }
L_0894BBF4:
    ctx.gpr[4] = (50716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0894BC18u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x0894BC18u) goto L_0894BC18;
    return;
L_0894BC18:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_0894BC3C;
      }
      goto L_0894BC30;
    }
L_0894BC30:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_0894BC3C;
L_0894BC3C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0894BD94;
      }
      goto L_0894BC50;
    }
L_0894BC50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3248));
      if (branch_taken) {
          goto L_0894BC70;
      }
      goto L_0894BC68;
    }
L_0894BC68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0894BC80;
      }
      goto L_0894BC70;
    }
L_0894BC70:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    goto L_0894BC80;
L_0894BC80:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BD88;
      }
      goto L_0894BC88;
    }
L_0894BC88:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0894BD88;
      }
      goto L_0894BC90;
    }
L_0894BC90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894BD88;
      }
      goto L_0894BCA0;
    }
L_0894BCA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894BD88;
      }
      goto L_0894BCB0;
    }
L_0894BCB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(628)));
        goto L_0894BCE0;
    }
    goto L_0894BCBC;
L_0894BCBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BD88;
      }
      goto L_0894BCC8;
    }
L_0894BCC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894BD88;
      }
      goto L_0894BCDC;
    }
L_0894BCDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(628)));
    goto L_0894BCE0;
L_0894BCE0:
    if (ctx.gpr[4] != ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(416)));
        goto L_0894BCFC;
    }
    goto L_0894BCE8;
L_0894BCE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(420)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BD88;
      }
      goto L_0894BCF8;
    }
L_0894BCF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(416)));
    goto L_0894BCFC;
L_0894BCFC:
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894BD88;
      }
      goto L_0894BD08;
    }
L_0894BD08:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0894BD18u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 310u, 0x0899DDECu>(ctx, &aot_mem) && ctx.pc == 0x0894BD18u) goto L_0894BD18;
    return;
L_0894BD18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BD88;
      }
      goto L_0894BD20;
    }
L_0894BD20:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894BD54u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 251u, 0x08945118u>(ctx, &aot_mem) && ctx.pc == 0x0894BD54u) goto L_0894BD54;
    return;
L_0894BD54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BD88;
      }
      goto L_0894BD5C;
    }
L_0894BD5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894BD68u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944AC8u>(ctx, &aot_mem) && ctx.pc == 0x0894BD68u) goto L_0894BD68;
    return;
L_0894BD68:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0894BD88u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 73u, 0x089444ECu>(ctx, &aot_mem) && ctx.pc == 0x0894BD88u) goto L_0894BD88;
    return;
L_0894BD88:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0894BC50;
      }
      goto L_0894BD94;
    }
L_0894BD94:
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28216)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28216));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894BEF8;
      }
      goto L_0894BDAC;
    }
L_0894BDAC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_0894BDDC;
    }
    goto L_0894BDBC;
L_0894BDBC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x0894BDCCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0894BDCCu) goto L_0894BDCC;
    return;
L_0894BDCC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_0894BDDC;
L_0894BDDC:
    ctx.gpr[5] = (0u | 54u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894BEE0;
      }
      goto L_0894BDEC;
    }
L_0894BDEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_0894BE18;
    }
    goto L_0894BDF8;
L_0894BDF8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(97));
    ctx.gpr[31] = (0x0894BE08u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0894BE08u) goto L_0894BE08;
    return;
L_0894BE08:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(97)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_0894BE18;
L_0894BE18:
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894BEE0;
      }
      goto L_0894BE28;
    }
L_0894BE28:
    ctx.gpr[31] = (0x0894BE30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 751u, 0x08A2F85Cu>(ctx, &aot_mem) && ctx.pc == 0x0894BE30u) goto L_0894BE30;
    return;
L_0894BE30:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894BEB8;
      }
      goto L_0894BE38;
    }
L_0894BE38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894BE48u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 310u, 0x0899DDECu>(ctx, &aot_mem) && ctx.pc == 0x0894BE48u) goto L_0894BE48;
    return;
L_0894BE48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BEE0;
      }
      goto L_0894BE50;
    }
L_0894BE50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_0894BE7C;
    }
    goto L_0894BE5C;
L_0894BE5C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(98));
    ctx.gpr[31] = (0x0894BE6Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0894BE6Cu) goto L_0894BE6C;
    return;
L_0894BE6C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(98)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_0894BE7C;
L_0894BE7C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894BEB0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 251u, 0x08945118u>(ctx, &aot_mem) && ctx.pc == 0x0894BEB0u) goto L_0894BEB0;
    return;
L_0894BEB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BEE0;
      }
      goto L_0894BEB8;
    }
L_0894BEB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[31] = (0x0894BEE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 73u, 0x089444ECu>(ctx, &aot_mem) && ctx.pc == 0x0894BEE0u) goto L_0894BEE0;
    return;
L_0894BEE0:
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28216));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894BDAC;
      }
      goto L_0894BEF8;
    }
L_0894BEF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2972)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0894BF08u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x0894BF08u) goto L_0894BF08;
    return;
L_0894BF08:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BF80;
      }
      goto L_0894BF14;
    }
L_0894BF14:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894BF80;
      }
      goto L_0894BF24;
    }
L_0894BF24:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894BF58u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 251u, 0x08945118u>(ctx, &aot_mem) && ctx.pc == 0x0894BF58u) goto L_0894BF58;
    return;
L_0894BF58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BF80;
      }
      goto L_0894BF60;
    }
L_0894BF60:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0894BF80u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 73u, 0x089444ECu>(ctx, &aot_mem) && ctx.pc == 0x0894BF80u) goto L_0894BF80;
    return;
L_0894BF80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2976)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0894BF90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x0894BF90u) goto L_0894BF90;
    return;
L_0894BF90:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 2u, 0x0894C008u>(ctx, &aot_mem); return;
      }
      goto L_0894BF9C;
    }
L_0894BF9C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 2u, 0x0894C008u>(ctx, &aot_mem); return;
      }
      goto L_0894BFAC;
    }
L_0894BFAC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894BFE0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 251u, 0x08945118u>(ctx, &aot_mem) && ctx.pc == 0x0894BFE0u) goto L_0894BFE0;
    return;
L_0894BFE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 2u, 0x0894C008u>(ctx, &aot_mem); return;
      }
      goto L_0894BFE8;
    }
L_0894BFE8:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x0894C000u; return;
}

void recomp_unit_0081(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0081_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_81(Runtime &runtime) {
    runtime.register_generated_unit(81u, 0x08948000u, 16384u, &recomp_unit_0081, &recomp_unit_0081_entry);
    runtime.register_function(0x08948004u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948018u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948050u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948064u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948074u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948084u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894809Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089480A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089480B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089480C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089480D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089480E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948128u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948130u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948148u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948150u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948160u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948178u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948184u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894818Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948194u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948204u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894820Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948218u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948224u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948230u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948234u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894823Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948244u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894824Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948258u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948264u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894826Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948278u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948280u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948288u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948294u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894829Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482D4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948300u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894831Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948328u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894833Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948358u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948360u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948374u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894837Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948384u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894838Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948394u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089483A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089483BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089483D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089483ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948400u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894841Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948438u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948454u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948474u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484D4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948544u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948558u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948580u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948588u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948608u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948620u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948628u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948630u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894864Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948668u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948684u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948700u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948710u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948718u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948728u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948730u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948744u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894874Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894875Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948764u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948774u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894877Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894878Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948794u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948804u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894880Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948820u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894882Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948834u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948840u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948848u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948854u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894885Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894886Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948874u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089488A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089488BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089488C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948900u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948940u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894895Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894896Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894897Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948984u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894898Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089489A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089489B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089489C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089489C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089489E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089489F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A00u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A10u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A24u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A3Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A64u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A78u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A7Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948AA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948AB8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948ABCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948AC4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948AD0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948ADCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948AECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B04u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B18u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B44u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B4Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B60u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B78u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B94u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948BC4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C64u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C6Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C7Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C80u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948CACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948CC4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948CCCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948CD4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948CDCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948CE4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948CECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948CF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D0Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D20u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D38u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D40u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D4Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D58u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D90u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DB4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E10u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E18u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E38u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E6Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E74u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E7Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E98u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948EA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948EB8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948EC0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948EC8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948ED0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948ED8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948EE0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948EE8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948EF0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948EFCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F00u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F38u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F40u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F48u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F4Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F84u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948FA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948FA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948FDCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949008u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949018u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949030u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949064u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894907Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949098u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089490B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089490ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089490F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089490FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949104u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894912Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949148u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949150u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949164u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949188u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089491A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089491F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894920Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894927Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089492C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089492D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089492E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949318u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949340u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949454u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089494E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089494F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949508u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949518u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949528u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949538u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894955Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894956Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089495B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089495ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949618u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949628u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949654u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089496A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089496BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089496C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089496D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089496E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089496FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949700u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949714u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949724u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949738u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894973Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894975Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949798u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089497A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089497ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089497C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949858u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894986Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949894u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949898u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089498A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089498B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089498B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089498BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089498C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089498D4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089498DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089498E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089498ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089498F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949900u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949904u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949910u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894991Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949924u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894996Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089499ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089499B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089499D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089499D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089499E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089499E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089499E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A04u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A10u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A24u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A38u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A40u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A48u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A60u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A70u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A94u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949AA4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949AACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949AB4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949AC4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949ACCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949AD4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949ADCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949AE4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949AECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949AF4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B00u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B10u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B24u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B2Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B48u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B64u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B98u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949BA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949BC0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949BCCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949BD4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949BDCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949BE8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949BF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949BFCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C08u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C58u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C80u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949CA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949CB0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949CBCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949CC8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949CD4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949CD8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949CF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949D0Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949D14u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949D3Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949D64u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949D78u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949D80u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949DA4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949DB8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949DC0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949DD4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949DF0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E00u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E0Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E14u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E24u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E3Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E48u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E4Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E60u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E68u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E70u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E94u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949EBCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949EE4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F0Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F14u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F24u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F2Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F38u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F44u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F60u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F74u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F80u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F98u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949FD8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949FE4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949FECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949FF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A000u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A008u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A014u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A020u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A038u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A044u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A048u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A068u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A090u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A0ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A0B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A0BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A0D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A0E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A0F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A0FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A104u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A110u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A118u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A124u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A12Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A134u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A140u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A148u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A16Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A194u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A19Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A1A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A1B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A1B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A1D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A1FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A204u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A20Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A218u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A224u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A24Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A268u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A280u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A288u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A290u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A298u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A2A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A2B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A2C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A2C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A2D4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A2DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A2F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A300u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A308u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A310u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A318u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A320u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A328u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A334u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A364u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A38Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A3D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A408u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A424u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A42Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A448u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A45Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A48Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A494u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A4D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A4E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A4F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A500u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A514u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A524u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A52Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A538u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A53Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A544u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A54Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A558u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A568u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A574u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A59Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A600u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A60Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A614u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A620u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A62Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A634u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A63Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A644u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A660u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A670u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A680u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A694u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A698u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A6A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A6B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A6CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A700u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A708u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A710u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A718u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A720u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A728u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A730u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A738u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A740u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A74Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A76Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A784u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A790u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A798u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A7A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A7B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A7B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A7C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A7D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A7D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A7E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A7F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A800u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A814u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A824u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A84Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A86Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A878u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A884u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A8D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A8F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A918u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A920u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A928u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A948u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A970u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A990u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A9B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A9C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A9C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A9D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A9F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA0Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA48u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA6Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA78u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA98u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AAA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AAB8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB00u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB10u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB14u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB40u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB58u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB6Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB74u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB7Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB90u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ABD8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ABECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC04u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC24u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC58u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC60u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC70u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC80u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC90u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ACA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ACB4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ACC4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ACD0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ACE0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ACE8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ACF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ACFCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD04u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD10u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD20u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD3Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD44u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD58u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD64u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD74u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD84u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD98u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ADA4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ADB4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ADC4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ADD0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ADD8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ADE8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ADF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE08u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE14u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE2Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE40u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AEE8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AEF4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF0Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF38u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF88u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF94u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AFA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AFACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AFBCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AFCCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AFDCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AFE0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AFE8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AFF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B008u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B018u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B020u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B038u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B044u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B054u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B064u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B074u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B098u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B0BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B0D4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B0E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B0ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B0F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B0F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B100u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B110u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B11Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B150u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B174u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B17Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B188u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B200u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B20Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B214u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B21Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B224u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B22Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B234u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B244u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B24Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B258u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B274u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B27Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B284u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B28Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B300u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B308u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B310u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B32Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B334u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B33Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B344u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B35Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B364u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B36Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B388u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B394u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B39Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3D4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B404u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B418u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B420u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B428u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B438u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B440u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B448u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B458u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B46Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B498u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4D4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B510u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B520u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B52Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B53Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B54Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B568u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B57Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B584u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B604u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B60Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B618u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B620u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B628u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B630u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B638u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B648u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B654u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B664u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B674u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B67Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B684u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B690u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B6A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B6B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B6CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B70Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B718u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B720u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B734u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B73Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B750u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B768u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B774u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B788u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B7ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B7BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B7D4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B7ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B7F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B7F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B800u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B808u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B828u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B830u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B834u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B854u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B864u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B870u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B878u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B888u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B898u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B908u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B918u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B928u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B934u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B93Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B94Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B95Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B96Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B97Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B988u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B990u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B998u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA14u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA60u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA68u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA74u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA7Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA98u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BAB0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BAB8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BABCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BAC4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BAD0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BAD8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BAF0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BAF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BAFCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB04u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB10u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB2Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB74u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB88u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBD8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBE0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBF4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC18u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC3Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC68u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC70u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC80u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC88u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC90u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCB0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCBCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCC8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCDCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCE0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCE8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCFCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD08u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD18u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD20u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD68u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD88u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD94u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BDACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BDBCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BDCCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BDDCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BDECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BDF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE08u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE18u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE38u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE48u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE6Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE7Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BEB0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BEB8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BEE0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BEF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF08u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF14u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF24u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF58u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF60u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF80u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF90u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF9Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BFACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BFE0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BFE8u, &recomp_unit_0081, "recomp_unit_0081");
}
} // namespace psprecomp
