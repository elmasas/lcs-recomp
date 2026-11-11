#include "lcs_controls.hpp"
#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0053[4082] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 11, 0, 0, 0, 12, 13, 0, 14,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23,
    24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 27, 0, 28, 0, 29, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0, 0,
    0, 42, 0, 0, 0, 43, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 47, 0, 48,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0,
    0, 53, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 57, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0,
    0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 83,
    0, 84, 0, 85, 0, 86, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 93,
    0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    0, 103, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 108, 0, 109, 0, 0, 0, 110,
    0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 115, 0, 0, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 118, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 0, 125, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 129, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0,
    135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0,
    0, 0, 141, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 144, 145, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 155, 0, 0,
    0, 156, 0, 157, 0, 0, 158, 0, 0, 159, 0, 160, 0, 161, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0,
    0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 178, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 181, 0, 0, 0, 182,
    0, 183, 0, 0, 184, 0, 185, 0, 186, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0,
    0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 205,
    0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 212, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217,
    0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223,
    0, 0, 224, 0, 225, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 232, 0, 0, 0, 0,
    233, 0, 0, 0, 234, 0, 0, 0, 235, 0, 236, 0, 237, 0, 238, 0, 0, 239, 0, 240, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 246,
    0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 249, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253,
    0, 254, 0, 255, 0, 256, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 266, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 269, 0,
    0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0,
    0, 0, 277, 0, 0, 278, 0, 0, 279, 0, 0, 280, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0,
    290, 0, 291, 0, 0, 0, 0, 0, 0, 292, 293, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 298, 0, 0, 299,
    0, 0, 300, 301, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 307, 0, 308, 0, 0, 309, 0, 0, 310, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 313,
    0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0,
    323, 0, 324, 0, 0, 325, 0, 0, 326, 0, 0, 327, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 332, 0, 333, 0, 334,
    0, 0, 335, 0, 336, 0, 0, 337, 0, 338, 339, 0, 0, 0, 340, 0, 341, 0, 342, 0, 343, 0, 344, 0, 345, 0, 0, 0, 346, 0, 347, 0,
    348, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 354, 0, 355,
    0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 358, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0,
    0, 363, 0, 0, 0, 364, 0, 365, 0, 366, 0, 367, 0, 368, 0, 0, 369, 0, 370, 0, 0, 0, 371, 0, 0, 372, 0, 373, 0, 374, 0, 375,
    0, 376, 0, 377, 0, 0, 378, 0, 0, 379, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 381, 382, 0, 0, 0, 383, 0, 384, 0, 0, 385, 0,
    0, 386, 0, 0, 387, 0, 0, 388, 389, 0, 390, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0,
    0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0,
    401, 0, 402, 0, 0, 403, 0, 0, 404, 0, 405, 0, 406, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 411, 0, 412, 0, 0, 413, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0,
    416, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 421, 0, 422, 0, 0, 0, 423, 0, 424, 0, 0, 0,
    425, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 0, 0, 431,
    0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0,
    438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 441, 0, 0, 442, 0, 0, 443, 0, 444, 0, 445, 0, 0, 446, 0, 0, 0, 0, 447, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 454, 0, 455, 0, 456, 0, 0, 0, 457, 0, 458, 0, 459, 0,
    460, 0, 0, 0, 0, 461, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0,
    0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 467, 0, 468, 0, 0, 469, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 0, 472, 0,
    473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477,
    0, 478, 0, 0, 0, 0, 0, 479, 0, 480, 0, 481, 0, 0, 482, 0, 483, 0, 0, 484, 0, 485, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0,
    0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 491, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493,
    0, 0, 0, 0, 494, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 498, 0, 499, 0, 0, 0, 500,
    0, 501, 0, 0, 0, 0, 0, 502, 0, 503, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0,
    0, 506, 0, 507, 0, 508, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 512, 0, 0, 513, 0, 0, 514, 515, 0, 516, 0, 0, 0,
    517, 0, 0, 0, 0, 0, 518, 0, 519, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 522,
    0, 523, 0, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 528, 0, 0, 0, 529, 0, 0, 530, 0, 531, 0, 532, 0, 533, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 536, 537, 0, 538,
    0, 0, 539, 540, 0, 541, 0, 0, 0, 542, 0, 543, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 545, 0, 546, 0, 0, 0, 547, 0, 548, 0,
    0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 551, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0,
    554, 0, 0, 0, 555, 0, 0, 0, 556, 0, 557, 0, 0, 0, 558, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 561, 0, 562, 0, 563, 0, 0, 0, 564, 0, 0, 0, 565, 0, 566, 0, 0, 0, 567, 0, 568, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 570, 571, 0, 572, 0, 0, 573, 0, 574, 0, 0, 0, 0, 0, 0, 575, 0, 0, 576, 0, 577, 0, 0, 578, 0, 579,
    0, 0, 0, 0, 580, 0, 581, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 584, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 586, 0, 587, 0, 0, 588, 0, 589, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 591, 0, 592, 0, 0, 593, 0, 0, 594, 0, 0, 595, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 597, 0, 598,
    0, 0, 0, 0, 0, 0, 0, 599, 0, 600, 0, 601, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 604, 0, 605, 0, 0, 0, 0, 0, 606, 0, 607, 0, 608, 0, 609, 0, 0, 0, 610, 0, 0, 0, 611, 0, 612, 0, 613, 0,
    614, 0, 0, 0, 0, 615, 0, 616, 0, 617, 0, 618, 0, 619, 0, 620, 0, 0, 621, 0, 622, 0, 623, 0, 0, 624, 0, 0, 625, 0, 0, 626,
    627, 0, 628, 0, 629, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0,
    0, 0, 633, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 635, 0, 636, 0, 0, 0, 0, 637, 0, 0, 638, 0, 639, 0, 0, 0, 640, 0, 0,
    641, 0, 0, 0, 642, 0, 643, 0, 0, 644, 0, 0, 645, 0, 646, 0, 647, 648, 0, 649, 0, 0, 0, 0, 650, 0, 651, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 652, 0, 0, 653, 0, 0, 0, 654, 0, 0, 655, 0, 0, 0, 656, 0, 657, 0, 0, 658, 0, 0, 0, 659, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 660, 0, 661, 0, 0, 662, 0, 0, 0, 0, 663, 0, 664, 0, 0, 0, 0, 665, 0, 0, 666, 0, 0, 0, 0,
    667, 0, 0, 0, 668, 0, 669, 0, 670, 0, 0, 0, 0, 671, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0,
    674, 0, 675, 0, 676, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 679, 0, 680, 0, 0, 681, 0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 685, 0, 0, 0, 686, 0, 687, 0, 688, 0,
    689, 0, 0, 0, 690, 0, 0, 691, 0, 692, 0, 693, 0, 0, 694, 0, 0, 695, 0, 0, 0, 696, 0, 697, 0, 0, 0, 0, 0, 698, 699, 0,
    700, 0, 0, 701, 0, 0, 0, 0, 0, 0, 702, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 705, 0, 0, 706, 0, 0,
    0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 710, 0, 711, 0, 0, 0, 712, 0, 0, 713, 0, 0, 0, 714, 0, 715, 0, 0, 716, 0, 0, 717,
    0, 0, 0, 718, 0, 719, 0, 0, 0, 720, 721, 0, 722, 0, 0, 0, 0, 0, 0, 723, 0, 724, 0, 725, 0, 726, 0, 727, 0, 728, 0, 729,
    0, 730, 0, 0, 731, 0, 0, 0, 0, 0, 0, 732, 0, 733, 0, 734, 0, 0, 0, 735, 0, 0, 736, 0, 737, 0, 738, 0, 739, 0, 740, 0,
    0, 0, 741, 0, 742, 0, 0, 0, 743, 0, 0, 744, 0, 745, 0, 746, 0, 0, 747, 0, 748, 0, 749, 0, 750, 0, 0, 0, 751, 0, 0, 752,
    753, 0, 754, 0, 0, 755, 0, 756, 0, 757, 0, 0, 0, 758, 0, 0, 759, 0, 760, 0, 0, 0, 761, 0, 0, 762, 763, 0, 764, 0, 0, 0,
    0, 765, 0, 766, 0, 0, 767, 0, 0, 768, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 770, 771, 0, 0, 772, 0, 0, 0, 0, 0, 773, 0,
    774, 0, 775, 0, 776, 0, 777, 0, 0, 0, 778, 0, 779, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 781, 0, 782, 0, 0, 783, 0, 784, 0, 785, 0, 0, 786, 0, 787, 0, 788, 0, 789, 790, 0, 0, 791, 0, 0, 792, 0,
    0, 0, 0, 793, 0, 0, 0, 0, 0, 794, 795, 0, 0, 796, 0, 0, 0, 0, 0, 797, 0, 0, 798, 0, 799, 0, 0, 800, 0, 0, 801, 0,
    0, 802, 0, 0, 0, 803, 0, 0, 0, 804, 0, 805, 0, 0, 0, 0, 806, 0, 0, 807, 0, 808, 0, 0, 809, 0, 810, 0, 811, 0, 0, 812,
    0, 0, 813, 0, 814, 0, 0, 0, 815, 0, 0, 816, 0, 817, 818, 0, 0, 819, 0, 0, 820, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0, 0,
    822, 0, 0, 0, 0, 0, 823, 0, 0, 0, 824, 0, 0, 0, 825, 0, 0, 826, 0, 827, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0,
    0, 0, 0, 0, 0, 0, 0, 830, 0, 0, 0, 0, 0, 0, 0, 831, 0, 0, 0, 0, 0, 0, 832, 0, 833, 0, 0, 0, 834, 0, 0, 0,
    0, 0, 0, 0, 835, 0, 0, 0, 0, 0, 836, 0, 0, 0, 837, 0, 0, 0, 0, 838, 0, 0, 0, 0, 839, 0, 0, 0, 840, 0, 841, 0,
    0, 842, 0, 843, 0, 844, 0, 0, 0, 845, 0, 0, 846, 0, 0, 847, 0, 0, 848, 849, 0, 850, 0, 0, 0, 0, 0, 851, 0, 0, 852, 0,
    0, 853, 0, 0, 0, 0, 0, 854, 0, 0, 855, 0, 0, 856, 0, 0, 857, 858, 0, 859, 0, 0, 0, 0, 0, 0, 0, 860, 0, 0, 861, 0,
    0, 0, 0, 0, 0, 0, 0, 862, 0, 0, 0, 0, 0, 0, 0, 0, 863, 0, 0, 0, 0, 0, 0, 864, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 865, 0, 866, 0, 867, 0, 0, 0, 868, 869, 0, 0, 0, 870, 0, 0, 0, 871, 0, 0, 0, 0, 0, 0, 0, 872, 0, 0, 0, 0, 0,
    873, 0, 0, 0, 874, 0, 0, 0, 0, 875, 0, 0, 876, 0, 877, 0, 878, 0, 879, 0, 880, 0, 0, 881, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 882, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 883, 0, 0,
    0, 0, 0, 0, 0, 884, 0, 0, 0, 0, 0, 0, 0, 0, 885, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 886, 0, 0, 887, 0, 0, 0, 888, 0, 0, 889, 0, 890, 0, 891, 0, 0, 0, 892, 0, 893, 0, 0, 894, 895, 0, 0, 896, 0, 897, 0,
    0, 898, 899, 0, 900, 0, 901, 0, 902, 0, 0, 0, 0, 0, 0, 0, 0, 0, 903, 0, 0, 0, 904, 0, 0, 905, 906, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 907, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 908, 0, 0, 0, 0, 0, 0, 0, 909, 0,
    0, 0, 910, 0, 911, 0, 912, 0, 913, 0, 0, 0, 0, 0, 0, 0, 0, 0, 914, 0, 0, 915, 0, 0, 916, 0, 917, 0, 0, 918, 0, 919,
    0, 920, 0, 0, 0, 921, 0, 0, 0, 0, 0, 0, 0, 0, 922, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 923, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 924, 0, 925, 0, 926, 0, 0, 0, 0, 0, 0, 0, 0, 927, 0, 928, 0, 929, 0,
    0, 0, 930, 931, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 932,
};
void recomp_unit_0053_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088D8000u;
        entry_id = (entry_delta < 16328u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0053[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088D8000;
    case 2u: goto L_088D800C;
    case 3u: goto L_088D802C;
    case 4u: goto L_088D8060;
    case 5u: goto L_088D806C;
    case 6u: goto L_088D80A0;
    case 7u: goto L_088D80A8;
    case 8u: goto L_088D80B8;
    case 9u: goto L_088D80C8;
    case 10u: goto L_088D80D8;
    case 11u: goto L_088D80E0;
    case 12u: goto L_088D80F0;
    case 13u: goto L_088D80F4;
    case 14u: goto L_088D80FC;
    case 15u: goto L_088D8110;
    case 16u: goto L_088D8134;
    case 17u: goto L_088D815C;
    case 18u: goto L_088D8184;
    case 19u: goto L_088D81A8;
    case 20u: goto L_088D81D0;
    case 21u: goto L_088D81D4;
    case 22u: goto L_088D81F0;
    case 23u: goto L_088D81FC;
    case 24u: goto L_088D8200;
    case 25u: goto L_088D8220;
    case 26u: goto L_088D822C;
    case 27u: goto L_088D8234;
    case 28u: goto L_088D823C;
    case 29u: goto L_088D8244;
    case 30u: goto L_088D8248;
    case 31u: goto L_088D8268;
    case 32u: goto L_088D8274;
    case 33u: goto L_088D828C;
    case 34u: goto L_088D82A8;
    case 35u: goto L_088D82B4;
    case 36u: goto L_088D82C8;
    case 37u: goto L_088D82D4;
    case 38u: goto L_088D82DC;
    case 39u: goto L_088D82E4;
    case 40u: goto L_088D82EC;
    case 41u: goto L_088D82F4;
    case 42u: goto L_088D8304;
    case 43u: goto L_088D8314;
    case 44u: goto L_088D8318;
    case 45u: goto L_088D8354;
    case 46u: goto L_088D8360;
    case 47u: goto L_088D8374;
    case 48u: goto L_088D837C;
    case 49u: goto L_088D83BC;
    case 50u: goto L_088D83C8;
    case 51u: goto L_088D83DC;
    case 52u: goto L_088D83EC;
    case 53u: goto L_088D8404;
    case 54u: goto L_088D8408;
    case 55u: goto L_088D8414;
    case 56u: goto L_088D8430;
    case 57u: goto L_088D8434;
    case 58u: goto L_088D8440;
    case 59u: goto L_088D8450;
    case 60u: goto L_088D846C;
    case 61u: goto L_088D8488;
    case 62u: goto L_088D8498;
    case 63u: goto L_088D84B0;
    case 64u: goto L_088D84C4;
    case 65u: goto L_088D84D0;
    case 66u: goto L_088D84E8;
    case 67u: goto L_088D8588;
    case 68u: goto L_088D8590;
    case 69u: goto L_088D85C4;
    case 70u: goto L_088D85E0;
    case 71u: goto L_088D85E8;
    case 72u: goto L_088D85F0;
    case 73u: goto L_088D8618;
    case 74u: goto L_088D8640;
    case 75u: goto L_088D8668;
    case 76u: goto L_088D8684;
    case 77u: goto L_088D8694;
    case 78u: goto L_088D86A4;
    case 79u: goto L_088D86B8;
    case 80u: goto L_088D86CC;
    case 81u: goto L_088D86EC;
    case 82u: goto L_088D86F4;
    case 83u: goto L_088D86FC;
    case 84u: goto L_088D8704;
    case 85u: goto L_088D870C;
    case 86u: goto L_088D8714;
    case 87u: goto L_088D871C;
    case 88u: goto L_088D8734;
    case 89u: goto L_088D8748;
    case 90u: goto L_088D8750;
    case 91u: goto L_088D8768;
    case 92u: goto L_088D8770;
    case 93u: goto L_088D877C;
    case 94u: goto L_088D878C;
    case 95u: goto L_088D87B4;
    case 96u: goto L_088D87CC;
    case 97u: goto L_088D87D4;
    case 98u: goto L_088D8808;
    case 99u: goto L_088D8818;
    case 100u: goto L_088D8830;
    case 101u: goto L_088D8858;
    case 102u: goto L_088D8860;
    case 103u: goto L_088D8884;
    case 104u: goto L_088D889C;
    case 105u: goto L_088D88A4;
    case 106u: goto L_088D88C8;
    case 107u: goto L_088D88E0;
    case 108u: goto L_088D88E4;
    case 109u: goto L_088D88EC;
    case 110u: goto L_088D88FC;
    case 111u: goto L_088D8904;
    case 112u: goto L_088D890C;
    case 113u: goto L_088D8960;
    case 114u: goto L_088D8968;
    case 115u: goto L_088D896C;
    case 116u: goto L_088D8990;
    case 117u: goto L_088D89A0;
    case 118u: goto L_088D89B4;
    case 119u: goto L_088D89B8;
    case 120u: goto L_088D89D8;
    case 121u: goto L_088D8A00;
    case 122u: goto L_088D8A0C;
    case 123u: goto L_088D8A18;
    case 124u: goto L_088D8A24;
    case 125u: goto L_088D8A34;
    case 126u: goto L_088D8A38;
    case 127u: goto L_088D8A5C;
    case 128u: goto L_088D8A64;
    case 129u: goto L_088D8A74;
    case 130u: goto L_088D8A80;
    case 131u: goto L_088D8AA0;
    case 132u: goto L_088D8AC4;
    case 133u: goto L_088D8AE4;
    case 134u: goto L_088D8AEC;
    case 135u: goto L_088D8B00;
    case 136u: goto L_088D8B08;
    case 137u: goto L_088D8B28;
    case 138u: goto L_088D8B40;
    case 139u: goto L_088D8B48;
    case 140u: goto L_088D8B68;
    case 141u: goto L_088D8B88;
    case 142u: goto L_088D8B9C;
    case 143u: goto L_088D8BA4;
    case 144u: goto L_088D8BB4;
    case 145u: goto L_088D8BB8;
    case 146u: goto L_088D8BC8;
    case 147u: goto L_088D8BD0;
    case 148u: goto L_088D8BE8;
    case 149u: goto L_088D8C18;
    case 150u: goto L_088D8C20;
    case 151u: goto L_088D8C30;
    case 152u: goto L_088D8C38;
    case 153u: goto L_088D8C5C;
    case 154u: goto L_088D8C70;
    case 155u: goto L_088D8C74;
    case 156u: goto L_088D8C84;
    case 157u: goto L_088D8C8C;
    case 158u: goto L_088D8C98;
    case 159u: goto L_088D8CA4;
    case 160u: goto L_088D8CAC;
    case 161u: goto L_088D8CB4;
    case 162u: goto L_088D8CBC;
    case 163u: goto L_088D8CD0;
    case 164u: goto L_088D8CE0;
    case 165u: goto L_088D8D04;
    case 166u: goto L_088D8D3C;
    case 167u: goto L_088D8D48;
    case 168u: goto L_088D8D64;
    case 169u: goto L_088D8D6C;
    case 170u: goto L_088D8D74;
    case 171u: goto L_088D8D90;
    case 172u: goto L_088D8DC8;
    case 173u: goto L_088D8DCC;
    case 174u: goto L_088D8DF0;
    case 175u: goto L_088D8E00;
    case 176u: goto L_088D8E28;
    case 177u: goto L_088D8E3C;
    case 178u: goto L_088D8E40;
    case 179u: goto L_088D8E5C;
    case 180u: goto L_088D8E64;
    case 181u: goto L_088D8E6C;
    case 182u: goto L_088D8E7C;
    case 183u: goto L_088D8E84;
    case 184u: goto L_088D8E90;
    case 185u: goto L_088D8E98;
    case 186u: goto L_088D8EA0;
    case 187u: goto L_088D8EA8;
    case 188u: goto L_088D8EB4;
    case 189u: goto L_088D8ED0;
    case 190u: goto L_088D8ED8;
    case 191u: goto L_088D8EE0;
    case 192u: goto L_088D8EF0;
    case 193u: goto L_088D8F0C;
    case 194u: goto L_088D8F34;
    case 195u: goto L_088D8F4C;
    case 196u: goto L_088D8F54;
    case 197u: goto L_088D8F6C;
    case 198u: goto L_088D8F74;
    case 199u: goto L_088D8F84;
    case 200u: goto L_088D8FA8;
    case 201u: goto L_088D8FC0;
    case 202u: goto L_088D8FC8;
    case 203u: goto L_088D8FD8;
    case 204u: goto L_088D8FE4;
    case 205u: goto L_088D8FFC;
    case 206u: goto L_088D9014;
    case 207u: goto L_088D901C;
    case 208u: goto L_088D9024;
    case 209u: goto L_088D9030;
    case 210u: goto L_088D9050;
    case 211u: goto L_088D9070;
    case 212u: goto L_088D9088;
    case 213u: goto L_088D9090;
    case 214u: goto L_088D90A0;
    case 215u: goto L_088D90BC;
    case 216u: goto L_088D90E4;
    case 217u: goto L_088D90FC;
    case 218u: goto L_088D9104;
    case 219u: goto L_088D912C;
    case 220u: goto L_088D9140;
    case 221u: goto L_088D9144;
    case 222u: goto L_088D9154;
    case 223u: goto L_088D917C;
    case 224u: goto L_088D9188;
    case 225u: goto L_088D9190;
    case 226u: goto L_088D9198;
    case 227u: goto L_088D91A4;
    case 228u: goto L_088D91E4;
    case 229u: goto L_088D9240;
    case 230u: goto L_088D924C;
    case 231u: goto L_088D9268;
    case 232u: goto L_088D926C;
    case 233u: goto L_088D9280;
    case 234u: goto L_088D9290;
    case 235u: goto L_088D92A0;
    case 236u: goto L_088D92A8;
    case 237u: goto L_088D92B0;
    case 238u: goto L_088D92B8;
    case 239u: goto L_088D92C4;
    case 240u: goto L_088D92CC;
    case 241u: goto L_088D92D4;
    case 242u: goto L_088D92DC;
    case 243u: goto L_088D9334;
    case 244u: goto L_088D935C;
    case 245u: goto L_088D9364;
    case 246u: goto L_088D937C;
    case 247u: goto L_088D939C;
    case 248u: goto L_088D93AC;
    case 249u: goto L_088D93B4;
    case 250u: goto L_088D93B8;
    case 251u: goto L_088D93CC;
    case 252u: goto L_088D93EC;
    case 253u: goto L_088D93FC;
    case 254u: goto L_088D9404;
    case 255u: goto L_088D940C;
    case 256u: goto L_088D9414;
    case 257u: goto L_088D9424;
    case 258u: goto L_088D9430;
    case 259u: goto L_088D9440;
    case 260u: goto L_088D9450;
    case 261u: goto L_088D9458;
    case 262u: goto L_088D9478;
    case 263u: goto L_088D94A0;
    case 264u: goto L_088D94BC;
    case 265u: goto L_088D94C4;
    case 266u: goto L_088D94CC;
    case 267u: goto L_088D94DC;
    case 268u: goto L_088D94E8;
    case 269u: goto L_088D94F8;
    case 270u: goto L_088D950C;
    case 271u: goto L_088D9528;
    case 272u: goto L_088D9530;
    case 273u: goto L_088D9544;
    case 274u: goto L_088D954C;
    case 275u: goto L_088D9568;
    case 276u: goto L_088D9578;
    case 277u: goto L_088D9588;
    case 278u: goto L_088D9594;
    case 279u: goto L_088D95A0;
    case 280u: goto L_088D95AC;
    case 281u: goto L_088D95B0;
    case 282u: goto L_088D95B8;
    case 283u: goto L_088D95F0;
    case 284u: goto L_088D960C;
    case 285u: goto L_088D9638;
    case 286u: goto L_088D9644;
    case 287u: goto L_088D9654;
    case 288u: goto L_088D965C;
    case 289u: goto L_088D9678;
    case 290u: goto L_088D9680;
    case 291u: goto L_088D9688;
    case 292u: goto L_088D96A4;
    case 293u: goto L_088D96A8;
    case 294u: goto L_088D96B4;
    case 295u: goto L_088D96C4;
    case 296u: goto L_088D96D4;
    case 297u: goto L_088D96E4;
    case 298u: goto L_088D96F0;
    case 299u: goto L_088D96FC;
    case 300u: goto L_088D9708;
    case 301u: goto L_088D970C;
    case 302u: goto L_088D9714;
    case 303u: goto L_088D974C;
    case 304u: goto L_088D9768;
    case 305u: goto L_088D9794;
    case 306u: goto L_088D97A0;
    case 307u: goto L_088D97B0;
    case 308u: goto L_088D97B8;
    case 309u: goto L_088D97C4;
    case 310u: goto L_088D97D0;
    case 311u: goto L_088D97D8;
    case 312u: goto L_088D97E4;
    case 313u: goto L_088D97FC;
    case 314u: goto L_088D9808;
    case 315u: goto L_088D98BC;
    case 316u: goto L_088D98F4;
    case 317u: goto L_088D98FC;
    case 318u: goto L_088D9940;
    case 319u: goto L_088D9948;
    case 320u: goto L_088D9950;
    case 321u: goto L_088D9970;
    case 322u: goto L_088D9978;
    case 323u: goto L_088D9980;
    case 324u: goto L_088D9988;
    case 325u: goto L_088D9994;
    case 326u: goto L_088D99A0;
    case 327u: goto L_088D99AC;
    case 328u: goto L_088D99B8;
    case 329u: goto L_088D99C0;
    case 330u: goto L_088D99D8;
    case 331u: goto L_088D99E4;
    case 332u: goto L_088D99EC;
    case 333u: goto L_088D99F4;
    case 334u: goto L_088D99FC;
    case 335u: goto L_088D9A08;
    case 336u: goto L_088D9A10;
    case 337u: goto L_088D9A1C;
    case 338u: goto L_088D9A24;
    case 339u: goto L_088D9A28;
    case 340u: goto L_088D9A38;
    case 341u: goto L_088D9A40;
    case 342u: goto L_088D9A48;
    case 343u: goto L_088D9A50;
    case 344u: goto L_088D9A58;
    case 345u: goto L_088D9A60;
    case 346u: goto L_088D9A70;
    case 347u: goto L_088D9A78;
    case 348u: goto L_088D9A80;
    case 349u: goto L_088D9A88;
    case 350u: goto L_088D9AB0;
    case 351u: goto L_088D9AC0;
    case 352u: goto L_088D9AD4;
    case 353u: goto L_088D9AE8;
    case 354u: goto L_088D9AF4;
    case 355u: goto L_088D9AFC;
    case 356u: goto L_088D9B08;
    case 357u: goto L_088D9B2C;
    case 358u: goto L_088D9B30;
    case 359u: goto L_088D9B44;
    case 360u: goto L_088D9B54;
    case 361u: goto L_088D9B64;
    case 362u: goto L_088D9B74;
    case 363u: goto L_088D9B84;
    case 364u: goto L_088D9B94;
    case 365u: goto L_088D9B9C;
    case 366u: goto L_088D9BA4;
    case 367u: goto L_088D9BAC;
    case 368u: goto L_088D9BB4;
    case 369u: goto L_088D9BC0;
    case 370u: goto L_088D9BC8;
    case 371u: goto L_088D9BD8;
    case 372u: goto L_088D9BE4;
    case 373u: goto L_088D9BEC;
    case 374u: goto L_088D9BF4;
    case 375u: goto L_088D9BFC;
    case 376u: goto L_088D9C04;
    case 377u: goto L_088D9C0C;
    case 378u: goto L_088D9C18;
    case 379u: goto L_088D9C24;
    case 380u: goto L_088D9C2C;
    case 381u: goto L_088D9C50;
    case 382u: goto L_088D9C54;
    case 383u: goto L_088D9C64;
    case 384u: goto L_088D9C6C;
    case 385u: goto L_088D9C78;
    case 386u: goto L_088D9C84;
    case 387u: goto L_088D9C90;
    case 388u: goto L_088D9C9C;
    case 389u: goto L_088D9CA0;
    case 390u: goto L_088D9CA8;
    case 391u: goto L_088D9CB8;
    case 392u: goto L_088D9CC8;
    case 393u: goto L_088D9CD8;
    case 394u: goto L_088D9CF4;
    case 395u: goto L_088D9D14;
    case 396u: goto L_088D9D1C;
    case 397u: goto L_088D9D28;
    case 398u: goto L_088D9D48;
    case 399u: goto L_088D9D58;
    case 400u: goto L_088D9D70;
    case 401u: goto L_088D9D80;
    case 402u: goto L_088D9D88;
    case 403u: goto L_088D9D94;
    case 404u: goto L_088D9DA0;
    case 405u: goto L_088D9DA8;
    case 406u: goto L_088D9DB0;
    case 407u: goto L_088D9DBC;
    case 408u: goto L_088D9DE4;
    case 409u: goto L_088D9DF8;
    case 410u: goto L_088D9E24;
    case 411u: goto L_088D9E30;
    case 412u: goto L_088D9E38;
    case 413u: goto L_088D9E44;
    case 414u: goto L_088D9E4C;
    case 415u: goto L_088D9E64;
    case 416u: goto L_088D9E80;
    case 417u: goto L_088D9E88;
    case 418u: goto L_088D9E98;
    case 419u: goto L_088D9EB0;
    case 420u: goto L_088D9EC8;
    case 421u: goto L_088D9ED0;
    case 422u: goto L_088D9ED8;
    case 423u: goto L_088D9EE8;
    case 424u: goto L_088D9EF0;
    case 425u: goto L_088D9F00;
    case 426u: goto L_088D9F0C;
    case 427u: goto L_088D9F2C;
    case 428u: goto L_088D9F44;
    case 429u: goto L_088D9F64;
    case 430u: goto L_088D9F6C;
    case 431u: goto L_088D9F7C;
    case 432u: goto L_088D9F98;
    case 433u: goto L_088D9FB4;
    case 434u: goto L_088D9FBC;
    case 435u: goto L_088D9FDC;
    case 436u: goto L_088D9FE8;
    case 437u: goto L_088D9FF4;
    case 438u: goto L_088DA000;
    case 439u: goto L_088DA018;
    case 440u: goto L_088DA028;
    case 441u: goto L_088DA030;
    case 442u: goto L_088DA03C;
    case 443u: goto L_088DA048;
    case 444u: goto L_088DA050;
    case 445u: goto L_088DA058;
    case 446u: goto L_088DA064;
    case 447u: goto L_088DA078;
    case 448u: goto L_088DA0A4;
    case 449u: goto L_088DA0B0;
    case 450u: goto L_088DA0C0;
    case 451u: goto L_088DA0F4;
    case 452u: goto L_088DA128;
    case 453u: goto L_088DA140;
    case 454u: goto L_088DA148;
    case 455u: goto L_088DA150;
    case 456u: goto L_088DA158;
    case 457u: goto L_088DA168;
    case 458u: goto L_088DA170;
    case 459u: goto L_088DA178;
    case 460u: goto L_088DA180;
    case 461u: goto L_088DA194;
    case 462u: goto L_088DA19C;
    case 463u: goto L_088DA1DC;
    case 464u: goto L_088DA1F4;
    case 465u: goto L_088DA204;
    case 466u: goto L_088DA228;
    case 467u: goto L_088DA234;
    case 468u: goto L_088DA23C;
    case 469u: goto L_088DA248;
    case 470u: goto L_088DA250;
    case 471u: goto L_088DA26C;
    case 472u: goto L_088DA278;
    case 473u: goto L_088DA280;
    case 474u: goto L_088DA294;
    case 475u: goto L_088DA2AC;
    case 476u: goto L_088DA2E8;
    case 477u: goto L_088DA2FC;
    case 478u: goto L_088DA304;
    case 479u: goto L_088DA31C;
    case 480u: goto L_088DA324;
    case 481u: goto L_088DA32C;
    case 482u: goto L_088DA338;
    case 483u: goto L_088DA340;
    case 484u: goto L_088DA34C;
    case 485u: goto L_088DA354;
    case 486u: goto L_088DA360;
    case 487u: goto L_088DA370;
    case 488u: goto L_088DA384;
    case 489u: goto L_088DA39C;
    case 490u: goto L_088DA3B0;
    case 491u: goto L_088DA3BC;
    case 492u: goto L_088DA3C8;
    case 493u: goto L_088DA3FC;
    case 494u: goto L_088DA410;
    case 495u: goto L_088DA418;
    case 496u: goto L_088DA42C;
    case 497u: goto L_088DA45C;
    case 498u: goto L_088DA464;
    case 499u: goto L_088DA46C;
    case 500u: goto L_088DA47C;
    case 501u: goto L_088DA484;
    case 502u: goto L_088DA49C;
    case 503u: goto L_088DA4A4;
    case 504u: goto L_088DA4BC;
    case 505u: goto L_088DA4F8;
    case 506u: goto L_088DA504;
    case 507u: goto L_088DA50C;
    case 508u: goto L_088DA514;
    case 509u: goto L_088DA51C;
    case 510u: goto L_088DA538;
    case 511u: goto L_088DA540;
    case 512u: goto L_088DA54C;
    case 513u: goto L_088DA558;
    case 514u: goto L_088DA564;
    case 515u: goto L_088DA568;
    case 516u: goto L_088DA570;
    case 517u: goto L_088DA580;
    case 518u: goto L_088DA598;
    case 519u: goto L_088DA5A0;
    case 520u: goto L_088DA5B8;
    case 521u: goto L_088DA5F4;
    case 522u: goto L_088DA5FC;
    case 523u: goto L_088DA604;
    case 524u: goto L_088DA614;
    case 525u: goto L_088DA62C;
    case 526u: goto L_088DA634;
    case 527u: goto L_088DA654;
    case 528u: goto L_088DA684;
    case 529u: goto L_088DA694;
    case 530u: goto L_088DA6A0;
    case 531u: goto L_088DA6A8;
    case 532u: goto L_088DA6B0;
    case 533u: goto L_088DA6B8;
    case 534u: goto L_088DA6C4;
    case 535u: goto L_088DA6E4;
    case 536u: goto L_088DA6F0;
    case 537u: goto L_088DA6F4;
    case 538u: goto L_088DA6FC;
    case 539u: goto L_088DA708;
    case 540u: goto L_088DA70C;
    case 541u: goto L_088DA714;
    case 542u: goto L_088DA724;
    case 543u: goto L_088DA72C;
    case 544u: goto L_088DA748;
    case 545u: goto L_088DA758;
    case 546u: goto L_088DA760;
    case 547u: goto L_088DA770;
    case 548u: goto L_088DA778;
    case 549u: goto L_088DA78C;
    case 550u: goto L_088DA7BC;
    case 551u: goto L_088DA7C4;
    case 552u: goto L_088DA7D4;
    case 553u: goto L_088DA7E4;
    case 554u: goto L_088DA800;
    case 555u: goto L_088DA810;
    case 556u: goto L_088DA820;
    case 557u: goto L_088DA828;
    case 558u: goto L_088DA838;
    case 559u: goto L_088DA840;
    case 560u: goto L_088DA854;
    case 561u: goto L_088DA884;
    case 562u: goto L_088DA88C;
    case 563u: goto L_088DA894;
    case 564u: goto L_088DA8A4;
    case 565u: goto L_088DA8B4;
    case 566u: goto L_088DA8BC;
    case 567u: goto L_088DA8CC;
    case 568u: goto L_088DA8D4;
    case 569u: goto L_088DA8E8;
    case 570u: goto L_088DA918;
    case 571u: goto L_088DA91C;
    case 572u: goto L_088DA924;
    case 573u: goto L_088DA930;
    case 574u: goto L_088DA938;
    case 575u: goto L_088DA954;
    case 576u: goto L_088DA960;
    case 577u: goto L_088DA968;
    case 578u: goto L_088DA974;
    case 579u: goto L_088DA97C;
    case 580u: goto L_088DA990;
    case 581u: goto L_088DA998;
    case 582u: goto L_088DA9B0;
    case 583u: goto L_088DA9EC;
    case 584u: goto L_088DA9F4;
    case 585u: goto L_088DAA20;
    case 586u: goto L_088DAA2C;
    case 587u: goto L_088DAA34;
    case 588u: goto L_088DAA40;
    case 589u: goto L_088DAA48;
    case 590u: goto L_088DAA60;
    case 591u: goto L_088DAA9C;
    case 592u: goto L_088DAAA4;
    case 593u: goto L_088DAAB0;
    case 594u: goto L_088DAABC;
    case 595u: goto L_088DAAC8;
    case 596u: goto L_088DAAD4;
    case 597u: goto L_088DAAF4;
    case 598u: goto L_088DAAFC;
    case 599u: goto L_088DAB1C;
    case 600u: goto L_088DAB24;
    case 601u: goto L_088DAB2C;
    case 602u: goto L_088DAB34;
    case 603u: goto L_088DAB5C;
    case 604u: goto L_088DAB90;
    case 605u: goto L_088DAB98;
    case 606u: goto L_088DABB0;
    case 607u: goto L_088DABB8;
    case 608u: goto L_088DABC0;
    case 609u: goto L_088DABC8;
    case 610u: goto L_088DABD8;
    case 611u: goto L_088DABE8;
    case 612u: goto L_088DABF0;
    case 613u: goto L_088DABF8;
    case 614u: goto L_088DAC00;
    case 615u: goto L_088DAC14;
    case 616u: goto L_088DAC1C;
    case 617u: goto L_088DAC24;
    case 618u: goto L_088DAC2C;
    case 619u: goto L_088DAC34;
    case 620u: goto L_088DAC3C;
    case 621u: goto L_088DAC48;
    case 622u: goto L_088DAC50;
    case 623u: goto L_088DAC58;
    case 624u: goto L_088DAC64;
    case 625u: goto L_088DAC70;
    case 626u: goto L_088DAC7C;
    case 627u: goto L_088DAC80;
    case 628u: goto L_088DAC88;
    case 629u: goto L_088DAC90;
    case 630u: goto L_088DAC9C;
    case 631u: goto L_088DACC4;
    case 632u: goto L_088DACEC;
    case 633u: goto L_088DAD08;
    case 634u: goto L_088DAD1C;
    case 635u: goto L_088DAD34;
    case 636u: goto L_088DAD3C;
    case 637u: goto L_088DAD50;
    case 638u: goto L_088DAD5C;
    case 639u: goto L_088DAD64;
    case 640u: goto L_088DAD74;
    case 641u: goto L_088DAD80;
    case 642u: goto L_088DAD90;
    case 643u: goto L_088DAD98;
    case 644u: goto L_088DADA4;
    case 645u: goto L_088DADB0;
    case 646u: goto L_088DADB8;
    case 647u: goto L_088DADC0;
    case 648u: goto L_088DADC4;
    case 649u: goto L_088DADCC;
    case 650u: goto L_088DADE0;
    case 651u: goto L_088DADE8;
    case 652u: goto L_088DAE18;
    case 653u: goto L_088DAE24;
    case 654u: goto L_088DAE34;
    case 655u: goto L_088DAE40;
    case 656u: goto L_088DAE50;
    case 657u: goto L_088DAE58;
    case 658u: goto L_088DAE64;
    case 659u: goto L_088DAE74;
    case 660u: goto L_088DAE9C;
    case 661u: goto L_088DAEA4;
    case 662u: goto L_088DAEB0;
    case 663u: goto L_088DAEC4;
    case 664u: goto L_088DAECC;
    case 665u: goto L_088DAEE0;
    case 666u: goto L_088DAEEC;
    case 667u: goto L_088DAF00;
    case 668u: goto L_088DAF10;
    case 669u: goto L_088DAF18;
    case 670u: goto L_088DAF20;
    case 671u: goto L_088DAF34;
    case 672u: goto L_088DAF48;
    case 673u: goto L_088DAF60;
    case 674u: goto L_088DAF80;
    case 675u: goto L_088DAF88;
    case 676u: goto L_088DAF90;
    case 677u: goto L_088DAF98;
    case 678u: goto L_088DAFC4;
    case 679u: goto L_088DB004;
    case 680u: goto L_088DB00C;
    case 681u: goto L_088DB018;
    case 682u: goto L_088DB028;
    case 683u: goto L_088DB038;
    case 684u: goto L_088DB048;
    case 685u: goto L_088DB058;
    case 686u: goto L_088DB068;
    case 687u: goto L_088DB070;
    case 688u: goto L_088DB078;
    case 689u: goto L_088DB080;
    case 690u: goto L_088DB090;
    case 691u: goto L_088DB09C;
    case 692u: goto L_088DB0A4;
    case 693u: goto L_088DB0AC;
    case 694u: goto L_088DB0B8;
    case 695u: goto L_088DB0C4;
    case 696u: goto L_088DB0D4;
    case 697u: goto L_088DB0DC;
    case 698u: goto L_088DB0F4;
    case 699u: goto L_088DB0F8;
    case 700u: goto L_088DB100;
    case 701u: goto L_088DB10C;
    case 702u: goto L_088DB128;
    case 703u: goto L_088DB134;
    case 704u: goto L_088DB154;
    case 705u: goto L_088DB168;
    case 706u: goto L_088DB174;
    case 707u: goto L_088DB18C;
    case 708u: goto L_088DB1B8;
    case 709u: goto L_088DB210;
    case 710u: goto L_088DB228;
    case 711u: goto L_088DB230;
    case 712u: goto L_088DB240;
    case 713u: goto L_088DB24C;
    case 714u: goto L_088DB25C;
    case 715u: goto L_088DB264;
    case 716u: goto L_088DB270;
    case 717u: goto L_088DB27C;
    case 718u: goto L_088DB28C;
    case 719u: goto L_088DB294;
    case 720u: goto L_088DB2A4;
    case 721u: goto L_088DB2A8;
    case 722u: goto L_088DB2B0;
    case 723u: goto L_088DB2CC;
    case 724u: goto L_088DB2D4;
    case 725u: goto L_088DB2DC;
    case 726u: goto L_088DB2E4;
    case 727u: goto L_088DB2EC;
    case 728u: goto L_088DB2F4;
    case 729u: goto L_088DB2FC;
    case 730u: goto L_088DB304;
    case 731u: goto L_088DB310;
    case 732u: goto L_088DB32C;
    case 733u: goto L_088DB334;
    case 734u: goto L_088DB33C;
    case 735u: goto L_088DB34C;
    case 736u: goto L_088DB358;
    case 737u: goto L_088DB360;
    case 738u: goto L_088DB368;
    case 739u: goto L_088DB370;
    case 740u: goto L_088DB378;
    case 741u: goto L_088DB388;
    case 742u: goto L_088DB390;
    case 743u: goto L_088DB3A0;
    case 744u: goto L_088DB3AC;
    case 745u: goto L_088DB3B4;
    case 746u: goto L_088DB3BC;
    case 747u: goto L_088DB3C8;
    case 748u: goto L_088DB3D0;
    case 749u: goto L_088DB3D8;
    case 750u: goto L_088DB3E0;
    case 751u: goto L_088DB3F0;
    case 752u: goto L_088DB3FC;
    case 753u: goto L_088DB400;
    case 754u: goto L_088DB408;
    case 755u: goto L_088DB414;
    case 756u: goto L_088DB41C;
    case 757u: goto L_088DB424;
    case 758u: goto L_088DB434;
    case 759u: goto L_088DB440;
    case 760u: goto L_088DB448;
    case 761u: goto L_088DB458;
    case 762u: goto L_088DB464;
    case 763u: goto L_088DB468;
    case 764u: goto L_088DB470;
    case 765u: goto L_088DB484;
    case 766u: goto L_088DB48C;
    case 767u: goto L_088DB498;
    case 768u: goto L_088DB4A4;
    case 769u: goto L_088DB4B8;
    case 770u: goto L_088DB4D0;
    case 771u: goto L_088DB4D4;
    case 772u: goto L_088DB4E0;
    case 773u: goto L_088DB4F8;
    case 774u: goto L_088DB500;
    case 775u: goto L_088DB508;
    case 776u: goto L_088DB510;
    case 777u: goto L_088DB518;
    case 778u: goto L_088DB528;
    case 779u: goto L_088DB530;
    case 780u: goto L_088DB548;
    case 781u: goto L_088DB594;
    case 782u: goto L_088DB59C;
    case 783u: goto L_088DB5A8;
    case 784u: goto L_088DB5B0;
    case 785u: goto L_088DB5B8;
    case 786u: goto L_088DB5C4;
    case 787u: goto L_088DB5CC;
    case 788u: goto L_088DB5D4;
    case 789u: goto L_088DB5DC;
    case 790u: goto L_088DB5E0;
    case 791u: goto L_088DB5EC;
    case 792u: goto L_088DB5F8;
    case 793u: goto L_088DB60C;
    case 794u: goto L_088DB624;
    case 795u: goto L_088DB628;
    case 796u: goto L_088DB634;
    case 797u: goto L_088DB64C;
    case 798u: goto L_088DB658;
    case 799u: goto L_088DB660;
    case 800u: goto L_088DB66C;
    case 801u: goto L_088DB678;
    case 802u: goto L_088DB684;
    case 803u: goto L_088DB694;
    case 804u: goto L_088DB6A4;
    case 805u: goto L_088DB6AC;
    case 806u: goto L_088DB6C0;
    case 807u: goto L_088DB6CC;
    case 808u: goto L_088DB6D4;
    case 809u: goto L_088DB6E0;
    case 810u: goto L_088DB6E8;
    case 811u: goto L_088DB6F0;
    case 812u: goto L_088DB6FC;
    case 813u: goto L_088DB708;
    case 814u: goto L_088DB710;
    case 815u: goto L_088DB720;
    case 816u: goto L_088DB72C;
    case 817u: goto L_088DB734;
    case 818u: goto L_088DB738;
    case 819u: goto L_088DB744;
    case 820u: goto L_088DB750;
    case 821u: goto L_088DB760;
    case 822u: goto L_088DB780;
    case 823u: goto L_088DB798;
    case 824u: goto L_088DB7A8;
    case 825u: goto L_088DB7B8;
    case 826u: goto L_088DB7C4;
    case 827u: goto L_088DB7CC;
    case 828u: goto L_088DB7D4;
    case 829u: goto L_088DB7F8;
    case 830u: goto L_088DB81C;
    case 831u: goto L_088DB83C;
    case 832u: goto L_088DB858;
    case 833u: goto L_088DB860;
    case 834u: goto L_088DB870;
    case 835u: goto L_088DB890;
    case 836u: goto L_088DB8A8;
    case 837u: goto L_088DB8B8;
    case 838u: goto L_088DB8CC;
    case 839u: goto L_088DB8E0;
    case 840u: goto L_088DB8F0;
    case 841u: goto L_088DB8F8;
    case 842u: goto L_088DB904;
    case 843u: goto L_088DB90C;
    case 844u: goto L_088DB914;
    case 845u: goto L_088DB924;
    case 846u: goto L_088DB930;
    case 847u: goto L_088DB93C;
    case 848u: goto L_088DB948;
    case 849u: goto L_088DB94C;
    case 850u: goto L_088DB954;
    case 851u: goto L_088DB96C;
    case 852u: goto L_088DB978;
    case 853u: goto L_088DB984;
    case 854u: goto L_088DB99C;
    case 855u: goto L_088DB9A8;
    case 856u: goto L_088DB9B4;
    case 857u: goto L_088DB9C0;
    case 858u: goto L_088DB9C4;
    case 859u: goto L_088DB9CC;
    case 860u: goto L_088DB9EC;
    case 861u: goto L_088DB9F8;
    case 862u: goto L_088DBA1C;
    case 863u: goto L_088DBA40;
    case 864u: goto L_088DBA5C;
    case 865u: goto L_088DBA84;
    case 866u: goto L_088DBA8C;
    case 867u: goto L_088DBA94;
    case 868u: goto L_088DBAA4;
    case 869u: goto L_088DBAA8;
    case 870u: goto L_088DBAB8;
    case 871u: goto L_088DBAC8;
    case 872u: goto L_088DBAE8;
    case 873u: goto L_088DBB00;
    case 874u: goto L_088DBB10;
    case 875u: goto L_088DBB24;
    case 876u: goto L_088DBB30;
    case 877u: goto L_088DBB38;
    case 878u: goto L_088DBB40;
    case 879u: goto L_088DBB48;
    case 880u: goto L_088DBB50;
    case 881u: goto L_088DBB5C;
    case 882u: goto L_088DBB8C;
    case 883u: goto L_088DBBF4;
    case 884u: goto L_088DBC14;
    case 885u: goto L_088DBC38;
    case 886u: goto L_088DBC84;
    case 887u: goto L_088DBC90;
    case 888u: goto L_088DBCA0;
    case 889u: goto L_088DBCAC;
    case 890u: goto L_088DBCB4;
    case 891u: goto L_088DBCBC;
    case 892u: goto L_088DBCCC;
    case 893u: goto L_088DBCD4;
    case 894u: goto L_088DBCE0;
    case 895u: goto L_088DBCE4;
    case 896u: goto L_088DBCF0;
    case 897u: goto L_088DBCF8;
    case 898u: goto L_088DBD04;
    case 899u: goto L_088DBD08;
    case 900u: goto L_088DBD10;
    case 901u: goto L_088DBD18;
    case 902u: goto L_088DBD20;
    case 903u: goto L_088DBD48;
    case 904u: goto L_088DBD58;
    case 905u: goto L_088DBD64;
    case 906u: goto L_088DBD68;
    case 907u: goto L_088DBDA0;
    case 908u: goto L_088DBDD8;
    case 909u: goto L_088DBDF8;
    case 910u: goto L_088DBE08;
    case 911u: goto L_088DBE10;
    case 912u: goto L_088DBE18;
    case 913u: goto L_088DBE20;
    case 914u: goto L_088DBE48;
    case 915u: goto L_088DBE54;
    case 916u: goto L_088DBE60;
    case 917u: goto L_088DBE68;
    case 918u: goto L_088DBE74;
    case 919u: goto L_088DBE7C;
    case 920u: goto L_088DBE84;
    case 921u: goto L_088DBE94;
    case 922u: goto L_088DBEB8;
    case 923u: goto L_088DBEF8;
    case 924u: goto L_088DBF34;
    case 925u: goto L_088DBF3C;
    case 926u: goto L_088DBF44;
    case 927u: goto L_088DBF68;
    case 928u: goto L_088DBF70;
    case 929u: goto L_088DBF78;
    case 930u: goto L_088DBF88;
    case 931u: goto L_088DBF8C;
    case 932u: goto L_088DBFC4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088D8000:
    ctx.gpr[5] = (0u | 202u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (16179u << 16u);
      if (branch_taken) {
          goto L_088D802C;
      }
      goto L_088D800C;
    }
L_088D800C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088D802C;
L_088D802C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(48);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8110;
      }
      goto L_088D8060;
    }
L_088D8060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D80A0;
      }
      goto L_088D806C;
    }
L_088D806C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
          goto L_088D8110;
      }
      goto L_088D80A0;
    }
L_088D80A0:
    ctx.gpr[31] = (0x088D80A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 259u, 0x08A4D17Cu>(ctx, &aot_mem) && ctx.pc == 0x088D80A8u) goto L_088D80A8;
    return;
L_088D80A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 202u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D80E0;
      }
      goto L_088D80B8;
    }
L_088D80B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D80E0;
      }
      goto L_088D80C8;
    }
L_088D80C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(708)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D80D8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 179u, 0x0890D00Cu>(ctx, &aot_mem) && ctx.pc == 0x088D80D8u) goto L_088D80D8;
    return;
L_088D80D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] << 6u);
      if (branch_taken) {
          goto L_088D80F4;
      }
      goto L_088D80E0;
    }
L_088D80E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(692)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D80F0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 179u, 0x0890D00Cu>(ctx, &aot_mem) && ctx.pc == 0x088D80F0u) goto L_088D80F0;
    return;
L_088D80F0:
    ctx.gpr[16] = (ctx.gpr[2] << 6u);
    goto L_088D80F4;
L_088D80F4:
    ctx.gpr[31] = (0x088D80FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 178u, 0x0890D004u>(ctx, &aot_mem) && ctx.pc == 0x088D80FCu) goto L_088D80FC;
    return;
L_088D80FC:
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088D8110u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 645u, 0x088B7FA4u>(ctx, &aot_mem) && ctx.pc == 0x088D8110u) goto L_088D8110;
    return;
L_088D8110:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x088D8134u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 187u, 0x08855100u>(ctx, &aot_mem) && ctx.pc == 0x088D8134u) goto L_088D8134;
    return;
L_088D8134:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 12u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D81D4;
    }
    goto L_088D815C;
L_088D815C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 13u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D81D4;
    }
    goto L_088D8184;
L_088D8184:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == ctx.gpr[30]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D81D4;
    }
    goto L_088D81A8;
L_088D81A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 14u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D8200;
    }
    goto L_088D81D0;
L_088D81D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    goto L_088D81D4;
L_088D81D4:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x088D81F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D81F0u) goto L_088D81F0;
    return;
L_088D81F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x088D81FCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 576u, 0x0899F198u>(ctx, &aot_mem) && ctx.pc == 0x088D81FCu) goto L_088D81FC;
    return;
L_088D81FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    goto L_088D8200;
L_088D8200:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D8248;
    }
    goto L_088D8220;
L_088D8220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D8248;
    }
    goto L_088D822C;
L_088D822C:
    ctx.gpr[31] = (0x088D8234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8234u) goto L_088D8234;
    return;
L_088D8234:
    if (ctx.gpr[2] == ctx.gpr[19]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D8248;
    }
    goto L_088D823C;
L_088D823C:
    ctx.gpr[31] = (0x088D8244u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 635u, 0x08887504u>(ctx, &aot_mem) && ctx.pc == 0x088D8244u) goto L_088D8244;
    return;
L_088D8244:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    goto L_088D8248;
L_088D8248:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088D8408;
      }
      goto L_088D8268;
    }
L_088D8268:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(300)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088D82B4;
      }
      goto L_088D8274;
    }
L_088D8274:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(296)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D82A8;
      }
      goto L_088D828C;
    }
L_088D828C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 14u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 2u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D82B4;
      }
      goto L_088D82A8;
    }
L_088D82A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    goto L_088D82B4;
L_088D82B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D83DC;
      }
      goto L_088D82C8;
    }
L_088D82C8:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088D83DC;
      }
      goto L_088D82D4;
    }
L_088D82D4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088D837C;
      }
      goto L_088D82DC;
    }
L_088D82DC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D837C;
      }
      goto L_088D82E4;
    }
L_088D82E4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_088D837C;
      }
      goto L_088D82EC;
    }
L_088D82EC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088D837C;
      }
      goto L_088D82F4;
    }
L_088D82F4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (0u | 201u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D8318;
    }
    goto L_088D8304;
L_088D8304:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (0u | 203u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D8374;
      }
      goto L_088D8314;
    }
L_088D8314:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    goto L_088D8318;
L_088D8318:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[6] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8107));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_088D8360;
      }
      goto L_088D8354;
    }
L_088D8354:
    ctx.gpr[6] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088D8360;
L_088D8360:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088D8374u);
    ctx.gpr[6] = (0u | 46u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8374u) goto L_088D8374;
    return;
L_088D8374:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D83DC;
      }
      goto L_088D837C;
    }
L_088D837C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[6] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8107));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_088D83C8;
      }
      goto L_088D83BC;
    }
L_088D83BC:
    ctx.gpr[6] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088D83C8;
L_088D83C8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088D83DCu);
    ctx.gpr[6] = (0u | 50u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x088D83DCu) goto L_088D83DC;
    return;
L_088D83DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8404;
      }
      goto L_088D83EC;
    }
L_088D83EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1792)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8408;
      }
      goto L_088D8404;
    }
L_088D8404:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), 0u);
    goto L_088D8408;
L_088D8408:
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (2230u << 16u);
      if (branch_taken) {
          goto L_088D8434;
      }
      goto L_088D8414;
    }
L_088D8414:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D8434;
      }
      goto L_088D8430;
    }
L_088D8430:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088D8434;
L_088D8434:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088D85E0;
      }
      goto L_088D8440;
    }
L_088D8440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D85E0;
      }
      goto L_088D8450;
    }
L_088D8450:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D85E0;
      }
      goto L_088D846C;
    }
L_088D846C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D85E0;
      }
      goto L_088D8488;
    }
L_088D8488:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D85E0;
      }
      goto L_088D8498;
    }
L_088D8498:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088D84B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 259u, 0x08A4D17Cu>(ctx, &aot_mem) && ctx.pc == 0x088D84B0u) goto L_088D84B0;
    return;
L_088D84B0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088D84C4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 179u, 0x0890D00Cu>(ctx, &aot_mem) && ctx.pc == 0x088D84C4u) goto L_088D84C4;
    return;
L_088D84C4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088D84D0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 178u, 0x0890D004u>(ctx, &aot_mem) && ctx.pc == 0x088D84D0u) goto L_088D84D0;
    return;
L_088D84D0:
    ctx.gpr[7] = (ctx.gpr[18] << 6u);
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D84E8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 645u, 0x088B7FA4u>(ctx, &aot_mem) && ctx.pc == 0x088D84E8u) goto L_088D84E8;
    return;
L_088D84E8:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (16153u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (15897u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D8590;
      }
      goto L_088D8588;
    }
L_088D8588:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_088D85C4;
      }
      goto L_088D8590;
    }
L_088D8590:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088D85C4;
L_088D85C4:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (15564u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D85E0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 278u, 0x08851A80u>(ctx, &aot_mem) && ctx.pc == 0x088D85E0u) goto L_088D85E0;
    return;
L_088D85E0:
    ctx.gpr[31] = (0x088D85E8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088D85E8u) goto L_088D85E8;
    return;
L_088D85E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D86EC;
      }
      goto L_088D85F0;
    }
L_088D85F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D8668;
      }
      goto L_088D8618;
    }
L_088D8618:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D8668;
      }
      goto L_088D8640;
    }
L_088D8640:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D86EC;
      }
      goto L_088D8668;
    }
L_088D8668:
    ctx.gpr[4] = (17092u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D8694;
      }
      goto L_088D8684;
    }
L_088D8684:
    ctx.gpr[4] = (16110u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 61167u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    goto L_088D8694;
L_088D8694:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D86EC;
      }
      goto L_088D86A4;
    }
L_088D86A4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D86EC;
      }
      goto L_088D86B8;
    }
L_088D86B8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D86EC;
      }
      goto L_088D86CC;
    }
L_088D86CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x088D86ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 336u, 0x0882607Cu>(ctx, &aot_mem) && ctx.pc == 0x088D86ECu) goto L_088D86EC;
    return;
L_088D86EC:
    ctx.gpr[31] = (0x088D86F4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088D86F4u) goto L_088D86F4;
    return;
L_088D86F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8734;
      }
      goto L_088D86FC;
    }
L_088D86FC:
    ctx.gpr[31] = (0x088D8704u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088D8704u) goto L_088D8704;
    return;
L_088D8704:
    ctx.gpr[31] = (0x088D870Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 136u, 0x08A98578u>(ctx, &aot_mem) && ctx.pc == 0x088D870Cu) goto L_088D870C;
    return;
L_088D870C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8734;
      }
      goto L_088D8714;
    }
L_088D8714:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8734;
      }
      goto L_088D871C;
    }
L_088D871C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D8750;
      }
      goto L_088D8734;
    }
L_088D8734:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_088D878C;
      }
      goto L_088D8748;
    }
L_088D8748:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088D8770;
      }
      goto L_088D8750;
    }
L_088D8750:
    ctx.gpr[4] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088D8768u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 117u, 0x088E0694u>(ctx, &aot_mem) && ctx.pc == 0x088D8768u) goto L_088D8768;
    return;
L_088D8768:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D91A4;
      }
      goto L_088D8770;
    }
L_088D8770:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8E28;
      }
      goto L_088D877C;
    }
L_088D877C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D8E28;
      }
      goto L_088D878C;
    }
L_088D878C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] != ctx.gpr[18]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
        goto L_088D896C;
    }
    goto L_088D87B4;
L_088D87B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
        goto L_088D896C;
    }
    goto L_088D87CC;
L_088D87CC:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088D8968;
      }
      goto L_088D87D4;
    }
L_088D87D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(357)));
    ctx.gpr[16] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-8107));
      if (branch_taken) {
          goto L_088D88FC;
      }
      goto L_088D8808;
    }
L_088D8808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D88A4;
      }
      goto L_088D8818;
    }
L_088D8818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D88A4;
      }
      goto L_088D8830;
    }
L_088D8830:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D8860;
      }
      goto L_088D8858;
    }
L_088D8858:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088D88E4;
      }
      goto L_088D8860;
    }
L_088D8860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (ctx.gpr[4] & 32768u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (0u | 204u);
        goto L_088D8884;
    }
    goto L_088D8884;
L_088D8884:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[31] = (0x088D889Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088D889Cu) goto L_088D889C;
    return;
L_088D889C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D88E4;
      }
      goto L_088D88A4;
    }
L_088D88A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (ctx.gpr[4] & 32768u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (0u | 203u);
        goto L_088D88C8;
    }
    goto L_088D88C8;
L_088D88C8:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[31] = (0x088D88E0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088D88E0u) goto L_088D88E0;
    return;
L_088D88E0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088D88E4;
L_088D88E4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D88FC;
      }
      goto L_088D88EC;
    }
L_088D88EC:
    ctx.gpr[5] = (2189u << 16u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D88FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22884));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x088D88FCu) goto L_088D88FC;
    return;
L_088D88FC:
    ctx.gpr[31] = (0x088D8904u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 92u, 0x089A0714u>(ctx, &aot_mem) && ctx.pc == 0x088D8904u) goto L_088D8904;
    return;
L_088D8904:
    ctx.gpr[31] = (0x088D890Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 61u, 0x089A04ACu>(ctx, &aot_mem) && ctx.pc == 0x088D890Cu) goto L_088D890C;
    return;
L_088D890C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1792), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x088D8960u);
    ctx.gpr[6] = (0u | 57u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8960u) goto L_088D8960;
    return;
L_088D8960:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D91A4;
      }
      goto L_088D8968;
    }
L_088D8968:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    goto L_088D896C;
L_088D896C:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D8CAC;
      }
      goto L_088D8990;
    }
L_088D8990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D89B8;
    }
    goto L_088D89A0;
L_088D89A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1792)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8CAC;
      }
      goto L_088D89B4;
    }
L_088D89B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    goto L_088D89B8;
L_088D89B8:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088D8A00;
      }
      goto L_088D89D8;
    }
L_088D89D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D8CAC;
      }
      goto L_088D8A00;
    }
L_088D8A00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088D8BD0;
      }
      goto L_088D8A0C;
    }
L_088D8A0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29516)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D8A38;
    }
    goto L_088D8A18;
L_088D8A18:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D8A24u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 499u, 0x088D6590u>(ctx, &aot_mem) && ctx.pc == 0x088D8A24u) goto L_088D8A24;
    return;
L_088D8A24:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8AA0;
      }
      goto L_088D8A34;
    }
L_088D8A34:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    goto L_088D8A38;
L_088D8A38:
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D8BD0;
      }
      goto L_088D8A5C;
    }
L_088D8A5C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8BD0;
      }
      goto L_088D8A64;
    }
L_088D8A64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8BD0;
      }
      goto L_088D8A74;
    }
L_088D8A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1296)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8BD0;
      }
      goto L_088D8A80;
    }
L_088D8A80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1296)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8BD0;
      }
      goto L_088D8AA0;
    }
L_088D8AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (2190u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] & 8192u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (0u | 202u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1684));
      if (branch_taken) {
          goto L_088D8AE4;
      }
      goto L_088D8AC4;
    }
L_088D8AC4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (8u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 205u);
        goto L_088D8AE4;
    }
    goto L_088D8AE4;
L_088D8AE4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D8B08;
      }
      goto L_088D8AEC;
    }
L_088D8AEC:
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088D8B00u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088D8B00u) goto L_088D8B00;
    return;
L_088D8B00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8BB8;
      }
      goto L_088D8B08;
    }
L_088D8B08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (16640u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 8192u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088D8B40;
      }
      goto L_088D8B28;
    }
L_088D8B28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    goto L_088D8B40;
L_088D8B40:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8BA4;
      }
      goto L_088D8B48;
    }
L_088D8B48:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[6] & 8192u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[21] = (0u | 202u);
      if (branch_taken) {
          goto L_088D8B88;
      }
      goto L_088D8B68;
    }
L_088D8B68:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (8u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[21] = (0u | 205u);
        goto L_088D8B88;
    }
    goto L_088D8B88;
L_088D8B88:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088D8B9Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088D8B9Cu) goto L_088D8B9C;
    return;
L_088D8B9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D8BB8;
      }
      goto L_088D8BA4;
    }
L_088D8BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088D8BB4u);
    ctx.gpr[6] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088D8BB4u) goto L_088D8BB4;
    return;
L_088D8BB4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_088D8BB8;
L_088D8BB8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088D8BC8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x088D8BC8u) goto L_088D8BC8;
    return;
L_088D8BC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8CA4;
      }
      goto L_088D8BD0;
    }
L_088D8BD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8C8C;
      }
      goto L_088D8BE8;
    }
L_088D8BE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (16640u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & 4096u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[18] = (2190u << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1684));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 202u);
        goto L_088D8C18;
    }
    goto L_088D8C18;
L_088D8C18:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D8C38;
      }
      goto L_088D8C20;
    }
L_088D8C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x088D8C30u);
    ctx.gpr[6] = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088D8C30u) goto L_088D8C30;
    return;
L_088D8C30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D8C74;
      }
      goto L_088D8C38;
    }
L_088D8C38:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[6] & 4096u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[21] = (0u | 202u);
        goto L_088D8C5C;
    }
    goto L_088D8C5C;
L_088D8C5C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088D8C70u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088D8C70u) goto L_088D8C70;
    return;
L_088D8C70:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_088D8C74;
L_088D8C74:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088D8C84u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x088D8C84u) goto L_088D8C84;
    return;
L_088D8C84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8CA4;
      }
      goto L_088D8C8C;
    }
L_088D8C8C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088D8C98u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088D8C98u) goto L_088D8C98;
    return;
L_088D8C98:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088D8CA4;
L_088D8CA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8E28;
      }
      goto L_088D8CAC;
    }
L_088D8CAC:
    ctx.gpr[31] = (0x088D8CB4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088D8CB4u) goto L_088D8CB4;
    return;
L_088D8CB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8D6C;
      }
      goto L_088D8CBC;
    }
L_088D8CBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8D6C;
      }
      goto L_088D8CD0;
    }
L_088D8CD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8D6C;
      }
      goto L_088D8CE0;
    }
L_088D8CE0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088D8D6C;
      }
      goto L_088D8D04;
    }
L_088D8D04:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 57u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x088D8D3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8D3Cu) goto L_088D8D3C;
    return;
L_088D8D3C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088D8D48u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088D8D48u) goto L_088D8D48;
    return;
L_088D8D48:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[31] = (0x088D8D64u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 266u, 0x088D534Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8D64u) goto L_088D8D64;
    return;
L_088D8D64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8E28;
      }
      goto L_088D8D6C;
    }
L_088D8D6C:
    ctx.gpr[31] = (0x088D8D74u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 61u, 0x089A04ACu>(ctx, &aot_mem) && ctx.pc == 0x088D8D74u) goto L_088D8D74;
    return;
L_088D8D74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D8DCC;
    }
    goto L_088D8D90;
L_088D8D90:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 57u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x088D8DC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8DC8u) goto L_088D8DC8;
    return;
L_088D8DC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    goto L_088D8DCC;
L_088D8DCC:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D8E28;
      }
      goto L_088D8DF0;
    }
L_088D8DF0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8E28;
      }
      goto L_088D8E00;
    }
L_088D8E00:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (49280u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088D8E28;
L_088D8E28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D8E40;
      }
      goto L_088D8E3C;
    }
L_088D8E3C:
    ctx.gpr[16] = (0u | 0u);
    goto L_088D8E40;
L_088D8E40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[16] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D91A4;
      }
      goto L_088D8E5C;
    }
L_088D8E5C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D91A4;
      }
      goto L_088D8E64;
    }
L_088D8E64:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8E84;
      }
      goto L_088D8E6C;
    }
L_088D8E6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D8E98;
      }
      goto L_088D8E7C;
    }
L_088D8E7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8EB4;
      }
      goto L_088D8E84;
    }
L_088D8E84:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088D8E90u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 117u, 0x088E0694u>(ctx, &aot_mem) && ctx.pc == 0x088D8E90u) goto L_088D8E90;
    return;
L_088D8E90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D91A4;
      }
      goto L_088D8E98;
    }
L_088D8E98:
    ctx.gpr[31] = (0x088D8EA0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088D8EA0u) goto L_088D8EA0;
    return;
L_088D8EA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8EB4;
      }
      goto L_088D8EA8;
    }
L_088D8EA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2964)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8ED8;
      }
      goto L_088D8EB4;
    }
L_088D8EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (16640u << 16u);
    ctx.gpr[16] = (2190u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1684));
      if (branch_taken) {
          goto L_088D8EE0;
      }
      goto L_088D8ED0;
    }
L_088D8ED0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8F54;
      }
      goto L_088D8ED8;
    }
L_088D8ED8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D91A4;
      }
      goto L_088D8EE0;
    }
L_088D8EE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8F54;
      }
      goto L_088D8EF0;
    }
L_088D8EF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8F54;
      }
      goto L_088D8F0C;
    }
L_088D8F0C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[17] = (0u | 202u);
        goto L_088D8F34;
    }
    goto L_088D8F34;
L_088D8F34:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088D8F4Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088D8F4Cu) goto L_088D8F4C;
    return;
L_088D8F4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D9144;
      }
      goto L_088D8F54;
    }
L_088D8F54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8FC8;
      }
      goto L_088D8F6C;
    }
L_088D8F6C:
    ctx.gpr[31] = (0x088D8F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088D8F74u) goto L_088D8F74;
    return;
L_088D8F74:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8FC8;
      }
      goto L_088D8F84;
    }
L_088D8F84:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[6] & 4096u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[17] = (0u | 202u);
        goto L_088D8FA8;
    }
    goto L_088D8FA8;
L_088D8FA8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088D8FC0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088D8FC0u) goto L_088D8FC0;
    return;
L_088D8FC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D9144;
      }
      goto L_088D8FC8;
    }
L_088D8FC8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29516)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9090;
      }
      goto L_088D8FD8;
    }
L_088D8FD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9090;
      }
      goto L_088D8FE4;
    }
L_088D8FE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] & 8192u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088D9014;
      }
      goto L_088D8FFC;
    }
L_088D8FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    goto L_088D9014;
L_088D9014:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088D9090;
      }
      goto L_088D901C;
    }
L_088D901C:
    ctx.gpr[31] = (0x088D9024u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 499u, 0x088D6590u>(ctx, &aot_mem) && ctx.pc == 0x088D9024u) goto L_088D9024;
    return;
L_088D9024:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9090;
      }
      goto L_088D9030;
    }
L_088D9030:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[6] & 8192u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (0u | 202u);
      if (branch_taken) {
          goto L_088D9070;
      }
      goto L_088D9050;
    }
L_088D9050:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (8u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[17] = (0u | 205u);
        goto L_088D9070;
    }
    goto L_088D9070;
L_088D9070:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088D9088u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088D9088u) goto L_088D9088;
    return;
L_088D9088:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D9144;
      }
      goto L_088D9090;
    }
L_088D9090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D9104;
      }
      goto L_088D90A0;
    }
L_088D90A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (4u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9104;
      }
      goto L_088D90BC;
    }
L_088D90BC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[17] = (0u | 205u);
        goto L_088D90E4;
    }
    goto L_088D90E4;
L_088D90E4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088D90FCu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088D90FCu) goto L_088D90FC;
    return;
L_088D90FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D9144;
      }
      goto L_088D9104;
    }
L_088D9104:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (32u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 201u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 57u);
        goto L_088D912C;
    }
    goto L_088D912C;
L_088D912C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088D9140u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088D9140u) goto L_088D9140;
    return;
L_088D9140:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_088D9144;
L_088D9144:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D9154u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x088D9154u) goto L_088D9154;
    return;
L_088D9154:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D9188;
      }
      goto L_088D917C;
    }
L_088D917C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x088D9188u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088D9188u) goto L_088D9188;
    return;
L_088D9188:
    ctx.gpr[31] = (0x088D9190u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088D9190u) goto L_088D9190;
    return;
L_088D9190:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D91A4;
      }
      goto L_088D9198;
    }
L_088D9198:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2964), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2960), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088D91A4;
L_088D91A4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D91E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D9240u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D9240u) goto L_088D9240;
    return;
L_088D9240:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_088D926C;
      }
      goto L_088D924C;
    }
L_088D924C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D926C;
      }
      goto L_088D9268;
    }
L_088D9268:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_088D926C;
L_088D926C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D92B0;
      }
      goto L_088D9280;
    }
L_088D9280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[21] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088D92A8;
      }
      goto L_088D9290;
    }
L_088D9290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
        goto L_088D92B8;
    }
    goto L_088D92A0;
L_088D92A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D92C4;
      }
      goto L_088D92A8;
    }
L_088D92A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA0C0;
      }
      goto L_088D92B0;
    }
L_088D92B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA0C0;
      }
      goto L_088D92B8;
    }
L_088D92B8:
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D92D4;
      }
      goto L_088D92C4;
    }
L_088D92C4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D92DC;
      }
      goto L_088D92CC;
    }
L_088D92CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9364;
      }
      goto L_088D92D4;
    }
L_088D92D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA0C0;
      }
      goto L_088D92DC;
    }
L_088D92DC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16332u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D9364;
      }
      goto L_088D9334;
    }
L_088D9334:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D9364;
      }
      goto L_088D935C;
    }
L_088D935C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA0C0;
      }
      goto L_088D9364;
    }
L_088D9364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
        goto L_088D93B8;
    }
    goto L_088D937C;
L_088D937C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[4] & 32768u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 203u);
        goto L_088D939C;
    }
    goto L_088D939C;
L_088D939C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D93ACu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D93ACu) goto L_088D93AC;
    return;
L_088D93AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9404;
      }
      goto L_088D93B4;
    }
L_088D93B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    goto L_088D93B8;
L_088D93B8:
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_088D9458;
    }
    goto L_088D93CC;
L_088D93CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[4] & 32768u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 204u);
        goto L_088D93EC;
    }
    goto L_088D93EC;
L_088D93EC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D93FCu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D93FCu) goto L_088D93FC;
    return;
L_088D93FC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_088D9458;
    }
    goto L_088D9404;
L_088D9404:
    ctx.gpr[31] = (0x088D940Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088D940Cu) goto L_088D940C;
    return;
L_088D940C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9440;
      }
      goto L_088D9414;
    }
L_088D9414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D9440;
      }
      goto L_088D9424;
    }
L_088D9424:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2964)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9440;
      }
      goto L_088D9430;
    }
L_088D9430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D9450;
      }
      goto L_088D9440;
    }
L_088D9440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_088D9450;
L_088D9450:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA0C0;
      }
      goto L_088D9458;
    }
L_088D9458:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D94BC;
      }
      goto L_088D9478;
    }
L_088D9478:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088D94BC;
      }
      goto L_088D94A0;
    }
L_088D94A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D965C;
      }
      goto L_088D94BC;
    }
L_088D94BC:
    ctx.gpr[31] = (0x088D94C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088D94C4u) goto L_088D94C4;
    return;
L_088D94C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D954C;
      }
      goto L_088D94CC;
    }
L_088D94CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D9528;
      }
      goto L_088D94DC;
    }
L_088D94DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9528;
      }
      goto L_088D94E8;
    }
L_088D94E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D9528;
      }
      goto L_088D94F8;
    }
L_088D94F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9528;
      }
      goto L_088D950C;
    }
L_088D950C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D954C;
      }
      goto L_088D9528;
    }
L_088D9528:
    ctx.gpr[31] = (0x088D9530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088D9530u) goto L_088D9530;
    return;
L_088D9530:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x088D9544u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088DAB5C;
L_088D9544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9654;
      }
      goto L_088D954C;
    }
L_088D954C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9654;
      }
      goto L_088D9568;
    }
L_088D9568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[20] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088D9654;
      }
      goto L_088D9578;
    }
L_088D9578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[17] = (2190u << 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1684));
      if (branch_taken) {
          goto L_088D95B8;
      }
      goto L_088D9588;
    }
L_088D9588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D95B0;
      }
      goto L_088D9594;
    }
L_088D9594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_088D95B0;
    }
    goto L_088D95A0;
L_088D95A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x088D95ACu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x088D95ACu) goto L_088D95AC;
    return;
L_088D95AC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_088D95B0;
L_088D95B0:
    ctx.gpr[31] = (0x088D95B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x088D95B8u) goto L_088D95B8;
    return;
L_088D95B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[18]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[20] = (0u | 203u);
        goto L_088D95F0;
    }
    goto L_088D95F0;
L_088D95F0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088D960Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088D960Cu) goto L_088D960C;
    return;
L_088D960C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D9644;
      }
      goto L_088D9638;
    }
L_088D9638:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x088D9644u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088D9644u) goto L_088D9644;
    return;
L_088D9644:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D9654u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x088D9654u) goto L_088D9654;
    return;
L_088D9654:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA0C0;
      }
      goto L_088D965C;
    }
L_088D965C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D97B8;
      }
      goto L_088D9678;
    }
L_088D9678:
    ctx.gpr[31] = (0x088D9680u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088D9680u) goto L_088D9680;
    return;
L_088D9680:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
        goto L_088D96A8;
    }
    goto L_088D9688;
L_088D9688:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D96C4;
      }
      goto L_088D96A4;
    }
L_088D96A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    goto L_088D96A8;
L_088D96A8:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D96C4;
      }
      goto L_088D96B4;
    }
L_088D96B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D97B8;
      }
      goto L_088D96C4;
    }
L_088D96C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[18] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088D97B0;
      }
      goto L_088D96D4;
    }
L_088D96D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[17] = (2190u << 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1684));
      if (branch_taken) {
          goto L_088D9714;
      }
      goto L_088D96E4;
    }
L_088D96E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D970C;
      }
      goto L_088D96F0;
    }
L_088D96F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_088D970C;
    }
    goto L_088D96FC;
L_088D96FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x088D9708u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x088D9708u) goto L_088D9708;
    return;
L_088D9708:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_088D970C;
L_088D970C:
    ctx.gpr[31] = (0x088D9714u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x088D9714u) goto L_088D9714;
    return;
L_088D9714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[23]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[18] = (0u | 203u);
        goto L_088D974C;
    }
    goto L_088D974C;
L_088D974C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088D9768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088D9768u) goto L_088D9768;
    return;
L_088D9768:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D97A0;
      }
      goto L_088D9794;
    }
L_088D9794:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x088D97A0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088D97A0u) goto L_088D97A0;
    return;
L_088D97A0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D97B0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x088D97B0u) goto L_088D97B0;
    return;
L_088D97B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA0C0;
      }
      goto L_088D97B8;
    }
L_088D97B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D97D0;
      }
      goto L_088D97C4;
    }
L_088D97C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[31] = (0x088D97D0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1328));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x088D97D0u) goto L_088D97D0;
    return;
L_088D97D0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1328), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088D97E4;
      }
      goto L_088D97D8;
    }
L_088D97D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[31] = (0x088D97E4u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1328));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x088D97E4u) goto L_088D97E4;
    return;
L_088D97E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9A28;
      }
      goto L_088D97FC;
    }
L_088D97FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9A28;
      }
      goto L_088D9808;
    }
L_088D9808:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
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
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088D98BCu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x088D98BCu) goto L_088D98BC;
    return;
L_088D98BC:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x088D98F4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 72u, 0x088C8430u>(ctx, &aot_mem) && ctx.pc == 0x088D98F4u) goto L_088D98F4;
    return;
L_088D98F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_088D9980;
      }
      goto L_088D98FC;
    }
L_088D98FC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4528));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[6] = (ctx.gpr[4] ^ 16u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[4] ^ 31u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9980;
      }
      goto L_088D9940;
    }
L_088D9940:
    ctx.gpr[31] = (0x088D9948u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088D9948u) goto L_088D9948;
    return;
L_088D9948:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9978;
      }
      goto L_088D9950;
    }
L_088D9950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1792), 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29140)));
    ctx.gpr[31] = (0x088D9970u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 247u, 0x089A11A4u>(ctx, &aot_mem) && ctx.pc == 0x088D9970u) goto L_088D9970;
    return;
L_088D9970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1816), ctx.gpr[4]);
    goto L_088D9978;
L_088D9978:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA0C0;
      }
      goto L_088D9980;
    }
L_088D9980:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1760), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088D99A0;
      }
      goto L_088D9988;
    }
L_088D9988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[31] = (0x088D9994u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1760));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x088D9994u) goto L_088D9994;
    return;
L_088D9994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[31] = (0x088D99A0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1328));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x088D99A0u) goto L_088D99A0;
    return;
L_088D99A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D99C0;
      }
      goto L_088D99AC;
    }
L_088D99AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[31] = (0x088D99B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 54u, 0x089A040Cu>(ctx, &aot_mem) && ctx.pc == 0x088D99B8u) goto L_088D99B8;
    return;
L_088D99B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9A28;
      }
      goto L_088D99C0;
    }
L_088D99C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D99EC;
      }
      goto L_088D99D8;
    }
L_088D99D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[31] = (0x088D99E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 47u, 0x089A0358u>(ctx, &aot_mem) && ctx.pc == 0x088D99E4u) goto L_088D99E4;
    return;
L_088D99E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9A28;
      }
      goto L_088D99EC;
    }
L_088D99EC:
    ctx.gpr[31] = (0x088D99F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088D99F4u) goto L_088D99F4;
    return;
L_088D99F4:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    ctx.gpr[20] = (2232u << 16u);
      if (branch_taken) {
          goto L_088D9A28;
      }
      goto L_088D99FC;
    }
L_088D99FC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12960));
    ctx.gpr[31] = (0x088D9A08u);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(400));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 491u, 0x088EABACu>(ctx, &aot_mem) && ctx.pc == 0x088D9A08u) goto L_088D9A08;
    return;
L_088D9A08:
    // Aim pitch follows the camera while aiming.
    if (lcs::lcs_manual_aim_pose()) ctx.gpr[2] = 1u;
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9A28;
      }
      goto L_088D9A10;
    }
L_088D9A10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[31] = (0x088D9A1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 47u, 0x089A0358u>(ctx, &aot_mem) && ctx.pc == 0x088D9A1Cu) goto L_088D9A1C;
    return;
L_088D9A1C:
    ctx.gpr[31] = (0x088D9A24u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 186u, 0x088ED68Cu>(ctx, &aot_mem) && ctx.pc == 0x088D9A24u) goto L_088D9A24;
    return;
L_088D9A24:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3192), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088D9A28;
L_088D9A28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[20] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088D9A60;
      }
      goto L_088D9A38;
    }
L_088D9A38:
    ctx.gpr[31] = (0x088D9A40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088D9A40u) goto L_088D9A40;
    return;
L_088D9A40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9A70;
      }
      goto L_088D9A48;
    }
L_088D9A48:
    ctx.gpr[31] = (0x088D9A50u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088D9A50u) goto L_088D9A50;
    return;
L_088D9A50:
    ctx.gpr[31] = (0x088D9A58u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 336u, 0x08A98F08u>(ctx, &aot_mem) && ctx.pc == 0x088D9A58u) goto L_088D9A58;
    return;
L_088D9A58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9AFC;
      }
      goto L_088D9A60;
    }
L_088D9A60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DA0C0;
      }
      goto L_088D9A70;
    }
L_088D9A70:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9AFC;
      }
      goto L_088D9A78;
    }
L_088D9A78:
    ctx.gpr[31] = (0x088D9A80u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x088D9A80u) goto L_088D9A80;
    return;
L_088D9A80:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9AFC;
      }
      goto L_088D9A88;
    }
L_088D9A88:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D9AD4;
      }
      goto L_088D9AB0;
    }
L_088D9AB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D9AD4;
      }
      goto L_088D9AC0;
    }
L_088D9AC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088D9AD4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 549u, 0x089BA410u>(ctx, &aot_mem) && ctx.pc == 0x088D9AD4u) goto L_088D9AD4;
    return;
L_088D9AD4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088D9AE8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x088D9AE8u) goto L_088D9AE8;
    return;
L_088D9AE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D9AF4u);
    ctx.gpr[5] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x088D9AF4u) goto L_088D9AF4;
    return;
L_088D9AF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA0C0;
      }
      goto L_088D9AFC;
    }
L_088D9AFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088D9B30;
      }
      goto L_088D9B08;
    }
L_088D9B08:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D9C2C;
      }
      goto L_088D9B2C;
    }
L_088D9B2C:
    ctx.gpr[4] = (2232u << 16u);
    goto L_088D9B30;
L_088D9B30:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D9C2C;
      }
      goto L_088D9B44;
    }
L_088D9B44:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[6] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D9C2C;
      }
      goto L_088D9B54;
    }
L_088D9B54:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[6] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D9C2C;
      }
      goto L_088D9B64;
    }
L_088D9B64:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[6] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D9C2C;
      }
      goto L_088D9B74;
    }
L_088D9B74:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[6] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D9C2C;
      }
      goto L_088D9B84;
    }
L_088D9B84:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D9C2C;
      }
      goto L_088D9B94;
    }
L_088D9B94:
    ctx.gpr[31] = (0x088D9B9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088D9B9Cu) goto L_088D9B9C;
    return;
L_088D9B9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9BC0;
      }
      goto L_088D9BA4;
    }
L_088D9BA4:
    ctx.gpr[31] = (0x088D9BACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088D9BACu) goto L_088D9BAC;
    return;
L_088D9BAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9C2C;
      }
      goto L_088D9BB4;
    }
L_088D9BB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3229)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9C2C;
      }
      goto L_088D9BC0;
    }
L_088D9BC0:
    ctx.gpr[31] = (0x088D9BC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088D9BC8u) goto L_088D9BC8;
    return;
L_088D9BC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088D9BD8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 164u, 0x088D4C90u>(ctx, &aot_mem) && ctx.pc == 0x088D9BD8u) goto L_088D9BD8;
    return;
L_088D9BD8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9C2C;
      }
      goto L_088D9BE4;
    }
L_088D9BE4:
    ctx.gpr[31] = (0x088D9BECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 61u, 0x089A04ACu>(ctx, &aot_mem) && ctx.pc == 0x088D9BECu) goto L_088D9BEC;
    return;
L_088D9BEC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088D9C18;
      }
      goto L_088D9BF4;
    }
L_088D9BF4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9C24;
      }
      goto L_088D9BFC;
    }
L_088D9BFC:
    ctx.gpr[31] = (0x088D9C04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088D9C04u) goto L_088D9C04;
    return;
L_088D9C04:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9C18;
      }
      goto L_088D9C0C;
    }
L_088D9C0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9C24;
      }
      goto L_088D9C18;
    }
L_088D9C18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D9C24u);
    ctx.gpr[5] = (0u | 200u);
    goto L_088DAB5C;
L_088D9C24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA0C0;
      }
      goto L_088D9C2C;
    }
L_088D9C2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (16640u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[17] = (2190u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1684));
      if (branch_taken) {
          goto L_088D9C54;
      }
      goto L_088D9C50;
    }
L_088D9C50:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1328), 0u);
    goto L_088D9C54;
L_088D9C54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D9C6C;
      }
      goto L_088D9C64;
    }
L_088D9C64:
    ctx.gpr[31] = (0x088D9C6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 727u, 0x0899FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x088D9C6Cu) goto L_088D9C6C;
    return;
L_088D9C6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088D9CA8;
      }
      goto L_088D9C78;
    }
L_088D9C78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9CA0;
      }
      goto L_088D9C84;
    }
L_088D9C84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_088D9CA0;
    }
    goto L_088D9C90;
L_088D9C90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x088D9C9Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x088D9C9Cu) goto L_088D9C9C;
    return;
L_088D9C9C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_088D9CA0;
L_088D9CA0:
    ctx.gpr[31] = (0x088D9CA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x088D9CA8u) goto L_088D9CA8;
    return;
L_088D9CA8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D9CB8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x088D9CB8u) goto L_088D9CB8;
    return;
L_088D9CB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9E38;
      }
      goto L_088D9CC8;
    }
L_088D9CC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9E38;
      }
      goto L_088D9CD8;
    }
L_088D9CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9E38;
      }
      goto L_088D9CF4;
    }
L_088D9CF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[18]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (0u | 202u);
        goto L_088D9D14;
    }
    goto L_088D9D14;
L_088D9D14:
    ctx.gpr[31] = (0x088D9D1Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D9D1Cu) goto L_088D9D1C;
    return;
L_088D9D1C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9DBC;
      }
      goto L_088D9D28;
    }
L_088D9D28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 202u);
        goto L_088D9D48;
    }
    goto L_088D9D48;
L_088D9D48:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D9D58u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 489u, 0x08A8AEF8u>(ctx, &aot_mem) && ctx.pc == 0x088D9D58u) goto L_088D9D58;
    return;
L_088D9D58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D9D94;
      }
      goto L_088D9D70;
    }
L_088D9D70:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088D9D88;
      }
      goto L_088D9D80;
    }
L_088D9D80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088D9DA8;
      }
      goto L_088D9D88;
    }
L_088D9D88:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088D9D70;
      }
      goto L_088D9D94;
    }
L_088D9D94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088D9DA8;
      }
      goto L_088D9DA0;
    }
L_088D9DA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088D9DA8;
      }
      goto L_088D9DA8;
    }
L_088D9DA8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9DBC;
      }
      goto L_088D9DB0;
    }
L_088D9DB0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088D9DBCu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 870u, 0x088B3F48u>(ctx, &aot_mem) && ctx.pc == 0x088D9DBCu) goto L_088D9DBC;
    return;
L_088D9DBC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[18]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 202u);
        goto L_088D9DE4;
    }
    goto L_088D9DE4;
L_088D9DE4:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088D9DF8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088D9DF8u) goto L_088D9DF8;
    return;
L_088D9DF8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DA0B0;
      }
      goto L_088D9E24;
    }
L_088D9E24:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x088D9E30u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088D9E30u) goto L_088D9E30;
    return;
L_088D9E30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA0B0;
      }
      goto L_088D9E38;
    }
L_088D9E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9E4C;
      }
      goto L_088D9E44;
    }
L_088D9E44:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088D9E4C;
L_088D9E4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9E88;
      }
      goto L_088D9E64;
    }
L_088D9E64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[20] = (0u | 203u);
        goto L_088D9E80;
    }
    goto L_088D9E80;
L_088D9E80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9FDC;
      }
      goto L_088D9E88;
    }
L_088D9E88:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29516)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9F6C;
      }
      goto L_088D9E98;
    }
L_088D9E98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] & 8192u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088D9EC8;
      }
      goto L_088D9EB0;
    }
L_088D9EB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    goto L_088D9EC8;
L_088D9EC8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088D9F6C;
      }
      goto L_088D9ED0;
    }
L_088D9ED0:
    ctx.gpr[31] = (0x088D9ED8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 499u, 0x088D6590u>(ctx, &aot_mem) && ctx.pc == 0x088D9ED8u) goto L_088D9ED8;
    return;
L_088D9ED8:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9F2C;
      }
      goto L_088D9EE8;
    }
L_088D9EE8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9F6C;
      }
      goto L_088D9EF0;
    }
L_088D9EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9F6C;
      }
      goto L_088D9F00;
    }
L_088D9F00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1296)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9F6C;
      }
      goto L_088D9F0C;
    }
L_088D9F0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1296)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9F6C;
      }
      goto L_088D9F2C;
    }
L_088D9F2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (0u | 202u);
      if (branch_taken) {
          goto L_088D9F64;
      }
      goto L_088D9F44;
    }
L_088D9F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[20] = (0u | 205u);
        goto L_088D9F64;
    }
    goto L_088D9F64;
L_088D9F64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9FDC;
      }
      goto L_088D9F6C;
    }
L_088D9F6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D9FBC;
      }
      goto L_088D9F7C;
    }
L_088D9F7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (4u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9FBC;
      }
      goto L_088D9F98;
    }
L_088D9F98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[20] = (0u | 205u);
        goto L_088D9FB4;
    }
    goto L_088D9FB4;
L_088D9FB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9FDC;
      }
      goto L_088D9FBC;
    }
L_088D9FBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[20] = (0u | 201u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[20] = (0u | 57u);
        goto L_088D9FDC;
    }
    goto L_088D9FDC;
L_088D9FDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088D9FE8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D9FE8u) goto L_088D9FE8;
    return;
L_088D9FE8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA064;
      }
      goto L_088D9FF4;
    }
L_088D9FF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x088DA000u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 489u, 0x08A8AEF8u>(ctx, &aot_mem) && ctx.pc == 0x088DA000u) goto L_088DA000;
    return;
L_088DA000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DA03C;
      }
      goto L_088DA018;
    }
L_088DA018:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088DA030;
      }
      goto L_088DA028;
    }
L_088DA028:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088DA050;
      }
      goto L_088DA030;
    }
L_088DA030:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088DA018;
      }
      goto L_088DA03C;
    }
L_088DA03C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088DA050;
      }
      goto L_088DA048;
    }
L_088DA048:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088DA050;
      }
      goto L_088DA050;
    }
L_088DA050:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA064;
      }
      goto L_088DA058;
    }
L_088DA058:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DA064u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 870u, 0x088B3F48u>(ctx, &aot_mem) && ctx.pc == 0x088DA064u) goto L_088DA064;
    return;
L_088DA064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x088DA078u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DA078u) goto L_088DA078;
    return;
L_088DA078:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DA0B0;
      }
      goto L_088DA0A4;
    }
L_088DA0A4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x088DA0B0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088DA0B0u) goto L_088DA0B0;
    return;
L_088DA0B0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DA0C0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x088DA0C0u) goto L_088DA0C0;
    return;
L_088DA0C0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA0F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(864)));
    ctx.gpr[6] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088DA148;
      }
      goto L_088DA128;
    }
L_088DA128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA150;
      }
      goto L_088DA140;
    }
L_088DA140:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088DA19C;
      }
      goto L_088DA148;
    }
L_088DA148:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAB34;
      }
      goto L_088DA150;
    }
L_088DA150:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA170;
      }
      goto L_088DA158;
    }
L_088DA158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(652)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 19 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA180;
      }
      goto L_088DA168;
    }
L_088DA168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA194;
      }
      goto L_088DA170;
    }
L_088DA170:
    ctx.gpr[31] = (0x088DA178u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 220u, 0x088D50D0u>(ctx, &aot_mem) && ctx.pc == 0x088DA178u) goto L_088DA178;
    return;
L_088DA178:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAB34;
      }
      goto L_088DA180;
    }
L_088DA180:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088DA194u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 549u, 0x089BA410u>(ctx, &aot_mem) && ctx.pc == 0x088DA194u) goto L_088DA194;
    return;
L_088DA194:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1784), 0u);
      if (branch_taken) {
          goto L_088DAB34;
      }
      goto L_088DA19C;
    }
L_088DA19C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(644)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(648)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1340)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[17];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088DA354;
      }
      goto L_088DA1DC;
    }
L_088DA1DC:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1312), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1316), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DA1F4u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 510u, 0x089AA50Cu>(ctx, &aot_mem) && ctx.pc == 0x088DA1F4u) goto L_088DA1F4;
    return;
L_088DA1F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(652)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA23C;
      }
      goto L_088DA204;
    }
L_088DA204:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DA23C;
      }
      goto L_088DA228;
    }
L_088DA228:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DA234u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x088DA234u) goto L_088DA234;
    return;
L_088DA234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA34C;
      }
      goto L_088DA23C;
    }
L_088DA23C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 22 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DA340;
      }
      goto L_088DA248;
    }
L_088DA248:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA340;
      }
      goto L_088DA250;
    }
L_088DA250:
    ctx.gpr[4] = (16312u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DA280;
      }
      goto L_088DA26C;
    }
L_088DA26C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DA278u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x088DA278u) goto L_088DA278;
    return;
L_088DA278:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA34C;
      }
      goto L_088DA280;
    }
L_088DA280:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088DA324;
      }
      goto L_088DA294;
    }
L_088DA294:
    ctx.gpr[7] = (15907u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(644)));
    ctx.gpr[7] = (ctx.gpr[7] | 55051u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(648)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    goto L_088DA2AC;
L_088DA2AC:
    ctx.gpr[7] = (ctx.gpr[20] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[18];
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DA304;
      }
      goto L_088DA2E8;
    }
L_088DA2E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DA2FCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x088DA2FCu) goto L_088DA2FC;
    return;
L_088DA2FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088DA324;
      }
      goto L_088DA304;
    }
L_088DA304:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_088DA2AC;
      }
      goto L_088DA31C;
    }
L_088DA31C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    goto L_088DA324;
L_088DA324:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA338;
      }
      goto L_088DA32C;
    }
L_088DA32C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DA338u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x088DA338u) goto L_088DA338;
    return;
L_088DA338:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA34C;
      }
      goto L_088DA340;
    }
L_088DA340:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DA34Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x088DA34Cu) goto L_088DA34C;
    return;
L_088DA34C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAB34;
      }
      goto L_088DA354;
    }
L_088DA354:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088DA360u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x088DA360u) goto L_088DA360;
    return;
L_088DA360:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DA370u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x088DA370u) goto L_088DA370;
    return;
L_088DA370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(652)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAB34;
      }
      goto L_088DA384;
    }
L_088DA384:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(14048)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA39C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA45C;
      }
      goto L_088DA3B0;
    }
L_088DA3B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DA3BCu);
    ctx.gpr[5] = (0u | 149u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088DA3BCu) goto L_088DA3BC;
    return;
L_088DA3BC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (49408u << 16u);
      if (branch_taken) {
          goto L_088DA464;
      }
      goto L_088DA3C8;
    }
L_088DA3C8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(656)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21516)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21512)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21524)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21520)));
      if (branch_taken) {
          goto L_088DA410;
      }
      goto L_088DA3FC;
    }
L_088DA3FC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088DA410u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x088DA410u) goto L_088DA410;
    return;
L_088DA410:
    ctx.gpr[31] = (0x088DA418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DA418u) goto L_088DA418;
    return;
L_088DA418:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DA42Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x088DA42Cu) goto L_088DA42C;
    return;
L_088DA42C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088DA45Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x088DA45Cu) goto L_088DA45C;
    return;
L_088DA45C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAB34;
      }
      goto L_088DA464;
    }
L_088DA464:
    ctx.gpr[31] = (0x088DA46Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DA46Cu) goto L_088DA46C;
    return;
L_088DA46C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA50C;
      }
      goto L_088DA47C;
    }
L_088DA47C:
    ctx.gpr[31] = (0x088DA484u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 92u, 0x089A0714u>(ctx, &aot_mem) && ctx.pc == 0x088DA484u) goto L_088DA484;
    return;
L_088DA484:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DA49Cu);
    ctx.gpr[6] = (0u | 149u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DA49Cu) goto L_088DA49C;
    return;
L_088DA49C:
    ctx.gpr[31] = (0x088DA4A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DA4A4u) goto L_088DA4A4;
    return;
L_088DA4A4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21524)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088DA4BCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x088DA4BCu) goto L_088DA4BC;
    return;
L_088DA4BC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21532)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21528)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088DA4F8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x088DA4F8u) goto L_088DA4F8;
    return;
L_088DA4F8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DA504u);
    ctx.gpr[5] = (0u | 155u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x088DA504u) goto L_088DA504;
    return;
L_088DA504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA45C;
      }
      goto L_088DA50C;
    }
L_088DA50C:
    ctx.gpr[31] = (0x088DA514u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 220u, 0x088D50D0u>(ctx, &aot_mem) && ctx.pc == 0x088DA514u) goto L_088DA514;
    return;
L_088DA514:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAB34;
      }
      goto L_088DA51C;
    }
L_088DA51C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(404)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_088DA6B0;
      }
      goto L_088DA538;
    }
L_088DA538:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA6B0;
      }
      goto L_088DA540;
    }
L_088DA540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DA54Cu);
    ctx.gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088DA54Cu) goto L_088DA54C;
    return;
L_088DA54C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA568;
      }
      goto L_088DA558;
    }
L_088DA558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DA564u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088DA564u) goto L_088DA564;
    return;
L_088DA564:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088DA568;
L_088DA568:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA5FC;
      }
      goto L_088DA570;
    }
L_088DA570:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DA5FC;
      }
      goto L_088DA580;
    }
L_088DA580:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x088DA598u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DA598u) goto L_088DA598;
    return;
L_088DA598:
    ctx.gpr[31] = (0x088DA5A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DA5A0u) goto L_088DA5A0;
    return;
L_088DA5A0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21524)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088DA5B8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x088DA5B8u) goto L_088DA5B8;
    return;
L_088DA5B8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21532)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21528)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088DA5F4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x088DA5F4u) goto L_088DA5F4;
    return;
L_088DA5F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA930;
      }
      goto L_088DA5FC;
    }
L_088DA5FC:
    ctx.gpr[31] = (0x088DA604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DA604u) goto L_088DA604;
    return;
L_088DA604:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA6A8;
      }
      goto L_088DA614;
    }
L_088DA614:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DA62Cu);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DA62Cu) goto L_088DA62C;
    return;
L_088DA62C:
    ctx.gpr[31] = (0x088DA634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DA634u) goto L_088DA634;
    return;
L_088DA634:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21516)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21512)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DA654u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x088DA654u) goto L_088DA654;
    return;
L_088DA654:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088DA684u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x088DA684u) goto L_088DA684;
    return;
L_088DA684:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29514)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA930;
      }
      goto L_088DA694;
    }
L_088DA694:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DA6A0u);
    ctx.gpr[5] = (0u | 155u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x088DA6A0u) goto L_088DA6A0;
    return;
L_088DA6A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA930;
      }
      goto L_088DA6A8;
    }
L_088DA6A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1784), 0u);
      if (branch_taken) {
          goto L_088DA930;
      }
      goto L_088DA6B0;
    }
L_088DA6B0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA930;
      }
      goto L_088DA6B8;
    }
L_088DA6B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DA6C4u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088DA6C4u) goto L_088DA6C4;
    return;
L_088DA6C4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21524)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (16512u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_088DA6F4;
      }
      goto L_088DA6E4;
    }
L_088DA6E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DA6F0u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088DA6F0u) goto L_088DA6F0;
    return;
L_088DA6F0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088DA6F4;
L_088DA6F4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA70C;
      }
      goto L_088DA6FC;
    }
L_088DA6FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DA708u);
    ctx.gpr[5] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088DA708u) goto L_088DA708;
    return;
L_088DA708:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088DA70C;
L_088DA70C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA7C4;
      }
      goto L_088DA714;
    }
L_088DA714:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088DA7C4;
      }
      goto L_088DA724;
    }
L_088DA724:
    ctx.gpr[31] = (0x088DA72Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DA72Cu) goto L_088DA72C;
    return;
L_088DA72C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21516)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21512)));
      if (branch_taken) {
          goto L_088DA760;
      }
      goto L_088DA748;
    }
L_088DA748:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DA758u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DA758u) goto L_088DA758;
    return;
L_088DA758:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA770;
      }
      goto L_088DA760;
    }
L_088DA760:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DA770u);
    ctx.gpr[6] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DA770u) goto L_088DA770;
    return;
L_088DA770:
    ctx.gpr[31] = (0x088DA778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DA778u) goto L_088DA778;
    return;
L_088DA778:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DA78Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x088DA78Cu) goto L_088DA78C;
    return;
L_088DA78C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088DA7BCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x088DA7BCu) goto L_088DA7BC;
    return;
L_088DA7BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(-29514)));
      if (branch_taken) {
          goto L_088DA91C;
      }
      goto L_088DA7C4;
    }
L_088DA7C4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21532)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21528)));
      if (branch_taken) {
          goto L_088DA88C;
      }
      goto L_088DA7D4;
    }
L_088DA7D4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088DA88C;
      }
      goto L_088DA7E4;
    }
L_088DA7E4:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    ctx.gpr[31] = (0x088DA800u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DA800u) goto L_088DA800;
    return;
L_088DA800:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088DA828;
      }
      goto L_088DA810;
    }
L_088DA810:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088DA820u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DA820u) goto L_088DA820;
    return;
L_088DA820:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA838;
      }
      goto L_088DA828;
    }
L_088DA828:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DA838u);
    ctx.gpr[6] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DA838u) goto L_088DA838;
    return;
L_088DA838:
    ctx.gpr[31] = (0x088DA840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DA840u) goto L_088DA840;
    return;
L_088DA840:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DA854u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x088DA854u) goto L_088DA854;
    return;
L_088DA854:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088DA884u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x088DA884u) goto L_088DA884;
    return;
L_088DA884:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(-29514)));
      if (branch_taken) {
          goto L_088DA91C;
      }
      goto L_088DA88C;
    }
L_088DA88C:
    ctx.gpr[31] = (0x088DA894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DA894u) goto L_088DA894;
    return;
L_088DA894:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088DA8BC;
      }
      goto L_088DA8A4;
    }
L_088DA8A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088DA8B4u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DA8B4u) goto L_088DA8B4;
    return;
L_088DA8B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA8CC;
      }
      goto L_088DA8BC;
    }
L_088DA8BC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DA8CCu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DA8CCu) goto L_088DA8CC;
    return;
L_088DA8CC:
    ctx.gpr[31] = (0x088DA8D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DA8D4u) goto L_088DA8D4;
    return;
L_088DA8D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DA8E8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x088DA8E8u) goto L_088DA8E8;
    return;
L_088DA8E8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088DA918u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x088DA918u) goto L_088DA918;
    return;
L_088DA918:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(-29514)));
    goto L_088DA91C;
L_088DA91C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA930;
      }
      goto L_088DA924;
    }
L_088DA924:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DA930u);
    ctx.gpr[5] = (0u | 155u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x088DA930u) goto L_088DA930;
    return;
L_088DA930:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAB34;
      }
      goto L_088DA938;
    }
L_088DA938:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(660)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1780)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAB34;
      }
      goto L_088DA954;
    }
L_088DA954:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088DA97C;
      }
      goto L_088DA960;
    }
L_088DA960:
    ctx.gpr[31] = (0x088DA968u);
    ctx.gpr[5] = (0u | 149u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088DA968u) goto L_088DA968;
    return;
L_088DA968:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (49408u << 16u);
      if (branch_taken) {
          goto L_088DA9F4;
      }
      goto L_088DA974;
    }
L_088DA974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAAA4;
      }
      goto L_088DA97C;
    }
L_088DA97C:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x088DA990u);
    ctx.gpr[6] = (0u | 149u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DA990u) goto L_088DA990;
    return;
L_088DA990:
    ctx.gpr[31] = (0x088DA998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DA998u) goto L_088DA998;
    return;
L_088DA998:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21524)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088DA9B0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x088DA9B0u) goto L_088DA9B0;
    return;
L_088DA9B0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21532)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21528)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088DA9ECu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x088DA9ECu) goto L_088DA9EC;
    return;
L_088DA9EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAB34;
      }
      goto L_088DA9F4;
    }
L_088DA9F4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(652)));
    ctx.gpr[6] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088DAA34;
      }
      goto L_088DAA20;
    }
L_088DAA20:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DAA2Cu);
    ctx.gpr[6] = (0u | 167u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DAA2Cu) goto L_088DAA2C;
    return;
L_088DAA2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAA40;
      }
      goto L_088DAA34;
    }
L_088DAA34:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DAA40u);
    ctx.gpr[6] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DAA40u) goto L_088DAA40;
    return;
L_088DAA40:
    ctx.gpr[31] = (0x088DAA48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DAA48u) goto L_088DAA48;
    return;
L_088DAA48:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21540)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21536)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088DAA60u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x088DAA60u) goto L_088DAA60;
    return;
L_088DAA60:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21548)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21544)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088DAA9Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x088DAA9Cu) goto L_088DAA9C;
    return;
L_088DAA9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAB34;
      }
      goto L_088DAAA4;
    }
L_088DAAA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DAAB0u);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088DAAB0u) goto L_088DAAB0;
    return;
L_088DAAB0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DAAFC;
      }
      goto L_088DAABC;
    }
L_088DAABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DAAC8u);
    ctx.gpr[5] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088DAAC8u) goto L_088DAAC8;
    return;
L_088DAAC8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAB24;
      }
      goto L_088DAAD4;
    }
L_088DAAD4:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088DAAF4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 220u, 0x088D50D0u>(ctx, &aot_mem) && ctx.pc == 0x088DAAF4u) goto L_088DAAF4;
    return;
L_088DAAF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAB34;
      }
      goto L_088DAAFC;
    }
L_088DAAFC:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088DAB1Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 220u, 0x088D50D0u>(ctx, &aot_mem) && ctx.pc == 0x088DAB1Cu) goto L_088DAB1C;
    return;
L_088DAB1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAB34;
      }
      goto L_088DAB24;
    }
L_088DAB24:
    ctx.gpr[31] = (0x088DAB2Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 220u, 0x088D50D0u>(ctx, &aot_mem) && ctx.pc == 0x088DAB2Cu) goto L_088DAB2C;
    return;
L_088DAB2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAB34;
      }
      goto L_088DAB34;
    }
L_088DAB34:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DAB5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DAB90u);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x088DAB90u) goto L_088DAB90;
    return;
L_088DAB90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DABB8;
      }
      goto L_088DAB98;
    }
L_088DAB98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DABC0;
      }
      goto L_088DABB0;
    }
L_088DABB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DABC8;
      }
      goto L_088DABB8;
    }
L_088DABB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAF98;
      }
      goto L_088DABC0;
    }
L_088DABC0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    // nop
      if (branch_taken) {
          goto L_088DAC2C;
      }
      goto L_088DABC8;
    }
L_088DABC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[19] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088DAC24;
      }
      goto L_088DABD8;
    }
L_088DABD8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 60u);
      if (branch_taken) {
          goto L_088DAC1C;
      }
      goto L_088DABE8;
    }
L_088DABE8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 61u);
      if (branch_taken) {
          goto L_088DAC1C;
      }
      goto L_088DABF0;
    }
L_088DABF0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 47u);
      if (branch_taken) {
          goto L_088DAC1C;
      }
      goto L_088DABF8;
    }
L_088DABF8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088DAC1C;
      }
      goto L_088DAC00;
    }
L_088DAC00:
    ctx.gpr[6] = (17530u << 16u);
    ctx.gpr[5] = (0u | 22u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_088DAC34;
      }
      goto L_088DAC14;
    }
L_088DAC14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAC3C;
      }
      goto L_088DAC1C;
    }
L_088DAC1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAF98;
      }
      goto L_088DAC24;
    }
L_088DAC24:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1752), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088DAF98;
      }
      goto L_088DAC2C;
    }
L_088DAC2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAF98;
      }
      goto L_088DAC34;
    }
L_088DAC34:
    ctx.gpr[31] = (0x088DAC3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 727u, 0x0899FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x088DAC3Cu) goto L_088DAC3C;
    return;
L_088DAC3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAC58;
      }
      goto L_088DAC48;
    }
L_088DAC48:
    ctx.gpr[31] = (0x088DAC50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 477u, 0x089BA0ACu>(ctx, &aot_mem) && ctx.pc == 0x088DAC50u) goto L_088DAC50;
    return;
L_088DAC50:
    ctx.gpr[31] = (0x088DAC58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 887u, 0x089A3C28u>(ctx, &aot_mem) && ctx.pc == 0x088DAC58u) goto L_088DAC58;
    return;
L_088DAC58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DAC64u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088DAC64u) goto L_088DAC64;
    return;
L_088DAC64:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DAC80;
      }
      goto L_088DAC70;
    }
L_088DAC70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DAC7Cu);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088DAC7Cu) goto L_088DAC7C;
    return;
L_088DAC7C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088DAC80;
L_088DAC80:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAC90;
      }
      goto L_088DAC88;
    }
L_088DAC88:
    ctx.gpr[31] = (0x088DAC90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 887u, 0x089A3C28u>(ctx, &aot_mem) && ctx.pc == 0x088DAC90u) goto L_088DAC90;
    return;
L_088DAC90:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DAC9Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x088DAC9Cu) goto L_088DAC9C;
    return;
L_088DAC9C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(856), 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x088DACC4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088DACC4u) goto L_088DACC4;
    return;
L_088DACC4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088DAD3C;
      }
      goto L_088DACEC;
    }
L_088DACEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAD3C;
      }
      goto L_088DAD08;
    }
L_088DAD08:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[20] = (0u | 204u);
        goto L_088DAD1C;
    }
    goto L_088DAD1C;
L_088DAD1C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088DAD34u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DAD34u) goto L_088DAD34;
    return;
L_088DAD34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_088DAD50;
      }
      goto L_088DAD3C;
    }
L_088DAD3C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DAD50u);
    ctx.gpr[6] = (0u | 41u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DAD50u) goto L_088DAD50;
    return;
L_088DAD50:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1748), ctx.gpr[22]);
    ctx.gpr[31] = (0x088DAD5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DAD5Cu) goto L_088DAD5C;
    return;
L_088DAD5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAD80;
      }
      goto L_088DAD64;
    }
L_088DAD64:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DAD74u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 117u, 0x088DC798u>(ctx, &aot_mem) && ctx.pc == 0x088DAD74u) goto L_088DAD74;
    return;
L_088DAD74:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
      if (branch_taken) {
          goto L_088DAD98;
      }
      goto L_088DAD80;
    }
L_088DAD80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DAD90u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 51u, 0x088DC374u>(ctx, &aot_mem) && ctx.pc == 0x088DAD90u) goto L_088DAD90;
    return;
L_088DAD90:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[2]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    goto L_088DAD98;
L_088DAD98:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DADCC;
      }
      goto L_088DADA4;
    }
L_088DADA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DADC4;
      }
      goto L_088DADB0;
    }
L_088DADB0:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_088DADC4;
    }
    goto L_088DADB8;
L_088DADB8:
    ctx.gpr[31] = (0x088DADC0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x088DADC0u) goto L_088DADC0;
    return;
L_088DADC0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_088DADC4;
L_088DADC4:
    ctx.gpr[31] = (0x088DADCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x088DADCCu) goto L_088DADCC;
    return;
L_088DADCC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1752), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088DAF60;
      }
      goto L_088DADE0;
    }
L_088DADE0:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088DAF60;
      }
      goto L_088DADE8;
    }
L_088DADE8:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088DAE40;
      }
      goto L_088DAE18;
    }
L_088DAE18:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAE40;
      }
      goto L_088DAE24;
    }
L_088DAE24:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x088DAE34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DAE34u) goto L_088DAE34;
    return;
L_088DAE34:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_088DAE58;
      }
      goto L_088DAE40;
    }
L_088DAE40:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DAE50u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DAE50u) goto L_088DAE50;
    return;
L_088DAE50:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    goto L_088DAE58;
L_088DAE58:
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DAF00;
      }
      goto L_088DAE64;
    }
L_088DAE64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DAF00;
      }
      goto L_088DAE74;
    }
L_088DAE74:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DAEE0;
      }
      goto L_088DAE9C;
    }
L_088DAE9C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_088DAEC4;
      }
      goto L_088DAEA4;
    }
L_088DAEA4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAECC;
      }
      goto L_088DAEB0;
    }
L_088DAEB0:
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088DAF10;
      }
      goto L_088DAEC4;
    }
L_088DAEC4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DAEB0;
      }
      goto L_088DAECC;
    }
L_088DAECC:
    ctx.gpr[4] = (16262u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088DAF10;
      }
      goto L_088DAEE0;
    }
L_088DAEE0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAEB0;
      }
      goto L_088DAEEC;
    }
L_088DAEEC:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088DAF10;
      }
      goto L_088DAF00;
    }
L_088DAF00:
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088DAF10;
L_088DAF10:
    ctx.gpr[31] = (0x088DAF18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DAF18u) goto L_088DAF18;
    return;
L_088DAF18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAF34;
      }
      goto L_088DAF20;
    }
L_088DAF20:
    ctx.gpr[5] = (15779u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DAF34u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088DAF34u) goto L_088DAF34;
    return;
L_088DAF34:
    ctx.gpr[5] = (2189u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DAF48u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23568));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x088DAF48u) goto L_088DAF48;
    return;
L_088DAF48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1753), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1754), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DAF80;
      }
      goto L_088DAF60;
    }
L_088DAF60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1753), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1754), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_088DAF80;
L_088DAF80:
    ctx.gpr[31] = (0x088DAF88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DAF88u) goto L_088DAF88;
    return;
L_088DAF88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAF98;
      }
      goto L_088DAF90;
    }
L_088DAF90:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(21152), static_cast<std::uint16_t>(0u));
    goto L_088DAF98;
L_088DAF98:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DAFC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DB004u);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DB004u) goto L_088DB004;
    return;
L_088DB004:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_088DB018;
      }
      goto L_088DB00C;
    }
L_088DB00C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB078;
      }
      goto L_088DB018;
    }
L_088DB018:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DB070;
      }
      goto L_088DB028;
    }
L_088DB028:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DB070;
      }
      goto L_088DB038;
    }
L_088DB038:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 61u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DB070;
      }
      goto L_088DB048;
    }
L_088DB048:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 47u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DB070;
      }
      goto L_088DB058;
    }
L_088DB058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[21] = (0u | 169u);
      if (branch_taken) {
          goto L_088DB080;
      }
      goto L_088DB068;
    }
L_088DB068:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB230;
      }
      goto L_088DB070;
    }
L_088DB070:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBB5C;
      }
      goto L_088DB078;
    }
L_088DB078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBB5C;
      }
      goto L_088DB080;
    }
L_088DB080:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-29516)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB0A4;
      }
      goto L_088DB090;
    }
L_088DB090:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DB0AC;
      }
      goto L_088DB09C;
    }
L_088DB09C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB128;
      }
      goto L_088DB0A4;
    }
L_088DB0A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBB5C;
      }
      goto L_088DB0AC;
    }
L_088DB0AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DB0B8u);
    ctx.gpr[5] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 337u, 0x08865864u>(ctx, &aot_mem) && ctx.pc == 0x088DB0B8u) goto L_088DB0B8;
    return;
L_088DB0B8:
    ctx.gpr[4] = (16640u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DB0DC;
      }
      goto L_088DB0C4;
    }
L_088DB0C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DB0D4u);
    ctx.gpr[6] = (0u | 39u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DB0D4u) goto L_088DB0D4;
    return;
L_088DB0D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088DB0F8;
      }
      goto L_088DB0DC;
    }
L_088DB0DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(476)));
    ctx.gpr[31] = (0x088DB0F4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DB0F4u) goto L_088DB0F4;
    return;
L_088DB0F4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_088DB0F8;
L_088DB0F8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB128;
      }
      goto L_088DB100;
    }
L_088DB100:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x088DB10Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088DB10Cu) goto L_088DB10C;
    return;
L_088DB10C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088DB128;
L_088DB128:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-29516)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB228;
      }
      goto L_088DB134;
    }
L_088DB134:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DB154u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 259u, 0x08A4D17Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB154u) goto L_088DB154;
    return;
L_088DB154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(676)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088DB168u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 179u, 0x0890D00Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB168u) goto L_088DB168;
    return;
L_088DB168:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DB174u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 178u, 0x0890D004u>(ctx, &aot_mem) && ctx.pc == 0x088DB174u) goto L_088DB174;
    return;
L_088DB174:
    ctx.gpr[7] = (ctx.gpr[17] << 6u);
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DB18Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 645u, 0x088B7FA4u>(ctx, &aot_mem) && ctx.pc == 0x088DB18Cu) goto L_088DB18C;
    return;
L_088DB18C:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    goto L_088DB1B8;
L_088DB1B8:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088DB210u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x088DB210u) goto L_088DB210;
    return;
L_088DB210:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB1B8;
      }
      goto L_088DB228;
    }
L_088DB228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBB5C;
      }
      goto L_088DB230;
    }
L_088DB230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DB2D4;
      }
      goto L_088DB240;
    }
L_088DB240:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.gpr[4] = (48793u << 16u);
      if (branch_taken) {
          goto L_088DB2CC;
      }
      goto L_088DB24C;
    }
L_088DB24C:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088DB25Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 428u, 0x088D5E30u>(ctx, &aot_mem) && ctx.pc == 0x088DB25Cu) goto L_088DB25C;
    return;
L_088DB25C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB2CC;
      }
      goto L_088DB264;
    }
L_088DB264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DB270u);
    ctx.gpr[5] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 337u, 0x08865864u>(ctx, &aot_mem) && ctx.pc == 0x088DB270u) goto L_088DB270;
    return;
L_088DB270:
    ctx.gpr[4] = (16640u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DB294;
      }
      goto L_088DB27C;
    }
L_088DB27C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DB28Cu);
    ctx.gpr[6] = (0u | 39u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DB28Cu) goto L_088DB28C;
    return;
L_088DB28C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088DB2A8;
      }
      goto L_088DB294;
    }
L_088DB294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DB2A4u);
    ctx.gpr[6] = (0u | 37u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DB2A4u) goto L_088DB2A4;
    return;
L_088DB2A4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_088DB2A8;
L_088DB2A8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB2CC;
      }
      goto L_088DB2B0;
    }
L_088DB2B0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088DB2CC;
L_088DB2CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBB5C;
      }
      goto L_088DB2D4;
    }
L_088DB2D4:
    ctx.gpr[31] = (0x088DB2DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x088DB2DCu) goto L_088DB2DC;
    return;
L_088DB2DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB2FC;
      }
      goto L_088DB2E4;
    }
L_088DB2E4:
    ctx.gpr[31] = (0x088DB2ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DB2ECu) goto L_088DB2EC;
    return;
L_088DB2EC:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
        goto L_088DB304;
    }
    goto L_088DB2F4;
L_088DB2F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB32C;
      }
      goto L_088DB2FC;
    }
L_088DB2FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBB5C;
      }
      goto L_088DB304;
    }
L_088DB304:
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DB32C;
      }
      goto L_088DB310;
    }
L_088DB310:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DB34C;
      }
      goto L_088DB32C;
    }
L_088DB32C:
    ctx.gpr[31] = (0x088DB334u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DB334u) goto L_088DB334;
    return;
L_088DB334:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB660;
      }
      goto L_088DB33C;
    }
L_088DB33C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DB660;
      }
      goto L_088DB34C;
    }
L_088DB34C:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088DB360;
      }
      goto L_088DB358;
    }
L_088DB358:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DB500;
      }
      goto L_088DB360;
    }
L_088DB360:
    ctx.gpr[31] = (0x088DB368u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DB368u) goto L_088DB368;
    return;
L_088DB368:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB388;
      }
      goto L_088DB370;
    }
L_088DB370:
    ctx.gpr[31] = (0x088DB378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DB378u) goto L_088DB378;
    return;
L_088DB378:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB3A0;
      }
      goto L_088DB388;
    }
L_088DB388:
    ctx.gpr[31] = (0x088DB390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DB390u) goto L_088DB390;
    return;
L_088DB390:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB500;
      }
      goto L_088DB3A0;
    }
L_088DB3A0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088DB3BC;
      }
      goto L_088DB3AC;
    }
L_088DB3AC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088DB408;
      }
      goto L_088DB3B4;
    }
L_088DB3B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 26u);
      if (branch_taken) {
          goto L_088DB468;
      }
      goto L_088DB3BC;
    }
L_088DB3BC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DB3D8;
      }
      goto L_088DB3C8;
    }
L_088DB3C8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB408;
      }
      goto L_088DB3D0;
    }
L_088DB3D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 28u);
      if (branch_taken) {
          goto L_088DB468;
      }
      goto L_088DB3D8;
    }
L_088DB3D8:
    ctx.gpr[31] = (0x088DB3E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DB3E0u) goto L_088DB3E0;
    return;
L_088DB3E0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB3FC;
      }
      goto L_088DB3F0;
    }
L_088DB3F0:
    ctx.gpr[18] = (0u | 35u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088DB400;
      }
      goto L_088DB3FC;
    }
L_088DB3FC:
    ctx.gpr[18] = (0u | 27u);
    goto L_088DB400;
L_088DB400:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB468;
      }
      goto L_088DB408;
    }
L_088DB408:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DB41C;
      }
      goto L_088DB414;
    }
L_088DB414:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 18u);
      if (branch_taken) {
          goto L_088DB468;
      }
      goto L_088DB41C;
    }
L_088DB41C:
    ctx.gpr[31] = (0x088DB424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DB424u) goto L_088DB424;
    return;
L_088DB424:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB440;
      }
      goto L_088DB434;
    }
L_088DB434:
    ctx.gpr[18] = (0u | 33u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088DB468;
      }
      goto L_088DB440;
    }
L_088DB440:
    ctx.gpr[31] = (0x088DB448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DB448u) goto L_088DB448;
    return;
L_088DB448:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB464;
      }
      goto L_088DB458;
    }
L_088DB458:
    ctx.gpr[18] = (0u | 33u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088DB468;
      }
      goto L_088DB464;
    }
L_088DB464:
    ctx.gpr[18] = (0u | 17u);
    goto L_088DB468;
L_088DB468:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB48C;
      }
      goto L_088DB470;
    }
L_088DB470:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 500u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DB484u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 106u, 0x089A07E8u>(ctx, &aot_mem) && ctx.pc == 0x088DB484u) goto L_088DB484;
    return;
L_088DB484:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB4F8;
      }
      goto L_088DB48C;
    }
L_088DB48C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DB498u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088DB498u) goto L_088DB498;
    return;
L_088DB498:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088DB4B8;
      }
      goto L_088DB4A4;
    }
L_088DB4A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DB4D4;
      }
      goto L_088DB4B8;
    }
L_088DB4B8:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DB4D0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DB4D0u) goto L_088DB4D0;
    return;
L_088DB4D0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_088DB4D4;
L_088DB4D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DB4E0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088DB4E0u) goto L_088DB4E0;
    return;
L_088DB4E0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088DB4F8;
L_088DB4F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB64C;
      }
      goto L_088DB500;
    }
L_088DB500:
    ctx.gpr[31] = (0x088DB508u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DB508u) goto L_088DB508;
    return;
L_088DB508:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB59C;
      }
      goto L_088DB510;
    }
L_088DB510:
    ctx.gpr[31] = (0x088DB518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DB518u) goto L_088DB518;
    return;
L_088DB518:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB59C;
      }
      goto L_088DB528;
    }
L_088DB528:
    ctx.gpr[31] = (0x088DB530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DB530u) goto L_088DB530;
    return;
L_088DB530:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21548)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21544)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088DB548u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x088DB548u) goto L_088DB548;
    return;
L_088DB548:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21532)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21528)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[31] = (0x088DB594u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 549u, 0x089BA410u>(ctx, &aot_mem) && ctx.pc == 0x088DB594u) goto L_088DB594;
    return;
L_088DB594:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB64C;
      }
      goto L_088DB59C;
    }
L_088DB59C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088DB5B8;
      }
      goto L_088DB5A8;
    }
L_088DB5A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088DB5DC;
      }
      goto L_088DB5B0;
    }
L_088DB5B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 30u);
      if (branch_taken) {
          goto L_088DB5E0;
      }
      goto L_088DB5B8;
    }
L_088DB5B8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DB5D4;
      }
      goto L_088DB5C4;
    }
L_088DB5C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB5DC;
      }
      goto L_088DB5CC;
    }
L_088DB5CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 32u);
      if (branch_taken) {
          goto L_088DB5E0;
      }
      goto L_088DB5D4;
    }
L_088DB5D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 31u);
      if (branch_taken) {
          goto L_088DB5E0;
      }
      goto L_088DB5DC;
    }
L_088DB5DC:
    ctx.gpr[17] = (0u | 29u);
    goto L_088DB5E0;
L_088DB5E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DB5ECu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088DB5ECu) goto L_088DB5EC;
    return;
L_088DB5EC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB60C;
      }
      goto L_088DB5F8;
    }
L_088DB5F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DB628;
      }
      goto L_088DB60C;
    }
L_088DB60C:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DB624u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DB624u) goto L_088DB624;
    return;
L_088DB624:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_088DB628;
L_088DB628:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DB634u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088DB634u) goto L_088DB634;
    return;
L_088DB634:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088DB64C;
L_088DB64C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DB658u);
    ctx.gpr[5] = (0u | 139u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x088DB658u) goto L_088DB658;
    return;
L_088DB658:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBB5C;
      }
      goto L_088DB660;
    }
L_088DB660:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DB66Cu);
    ctx.gpr[5] = (0u | 139u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x088DB66Cu) goto L_088DB66C;
    return;
L_088DB66C:
    ctx.gpr[19] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[20] = (0u | 169u);
      if (branch_taken) {
          goto L_088DB6C0;
      }
      goto L_088DB678;
    }
L_088DB678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088DB6C0;
      }
      goto L_088DB684;
    }
L_088DB684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB6C0;
      }
      goto L_088DB694;
    }
L_088DB694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB6C0;
      }
      goto L_088DB6A4;
    }
L_088DB6A4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB6C0;
      }
      goto L_088DB6AC;
    }
L_088DB6AC:
    ctx.gpr[4] = (0u | 13u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088DB710;
      }
      goto L_088DB6C0;
    }
L_088DB6C0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DB6E0;
      }
      goto L_088DB6CC;
    }
L_088DB6CC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088DB708;
      }
      goto L_088DB6D4;
    }
L_088DB6D4:
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DB710;
      }
      goto L_088DB6E0;
    }
L_088DB6E0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DB6FC;
      }
      goto L_088DB6E8;
    }
L_088DB6E8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB708;
      }
      goto L_088DB6F0;
    }
L_088DB6F0:
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DB710;
      }
      goto L_088DB6FC;
    }
L_088DB6FC:
    ctx.gpr[4] = (0u | 14u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DB710;
      }
      goto L_088DB708;
    }
L_088DB708:
    ctx.gpr[4] = (0u | 13u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[4]);
    goto L_088DB710;
L_088DB710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DB738;
      }
      goto L_088DB720;
    }
L_088DB720:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x088DB72Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 428u, 0x088D5E30u>(ctx, &aot_mem) && ctx.pc == 0x088DB72Cu) goto L_088DB72C;
    return;
L_088DB72C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB738;
      }
      goto L_088DB734;
    }
L_088DB734:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[19]);
    goto L_088DB738;
L_088DB738:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088DB7C4;
      }
      goto L_088DB744;
    }
L_088DB744:
    ctx.gpr[17] = (2189u << 16u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(23568));
      if (branch_taken) {
          goto L_088DB760;
      }
      goto L_088DB750;
    }
L_088DB750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DB780;
      }
      goto L_088DB760;
    }
L_088DB760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088DB780;
L_088DB780:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DB798u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DB798u) goto L_088DB798;
    return;
L_088DB798:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x088DB7A8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088DB7A8u) goto L_088DB7A8;
    return;
L_088DB7A8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DB7B8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x088DB7B8u) goto L_088DB7B8;
    return;
L_088DB7B8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1754), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1752), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088DBB24;
      }
      goto L_088DB7C4;
    }
L_088DB7C4:
    ctx.gpr[31] = (0x088DB7CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DB7CCu) goto L_088DB7CC;
    return;
L_088DB7CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088DB8CC;
      }
      goto L_088DB7D4;
    }
L_088DB7D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB8CC;
      }
      goto L_088DB7F8;
    }
L_088DB7F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088DB8CC;
      }
      goto L_088DB81C;
    }
L_088DB81C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x088DB83Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB83Cu) goto L_088DB83C;
    return;
L_088DB83C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB8CC;
      }
      goto L_088DB858;
    }
L_088DB858:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088DB870;
      }
      goto L_088DB860;
    }
L_088DB860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DB890;
      }
      goto L_088DB870;
    }
L_088DB870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088DB890;
L_088DB890:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DB8A8u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DB8A8u) goto L_088DB8A8;
    return;
L_088DB8A8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x088DB8B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088DB8B8u) goto L_088DB8B8;
    return;
L_088DB8B8:
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088DBB24;
      }
      goto L_088DB8CC;
    }
L_088DB8CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[18] = (2189u << 16u);
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(23568));
      if (branch_taken) {
          goto L_088DB8F8;
      }
      goto L_088DB8E0;
    }
L_088DB8E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DB8F8;
      }
      goto L_088DB8F0;
    }
L_088DB8F0:
    ctx.gpr[31] = (0x088DB8F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 727u, 0x0899FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB8F8u) goto L_088DB8F8;
    return;
L_088DB8F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB914;
      }
      goto L_088DB904;
    }
L_088DB904:
    ctx.gpr[31] = (0x088DB90Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 477u, 0x089BA0ACu>(ctx, &aot_mem) && ctx.pc == 0x088DB90Cu) goto L_088DB90C;
    return;
L_088DB90C:
    ctx.gpr[31] = (0x088DB914u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 887u, 0x089A3C28u>(ctx, &aot_mem) && ctx.pc == 0x088DB914u) goto L_088DB914;
    return;
L_088DB914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DB954;
      }
      goto L_088DB924;
    }
L_088DB924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB94C;
      }
      goto L_088DB930;
    }
L_088DB930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_088DB94C;
    }
    goto L_088DB93C;
L_088DB93C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x088DB948u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x088DB948u) goto L_088DB948;
    return;
L_088DB948:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_088DB94C;
L_088DB94C:
    ctx.gpr[31] = (0x088DB954u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x088DB954u) goto L_088DB954;
    return;
L_088DB954:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1752), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1748), ctx.gpr[17]);
    ctx.gpr[31] = (0x088DB96Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 323u, 0x08865794u>(ctx, &aot_mem) && ctx.pc == 0x088DB96Cu) goto L_088DB96C;
    return;
L_088DB96C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DB978u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088DB978u) goto L_088DB978;
    return;
L_088DB978:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB99C;
      }
      goto L_088DB984;
    }
L_088DB984:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (50298u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088DB99C;
L_088DB99C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DB9A8u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088DB9A8u) goto L_088DB9A8;
    return;
L_088DB9A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB9C4;
      }
      goto L_088DB9B4;
    }
L_088DB9B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DB9C0u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088DB9C0u) goto L_088DB9C0;
    return;
L_088DB9C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088DB9C4;
L_088DB9C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB9EC;
      }
      goto L_088DB9CC;
    }
L_088DB9CC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (50298u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088DB9ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 887u, 0x089A3C28u>(ctx, &aot_mem) && ctx.pc == 0x088DB9ECu) goto L_088DB9EC;
    return;
L_088DB9EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DB9F8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x088DB9F8u) goto L_088DB9F8;
    return;
L_088DB9F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(856), 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x088DBA1Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088DBA1Cu) goto L_088DBA1C;
    return;
L_088DBA1C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088DBA94;
      }
      goto L_088DBA40;
    }
L_088DBA40:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBA94;
      }
      goto L_088DBA5C;
    }
L_088DBA5C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (0u | 204u);
        goto L_088DBA84;
    }
    goto L_088DBA84;
L_088DBA84:
    ctx.gpr[31] = (0x088DBA8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x088DBA8Cu) goto L_088DBA8C;
    return;
L_088DBA8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088DBAA8;
      }
      goto L_088DBA94;
    }
L_088DBA94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DBAA4u);
    ctx.gpr[6] = (0u | 41u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x088DBAA4u) goto L_088DBAA4;
    return;
L_088DBAA4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088DBAA8;
L_088DBAA8:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088DBAC8;
      }
      goto L_088DBAB8;
    }
L_088DBAB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DBAE8;
      }
      goto L_088DBAC8;
    }
L_088DBAC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088DBAE8;
L_088DBAE8:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DBB00u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DBB00u) goto L_088DBB00;
    return;
L_088DBB00:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DBB10u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x088DBB10u) goto L_088DBB10;
    return;
L_088DBB10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1753), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1754), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_088DBB24;
L_088DBB24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBB5C;
      }
      goto L_088DBB30;
    }
L_088DBB30:
    ctx.gpr[31] = (0x088DBB38u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DBB38u) goto L_088DBB38;
    return;
L_088DBB38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBB5C;
      }
      goto L_088DBB40;
    }
L_088DBB40:
    ctx.gpr[31] = (0x088DBB48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DBB48u) goto L_088DBB48;
    return;
L_088DBB48:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DBB5C;
      }
      goto L_088DBB50;
    }
L_088DBB50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[31] = (0x088DBB5Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 298u, 0x089454A4u>(ctx, &aot_mem) && ctx.pc == 0x088DBB5Cu) goto L_088DBB5C;
    return;
L_088DBB5C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DBB8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DBBF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088DBBF4u) goto L_088DBBF4;
    return;
L_088DBBF4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBC84;
      }
      goto L_088DBC14;
    }
L_088DBC14:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBC84;
      }
      goto L_088DBC38;
    }
L_088DBC38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21148)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21148)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21148)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21148)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21148)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088DBC84;
L_088DBC84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBCB4;
      }
      goto L_088DBC90;
    }
L_088DBC90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[21] = (0u | 2u);
      if (branch_taken) {
          goto L_088DBCBC;
      }
      goto L_088DBCA0;
    }
L_088DBCA0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), 0u);
    ctx.gpr[31] = (0x088DBCACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x088DBCACu) goto L_088DBCAC;
    return;
L_088DBCAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBCE4;
      }
      goto L_088DBCB4;
    }
L_088DBCB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 50u, 0x088DC350u>(ctx, &aot_mem); return;
      }
      goto L_088DBCBC;
    }
L_088DBCBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DBCD4;
      }
      goto L_088DBCCC;
    }
L_088DBCCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088DBCE4;
      }
      goto L_088DBCD4;
    }
L_088DBCD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DBCE0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088DBCE0u) goto L_088DBCE0;
    return;
L_088DBCE0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_088DBCE4;
L_088DBCE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088DBD08;
      }
      goto L_088DBCF0;
    }
L_088DBCF0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DBD08;
      }
      goto L_088DBCF8;
    }
L_088DBCF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DBD04u);
    ctx.gpr[5] = (0u | 62u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088DBD04u) goto L_088DBD04;
    return;
L_088DBD04:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_088DBD08;
L_088DBD08:
    ctx.gpr[31] = (0x088DBD10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DBD10u) goto L_088DBD10;
    return;
L_088DBD10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBDF8;
      }
      goto L_088DBD18;
    }
L_088DBD18:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBDF8;
      }
      goto L_088DBD20;
    }
L_088DBD20:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DBDF8;
      }
      goto L_088DBD48;
    }
L_088DBD48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[6] = (0u | 9u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
        goto L_088DBD68;
    }
    goto L_088DBD58;
L_088DBD58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DBDF8;
      }
      goto L_088DBD64;
    }
L_088DBD64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    goto L_088DBD68;
L_088DBD68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21552)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DBDF8;
      }
      goto L_088DBDA0;
    }
L_088DBDA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21552)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DBDF8;
      }
      goto L_088DBDD8;
    }
L_088DBDD8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x088DBDF8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 336u, 0x0882607Cu>(ctx, &aot_mem) && ctx.pc == 0x088DBDF8u) goto L_088DBDF8;
    return;
L_088DBDF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DBE7C;
      }
      goto L_088DBE08;
    }
L_088DBE08:
    ctx.gpr[31] = (0x088DBE10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DBE10u) goto L_088DBE10;
    return;
L_088DBE10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBE7C;
      }
      goto L_088DBE18;
    }
L_088DBE18:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBE48;
      }
      goto L_088DBE20;
    }
L_088DBE20:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (50298u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088DBE48;
L_088DBE48:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1754))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBE68;
      }
      goto L_088DBE54;
    }
L_088DBE54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DBE60u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 240u, 0x088D51D4u>(ctx, &aot_mem) && ctx.pc == 0x088DBE60u) goto L_088DBE60;
    return;
L_088DBE60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 50u, 0x088DC350u>(ctx, &aot_mem); return;
      }
      goto L_088DBE68;
    }
L_088DBE68:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DBE74u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 240u, 0x088D51D4u>(ctx, &aot_mem) && ctx.pc == 0x088DBE74u) goto L_088DBE74;
    return;
L_088DBE74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 50u, 0x088DC350u>(ctx, &aot_mem); return;
      }
      goto L_088DBE7C;
    }
L_088DBE7C:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 19u, 0x088DC15Cu>(ctx, &aot_mem); return;
    }
    goto L_088DBE84;
L_088DBE84:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1753))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 19u, 0x088DC15Cu>(ctx, &aot_mem); return;
    }
    goto L_088DBE94;
L_088DBE94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
        (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 3u, 0x088DC02Cu>(ctx, &aot_mem); return;
    }
    goto L_088DBEB8;
L_088DBEB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (15692u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[6] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
        (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 3u, 0x088DC02Cu>(ctx, &aot_mem); return;
    }
    goto L_088DBEF8;
L_088DBEF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21148)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
        (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 3u, 0x088DC02Cu>(ctx, &aot_mem); return;
    }
    goto L_088DBF34;
L_088DBF34:
    ctx.gpr[31] = (0x088DBF3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DBF3Cu) goto L_088DBF3C;
    return;
L_088DBF3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DBF68;
      }
      goto L_088DBF44;
    }
L_088DBF44:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBFC4;
      }
      goto L_088DBF68;
    }
L_088DBF68:
    ctx.gpr[31] = (0x088DBF70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DBF70u) goto L_088DBF70;
    return;
L_088DBF70:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_088DBF8C;
    }
    goto L_088DBF78;
L_088DBF78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DBFC4;
      }
      goto L_088DBF88;
    }
L_088DBF88:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    goto L_088DBF8C;
L_088DBF8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x088DBFC4u);
    ctx.gpr[6] = (0u | 188u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x088DBFC4u) goto L_088DBFC4;
    return;
L_088DBFC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19296));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
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
    ctx.pc = 0x088DC000u; return;
}

void recomp_unit_0053(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0053_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_53(Runtime &runtime) {
    runtime.register_generated_unit(53u, 0x088D8000u, 16384u, &recomp_unit_0053, &recomp_unit_0053_entry);
    runtime.register_function(0x088D8000u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D800Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D802Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8060u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D806Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D80A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D80A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D80B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D80C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D80D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D80E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D80F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D80F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D80FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8110u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8134u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D815Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8184u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D81A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D81D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D81D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D81F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D81FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8200u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8220u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D822Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8234u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D823Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8244u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8248u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8268u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8274u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D828Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D82A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D82B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D82C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D82D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D82DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D82E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D82ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D82F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8304u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8314u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8318u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8354u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8360u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8374u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D837Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D83BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D83C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D83DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D83ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8404u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8408u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8414u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8430u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8434u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8440u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8450u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D846Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8488u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8498u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D84B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D84C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D84D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D84E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8588u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8590u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D85C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D85E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D85E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D85F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8618u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8640u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8668u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8684u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8694u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D86A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D86B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D86CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D86ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D86F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D86FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8704u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D870Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8714u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D871Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8734u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8748u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8750u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8768u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8770u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D877Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D878Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D87B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D87CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D87D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8808u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8818u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8830u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8858u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8860u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8884u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D889Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D88A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D88C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D88E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D88E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D88ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D88FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8904u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D890Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8960u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8968u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D896Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8990u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D89A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D89B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D89B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D89D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A00u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A0Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A18u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A24u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A34u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A38u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A5Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A64u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A74u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A80u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8AA0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8AC4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8AE4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8AECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B00u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B08u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B40u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B48u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B68u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B88u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B9Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8BA4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8BB4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8BB8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8BC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8BD0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8BE8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C18u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C20u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C30u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C38u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C5Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C70u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C74u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C84u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C8Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C98u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8CA4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8CACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8CB4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8CBCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8CD0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8CE0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8D04u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8D3Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8D48u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8D64u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8D6Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8D74u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8D90u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8DC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8DCCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8DF0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E00u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E3Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E40u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E5Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E64u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E6Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E7Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E84u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E90u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E98u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8EA0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8EA8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8EB4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8ED0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8ED8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8EE0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8EF0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8F0Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8F34u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8F4Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8F54u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8F6Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8F74u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8F84u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8FA8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8FC0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8FC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8FD8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8FE4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8FFCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9014u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D901Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9024u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9030u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9050u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9070u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9088u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9090u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D90A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D90BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D90E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D90FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9104u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D912Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9140u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9144u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9154u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D917Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9188u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9190u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9198u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D91A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D91E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9240u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D924Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9268u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D926Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9280u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9290u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D92A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D92A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D92B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D92B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D92C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D92CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D92D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D92DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9334u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D935Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9364u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D937Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D939Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D93ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D93B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D93B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D93CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D93ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D93FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9404u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D940Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9414u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9424u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9430u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9440u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9450u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9458u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9478u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D94A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D94BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D94C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D94CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D94DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D94E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D94F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D950Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9528u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9530u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9544u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D954Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9568u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9578u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9588u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9594u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D95A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D95ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D95B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D95B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D95F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D960Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9638u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9644u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9654u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D965Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9678u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9680u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9688u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D96A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D96A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D96B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D96C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D96D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D96E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D96F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D96FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9708u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D970Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9714u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D974Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9768u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9794u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D97A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D97B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D97B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D97C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D97D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D97D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D97E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D97FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9808u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D98BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D98F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D98FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9940u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9948u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9950u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9970u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9978u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9980u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9988u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9994u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D99A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D99ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D99B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D99C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D99D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D99E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D99ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D99F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D99FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A08u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A10u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A1Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A24u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A38u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A40u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A48u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A50u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A60u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A70u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A78u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A80u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A88u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9AB0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9AC0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9AD4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9AE8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9AF4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9AFCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B08u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B2Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B30u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B44u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B54u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B64u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B74u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B84u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B94u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B9Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9BA4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9BACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9BB4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9BC0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9BC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9BD8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9BE4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9BECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9BF4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9BFCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C04u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C0Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C18u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C24u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C2Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C50u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C54u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C64u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C6Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C78u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C84u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C90u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C9Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9CA0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9CA8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9CB8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9CC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9CD8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9CF4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D14u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D1Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D48u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D70u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D80u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D88u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D94u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9DA0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9DA8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9DB0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9DBCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9DE4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9DF8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E24u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E30u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E38u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E44u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E4Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E64u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E80u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E88u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E98u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9EB0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9EC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9ED0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9ED8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9EE8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9EF0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F00u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F0Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F2Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F44u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F64u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F6Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F7Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F98u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9FB4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9FBCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9FDCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9FE8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9FF4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA000u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA018u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA028u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA030u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA03Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA048u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA050u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA058u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA064u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA078u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA0A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA0B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA0C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA0F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA128u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA140u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA148u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA150u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA158u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA168u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA170u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA178u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA180u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA194u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA19Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA1DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA1F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA204u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA228u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA234u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA23Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA248u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA250u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA26Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA278u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA280u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA294u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA2ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA2E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA2FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA304u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA31Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA324u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA32Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA338u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA340u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA34Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA354u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA360u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA370u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA384u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA39Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA3B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA3BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA3C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA3FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA410u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA418u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA42Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA45Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA464u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA46Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA47Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA484u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA49Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA4A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA4BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA4F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA504u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA50Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA514u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA51Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA538u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA540u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA54Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA558u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA564u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA568u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA570u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA580u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA598u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA5A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA5B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA5F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA5FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA604u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA614u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA62Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA634u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA654u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA684u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA694u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA6A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA6A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA6B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA6B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA6C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA6E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA6F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA6F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA6FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA708u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA70Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA714u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA724u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA72Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA748u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA758u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA760u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA770u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA778u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA78Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA7BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA7C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA7D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA7E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA800u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA810u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA820u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA828u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA838u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA840u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA854u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA884u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA88Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA894u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA8A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA8B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA8BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA8CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA8D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA8E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA918u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA91Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA924u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA930u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA938u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA954u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA960u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA968u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA974u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA97Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA990u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA998u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA9B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA9ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA9F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAA20u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAA2Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAA34u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAA40u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAA48u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAA60u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAA9Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAAA4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAAB0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAABCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAAC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAAD4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAAF4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAAFCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB1Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB24u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB2Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB34u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB5Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB90u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB98u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABB0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABB8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABC0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABD8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABE8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABF0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABF8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC00u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC14u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC1Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC24u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC2Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC34u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC3Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC48u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC50u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC64u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC70u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC7Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC80u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC88u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC90u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC9Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DACC4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DACECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD08u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD1Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD34u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD3Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD50u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD5Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD64u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD74u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD80u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD90u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD98u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DADA4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DADB0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DADB8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DADC0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DADC4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DADCCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DADE0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DADE8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE18u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE24u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE34u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE40u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE50u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE64u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE74u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE9Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAEA4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAEB0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAEC4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAECCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAEE0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAEECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF00u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF10u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF18u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF20u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF34u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF48u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF60u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF80u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF88u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF90u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF98u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAFC4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB004u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB00Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB018u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB028u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB038u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB048u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB058u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB068u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB070u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB078u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB080u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB090u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB09Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB0A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB0ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB0B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB0C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB0D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB0DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB0F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB0F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB100u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB10Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB128u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB134u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB154u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB168u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB174u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB18Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB1B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB210u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB228u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB230u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB240u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB24Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB25Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB264u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB270u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB27Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB28Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB294u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB2A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB2A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB2B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB2CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB2D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB2DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB2E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB2ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB2F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB2FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB304u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB310u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB32Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB334u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB33Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB34Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB358u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB360u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB368u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB370u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB378u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB388u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB390u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB3A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB3ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB3B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB3BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB3C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB3D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB3D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB3E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB3F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB3FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB400u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB408u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB414u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB41Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB424u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB434u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB440u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB448u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB458u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB464u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB468u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB470u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB484u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB48Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB498u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB4A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB4B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB4D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB4D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB4E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB4F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB500u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB508u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB510u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB518u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB528u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB530u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB548u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB594u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB59Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB5A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB5B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB5B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB5C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB5CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB5D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB5DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB5E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB5ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB5F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB60Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB624u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB628u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB634u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB64Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB658u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB660u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB66Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB678u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB684u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB694u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB6A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB6ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB6C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB6CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB6D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB6E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB6E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB6F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB6FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB708u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB710u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB720u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB72Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB734u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB738u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB744u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB750u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB760u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB780u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB798u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB7A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB7B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB7C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB7CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB7D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB7F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB81Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB83Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB858u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB860u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB870u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB890u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB8A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB8B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB8CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB8E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB8F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB8F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB904u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB90Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB914u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB924u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB930u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB93Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB948u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB94Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB954u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB96Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB978u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB984u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB99Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB9A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB9B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB9C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB9C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB9CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB9ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB9F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA1Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA40u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA5Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA84u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA8Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA94u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBAA4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBAA8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBAB8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBAC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBAE8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBB00u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBB10u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBB24u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBB30u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBB38u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBB40u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBB48u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBB50u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBB5Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBB8Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBBF4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC14u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC38u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC84u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC90u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBCA0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBCACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBCB4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBCBCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBCCCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBCD4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBCE0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBCE4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBCF0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBCF8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD04u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD08u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD10u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD18u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD20u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD48u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD64u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD68u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBDA0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBDD8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBDF8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE08u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE10u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE18u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE20u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE48u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE54u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE60u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE68u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE74u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE7Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE84u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE94u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBEB8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBEF8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF34u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF3Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF44u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF68u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF70u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF78u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF88u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF8Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBFC4u, &recomp_unit_0053, "recomp_unit_0053");
}
} // namespace psprecomp
