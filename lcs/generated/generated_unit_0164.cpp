#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "lcs_controls.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0164[4095] = {
    1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 14, 0, 15, 16, 17, 0, 0, 0, 18, 0, 0, 0, 0, 19,
    0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 0, 0, 34,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 38,
    0, 39, 40, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0,
    0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 49, 50, 0, 51, 0, 0, 52, 0, 0, 0, 0, 53, 54, 0,
    0, 0, 0, 55, 0, 56, 0, 57, 0, 0, 58, 0, 59, 0, 0, 60, 0, 61, 0, 0, 62, 0, 63, 0, 0, 0, 64, 0, 65, 0, 0, 0,
    66, 0, 67, 0, 0, 0, 68, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 75, 76, 77, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 86, 87, 88, 0, 0, 89,
    0, 0, 0, 0, 90, 0, 0, 91, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 97,
    0, 0, 98, 0, 0, 99, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110,
    0, 0, 111, 0, 0, 112, 0, 113, 114, 0, 115, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 120, 0, 121, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 132, 133, 0,
    134, 0, 0, 135, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 140, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 143, 0, 144, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 158, 159, 160,
    0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 165, 166, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 173, 174, 0, 175, 0, 0,
    176, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 185, 186, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0,
    194, 195, 196, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 205, 206, 207, 0, 0, 0, 208, 0, 0, 0,
    0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0,
    0, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 216, 217, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223,
    0, 0, 224, 0, 225, 226, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 235, 236, 0, 237, 0, 0, 238, 0, 0, 0, 0,
    239, 0, 240, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0,
    0, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 248, 249, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 254, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 259, 260, 0, 261, 0, 0, 262,
    0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267,
    0, 0, 268, 0, 269, 270, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0,
    0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0, 279, 280, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 288, 0, 289, 290, 0, 291, 0, 0,
    292, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0,
    297, 0, 0, 298, 0, 299, 300, 0, 301, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305,
    0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 308, 0, 309, 310, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 317, 0, 318, 319, 0,
    320, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0,
    0, 0, 324, 0, 0, 325, 0, 0, 326, 0, 327, 328, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 335, 0, 336, 337, 0, 338, 0, 0, 339, 0, 0,
    0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 343,
    0, 0, 344, 0, 345, 346, 0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 353, 0, 354, 355, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 363, 364,
    0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0,
    0, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 372, 373, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 380, 0, 381, 382, 0, 383, 0, 0, 384, 0, 0, 0,
    0, 0, 385, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0,
    0, 389, 0, 0, 390, 0, 0, 391, 0, 392, 393, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 400, 0, 401, 402, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0,
    405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 409, 0, 410,
    411, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0,
    0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 418, 0, 419, 420, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 427, 0, 428, 429, 0, 430, 0, 0, 431,
    0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434,
    0, 435, 0, 436, 0, 0, 437, 0, 438, 0, 0, 439, 0, 440, 0, 441, 0, 0, 442, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0,
    445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 450, 0, 0, 451, 0, 452,
    453, 0, 454, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0,
    0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0, 0, 462, 0, 463, 464, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 469, 0, 470, 0, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 474, 475, 0, 0,
    476, 0, 477, 0, 0, 478, 0, 479, 0, 480, 0, 0, 481, 0, 482, 0, 483, 0, 0, 484, 0, 485, 0, 486, 0, 0, 487, 0, 488, 0, 489, 0,
    0, 490, 0, 491, 0, 492, 0, 0, 493, 0, 494, 0, 495, 0, 0, 496, 0, 497, 0, 498, 0, 0, 499, 0, 500, 0, 501, 0, 0, 502, 0, 503,
    0, 504, 0, 0, 505, 0, 506, 0, 507, 0, 0, 508, 0, 509, 0, 510, 511, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 516, 0, 517, 0,
    0, 0, 0, 518, 0, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0,
    0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 527, 0, 528, 0,
    529, 0, 530, 0, 531, 0, 0, 532, 0, 0, 0, 533, 0, 0, 534, 0, 0, 535, 0, 0, 0, 0, 536, 0, 0, 0, 537, 0, 538, 0, 539, 0,
    0, 0, 540, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 543, 0, 544, 0, 545, 0, 0, 546, 0, 0, 0,
    547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 550, 0,
    0, 0, 0, 0, 551, 0, 552, 0, 553, 0, 0, 0, 0, 554, 0, 555, 0, 556, 0, 0, 0, 0, 0, 557, 0, 558, 0, 559, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 561, 0, 0, 562, 0, 563, 564, 565, 0, 0, 0, 566, 0, 0, 0, 0,
    567, 0, 568, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0,
    571, 0, 0, 0, 572, 0, 0, 0, 0, 0, 573, 0, 574, 0, 575, 0, 0, 0, 0, 576, 0, 577, 0, 578, 0, 0, 0, 0, 0, 579, 0, 580,
    0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 583, 0, 0, 584, 0, 585, 586, 587, 0, 0,
    0, 588, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 593, 0, 0, 594, 0, 595, 0, 596, 0, 0, 597, 0, 598, 0, 599, 0, 0, 600, 0, 0, 601,
    0, 0, 602, 603, 604, 0, 605, 0, 0, 606, 0, 0, 607, 0, 0, 608, 609, 610, 0, 611, 0, 0, 612, 0, 0, 613, 0, 0, 614, 615, 616, 0,
    617, 0, 0, 618, 0, 619, 0, 620, 0, 0, 621, 0, 622, 0, 623, 0, 0, 624, 0, 625, 0, 626, 0, 0, 627, 0, 628, 0, 629, 0, 0, 630,
    0, 0, 631, 0, 0, 632, 633, 634, 0, 635, 0, 0, 636, 0, 0, 637, 0, 0, 638, 639, 640, 0, 641, 0, 0, 642, 0, 0, 0, 643, 0, 0,
    0, 0, 0, 0, 0, 0, 644, 0, 645, 0, 0, 0, 0, 646, 0, 0, 0, 0, 647, 0, 648, 649, 0, 0, 650, 0, 0, 0, 0, 0, 0, 651,
    0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 655, 0, 656, 0,
    657, 0, 658, 0, 659, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 662, 0, 663, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 665, 666, 0, 667, 0, 0, 0, 668, 0, 669, 670, 0, 671, 0, 0, 0, 672, 0, 673, 674, 0, 675, 0, 0, 0, 676, 0, 677, 678,
    0, 679, 0, 0, 0, 680, 0, 681, 682, 0, 683, 0, 0, 0, 684, 0, 0, 685, 0, 0, 686, 687, 0, 688, 0, 0, 689, 0, 0, 690, 691, 692,
    0, 693, 0, 0, 0, 694, 0, 0, 695, 0, 0, 696, 697, 0, 698, 0, 0, 699, 0, 0, 700, 701, 702, 0, 703, 0, 0, 0, 704, 0, 0, 705,
    0, 0, 706, 707, 0, 708, 0, 0, 709, 0, 0, 710, 711, 712, 0, 713, 0, 0, 0, 714, 0, 0, 715, 0, 0, 716, 717, 0, 718, 0, 0, 719,
    0, 0, 720, 721, 722, 0, 723, 0, 0, 0, 724, 0, 0, 725, 0, 0, 726, 727, 0, 728, 0, 0, 729, 0, 0, 730, 731, 732, 0, 733, 0, 0,
    0, 734, 0, 0, 735, 0, 0, 736, 737, 0, 738, 0, 0, 739, 0, 0, 740, 741, 742, 0, 743, 0, 0, 0, 0, 744, 0, 745, 0, 746, 0, 747,
    0, 748, 749, 0, 0, 0, 750, 0, 0, 0, 0, 751, 0, 752, 0, 753, 0, 754, 0, 755, 756, 0, 0, 0, 757, 0, 0, 0, 0, 758, 0, 759,
    0, 760, 0, 761, 0, 762, 763, 0, 0, 0, 764, 0, 0, 0, 0, 765, 0, 766, 0, 767, 0, 768, 0, 769, 770, 0, 0, 0, 771, 0, 0, 772,
    0, 0, 0, 0, 773, 0, 0, 774, 0, 0, 775, 776, 777, 0, 778, 0, 0, 779, 780, 781, 0, 0, 0, 782, 0, 0, 783, 0, 0, 784, 785, 0,
    786, 0, 0, 0, 0, 787, 0, 788, 0, 789, 0, 0, 790, 0, 791, 0, 792, 0, 793, 0, 794, 0, 795, 0, 796, 0, 797, 798, 0, 0, 799, 0,
    0, 0, 0, 0, 800, 0, 801, 0, 802, 0, 803, 0, 804, 0, 805, 0, 806, 0, 807, 0, 808, 809, 0, 0, 810, 0, 0, 0, 0, 0, 811, 0,
    0, 0, 812, 0, 813, 0, 814, 0, 815, 0, 0, 0, 0, 0, 816, 0, 817, 0, 818, 0, 819, 0, 0, 0, 820, 0, 821, 0, 0, 0, 822, 0,
    0, 0, 823, 0, 0, 0, 0, 824, 0, 0, 0, 825, 0, 826, 0, 827, 0, 828, 0, 829, 0, 830, 0, 831, 0, 0, 832, 0, 833, 0, 834, 0,
    0, 835, 0, 0, 0, 0, 0, 0, 0, 836, 0, 837, 0, 838, 0, 839, 0, 840, 0, 841, 0, 0, 842, 0, 0, 0, 0, 0, 0, 0, 843, 0,
    844, 0, 0, 0, 0, 0, 0, 0, 845, 0, 0, 0, 846, 0, 0, 0, 0, 0, 847, 0, 848, 0, 849, 0, 0, 850, 0, 851, 0, 852, 0, 853,
    0, 854, 0, 855, 0, 0, 0, 856, 0, 0, 0, 0, 0, 0, 0, 857, 0, 858, 0, 0, 859, 0, 0, 860, 0, 0, 861, 0, 0, 0, 0, 0,
    0, 0, 0, 862, 0, 863, 0, 864, 0, 865, 0, 0, 0, 0, 0, 0, 866, 0, 867, 0, 868, 869, 0, 0, 0, 0, 870, 0, 0, 0, 0, 871,
    0, 0, 0, 872, 0, 0, 873, 0, 874, 0, 875, 0, 876, 0, 877, 0, 878, 0, 0, 879, 0, 0, 0, 0, 880, 0, 0, 0, 881, 0, 0, 882,
    0, 883, 0, 884, 0, 885, 0, 886, 0, 887, 0, 0, 888, 0, 0, 0, 0, 0, 0, 0, 889, 0, 890, 0, 0, 891, 0, 0, 892, 0, 0, 893,
    0, 0, 0, 0, 0, 0, 0, 0, 894, 0, 895, 0, 896, 0, 897, 0, 0, 0, 0, 0, 0, 898, 0, 899, 0, 900, 901, 0, 0, 0, 0, 902,
    0, 0, 0, 0, 0, 903, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 904, 0, 905, 0, 906, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 907, 0, 908, 0, 0, 909, 0, 910, 0, 911, 0, 0, 0, 912, 0, 913, 0, 914, 0, 915, 0, 916, 0, 0, 0, 917, 0, 918, 0,
    0, 919, 0, 920, 0, 921, 0, 922, 0, 0, 923, 0, 924, 0, 0, 925, 0, 926, 0, 927, 0, 0, 928, 0, 929, 0, 930, 0, 0, 931, 0, 932,
    0, 933, 0, 0, 934, 0, 935, 0, 936, 0, 937, 938, 0, 939, 0, 940, 941, 0, 0, 0, 942, 0, 0, 0, 0, 0, 943, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 944, 0, 945, 0, 946, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 947, 0, 948, 0, 0, 949, 0, 950,
    0, 951, 0, 0, 0, 952, 0, 953, 0, 954, 0, 955, 0, 956, 0, 0, 0, 957, 0, 958, 0, 0, 959, 0, 960, 0, 961, 0, 962, 0, 0, 963,
    0, 964, 0, 0, 965, 0, 966, 0, 967, 0, 0, 968, 0, 969, 0, 970, 0, 0, 971, 0, 972, 0, 973, 0, 0, 974, 0, 975, 0, 976, 0, 977,
    978, 0, 979, 0, 980, 0, 981, 0, 0, 0, 982, 0, 0, 0, 0, 0, 983, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 984, 0, 985,
    0, 986, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 987, 0, 0, 0, 988, 0, 989, 0, 990, 0, 991, 0, 992, 0, 993, 0, 0, 994,
    0, 0, 995, 0, 0, 996, 997, 998, 0, 999, 1000, 0, 0, 0, 1001, 0, 0, 1002, 0, 0, 1003, 1004, 1005, 0, 1006, 1007, 0, 0, 0, 0, 1008, 0,
    0, 1009, 0, 1010, 0, 0, 1011, 0, 1012, 0, 0, 0, 0, 1013, 0, 1014, 0, 0, 1015, 1016, 0, 0, 0, 1017, 0, 0, 0, 1018, 0, 0, 1019, 0,
    0, 1020, 0, 1021, 0, 1022, 0, 1023, 0, 0, 1024, 1025, 1026, 0, 1027, 0, 0, 0, 0, 1028, 0, 0, 0, 1029, 0, 1030, 0, 1031, 0, 1032, 0, 1033,
    0, 1034, 0, 1035, 0, 1036, 0, 1037, 0, 1038, 0, 1039, 1040, 0, 0, 1041, 0, 0, 0, 0, 1042, 0, 0, 0, 1043, 0, 1044, 0, 1045, 0, 1046, 0,
    1047, 0, 1048, 0, 1049, 0, 1050, 0, 1051, 0, 1052, 0, 1053, 1054, 0, 0, 1055, 0, 0, 1056, 0, 1057, 0, 1058, 0, 1059, 0, 0, 1060, 0, 0, 1061,
    0, 1062, 0, 1063, 0, 0, 1064, 1065, 1066, 0, 1067, 0, 0, 1068, 0, 0, 1069, 0, 1070, 0, 1071, 0, 0, 1072, 1073, 1074, 0, 1075, 0, 0, 1076, 0,
    0, 0, 1077, 0, 1078, 0, 0, 1079, 0, 1080, 0, 1081, 0, 1082, 0, 1083, 0, 1084, 0, 0, 1085, 0, 1086, 1087, 0, 1088, 0, 0, 1089, 0, 1090, 1091,
    0, 1092, 0, 0, 1093, 0, 0, 1094, 0, 0, 1095, 0, 1096, 0, 1097, 0, 1098, 0, 1099, 0, 0, 1100, 0, 0, 1101, 0, 0, 1102, 0, 0, 1103,
};
void recomp_unit_0164_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A94000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0164[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A94000;
    case 2u: goto L_08A94008;
    case 3u: goto L_08A94010;
    case 4u: goto L_08A94018;
    case 5u: goto L_08A94020;
    case 6u: goto L_08A94028;
    case 7u: goto L_08A94030;
    case 8u: goto L_08A94038;
    case 9u: goto L_08A94040;
    case 10u: goto L_08A94048;
    case 11u: goto L_08A94078;
    case 12u: goto L_08A940B0;
    case 13u: goto L_08A940BC;
    case 14u: goto L_08A940C8;
    case 15u: goto L_08A940D0;
    case 16u: goto L_08A940D4;
    case 17u: goto L_08A940D8;
    case 18u: goto L_08A940E8;
    case 19u: goto L_08A940FC;
    case 20u: goto L_08A94118;
    case 21u: goto L_08A94120;
    case 22u: goto L_08A94130;
    case 23u: goto L_08A9413C;
    case 24u: goto L_08A9414C;
    case 25u: goto L_08A9415C;
    case 26u: goto L_08A94168;
    case 27u: goto L_08A94194;
    case 28u: goto L_08A941B0;
    case 29u: goto L_08A941BC;
    case 30u: goto L_08A941C8;
    case 31u: goto L_08A941D8;
    case 32u: goto L_08A941E0;
    case 33u: goto L_08A941E8;
    case 34u: goto L_08A941FC;
    case 35u: goto L_08A94240;
    case 36u: goto L_08A94264;
    case 37u: goto L_08A94270;
    case 38u: goto L_08A9427C;
    case 39u: goto L_08A94284;
    case 40u: goto L_08A94288;
    case 41u: goto L_08A94290;
    case 42u: goto L_08A9429C;
    case 43u: goto L_08A942B4;
    case 44u: goto L_08A942F4;
    case 45u: goto L_08A94318;
    case 46u: goto L_08A94328;
    case 47u: goto L_08A94334;
    case 48u: goto L_08A94340;
    case 49u: goto L_08A94348;
    case 50u: goto L_08A9434C;
    case 51u: goto L_08A94354;
    case 52u: goto L_08A94360;
    case 53u: goto L_08A94374;
    case 54u: goto L_08A94378;
    case 55u: goto L_08A9438C;
    case 56u: goto L_08A94394;
    case 57u: goto L_08A9439C;
    case 58u: goto L_08A943A8;
    case 59u: goto L_08A943B0;
    case 60u: goto L_08A943BC;
    case 61u: goto L_08A943C4;
    case 62u: goto L_08A943D0;
    case 63u: goto L_08A943D8;
    case 64u: goto L_08A943E8;
    case 65u: goto L_08A943F0;
    case 66u: goto L_08A94400;
    case 67u: goto L_08A94408;
    case 68u: goto L_08A94418;
    case 69u: goto L_08A94420;
    case 70u: goto L_08A94430;
    case 71u: goto L_08A94468;
    case 72u: goto L_08A944A4;
    case 73u: goto L_08A944B0;
    case 74u: goto L_08A944BC;
    case 75u: goto L_08A944C4;
    case 76u: goto L_08A944C8;
    case 77u: goto L_08A944CC;
    case 78u: goto L_08A944D8;
    case 79u: goto L_08A944EC;
    case 80u: goto L_08A94514;
    case 81u: goto L_08A9451C;
    case 82u: goto L_08A9453C;
    case 83u: goto L_08A94548;
    case 84u: goto L_08A94554;
    case 85u: goto L_08A94560;
    case 86u: goto L_08A94568;
    case 87u: goto L_08A9456C;
    case 88u: goto L_08A94570;
    case 89u: goto L_08A9457C;
    case 90u: goto L_08A94590;
    case 91u: goto L_08A9459C;
    case 92u: goto L_08A945A4;
    case 93u: goto L_08A945AC;
    case 94u: goto L_08A945BC;
    case 95u: goto L_08A945E4;
    case 96u: goto L_08A945F0;
    case 97u: goto L_08A945FC;
    case 98u: goto L_08A94608;
    case 99u: goto L_08A94614;
    case 100u: goto L_08A94618;
    case 101u: goto L_08A94620;
    case 102u: goto L_08A946A0;
    case 103u: goto L_08A946B4;
    case 104u: goto L_08A946D8;
    case 105u: goto L_08A9471C;
    case 106u: goto L_08A9472C;
    case 107u: goto L_08A94738;
    case 108u: goto L_08A94748;
    case 109u: goto L_08A94754;
    case 110u: goto L_08A9477C;
    case 111u: goto L_08A94788;
    case 112u: goto L_08A94794;
    case 113u: goto L_08A9479C;
    case 114u: goto L_08A947A0;
    case 115u: goto L_08A947A8;
    case 116u: goto L_08A947B4;
    case 117u: goto L_08A947C8;
    case 118u: goto L_08A947E0;
    case 119u: goto L_08A94800;
    case 120u: goto L_08A94818;
    case 121u: goto L_08A94820;
    case 122u: goto L_08A94824;
    case 123u: goto L_08A94830;
    case 124u: goto L_08A94850;
    case 125u: goto L_08A94864;
    case 126u: goto L_08A94880;
    case 127u: goto L_08A948BC;
    case 128u: goto L_08A948C4;
    case 129u: goto L_08A948D4;
    case 130u: goto L_08A948E0;
    case 131u: goto L_08A948EC;
    case 132u: goto L_08A948F4;
    case 133u: goto L_08A948F8;
    case 134u: goto L_08A94900;
    case 135u: goto L_08A9490C;
    case 136u: goto L_08A94920;
    case 137u: goto L_08A94928;
    case 138u: goto L_08A94958;
    case 139u: goto L_08A94960;
    case 140u: goto L_08A94974;
    case 141u: goto L_08A949AC;
    case 142u: goto L_08A949C0;
    case 143u: goto L_08A949C8;
    case 144u: goto L_08A949D0;
    case 145u: goto L_08A949D8;
    case 146u: goto L_08A949E0;
    case 147u: goto L_08A94A10;
    case 148u: goto L_08A94A1C;
    case 149u: goto L_08A94A24;
    case 150u: goto L_08A94A48;
    case 151u: goto L_08A94A54;
    case 152u: goto L_08A94A60;
    case 153u: goto L_08A94A68;
    case 154u: goto L_08A94A98;
    case 155u: goto L_08A94AD4;
    case 156u: goto L_08A94AE0;
    case 157u: goto L_08A94AEC;
    case 158u: goto L_08A94AF4;
    case 159u: goto L_08A94AF8;
    case 160u: goto L_08A94AFC;
    case 161u: goto L_08A94B0C;
    case 162u: goto L_08A94B20;
    case 163u: goto L_08A94B34;
    case 164u: goto L_08A94B44;
    case 165u: goto L_08A94B4C;
    case 166u: goto L_08A94B50;
    case 167u: goto L_08A94B60;
    case 168u: goto L_08A94B68;
    case 169u: goto L_08A94BA4;
    case 170u: goto L_08A94BC8;
    case 171u: goto L_08A94BD4;
    case 172u: goto L_08A94BE0;
    case 173u: goto L_08A94BE8;
    case 174u: goto L_08A94BEC;
    case 175u: goto L_08A94BF4;
    case 176u: goto L_08A94C00;
    case 177u: goto L_08A94C14;
    case 178u: goto L_08A94C20;
    case 179u: goto L_08A94C48;
    case 180u: goto L_08A94C50;
    case 181u: goto L_08A94C84;
    case 182u: goto L_08A94CA8;
    case 183u: goto L_08A94CB4;
    case 184u: goto L_08A94CC0;
    case 185u: goto L_08A94CC8;
    case 186u: goto L_08A94CCC;
    case 187u: goto L_08A94CD4;
    case 188u: goto L_08A94CE0;
    case 189u: goto L_08A94CF8;
    case 190u: goto L_08A94D38;
    case 191u: goto L_08A94D60;
    case 192u: goto L_08A94D6C;
    case 193u: goto L_08A94D78;
    case 194u: goto L_08A94D80;
    case 195u: goto L_08A94D84;
    case 196u: goto L_08A94D88;
    case 197u: goto L_08A94D98;
    case 198u: goto L_08A94DAC;
    case 199u: goto L_08A94DC8;
    case 200u: goto L_08A94DD8;
    case 201u: goto L_08A94E10;
    case 202u: goto L_08A94E38;
    case 203u: goto L_08A94E44;
    case 204u: goto L_08A94E50;
    case 205u: goto L_08A94E58;
    case 206u: goto L_08A94E5C;
    case 207u: goto L_08A94E60;
    case 208u: goto L_08A94E70;
    case 209u: goto L_08A94E84;
    case 210u: goto L_08A94EA0;
    case 211u: goto L_08A94EB0;
    case 212u: goto L_08A94EE8;
    case 213u: goto L_08A94F0C;
    case 214u: goto L_08A94F18;
    case 215u: goto L_08A94F24;
    case 216u: goto L_08A94F2C;
    case 217u: goto L_08A94F30;
    case 218u: goto L_08A94F38;
    case 219u: goto L_08A94F44;
    case 220u: goto L_08A94F5C;
    case 221u: goto L_08A94FC8;
    case 222u: goto L_08A94FF0;
    case 223u: goto L_08A94FFC;
    case 224u: goto L_08A95008;
    case 225u: goto L_08A95010;
    case 226u: goto L_08A95014;
    case 227u: goto L_08A9501C;
    case 228u: goto L_08A95028;
    case 229u: goto L_08A95040;
    case 230u: goto L_08A95058;
    case 231u: goto L_08A95090;
    case 232u: goto L_08A950B4;
    case 233u: goto L_08A950C0;
    case 234u: goto L_08A950CC;
    case 235u: goto L_08A950D4;
    case 236u: goto L_08A950D8;
    case 237u: goto L_08A950E0;
    case 238u: goto L_08A950EC;
    case 239u: goto L_08A95100;
    case 240u: goto L_08A95108;
    case 241u: goto L_08A95110;
    case 242u: goto L_08A95128;
    case 243u: goto L_08A95134;
    case 244u: goto L_08A95168;
    case 245u: goto L_08A9518C;
    case 246u: goto L_08A95198;
    case 247u: goto L_08A951A4;
    case 248u: goto L_08A951AC;
    case 249u: goto L_08A951B0;
    case 250u: goto L_08A951B8;
    case 251u: goto L_08A951C4;
    case 252u: goto L_08A951DC;
    case 253u: goto L_08A951E4;
    case 254u: goto L_08A951F0;
    case 255u: goto L_08A95220;
    case 256u: goto L_08A95244;
    case 257u: goto L_08A95250;
    case 258u: goto L_08A9525C;
    case 259u: goto L_08A95264;
    case 260u: goto L_08A95268;
    case 261u: goto L_08A95270;
    case 262u: goto L_08A9527C;
    case 263u: goto L_08A95294;
    case 264u: goto L_08A9529C;
    case 265u: goto L_08A952CC;
    case 266u: goto L_08A952F0;
    case 267u: goto L_08A952FC;
    case 268u: goto L_08A95308;
    case 269u: goto L_08A95310;
    case 270u: goto L_08A95314;
    case 271u: goto L_08A9531C;
    case 272u: goto L_08A95328;
    case 273u: goto L_08A95340;
    case 274u: goto L_08A95348;
    case 275u: goto L_08A95378;
    case 276u: goto L_08A9539C;
    case 277u: goto L_08A953A8;
    case 278u: goto L_08A953B4;
    case 279u: goto L_08A953BC;
    case 280u: goto L_08A953C0;
    case 281u: goto L_08A953C8;
    case 282u: goto L_08A953D4;
    case 283u: goto L_08A953EC;
    case 284u: goto L_08A953F4;
    case 285u: goto L_08A95424;
    case 286u: goto L_08A95448;
    case 287u: goto L_08A95454;
    case 288u: goto L_08A95460;
    case 289u: goto L_08A95468;
    case 290u: goto L_08A9546C;
    case 291u: goto L_08A95474;
    case 292u: goto L_08A95480;
    case 293u: goto L_08A95498;
    case 294u: goto L_08A954A0;
    case 295u: goto L_08A954D0;
    case 296u: goto L_08A954F4;
    case 297u: goto L_08A95500;
    case 298u: goto L_08A9550C;
    case 299u: goto L_08A95514;
    case 300u: goto L_08A95518;
    case 301u: goto L_08A95520;
    case 302u: goto L_08A9552C;
    case 303u: goto L_08A95544;
    case 304u: goto L_08A9554C;
    case 305u: goto L_08A9557C;
    case 306u: goto L_08A955A0;
    case 307u: goto L_08A955AC;
    case 308u: goto L_08A955B8;
    case 309u: goto L_08A955C0;
    case 310u: goto L_08A955C4;
    case 311u: goto L_08A955CC;
    case 312u: goto L_08A955D8;
    case 313u: goto L_08A955F0;
    case 314u: goto L_08A95630;
    case 315u: goto L_08A95654;
    case 316u: goto L_08A95660;
    case 317u: goto L_08A9566C;
    case 318u: goto L_08A95674;
    case 319u: goto L_08A95678;
    case 320u: goto L_08A95680;
    case 321u: goto L_08A9568C;
    case 322u: goto L_08A956A4;
    case 323u: goto L_08A956E4;
    case 324u: goto L_08A95708;
    case 325u: goto L_08A95714;
    case 326u: goto L_08A95720;
    case 327u: goto L_08A95728;
    case 328u: goto L_08A9572C;
    case 329u: goto L_08A95734;
    case 330u: goto L_08A95740;
    case 331u: goto L_08A95758;
    case 332u: goto L_08A95798;
    case 333u: goto L_08A957BC;
    case 334u: goto L_08A957C8;
    case 335u: goto L_08A957D4;
    case 336u: goto L_08A957DC;
    case 337u: goto L_08A957E0;
    case 338u: goto L_08A957E8;
    case 339u: goto L_08A957F4;
    case 340u: goto L_08A9580C;
    case 341u: goto L_08A9584C;
    case 342u: goto L_08A95870;
    case 343u: goto L_08A9587C;
    case 344u: goto L_08A95888;
    case 345u: goto L_08A95890;
    case 346u: goto L_08A95894;
    case 347u: goto L_08A9589C;
    case 348u: goto L_08A958A8;
    case 349u: goto L_08A958C0;
    case 350u: goto L_08A95900;
    case 351u: goto L_08A95924;
    case 352u: goto L_08A95930;
    case 353u: goto L_08A9593C;
    case 354u: goto L_08A95944;
    case 355u: goto L_08A95948;
    case 356u: goto L_08A95950;
    case 357u: goto L_08A9595C;
    case 358u: goto L_08A95974;
    case 359u: goto L_08A959B4;
    case 360u: goto L_08A959D8;
    case 361u: goto L_08A959E4;
    case 362u: goto L_08A959F0;
    case 363u: goto L_08A959F8;
    case 364u: goto L_08A959FC;
    case 365u: goto L_08A95A04;
    case 366u: goto L_08A95A10;
    case 367u: goto L_08A95A28;
    case 368u: goto L_08A95A68;
    case 369u: goto L_08A95A8C;
    case 370u: goto L_08A95A98;
    case 371u: goto L_08A95AA4;
    case 372u: goto L_08A95AAC;
    case 373u: goto L_08A95AB0;
    case 374u: goto L_08A95AB8;
    case 375u: goto L_08A95AC4;
    case 376u: goto L_08A95ADC;
    case 377u: goto L_08A95B14;
    case 378u: goto L_08A95B38;
    case 379u: goto L_08A95B44;
    case 380u: goto L_08A95B50;
    case 381u: goto L_08A95B58;
    case 382u: goto L_08A95B5C;
    case 383u: goto L_08A95B64;
    case 384u: goto L_08A95B70;
    case 385u: goto L_08A95B88;
    case 386u: goto L_08A95B90;
    case 387u: goto L_08A95BB0;
    case 388u: goto L_08A95BE0;
    case 389u: goto L_08A95C04;
    case 390u: goto L_08A95C10;
    case 391u: goto L_08A95C1C;
    case 392u: goto L_08A95C24;
    case 393u: goto L_08A95C28;
    case 394u: goto L_08A95C30;
    case 395u: goto L_08A95C3C;
    case 396u: goto L_08A95C54;
    case 397u: goto L_08A95C8C;
    case 398u: goto L_08A95CB0;
    case 399u: goto L_08A95CBC;
    case 400u: goto L_08A95CC8;
    case 401u: goto L_08A95CD0;
    case 402u: goto L_08A95CD4;
    case 403u: goto L_08A95CDC;
    case 404u: goto L_08A95CE8;
    case 405u: goto L_08A95D00;
    case 406u: goto L_08A95D38;
    case 407u: goto L_08A95D5C;
    case 408u: goto L_08A95D68;
    case 409u: goto L_08A95D74;
    case 410u: goto L_08A95D7C;
    case 411u: goto L_08A95D80;
    case 412u: goto L_08A95D88;
    case 413u: goto L_08A95D94;
    case 414u: goto L_08A95DAC;
    case 415u: goto L_08A95DEC;
    case 416u: goto L_08A95E10;
    case 417u: goto L_08A95E1C;
    case 418u: goto L_08A95E28;
    case 419u: goto L_08A95E30;
    case 420u: goto L_08A95E34;
    case 421u: goto L_08A95E3C;
    case 422u: goto L_08A95E48;
    case 423u: goto L_08A95E60;
    case 424u: goto L_08A95EA0;
    case 425u: goto L_08A95EC4;
    case 426u: goto L_08A95ED0;
    case 427u: goto L_08A95EDC;
    case 428u: goto L_08A95EE4;
    case 429u: goto L_08A95EE8;
    case 430u: goto L_08A95EF0;
    case 431u: goto L_08A95EFC;
    case 432u: goto L_08A95F14;
    case 433u: goto L_08A95F54;
    case 434u: goto L_08A95F7C;
    case 435u: goto L_08A95F84;
    case 436u: goto L_08A95F8C;
    case 437u: goto L_08A95F98;
    case 438u: goto L_08A95FA0;
    case 439u: goto L_08A95FAC;
    case 440u: goto L_08A95FB4;
    case 441u: goto L_08A95FBC;
    case 442u: goto L_08A95FC8;
    case 443u: goto L_08A95FD4;
    case 444u: goto L_08A95FE4;
    case 445u: goto L_08A96000;
    case 446u: goto L_08A96030;
    case 447u: goto L_08A9603C;
    case 448u: goto L_08A9604C;
    case 449u: goto L_08A9605C;
    case 450u: goto L_08A96068;
    case 451u: goto L_08A96074;
    case 452u: goto L_08A9607C;
    case 453u: goto L_08A96080;
    case 454u: goto L_08A96088;
    case 455u: goto L_08A96094;
    case 456u: goto L_08A960A8;
    case 457u: goto L_08A960B8;
    case 458u: goto L_08A960D4;
    case 459u: goto L_08A960F8;
    case 460u: goto L_08A9611C;
    case 461u: goto L_08A96128;
    case 462u: goto L_08A96134;
    case 463u: goto L_08A9613C;
    case 464u: goto L_08A96140;
    case 465u: goto L_08A96148;
    case 466u: goto L_08A96154;
    case 467u: goto L_08A9616C;
    case 468u: goto L_08A961A4;
    case 469u: goto L_08A961AC;
    case 470u: goto L_08A961B4;
    case 471u: goto L_08A961C0;
    case 472u: goto L_08A961DC;
    case 473u: goto L_08A961E4;
    case 474u: goto L_08A961F0;
    case 475u: goto L_08A961F4;
    case 476u: goto L_08A96200;
    case 477u: goto L_08A96208;
    case 478u: goto L_08A96214;
    case 479u: goto L_08A9621C;
    case 480u: goto L_08A96224;
    case 481u: goto L_08A96230;
    case 482u: goto L_08A96238;
    case 483u: goto L_08A96240;
    case 484u: goto L_08A9624C;
    case 485u: goto L_08A96254;
    case 486u: goto L_08A9625C;
    case 487u: goto L_08A96268;
    case 488u: goto L_08A96270;
    case 489u: goto L_08A96278;
    case 490u: goto L_08A96284;
    case 491u: goto L_08A9628C;
    case 492u: goto L_08A96294;
    case 493u: goto L_08A962A0;
    case 494u: goto L_08A962A8;
    case 495u: goto L_08A962B0;
    case 496u: goto L_08A962BC;
    case 497u: goto L_08A962C4;
    case 498u: goto L_08A962CC;
    case 499u: goto L_08A962D8;
    case 500u: goto L_08A962E0;
    case 501u: goto L_08A962E8;
    case 502u: goto L_08A962F4;
    case 503u: goto L_08A962FC;
    case 504u: goto L_08A96304;
    case 505u: goto L_08A96310;
    case 506u: goto L_08A96318;
    case 507u: goto L_08A96320;
    case 508u: goto L_08A9632C;
    case 509u: goto L_08A96334;
    case 510u: goto L_08A9633C;
    case 511u: goto L_08A96340;
    case 512u: goto L_08A96348;
    case 513u: goto L_08A963AC;
    case 514u: goto L_08A963D4;
    case 515u: goto L_08A963E8;
    case 516u: goto L_08A963F0;
    case 517u: goto L_08A963F8;
    case 518u: goto L_08A9640C;
    case 519u: goto L_08A96418;
    case 520u: goto L_08A96434;
    case 521u: goto L_08A96474;
    case 522u: goto L_08A96488;
    case 523u: goto L_08A96498;
    case 524u: goto L_08A964B8;
    case 525u: goto L_08A964D4;
    case 526u: goto L_08A964E4;
    case 527u: goto L_08A964F0;
    case 528u: goto L_08A964F8;
    case 529u: goto L_08A96500;
    case 530u: goto L_08A96508;
    case 531u: goto L_08A96510;
    case 532u: goto L_08A9651C;
    case 533u: goto L_08A9652C;
    case 534u: goto L_08A96538;
    case 535u: goto L_08A96544;
    case 536u: goto L_08A96558;
    case 537u: goto L_08A96568;
    case 538u: goto L_08A96570;
    case 539u: goto L_08A96578;
    case 540u: goto L_08A96588;
    case 541u: goto L_08A96590;
    case 542u: goto L_08A965C4;
    case 543u: goto L_08A965D4;
    case 544u: goto L_08A965DC;
    case 545u: goto L_08A965E4;
    case 546u: goto L_08A965F0;
    case 547u: goto L_08A96600;
    case 548u: goto L_08A96648;
    case 549u: goto L_08A96668;
    case 550u: goto L_08A96678;
    case 551u: goto L_08A96690;
    case 552u: goto L_08A96698;
    case 553u: goto L_08A966A0;
    case 554u: goto L_08A966B4;
    case 555u: goto L_08A966BC;
    case 556u: goto L_08A966C4;
    case 557u: goto L_08A966DC;
    case 558u: goto L_08A966E4;
    case 559u: goto L_08A966EC;
    case 560u: goto L_08A96734;
    case 561u: goto L_08A96740;
    case 562u: goto L_08A9674C;
    case 563u: goto L_08A96754;
    case 564u: goto L_08A96758;
    case 565u: goto L_08A9675C;
    case 566u: goto L_08A9676C;
    case 567u: goto L_08A96780;
    case 568u: goto L_08A96788;
    case 569u: goto L_08A96798;
    case 570u: goto L_08A967E0;
    case 571u: goto L_08A96800;
    case 572u: goto L_08A96810;
    case 573u: goto L_08A96828;
    case 574u: goto L_08A96830;
    case 575u: goto L_08A96838;
    case 576u: goto L_08A9684C;
    case 577u: goto L_08A96854;
    case 578u: goto L_08A9685C;
    case 579u: goto L_08A96874;
    case 580u: goto L_08A9687C;
    case 581u: goto L_08A96884;
    case 582u: goto L_08A968CC;
    case 583u: goto L_08A968D8;
    case 584u: goto L_08A968E4;
    case 585u: goto L_08A968EC;
    case 586u: goto L_08A968F0;
    case 587u: goto L_08A968F4;
    case 588u: goto L_08A96904;
    case 589u: goto L_08A96918;
    case 590u: goto L_08A9693C;
    case 591u: goto L_08A9694C;
    case 592u: goto L_08A96A10;
    case 593u: goto L_08A96A2C;
    case 594u: goto L_08A96A38;
    case 595u: goto L_08A96A40;
    case 596u: goto L_08A96A48;
    case 597u: goto L_08A96A54;
    case 598u: goto L_08A96A5C;
    case 599u: goto L_08A96A64;
    case 600u: goto L_08A96A70;
    case 601u: goto L_08A96A7C;
    case 602u: goto L_08A96A88;
    case 603u: goto L_08A96A8C;
    case 604u: goto L_08A96A90;
    case 605u: goto L_08A96A98;
    case 606u: goto L_08A96AA4;
    case 607u: goto L_08A96AB0;
    case 608u: goto L_08A96ABC;
    case 609u: goto L_08A96AC0;
    case 610u: goto L_08A96AC4;
    case 611u: goto L_08A96ACC;
    case 612u: goto L_08A96AD8;
    case 613u: goto L_08A96AE4;
    case 614u: goto L_08A96AF0;
    case 615u: goto L_08A96AF4;
    case 616u: goto L_08A96AF8;
    case 617u: goto L_08A96B00;
    case 618u: goto L_08A96B0C;
    case 619u: goto L_08A96B14;
    case 620u: goto L_08A96B1C;
    case 621u: goto L_08A96B28;
    case 622u: goto L_08A96B30;
    case 623u: goto L_08A96B38;
    case 624u: goto L_08A96B44;
    case 625u: goto L_08A96B4C;
    case 626u: goto L_08A96B54;
    case 627u: goto L_08A96B60;
    case 628u: goto L_08A96B68;
    case 629u: goto L_08A96B70;
    case 630u: goto L_08A96B7C;
    case 631u: goto L_08A96B88;
    case 632u: goto L_08A96B94;
    case 633u: goto L_08A96B98;
    case 634u: goto L_08A96B9C;
    case 635u: goto L_08A96BA4;
    case 636u: goto L_08A96BB0;
    case 637u: goto L_08A96BBC;
    case 638u: goto L_08A96BC8;
    case 639u: goto L_08A96BCC;
    case 640u: goto L_08A96BD0;
    case 641u: goto L_08A96BD8;
    case 642u: goto L_08A96BE4;
    case 643u: goto L_08A96BF4;
    case 644u: goto L_08A96C18;
    case 645u: goto L_08A96C20;
    case 646u: goto L_08A96C34;
    case 647u: goto L_08A96C48;
    case 648u: goto L_08A96C50;
    case 649u: goto L_08A96C54;
    case 650u: goto L_08A96C60;
    case 651u: goto L_08A96C7C;
    case 652u: goto L_08A96C88;
    case 653u: goto L_08A96CA8;
    case 654u: goto L_08A96CDC;
    case 655u: goto L_08A96CF0;
    case 656u: goto L_08A96CF8;
    case 657u: goto L_08A96D00;
    case 658u: goto L_08A96D08;
    case 659u: goto L_08A96D10;
    case 660u: goto L_08A96D20;
    case 661u: goto L_08A96D48;
    case 662u: goto L_08A96D4C;
    case 663u: goto L_08A96D54;
    case 664u: goto L_08A96D64;
    case 665u: goto L_08A96D8C;
    case 666u: goto L_08A96D90;
    case 667u: goto L_08A96D98;
    case 668u: goto L_08A96DA8;
    case 669u: goto L_08A96DB0;
    case 670u: goto L_08A96DB4;
    case 671u: goto L_08A96DBC;
    case 672u: goto L_08A96DCC;
    case 673u: goto L_08A96DD4;
    case 674u: goto L_08A96DD8;
    case 675u: goto L_08A96DE0;
    case 676u: goto L_08A96DF0;
    case 677u: goto L_08A96DF8;
    case 678u: goto L_08A96DFC;
    case 679u: goto L_08A96E04;
    case 680u: goto L_08A96E14;
    case 681u: goto L_08A96E1C;
    case 682u: goto L_08A96E20;
    case 683u: goto L_08A96E28;
    case 684u: goto L_08A96E38;
    case 685u: goto L_08A96E44;
    case 686u: goto L_08A96E50;
    case 687u: goto L_08A96E54;
    case 688u: goto L_08A96E5C;
    case 689u: goto L_08A96E68;
    case 690u: goto L_08A96E74;
    case 691u: goto L_08A96E78;
    case 692u: goto L_08A96E7C;
    case 693u: goto L_08A96E84;
    case 694u: goto L_08A96E94;
    case 695u: goto L_08A96EA0;
    case 696u: goto L_08A96EAC;
    case 697u: goto L_08A96EB0;
    case 698u: goto L_08A96EB8;
    case 699u: goto L_08A96EC4;
    case 700u: goto L_08A96ED0;
    case 701u: goto L_08A96ED4;
    case 702u: goto L_08A96ED8;
    case 703u: goto L_08A96EE0;
    case 704u: goto L_08A96EF0;
    case 705u: goto L_08A96EFC;
    case 706u: goto L_08A96F08;
    case 707u: goto L_08A96F0C;
    case 708u: goto L_08A96F14;
    case 709u: goto L_08A96F20;
    case 710u: goto L_08A96F2C;
    case 711u: goto L_08A96F30;
    case 712u: goto L_08A96F34;
    case 713u: goto L_08A96F3C;
    case 714u: goto L_08A96F4C;
    case 715u: goto L_08A96F58;
    case 716u: goto L_08A96F64;
    case 717u: goto L_08A96F68;
    case 718u: goto L_08A96F70;
    case 719u: goto L_08A96F7C;
    case 720u: goto L_08A96F88;
    case 721u: goto L_08A96F8C;
    case 722u: goto L_08A96F90;
    case 723u: goto L_08A96F98;
    case 724u: goto L_08A96FA8;
    case 725u: goto L_08A96FB4;
    case 726u: goto L_08A96FC0;
    case 727u: goto L_08A96FC4;
    case 728u: goto L_08A96FCC;
    case 729u: goto L_08A96FD8;
    case 730u: goto L_08A96FE4;
    case 731u: goto L_08A96FE8;
    case 732u: goto L_08A96FEC;
    case 733u: goto L_08A96FF4;
    case 734u: goto L_08A97004;
    case 735u: goto L_08A97010;
    case 736u: goto L_08A9701C;
    case 737u: goto L_08A97020;
    case 738u: goto L_08A97028;
    case 739u: goto L_08A97034;
    case 740u: goto L_08A97040;
    case 741u: goto L_08A97044;
    case 742u: goto L_08A97048;
    case 743u: goto L_08A97050;
    case 744u: goto L_08A97064;
    case 745u: goto L_08A9706C;
    case 746u: goto L_08A97074;
    case 747u: goto L_08A9707C;
    case 748u: goto L_08A97084;
    case 749u: goto L_08A97088;
    case 750u: goto L_08A97098;
    case 751u: goto L_08A970AC;
    case 752u: goto L_08A970B4;
    case 753u: goto L_08A970BC;
    case 754u: goto L_08A970C4;
    case 755u: goto L_08A970CC;
    case 756u: goto L_08A970D0;
    case 757u: goto L_08A970E0;
    case 758u: goto L_08A970F4;
    case 759u: goto L_08A970FC;
    case 760u: goto L_08A97104;
    case 761u: goto L_08A9710C;
    case 762u: goto L_08A97114;
    case 763u: goto L_08A97118;
    case 764u: goto L_08A97128;
    case 765u: goto L_08A9713C;
    case 766u: goto L_08A97144;
    case 767u: goto L_08A9714C;
    case 768u: goto L_08A97154;
    case 769u: goto L_08A9715C;
    case 770u: goto L_08A97160;
    case 771u: goto L_08A97170;
    case 772u: goto L_08A9717C;
    case 773u: goto L_08A97190;
    case 774u: goto L_08A9719C;
    case 775u: goto L_08A971A8;
    case 776u: goto L_08A971AC;
    case 777u: goto L_08A971B0;
    case 778u: goto L_08A971B8;
    case 779u: goto L_08A971C4;
    case 780u: goto L_08A971C8;
    case 781u: goto L_08A971CC;
    case 782u: goto L_08A971DC;
    case 783u: goto L_08A971E8;
    case 784u: goto L_08A971F4;
    case 785u: goto L_08A971F8;
    case 786u: goto L_08A97200;
    case 787u: goto L_08A97214;
    case 788u: goto L_08A9721C;
    case 789u: goto L_08A97224;
    case 790u: goto L_08A97230;
    case 791u: goto L_08A97238;
    case 792u: goto L_08A97240;
    case 793u: goto L_08A97248;
    case 794u: goto L_08A97250;
    case 795u: goto L_08A97258;
    case 796u: goto L_08A97260;
    case 797u: goto L_08A97268;
    case 798u: goto L_08A9726C;
    case 799u: goto L_08A97278;
    case 800u: goto L_08A97290;
    case 801u: goto L_08A97298;
    case 802u: goto L_08A972A0;
    case 803u: goto L_08A972A8;
    case 804u: goto L_08A972B0;
    case 805u: goto L_08A972B8;
    case 806u: goto L_08A972C0;
    case 807u: goto L_08A972C8;
    case 808u: goto L_08A972D0;
    case 809u: goto L_08A972D4;
    case 810u: goto L_08A972E0;
    case 811u: goto L_08A972F8;
    case 812u: goto L_08A97308;
    case 813u: goto L_08A97310;
    case 814u: goto L_08A97318;
    case 815u: goto L_08A97320;
    case 816u: goto L_08A97338;
    case 817u: goto L_08A97340;
    case 818u: goto L_08A97348;
    case 819u: goto L_08A97350;
    case 820u: goto L_08A97360;
    case 821u: goto L_08A97368;
    case 822u: goto L_08A97378;
    case 823u: goto L_08A97388;
    case 824u: goto L_08A9739C;
    case 825u: goto L_08A973AC;
    case 826u: goto L_08A973B4;
    case 827u: goto L_08A973BC;
    case 828u: goto L_08A973C4;
    case 829u: goto L_08A973CC;
    case 830u: goto L_08A973D4;
    case 831u: goto L_08A973DC;
    case 832u: goto L_08A973E8;
    case 833u: goto L_08A973F0;
    case 834u: goto L_08A973F8;
    case 835u: goto L_08A97404;
    case 836u: goto L_08A97424;
    case 837u: goto L_08A9742C;
    case 838u: goto L_08A97434;
    case 839u: goto L_08A9743C;
    case 840u: goto L_08A97444;
    case 841u: goto L_08A9744C;
    case 842u: goto L_08A97458;
    case 843u: goto L_08A97478;
    case 844u: goto L_08A97480;
    case 845u: goto L_08A974A0;
    case 846u: goto L_08A974B0;
    case 847u: goto L_08A974C8;
    case 848u: goto L_08A974D0;
    case 849u: goto L_08A974D8;
    case 850u: goto L_08A974E4;
    case 851u: goto L_08A974EC;
    case 852u: goto L_08A974F4;
    case 853u: goto L_08A974FC;
    case 854u: goto L_08A97504;
    case 855u: goto L_08A9750C;
    case 856u: goto L_08A9751C;
    case 857u: goto L_08A9753C;
    case 858u: goto L_08A97544;
    case 859u: goto L_08A97550;
    case 860u: goto L_08A9755C;
    case 861u: goto L_08A97568;
    case 862u: goto L_08A9758C;
    case 863u: goto L_08A97594;
    case 864u: goto L_08A9759C;
    case 865u: goto L_08A975A4;
    case 866u: goto L_08A975C0;
    case 867u: goto L_08A975C8;
    case 868u: goto L_08A975D0;
    case 869u: goto L_08A975D4;
    case 870u: goto L_08A975E8;
    case 871u: goto L_08A975FC;
    case 872u: goto L_08A9760C;
    case 873u: goto L_08A97618;
    case 874u: goto L_08A97620;
    case 875u: goto L_08A97628;
    case 876u: goto L_08A97630;
    case 877u: goto L_08A97638;
    case 878u: goto L_08A97640;
    case 879u: goto L_08A9764C;
    case 880u: goto L_08A97660;
    case 881u: goto L_08A97670;
    case 882u: goto L_08A9767C;
    case 883u: goto L_08A97684;
    case 884u: goto L_08A9768C;
    case 885u: goto L_08A97694;
    case 886u: goto L_08A9769C;
    case 887u: goto L_08A976A4;
    case 888u: goto L_08A976B0;
    case 889u: goto L_08A976D0;
    case 890u: goto L_08A976D8;
    case 891u: goto L_08A976E4;
    case 892u: goto L_08A976F0;
    case 893u: goto L_08A976FC;
    case 894u: goto L_08A97720;
    case 895u: goto L_08A97728;
    case 896u: goto L_08A97730;
    case 897u: goto L_08A97738;
    case 898u: goto L_08A97754;
    case 899u: goto L_08A9775C;
    case 900u: goto L_08A97764;
    case 901u: goto L_08A97768;
    case 902u: goto L_08A9777C;
    case 903u: goto L_08A97794;
    case 904u: goto L_08A977C8;
    case 905u: goto L_08A977D0;
    case 906u: goto L_08A977D8;
    case 907u: goto L_08A9780C;
    case 908u: goto L_08A97814;
    case 909u: goto L_08A97820;
    case 910u: goto L_08A97828;
    case 911u: goto L_08A97830;
    case 912u: goto L_08A97840;
    case 913u: goto L_08A97848;
    case 914u: goto L_08A97850;
    case 915u: goto L_08A97858;
    case 916u: goto L_08A97860;
    case 917u: goto L_08A97870;
    case 918u: goto L_08A97878;
    case 919u: goto L_08A97884;
    case 920u: goto L_08A9788C;
    case 921u: goto L_08A97894;
    case 922u: goto L_08A9789C;
    case 923u: goto L_08A978A8;
    case 924u: goto L_08A978B0;
    case 925u: goto L_08A978BC;
    case 926u: goto L_08A978C4;
    case 927u: goto L_08A978CC;
    case 928u: goto L_08A978D8;
    case 929u: goto L_08A978E0;
    case 930u: goto L_08A978E8;
    case 931u: goto L_08A978F4;
    case 932u: goto L_08A978FC;
    case 933u: goto L_08A97904;
    case 934u: goto L_08A97910;
    case 935u: goto L_08A97918;
    case 936u: goto L_08A97920;
    case 937u: goto L_08A97928;
    case 938u: goto L_08A9792C;
    case 939u: goto L_08A97934;
    case 940u: goto L_08A9793C;
    case 941u: goto L_08A97940;
    case 942u: goto L_08A97950;
    case 943u: goto L_08A97968;
    case 944u: goto L_08A9799C;
    case 945u: goto L_08A979A4;
    case 946u: goto L_08A979AC;
    case 947u: goto L_08A979E0;
    case 948u: goto L_08A979E8;
    case 949u: goto L_08A979F4;
    case 950u: goto L_08A979FC;
    case 951u: goto L_08A97A04;
    case 952u: goto L_08A97A14;
    case 953u: goto L_08A97A1C;
    case 954u: goto L_08A97A24;
    case 955u: goto L_08A97A2C;
    case 956u: goto L_08A97A34;
    case 957u: goto L_08A97A44;
    case 958u: goto L_08A97A4C;
    case 959u: goto L_08A97A58;
    case 960u: goto L_08A97A60;
    case 961u: goto L_08A97A68;
    case 962u: goto L_08A97A70;
    case 963u: goto L_08A97A7C;
    case 964u: goto L_08A97A84;
    case 965u: goto L_08A97A90;
    case 966u: goto L_08A97A98;
    case 967u: goto L_08A97AA0;
    case 968u: goto L_08A97AAC;
    case 969u: goto L_08A97AB4;
    case 970u: goto L_08A97ABC;
    case 971u: goto L_08A97AC8;
    case 972u: goto L_08A97AD0;
    case 973u: goto L_08A97AD8;
    case 974u: goto L_08A97AE4;
    case 975u: goto L_08A97AEC;
    case 976u: goto L_08A97AF4;
    case 977u: goto L_08A97AFC;
    case 978u: goto L_08A97B00;
    case 979u: goto L_08A97B08;
    case 980u: goto L_08A97B10;
    case 981u: goto L_08A97B18;
    case 982u: goto L_08A97B28;
    case 983u: goto L_08A97B40;
    case 984u: goto L_08A97B74;
    case 985u: goto L_08A97B7C;
    case 986u: goto L_08A97B84;
    case 987u: goto L_08A97BB8;
    case 988u: goto L_08A97BC8;
    case 989u: goto L_08A97BD0;
    case 990u: goto L_08A97BD8;
    case 991u: goto L_08A97BE0;
    case 992u: goto L_08A97BE8;
    case 993u: goto L_08A97BF0;
    case 994u: goto L_08A97BFC;
    case 995u: goto L_08A97C08;
    case 996u: goto L_08A97C14;
    case 997u: goto L_08A97C18;
    case 998u: goto L_08A97C1C;
    case 999u: goto L_08A97C24;
    case 1000u: goto L_08A97C28;
    case 1001u: goto L_08A97C38;
    case 1002u: goto L_08A97C44;
    case 1003u: goto L_08A97C50;
    case 1004u: goto L_08A97C54;
    case 1005u: goto L_08A97C58;
    case 1006u: goto L_08A97C60;
    case 1007u: goto L_08A97C64;
    case 1008u: goto L_08A97C78;
    case 1009u: goto L_08A97C84;
    case 1010u: goto L_08A97C8C;
    case 1011u: goto L_08A97C98;
    case 1012u: goto L_08A97CA0;
    case 1013u: goto L_08A97CB4;
    case 1014u: goto L_08A97CBC;
    case 1015u: goto L_08A97CC8;
    case 1016u: goto L_08A97CCC;
    case 1017u: goto L_08A97CDC;
    case 1018u: goto L_08A97CEC;
    case 1019u: goto L_08A97CF8;
    case 1020u: goto L_08A97D04;
    case 1021u: goto L_08A97D0C;
    case 1022u: goto L_08A97D14;
    case 1023u: goto L_08A97D1C;
    case 1024u: goto L_08A97D28;
    case 1025u: goto L_08A97D2C;
    case 1026u: goto L_08A97D30;
    case 1027u: goto L_08A97D38;
    case 1028u: goto L_08A97D4C;
    case 1029u: goto L_08A97D5C;
    case 1030u: goto L_08A97D64;
    case 1031u: goto L_08A97D6C;
    case 1032u: goto L_08A97D74;
    case 1033u: goto L_08A97D7C;
    case 1034u: goto L_08A97D84;
    case 1035u: goto L_08A97D8C;
    case 1036u: goto L_08A97D94;
    case 1037u: goto L_08A97D9C;
    case 1038u: goto L_08A97DA4;
    case 1039u: goto L_08A97DAC;
    case 1040u: goto L_08A97DB0;
    case 1041u: goto L_08A97DBC;
    case 1042u: goto L_08A97DD0;
    case 1043u: goto L_08A97DE0;
    case 1044u: goto L_08A97DE8;
    case 1045u: goto L_08A97DF0;
    case 1046u: goto L_08A97DF8;
    case 1047u: goto L_08A97E00;
    case 1048u: goto L_08A97E08;
    case 1049u: goto L_08A97E10;
    case 1050u: goto L_08A97E18;
    case 1051u: goto L_08A97E20;
    case 1052u: goto L_08A97E28;
    case 1053u: goto L_08A97E30;
    case 1054u: goto L_08A97E34;
    case 1055u: goto L_08A97E40;
    case 1056u: goto L_08A97E4C;
    case 1057u: goto L_08A97E54;
    case 1058u: goto L_08A97E5C;
    case 1059u: goto L_08A97E64;
    case 1060u: goto L_08A97E70;
    case 1061u: goto L_08A97E7C;
    case 1062u: goto L_08A97E84;
    case 1063u: goto L_08A97E8C;
    case 1064u: goto L_08A97E98;
    case 1065u: goto L_08A97E9C;
    case 1066u: goto L_08A97EA0;
    case 1067u: goto L_08A97EA8;
    case 1068u: goto L_08A97EB4;
    case 1069u: goto L_08A97EC0;
    case 1070u: goto L_08A97EC8;
    case 1071u: goto L_08A97ED0;
    case 1072u: goto L_08A97EDC;
    case 1073u: goto L_08A97EE0;
    case 1074u: goto L_08A97EE4;
    case 1075u: goto L_08A97EEC;
    case 1076u: goto L_08A97EF8;
    case 1077u: goto L_08A97F08;
    case 1078u: goto L_08A97F10;
    case 1079u: goto L_08A97F1C;
    case 1080u: goto L_08A97F24;
    case 1081u: goto L_08A97F2C;
    case 1082u: goto L_08A97F34;
    case 1083u: goto L_08A97F3C;
    case 1084u: goto L_08A97F44;
    case 1085u: goto L_08A97F50;
    case 1086u: goto L_08A97F58;
    case 1087u: goto L_08A97F5C;
    case 1088u: goto L_08A97F64;
    case 1089u: goto L_08A97F70;
    case 1090u: goto L_08A97F78;
    case 1091u: goto L_08A97F7C;
    case 1092u: goto L_08A97F84;
    case 1093u: goto L_08A97F90;
    case 1094u: goto L_08A97F9C;
    case 1095u: goto L_08A97FA8;
    case 1096u: goto L_08A97FB0;
    case 1097u: goto L_08A97FB8;
    case 1098u: goto L_08A97FC0;
    case 1099u: goto L_08A97FC8;
    case 1100u: goto L_08A97FD4;
    case 1101u: goto L_08A97FE0;
    case 1102u: goto L_08A97FEC;
    case 1103u: goto L_08A97FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A94000:
    ctx.gpr[31] = (0x08A94008u);
    ctx.gpr[4] = (0u | 269u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A94008u) goto L_08A94008;
    return;
L_08A94008:
    ctx.gpr[31] = (0x08A94010u);
    ctx.gpr[4] = (0u | 270u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A94010u) goto L_08A94010;
    return;
L_08A94010:
    ctx.gpr[31] = (0x08A94018u);
    ctx.gpr[4] = (0u | 275u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A94018u) goto L_08A94018;
    return;
L_08A94018:
    ctx.gpr[31] = (0x08A94020u);
    ctx.gpr[4] = (0u | 278u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A94020u) goto L_08A94020;
    return;
L_08A94020:
    ctx.gpr[31] = (0x08A94028u);
    ctx.gpr[4] = (0u | 284u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A94028u) goto L_08A94028;
    return;
L_08A94028:
    ctx.gpr[31] = (0x08A94030u);
    ctx.gpr[4] = (0u | 280u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A94030u) goto L_08A94030;
    return;
L_08A94030:
    ctx.gpr[31] = (0x08A94038u);
    ctx.gpr[4] = (0u | 286u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A94038u) goto L_08A94038;
    return;
L_08A94038:
    ctx.gpr[31] = (0x08A94040u);
    ctx.gpr[4] = (0u | 290u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A94040u) goto L_08A94040;
    return;
L_08A94040:
    ctx.gpr[31] = (0x08A94048u);
    ctx.gpr[4] = (0u | 294u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A94048u) goto L_08A94048;
    return;
L_08A94048:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A94078:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[5] = (16128u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A940D8;
      }
      goto L_08A940B0;
    }
L_08A940B0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A940BCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A940BCu) goto L_08A940BC;
    return;
L_08A940BC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A940D4;
      }
      goto L_08A940C8;
    }
L_08A940C8:
    ctx.gpr[31] = (0x08A940D0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A940D0u) goto L_08A940D0;
    return;
L_08A940D0:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08A940D4;
L_08A940D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    goto L_08A940D8;
L_08A940D8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A940E8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20544));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A940E8u) goto L_08A940E8;
    return;
L_08A940E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A940FCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A940FCu) goto L_08A940FC;
    return;
L_08A940FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(25312)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A94120;
      }
      goto L_08A94118;
    }
L_08A94118:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A9413C;
      }
      goto L_08A94120;
    }
L_08A94120:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9413C;
      }
      goto L_08A94130;
    }
L_08A94130:
    ctx.gpr[4] = (16384u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A9413C;
      }
      goto L_08A9413C;
    }
L_08A9413C:
    ctx.gpr[4] = (0u | 202u);
    ctx.gpr[7] = (0u | 808u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[8] = (2229u << 16u);
    goto L_08A9414C;
L_08A9414C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A94168;
      }
      goto L_08A9415C;
    }
L_08A9415C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08A94168;
L_08A94168:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(25312)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < 211 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A9414C;
      }
      goto L_08A94194;
    }
L_08A94194:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A941FC;
      }
      goto L_08A941B0;
    }
L_08A941B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A941BCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A941BCu) goto L_08A941BC;
    return;
L_08A941BC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A941E8;
      }
      goto L_08A941C8;
    }
L_08A941C8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(202) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(211) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A941E8;
      }
      goto L_08A941D8;
    }
L_08A941D8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A941E8;
      }
      goto L_08A941E0;
    }
L_08A941E0:
    ctx.gpr[31] = (0x08A941E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 604u, 0x08A37EFCu>(ctx, &aot_mem) && ctx.pc == 0x08A941E8u) goto L_08A941E8;
    return;
L_08A941E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A941B0;
      }
      goto L_08A941FC;
    }
L_08A941FC:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(25312), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7564), ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_08A94240:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A94290;
      }
      goto L_08A94264;
    }
L_08A94264:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A94270u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A94270u) goto L_08A94270;
    return;
L_08A94270:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94288;
      }
      goto L_08A9427C;
    }
L_08A9427C:
    ctx.gpr[31] = (0x08A94284u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A94284u) goto L_08A94284;
    return;
L_08A94284:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A94288;
L_08A94288:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A94290;
L_08A94290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A9429Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20544));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A9429Cu) goto L_08A9429C;
    return;
L_08A9429C:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A942B4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A942B4u) goto L_08A942B4;
    return;
L_08A942B4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-30330)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-30330), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A942F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A94378;
      }
      goto L_08A94318;
    }
L_08A94318:
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A94354;
      }
      goto L_08A94328;
    }
L_08A94328:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A94334u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A94334u) goto L_08A94334;
    return;
L_08A94334:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9434C;
      }
      goto L_08A94340;
    }
L_08A94340:
    ctx.gpr[31] = (0x08A94348u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A94348u) goto L_08A94348;
    return;
L_08A94348:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A9434C;
L_08A9434C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A94354;
L_08A94354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A94360u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20536));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A94360u) goto L_08A94360;
    return;
L_08A94360:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A94374u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A94374u) goto L_08A94374;
    return;
L_08A94374:
    ctx.gpr[4] = (2233u << 16u);
    goto L_08A94378;
L_08A94378:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(359)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A9438Cu);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9438Cu) goto L_08A9438C;
    return;
L_08A9438C:
    ctx.gpr[31] = (0x08A94394u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A94394u) goto L_08A94394;
    return;
L_08A94394:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94430;
      }
      goto L_08A9439C;
    }
L_08A9439C:
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[31] = (0x08A943A8u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A943A8u) goto L_08A943A8;
    return;
L_08A943A8:
    ctx.gpr[31] = (0x08A943B0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A943B0u) goto L_08A943B0;
    return;
L_08A943B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A94430;
      }
      goto L_08A943BC;
    }
L_08A943BC:
    ctx.gpr[31] = (0x08A943C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A943C4u) goto L_08A943C4;
    return;
L_08A943C4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x08A943D0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 216u, 0x08A293D0u>(ctx, &aot_mem) && ctx.pc == 0x08A943D0u) goto L_08A943D0;
    return;
L_08A943D0:
    ctx.gpr[31] = (0x08A943D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A943D8u) goto L_08A943D8;
    return;
L_08A943D8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(848));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A943E8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 208u, 0x08A29370u>(ctx, &aot_mem) && ctx.pc == 0x08A943E8u) goto L_08A943E8;
    return;
L_08A943E8:
    ctx.gpr[31] = (0x08A943F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A943F0u) goto L_08A943F0;
    return;
L_08A943F0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(848));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A94400u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 208u, 0x08A29370u>(ctx, &aot_mem) && ctx.pc == 0x08A94400u) goto L_08A94400;
    return;
L_08A94400:
    ctx.gpr[31] = (0x08A94408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A94408u) goto L_08A94408;
    return;
L_08A94408:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(848));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08A94418u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 208u, 0x08A29370u>(ctx, &aot_mem) && ctx.pc == 0x08A94418u) goto L_08A94418;
    return;
L_08A94418:
    ctx.gpr[31] = (0x08A94420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A94420u) goto L_08A94420;
    return;
L_08A94420:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(848));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x08A94430u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 208u, 0x08A29370u>(ctx, &aot_mem) && ctx.pc == 0x08A94430u) goto L_08A94430;
    return;
L_08A94430:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A94468:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-20544));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A944CC;
      }
      goto L_08A944A4;
    }
L_08A944A4:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08A944B0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A944B0u) goto L_08A944B0;
    return;
L_08A944B0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A944C8;
      }
      goto L_08A944BC;
    }
L_08A944BC:
    ctx.gpr[31] = (0x08A944C4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A944C4u) goto L_08A944C4;
    return;
L_08A944C4:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08A944C8;
L_08A944C8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24444), ctx.gpr[19]);
    goto L_08A944CC;
L_08A944CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A944D8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A944D8u) goto L_08A944D8;
    return;
L_08A944D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A944ECu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A944ECu) goto L_08A944EC;
    return;
L_08A944EC:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[21] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(13)));
    ctx.gpr[31] = (0x08A94514u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A94514u) goto L_08A94514;
    return;
L_08A94514:
    ctx.gpr[31] = (0x08A9451Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x08A9451Cu) goto L_08A9451C;
    return;
L_08A9451C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A946D8;
      }
      goto L_08A9453C;
    }
L_08A9453C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (2228u << 16u);
      if (branch_taken) {
          goto L_08A94570;
      }
      goto L_08A94548;
    }
L_08A94548:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08A94554u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A94554u) goto L_08A94554;
    return;
L_08A94554:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9456C;
      }
      goto L_08A94560;
    }
L_08A94560:
    ctx.gpr[31] = (0x08A94568u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A94568u) goto L_08A94568;
    return;
L_08A94568:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_08A9456C;
L_08A9456C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24444), ctx.gpr[20]);
    goto L_08A94570;
L_08A94570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A9457Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A9457Cu) goto L_08A9457C;
    return;
L_08A9457C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A94590u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A94590u) goto L_08A94590;
    return;
L_08A94590:
    ctx.gpr[4] = (ctx.gpr[19] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A945AC;
      }
      goto L_08A9459C;
    }
L_08A9459C:
    ctx.gpr[31] = (0x08A945A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A945A4u) goto L_08A945A4;
    return;
L_08A945A4:
    ctx.gpr[31] = (0x08A945ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 627u, 0x089C6A7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A945ACu) goto L_08A945AC;
    return;
L_08A945AC:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[31] = (0x08A945BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08A945BCu) goto L_08A945BC;
    return;
L_08A945BC:
    ctx.gpr[11] = (17096u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08A945E4u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 376u, 0x089757BCu>(ctx, &aot_mem) && ctx.pc == 0x08A945E4u) goto L_08A945E4;
    return;
L_08A945E4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A946D8;
      }
      goto L_08A945F0;
    }
L_08A945F0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A945FCu);
    ctx.gpr[4] = (0u | 1760u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x08A945FCu) goto L_08A945FC;
    return;
L_08A945FC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A94618;
      }
      goto L_08A94608;
    }
L_08A94608:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A94614u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 357u, 0x0880E120u>(ctx, &aot_mem) && ctx.pc == 0x08A94614u) goto L_08A94614;
    return;
L_08A94614:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08A94618;
L_08A94618:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A946D8;
      }
      goto L_08A94620;
    }
L_08A94620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16479u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26355u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A946A0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x08A946A0u) goto L_08A946A0;
    return;
L_08A946A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x08A946B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08A946B4u) goto L_08A946B4;
    return;
L_08A946B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A946D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08A946D8u) goto L_08A946D8;
    return;
L_08A946D8:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9471C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9472Cu);
    ctx.gpr[4] = (0u | 162u);
    goto L_08A94468;
L_08A9472C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94738:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A94748u);
    ctx.gpr[4] = (0u | 139u);
    goto L_08A94468;
L_08A94748:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94754:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A947A8;
      }
      goto L_08A9477C;
    }
L_08A9477C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A94788u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A94788u) goto L_08A94788;
    return;
L_08A94788:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A947A0;
      }
      goto L_08A94794;
    }
L_08A94794:
    ctx.gpr[31] = (0x08A9479Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A9479Cu) goto L_08A9479C;
    return;
L_08A9479C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A947A0;
L_08A947A0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A947A8;
L_08A947A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A947B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20544));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A947B4u) goto L_08A947B4;
    return;
L_08A947B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A947C8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A947C8u) goto L_08A947C8;
    return;
L_08A947C8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A94864;
      }
      goto L_08A947E0;
    }
L_08A947E0:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[19] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_08A94800;
L_08A94800:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08A94820;
    }
    goto L_08A94818;
L_08A94818:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A94824;
      }
      goto L_08A94820;
    }
L_08A94820:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    goto L_08A94824;
L_08A94824:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94850;
      }
      goto L_08A94830;
    }
L_08A94830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(280));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08A94850u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A94850u) goto L_08A94850;
    return;
L_08A94850:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1760));
      if (branch_taken) {
          goto L_08A94800;
      }
      goto L_08A94864;
    }
L_08A94864:
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
L_08A94880:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A948BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20528));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 90u, 0x08A28CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A948BCu) goto L_08A948BC;
    return;
L_08A948BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94A68;
      }
      goto L_08A948C4;
    }
L_08A948C4:
    ctx.gpr[30] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A94900;
      }
      goto L_08A948D4;
    }
L_08A948D4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A948E0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A948E0u) goto L_08A948E0;
    return;
L_08A948E0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A948F8;
      }
      goto L_08A948EC;
    }
L_08A948EC:
    ctx.gpr[31] = (0x08A948F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A948F4u) goto L_08A948F4;
    return;
L_08A948F4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08A948F8;
L_08A948F8:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A94900;
L_08A94900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A9490Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20544));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A9490Cu) goto L_08A9490C;
    return;
L_08A9490C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A94920u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A94920u) goto L_08A94920;
    return;
L_08A94920:
    ctx.gpr[31] = (0x08A94928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A94928u) goto L_08A94928;
    return;
L_08A94928:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(744)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25340)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25336)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25348)));
    ctx.gpr[17] = (0u | 9u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25344)));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[18] = (2229u << 16u);
    goto L_08A94958;
L_08A94958:
    ctx.gpr[31] = (0x08A94960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A94960u) goto L_08A94960;
    return;
L_08A94960:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A94974u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08A94974u) goto L_08A94974;
    return;
L_08A94974:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A949C0;
      }
      goto L_08A949AC;
    }
L_08A949AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08A949C0;
L_08A949C0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 109 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A94958;
      }
      goto L_08A949C8;
    }
L_08A949C8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 113 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A949D8;
      }
      goto L_08A949D0;
    }
L_08A949D0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A94958;
      }
      goto L_08A949D8;
    }
L_08A949D8:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
      if (branch_taken) {
          goto L_08A94958;
      }
      goto L_08A949E0;
    }
L_08A949E0:
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A94A10u);
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A94A10u) goto L_08A94A10;
    return;
L_08A94A10:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A94A1Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A94A1Cu) goto L_08A94A1C;
    return;
L_08A94A1C:
    ctx.gpr[31] = (0x08A94A24u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x08A94A24u) goto L_08A94A24;
    return;
L_08A94A24:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A94A48u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A94A48u) goto L_08A94A48;
    return;
L_08A94A48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(744), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A94A68;
      }
      goto L_08A94A54;
    }
L_08A94A54:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A94A68;
      }
      goto L_08A94A60;
    }
L_08A94A60:
    ctx.gpr[31] = (0x08A94A68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A94A68u) goto L_08A94A68;
    return;
L_08A94A68:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94A98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25317)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(25317), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A94AFC;
      }
      goto L_08A94AD4;
    }
L_08A94AD4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A94AE0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A94AE0u) goto L_08A94AE0;
    return;
L_08A94AE0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94AF8;
      }
      goto L_08A94AEC;
    }
L_08A94AEC:
    ctx.gpr[31] = (0x08A94AF4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A94AF4u) goto L_08A94AF4;
    return;
L_08A94AF4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08A94AF8;
L_08A94AF8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    goto L_08A94AFC;
L_08A94AFC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A94B0Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20544));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A94B0Cu) goto L_08A94B0C;
    return;
L_08A94B0C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A94B20u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A94B20u) goto L_08A94B20;
    return;
L_08A94B20:
    ctx.gpr[4] = (16u << 16u);
    ctx.gpr[17] = (0u | 4u);
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25317)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    goto L_08A94B34;
L_08A94B34:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-11740)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A94B4C;
      }
      goto L_08A94B44;
    }
L_08A94B44:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A94B50;
      }
      goto L_08A94B4C;
    }
L_08A94B4C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), 0u);
    goto L_08A94B50;
L_08A94B50:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A94B34;
      }
      goto L_08A94B60;
    }
L_08A94B60:
    ctx.gpr[31] = (0x08A94B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 746u, 0x08A93918u>(ctx, &aot_mem) && ctx.pc == 0x08A94B68u) goto L_08A94B68;
    return;
L_08A94B68:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A94BA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A94BF4;
      }
      goto L_08A94BC8;
    }
L_08A94BC8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A94BD4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A94BD4u) goto L_08A94BD4;
    return;
L_08A94BD4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94BEC;
      }
      goto L_08A94BE0;
    }
L_08A94BE0:
    ctx.gpr[31] = (0x08A94BE8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A94BE8u) goto L_08A94BE8;
    return;
L_08A94BE8:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08A94BEC;
L_08A94BEC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A94BF4;
L_08A94BF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A94C00u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20544));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A94C00u) goto L_08A94C00;
    return;
L_08A94C00:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A94C14u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A94C14u) goto L_08A94C14;
    return;
L_08A94C14:
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[16] = (2229u << 16u);
    goto L_08A94C20;
L_08A94C20:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-11740)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[7] | 1u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A94C20;
      }
      goto L_08A94C48;
    }
L_08A94C48:
    ctx.gpr[31] = (0x08A94C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 746u, 0x08A93918u>(ctx, &aot_mem) && ctx.pc == 0x08A94C50u) goto L_08A94C50;
    return;
L_08A94C50:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A94C84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A94CD4;
      }
      goto L_08A94CA8;
    }
L_08A94CA8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A94CB4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A94CB4u) goto L_08A94CB4;
    return;
L_08A94CB4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94CCC;
      }
      goto L_08A94CC0;
    }
L_08A94CC0:
    ctx.gpr[31] = (0x08A94CC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A94CC8u) goto L_08A94CC8;
    return;
L_08A94CC8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A94CCC;
L_08A94CCC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A94CD4;
L_08A94CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A94CE0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20544));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A94CE0u) goto L_08A94CE0;
    return;
L_08A94CE0:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A94CF8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A94CF8u) goto L_08A94CF8;
    return;
L_08A94CF8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25816)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25816), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A94D38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A94D88;
      }
      goto L_08A94D60;
    }
L_08A94D60:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A94D6Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A94D6Cu) goto L_08A94D6C;
    return;
L_08A94D6C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94D84;
      }
      goto L_08A94D78;
    }
L_08A94D78:
    ctx.gpr[31] = (0x08A94D80u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A94D80u) goto L_08A94D80;
    return;
L_08A94D80:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08A94D84;
L_08A94D84:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    goto L_08A94D88;
L_08A94D88:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A94D98u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20544));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A94D98u) goto L_08A94D98;
    return;
L_08A94D98:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A94DACu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A94DACu) goto L_08A94DAC;
    return;
L_08A94DAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8128)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A94DD8;
      }
      goto L_08A94DC8;
    }
L_08A94DC8:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-8128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A94DD8;
L_08A94DD8:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A94E10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A94E60;
      }
      goto L_08A94E38;
    }
L_08A94E38:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A94E44u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A94E44u) goto L_08A94E44;
    return;
L_08A94E44:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94E5C;
      }
      goto L_08A94E50;
    }
L_08A94E50:
    ctx.gpr[31] = (0x08A94E58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A94E58u) goto L_08A94E58;
    return;
L_08A94E58:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08A94E5C;
L_08A94E5C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    goto L_08A94E60;
L_08A94E60:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A94E70u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20544));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A94E70u) goto L_08A94E70;
    return;
L_08A94E70:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A94E84u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A94E84u) goto L_08A94E84;
    return;
L_08A94E84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8128)));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A94EB0;
      }
      goto L_08A94EA0;
    }
L_08A94EA0:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-8128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A94EB0;
L_08A94EB0:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A94EE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A94F38;
      }
      goto L_08A94F0C;
    }
L_08A94F0C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A94F18u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A94F18u) goto L_08A94F18;
    return;
L_08A94F18:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94F30;
      }
      goto L_08A94F24;
    }
L_08A94F24:
    ctx.gpr[31] = (0x08A94F2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A94F2Cu) goto L_08A94F2C;
    return;
L_08A94F2C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A94F30;
L_08A94F30:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A94F38;
L_08A94F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A94F44u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20520));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A94F44u) goto L_08A94F44;
    return;
L_08A94F44:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A94F5Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A94F5Cu) goto L_08A94F5C;
    return;
L_08A94F5C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12144));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A94FC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A9501C;
      }
      goto L_08A94FF0;
    }
L_08A94FF0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A94FFCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A94FFCu) goto L_08A94FFC;
    return;
L_08A94FFC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95014;
      }
      goto L_08A95008;
    }
L_08A95008:
    ctx.gpr[31] = (0x08A95010u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A95010u) goto L_08A95010;
    return;
L_08A95010:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95014;
L_08A95014:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A9501C;
L_08A9501C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A95028u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20512));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A95028u) goto L_08A95028;
    return;
L_08A95028:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95040u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A95040u) goto L_08A95040;
    return;
L_08A95040:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(360)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A95058u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A95058u) goto L_08A95058;
    return;
L_08A95058:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7564), ctx.gpr[5]);
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
L_08A95090:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A950E0;
      }
      goto L_08A950B4;
    }
L_08A950B4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A950C0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A950C0u) goto L_08A950C0;
    return;
L_08A950C0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A950D8;
      }
      goto L_08A950CC;
    }
L_08A950CC:
    ctx.gpr[31] = (0x08A950D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A950D4u) goto L_08A950D4;
    return;
L_08A950D4:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08A950D8;
L_08A950D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A950E0;
L_08A950E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A950ECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20504));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A950ECu) goto L_08A950EC;
    return;
L_08A950EC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95100u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A95100u) goto L_08A95100;
    return;
L_08A95100:
    ctx.gpr[31] = (0x08A95108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A95108u) goto L_08A95108;
    return;
L_08A95108:
    ctx.gpr[31] = (0x08A95110u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A95110u) goto L_08A95110;
    return;
L_08A95110:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 6 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08A95128;
    }
    goto L_08A95128;
L_08A95128:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A95134u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 330u, 0x08ACD58Cu>(ctx, &aot_mem) && ctx.pc == 0x08A95134u) goto L_08A95134;
    return;
L_08A95134:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95168:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A951B8;
      }
      goto L_08A9518C;
    }
L_08A9518C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A95198u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A95198u) goto L_08A95198;
    return;
L_08A95198:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A951B0;
      }
      goto L_08A951A4;
    }
L_08A951A4:
    ctx.gpr[31] = (0x08A951ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A951ACu) goto L_08A951AC;
    return;
L_08A951AC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A951B0;
L_08A951B0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A951B8;
L_08A951B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A951C4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20504));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A951C4u) goto L_08A951C4;
    return;
L_08A951C4:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A951DCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A951DCu) goto L_08A951DC;
    return;
L_08A951DC:
    ctx.gpr[31] = (0x08A951E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A951E4u) goto L_08A951E4;
    return;
L_08A951E4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2064));
    ctx.gpr[31] = (0x08A951F0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 330u, 0x08ACD58Cu>(ctx, &aot_mem) && ctx.pc == 0x08A951F0u) goto L_08A951F0;
    return;
L_08A951F0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A95220:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95270;
      }
      goto L_08A95244;
    }
L_08A95244:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A95250u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A95250u) goto L_08A95250;
    return;
L_08A95250:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95268;
      }
      goto L_08A9525C;
    }
L_08A9525C:
    ctx.gpr[31] = (0x08A95264u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A95264u) goto L_08A95264;
    return;
L_08A95264:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95268;
L_08A95268:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95270;
L_08A95270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A9527Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20496));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A9527Cu) goto L_08A9527C;
    return;
L_08A9527C:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95294u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A95294u) goto L_08A95294;
    return;
L_08A95294:
    ctx.gpr[31] = (0x08A9529Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 566u, 0x08932E4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9529Cu) goto L_08A9529C;
    return;
L_08A9529C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A952CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A9531C;
      }
      goto L_08A952F0;
    }
L_08A952F0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A952FCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A952FCu) goto L_08A952FC;
    return;
L_08A952FC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95314;
      }
      goto L_08A95308;
    }
L_08A95308:
    ctx.gpr[31] = (0x08A95310u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A95310u) goto L_08A95310;
    return;
L_08A95310:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95314;
L_08A95314:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A9531C;
L_08A9531C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A95328u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20496));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A95328u) goto L_08A95328;
    return;
L_08A95328:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95340u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A95340u) goto L_08A95340;
    return;
L_08A95340:
    ctx.gpr[31] = (0x08A95348u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 566u, 0x08932E4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A95348u) goto L_08A95348;
    return;
L_08A95348:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A95378:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A953C8;
      }
      goto L_08A9539C;
    }
L_08A9539C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A953A8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A953A8u) goto L_08A953A8;
    return;
L_08A953A8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A953C0;
      }
      goto L_08A953B4;
    }
L_08A953B4:
    ctx.gpr[31] = (0x08A953BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A953BCu) goto L_08A953BC;
    return;
L_08A953BC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A953C0;
L_08A953C0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A953C8;
L_08A953C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A953D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20496));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A953D4u) goto L_08A953D4;
    return;
L_08A953D4:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A953ECu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A953ECu) goto L_08A953EC;
    return;
L_08A953EC:
    ctx.gpr[31] = (0x08A953F4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 566u, 0x08932E4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A953F4u) goto L_08A953F4;
    return;
L_08A953F4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A95424:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95474;
      }
      goto L_08A95448;
    }
L_08A95448:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A95454u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A95454u) goto L_08A95454;
    return;
L_08A95454:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9546C;
      }
      goto L_08A95460;
    }
L_08A95460:
    ctx.gpr[31] = (0x08A95468u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A95468u) goto L_08A95468;
    return;
L_08A95468:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A9546C;
L_08A9546C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95474;
L_08A95474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A95480u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20496));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A95480u) goto L_08A95480;
    return;
L_08A95480:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95498u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A95498u) goto L_08A95498;
    return;
L_08A95498:
    ctx.gpr[31] = (0x08A954A0u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 566u, 0x08932E4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A954A0u) goto L_08A954A0;
    return;
L_08A954A0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A954D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95520;
      }
      goto L_08A954F4;
    }
L_08A954F4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A95500u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A95500u) goto L_08A95500;
    return;
L_08A95500:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95518;
      }
      goto L_08A9550C;
    }
L_08A9550C:
    ctx.gpr[31] = (0x08A95514u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A95514u) goto L_08A95514;
    return;
L_08A95514:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95518;
L_08A95518:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95520;
L_08A95520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A9552Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20496));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A9552Cu) goto L_08A9552C;
    return;
L_08A9552C:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95544u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A95544u) goto L_08A95544;
    return;
L_08A95544:
    ctx.gpr[31] = (0x08A9554Cu);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 566u, 0x08932E4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9554Cu) goto L_08A9554C;
    return;
L_08A9554C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A9557C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A955CC;
      }
      goto L_08A955A0;
    }
L_08A955A0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A955ACu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A955ACu) goto L_08A955AC;
    return;
L_08A955AC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A955C4;
      }
      goto L_08A955B8;
    }
L_08A955B8:
    ctx.gpr[31] = (0x08A955C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A955C0u) goto L_08A955C0;
    return;
L_08A955C0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A955C4;
L_08A955C4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A955CC;
L_08A955CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A955D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20544));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A955D8u) goto L_08A955D8;
    return;
L_08A955D8:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A955F0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A955F0u) goto L_08A955F0;
    return;
L_08A955F0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16396)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16396), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A95630:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95680;
      }
      goto L_08A95654;
    }
L_08A95654:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A95660u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A95660u) goto L_08A95660;
    return;
L_08A95660:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95678;
      }
      goto L_08A9566C;
    }
L_08A9566C:
    ctx.gpr[31] = (0x08A95674u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A95674u) goto L_08A95674;
    return;
L_08A95674:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95678;
L_08A95678:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95680;
L_08A95680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A9568Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20544));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A9568Cu) goto L_08A9568C;
    return;
L_08A9568C:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A956A4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A956A4u) goto L_08A956A4;
    return;
L_08A956A4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(15918)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(15918), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A956E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95734;
      }
      goto L_08A95708;
    }
L_08A95708:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A95714u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A95714u) goto L_08A95714;
    return;
L_08A95714:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9572C;
      }
      goto L_08A95720;
    }
L_08A95720:
    ctx.gpr[31] = (0x08A95728u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A95728u) goto L_08A95728;
    return;
L_08A95728:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A9572C;
L_08A9572C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95734;
L_08A95734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A95740u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20544));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A95740u) goto L_08A95740;
    return;
L_08A95740:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95758u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A95758u) goto L_08A95758;
    return;
L_08A95758:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-29141)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-29141), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A95798:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A957E8;
      }
      goto L_08A957BC;
    }
L_08A957BC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A957C8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A957C8u) goto L_08A957C8;
    return;
L_08A957C8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A957E0;
      }
      goto L_08A957D4;
    }
L_08A957D4:
    ctx.gpr[31] = (0x08A957DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A957DCu) goto L_08A957DC;
    return;
L_08A957DC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A957E0;
L_08A957E0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A957E8;
L_08A957E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A957F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20544));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A957F4u) goto L_08A957F4;
    return;
L_08A957F4:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A9580Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A9580Cu) goto L_08A9580C;
    return;
L_08A9580C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26840)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(26840), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A9584C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A9589C;
      }
      goto L_08A95870;
    }
L_08A95870:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A9587Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A9587Cu) goto L_08A9587C;
    return;
L_08A9587C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95894;
      }
      goto L_08A95888;
    }
L_08A95888:
    ctx.gpr[31] = (0x08A95890u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A95890u) goto L_08A95890;
    return;
L_08A95890:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95894;
L_08A95894:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A9589C;
L_08A9589C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A958A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20544));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A958A8u) goto L_08A958A8;
    return;
L_08A958A8:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A958C0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A958C0u) goto L_08A958C0;
    return;
L_08A958C0:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26841)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(26841), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A95900:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95950;
      }
      goto L_08A95924;
    }
L_08A95924:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A95930u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A95930u) goto L_08A95930;
    return;
L_08A95930:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95948;
      }
      goto L_08A9593C;
    }
L_08A9593C:
    ctx.gpr[31] = (0x08A95944u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A95944u) goto L_08A95944;
    return;
L_08A95944:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95948;
L_08A95948:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95950;
L_08A95950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A9595Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20544));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A9595Cu) goto L_08A9595C;
    return;
L_08A9595C:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95974u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A95974u) goto L_08A95974;
    return;
L_08A95974:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26842)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(26842), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A959B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95A04;
      }
      goto L_08A959D8;
    }
L_08A959D8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A959E4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A959E4u) goto L_08A959E4;
    return;
L_08A959E4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A959FC;
      }
      goto L_08A959F0;
    }
L_08A959F0:
    ctx.gpr[31] = (0x08A959F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A959F8u) goto L_08A959F8;
    return;
L_08A959F8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A959FC;
L_08A959FC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95A04;
L_08A95A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A95A10u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20544));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A95A10u) goto L_08A95A10;
    return;
L_08A95A10:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95A28u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A95A28u) goto L_08A95A28;
    return;
L_08A95A28:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26843)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(26843), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A95A68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95AB8;
      }
      goto L_08A95A8C;
    }
L_08A95A8C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A95A98u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A95A98u) goto L_08A95A98;
    return;
L_08A95A98:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95AB0;
      }
      goto L_08A95AA4;
    }
L_08A95AA4:
    ctx.gpr[31] = (0x08A95AACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A95AACu) goto L_08A95AAC;
    return;
L_08A95AAC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95AB0;
L_08A95AB0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95AB8;
L_08A95AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A95AC4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20544));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A95AC4u) goto L_08A95AC4;
    return;
L_08A95AC4:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95ADCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A95ADCu) goto L_08A95ADC;
    return;
L_08A95ADC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7524), ctx.gpr[16]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A95B14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95B64;
      }
      goto L_08A95B38;
    }
L_08A95B38:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A95B44u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A95B44u) goto L_08A95B44;
    return;
L_08A95B44:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95B5C;
      }
      goto L_08A95B50;
    }
L_08A95B50:
    ctx.gpr[31] = (0x08A95B58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A95B58u) goto L_08A95B58;
    return;
L_08A95B58:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95B5C;
L_08A95B5C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95B64;
L_08A95B64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A95B70u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20544));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A95B70u) goto L_08A95B70;
    return;
L_08A95B70:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95B88u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A95B88u) goto L_08A95B88;
    return;
L_08A95B88:
    ctx.gpr[31] = (0x08A95B90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A95B90u) goto L_08A95B90;
    return;
L_08A95B90:
    ctx.gpr[9] = (17530u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A95BB0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 580u, 0x088DEE94u>(ctx, &aot_mem) && ctx.pc == 0x08A95BB0u) goto L_08A95BB0;
    return;
L_08A95BB0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95BE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95C30;
      }
      goto L_08A95C04;
    }
L_08A95C04:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A95C10u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A95C10u) goto L_08A95C10;
    return;
L_08A95C10:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95C28;
      }
      goto L_08A95C1C;
    }
L_08A95C1C:
    ctx.gpr[31] = (0x08A95C24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A95C24u) goto L_08A95C24;
    return;
L_08A95C24:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95C28;
L_08A95C28:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95C30;
L_08A95C30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A95C3Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20544));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A95C3Cu) goto L_08A95C3C;
    return;
L_08A95C3C:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95C54u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A95C54u) goto L_08A95C54;
    return;
L_08A95C54:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5292), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A95C8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95CDC;
      }
      goto L_08A95CB0;
    }
L_08A95CB0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A95CBCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A95CBCu) goto L_08A95CBC;
    return;
L_08A95CBC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95CD4;
      }
      goto L_08A95CC8;
    }
L_08A95CC8:
    ctx.gpr[31] = (0x08A95CD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A95CD0u) goto L_08A95CD0;
    return;
L_08A95CD0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95CD4;
L_08A95CD4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95CDC;
L_08A95CDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A95CE8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20544));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A95CE8u) goto L_08A95CE8;
    return;
L_08A95CE8:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95D00u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A95D00u) goto L_08A95D00;
    return;
L_08A95D00:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-17392), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A95D38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95D88;
      }
      goto L_08A95D5C;
    }
L_08A95D5C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A95D68u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A95D68u) goto L_08A95D68;
    return;
L_08A95D68:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95D80;
      }
      goto L_08A95D74;
    }
L_08A95D74:
    ctx.gpr[31] = (0x08A95D7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A95D7Cu) goto L_08A95D7C;
    return;
L_08A95D7C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95D80;
L_08A95D80:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95D88;
L_08A95D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A95D94u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20544));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A95D94u) goto L_08A95D94;
    return;
L_08A95D94:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95DACu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A95DACu) goto L_08A95DAC;
    return;
L_08A95DAC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15181), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15180), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A95DEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95E3C;
      }
      goto L_08A95E10;
    }
L_08A95E10:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A95E1Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A95E1Cu) goto L_08A95E1C;
    return;
L_08A95E1C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95E34;
      }
      goto L_08A95E28;
    }
L_08A95E28:
    ctx.gpr[31] = (0x08A95E30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A95E30u) goto L_08A95E30;
    return;
L_08A95E30:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95E34;
L_08A95E34:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95E3C;
L_08A95E3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A95E48u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20544));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A95E48u) goto L_08A95E48;
    return;
L_08A95E48:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95E60u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A95E60u) goto L_08A95E60;
    return;
L_08A95E60:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15180), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15181), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A95EA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95EF0;
      }
      goto L_08A95EC4;
    }
L_08A95EC4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A95ED0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A95ED0u) goto L_08A95ED0;
    return;
L_08A95ED0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95EE8;
      }
      goto L_08A95EDC;
    }
L_08A95EDC:
    ctx.gpr[31] = (0x08A95EE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A95EE4u) goto L_08A95EE4;
    return;
L_08A95EE4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95EE8;
L_08A95EE8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95EF0;
L_08A95EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A95EFCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20544));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A95EFCu) goto L_08A95EFC;
    return;
L_08A95EFC:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95F14u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A95F14u) goto L_08A95F14;
    return;
L_08A95F14:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(15922)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(15922), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A95F54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A95F7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A95F7Cu) goto L_08A95F7C;
    return;
L_08A95F7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A960D4;
      }
      goto L_08A95F84;
    }
L_08A95F84:
    ctx.gpr[31] = (0x08A95F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A95F8Cu) goto L_08A95F8C;
    return;
L_08A95F8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 5u);
      if (branch_taken) {
          goto L_08A95FAC;
      }
      goto L_08A95F98;
    }
L_08A95F98:
    ctx.gpr[31] = (0x08A95FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A95FA0u) goto L_08A95FA0;
    return;
L_08A95FA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A960D4;
      }
      goto L_08A95FAC;
    }
L_08A95FAC:
    ctx.gpr[31] = (0x08A95FB4u);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A95FB4u) goto L_08A95FB4;
    return;
L_08A95FB4:
    ctx.gpr[31] = (0x08A95FBCu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A95FBCu) goto L_08A95FBC;
    return;
L_08A95FBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A95FE4;
      }
      goto L_08A95FC8;
    }
L_08A95FC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95FE4;
      }
      goto L_08A95FD4;
    }
L_08A95FD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08A95FE4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08A95FE4u) goto L_08A95FE4;
    return;
L_08A95FE4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16576u << 16u);
    ctx.gpr[31] = (0x08A96000u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A96000u) goto L_08A96000;
    return;
L_08A96000:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08A96030u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 72u, 0x088C8430u>(ctx, &aot_mem) && ctx.pc == 0x08A96030u) goto L_08A96030;
    return;
L_08A96030:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A960D4;
      }
      goto L_08A9603C;
    }
L_08A9603C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A960D4;
      }
      goto L_08A9604C;
    }
L_08A9604C:
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A96088;
      }
      goto L_08A9605C;
    }
L_08A9605C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A96068u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A96068u) goto L_08A96068;
    return;
L_08A96068:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96080;
      }
      goto L_08A96074;
    }
L_08A96074:
    ctx.gpr[31] = (0x08A9607Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A9607Cu) goto L_08A9607C;
    return;
L_08A9607C:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08A96080;
L_08A96080:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A96088;
L_08A96088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A96094u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20544));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A96094u) goto L_08A96094;
    return;
L_08A96094:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A960A8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A960A8u) goto L_08A960A8;
    return;
L_08A960A8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[31] = (0x08A960B8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08A960B8u) goto L_08A960B8;
    return;
L_08A960B8:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
    goto L_08A960D4;
L_08A960D4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A960F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A96148;
      }
      goto L_08A9611C;
    }
L_08A9611C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A96128u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A96128u) goto L_08A96128;
    return;
L_08A96128:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96140;
      }
      goto L_08A96134;
    }
L_08A96134:
    ctx.gpr[31] = (0x08A9613Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A9613Cu) goto L_08A9613C;
    return;
L_08A9613C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A96140;
L_08A96140:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A96148;
L_08A96148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A96154u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20544));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A96154u) goto L_08A96154;
    return;
L_08A96154:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A9616Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A9616Cu) goto L_08A9616C;
    return;
L_08A9616C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29143), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A961A4:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    goto L_08A961AC;
L_08A961AC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A961DC;
      }
      goto L_08A961B4;
    }
L_08A961B4:
    ctx.gpr[8] = (ctx.gpr[7] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A9633C;
      }
      goto L_08A961C0;
    }
L_08A961C0:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-20336)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    jump_target = ctx.gpr[1];
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A961DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96340;
      }
      goto L_08A961E4;
    }
L_08A961E4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A96200;
      }
      goto L_08A961F0;
    }
L_08A961F0:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A961F4;
L_08A961F4:
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A961AC;
      }
      goto L_08A96200;
    }
L_08A96200:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96340;
      }
      goto L_08A96208;
    }
L_08A96208:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A9621C;
      }
      goto L_08A96214;
    }
L_08A96214:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A961F4;
      }
      goto L_08A9621C;
    }
L_08A9621C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96340;
      }
      goto L_08A96224;
    }
L_08A96224:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-10));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A96238;
      }
      goto L_08A96230;
    }
L_08A96230:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A961F4;
      }
      goto L_08A96238;
    }
L_08A96238:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96340;
      }
      goto L_08A96240;
    }
L_08A96240:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A96254;
      }
      goto L_08A9624C;
    }
L_08A9624C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A961F4;
      }
      goto L_08A96254;
    }
L_08A96254:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96340;
      }
      goto L_08A9625C;
    }
L_08A9625C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A96270;
      }
      goto L_08A96268;
    }
L_08A96268:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A961F4;
      }
      goto L_08A96270;
    }
L_08A96270:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96340;
      }
      goto L_08A96278;
    }
L_08A96278:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A9628C;
      }
      goto L_08A96284;
    }
L_08A96284:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A961F4;
      }
      goto L_08A9628C;
    }
L_08A9628C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96340;
      }
      goto L_08A96294;
    }
L_08A96294:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-10));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A962A8;
      }
      goto L_08A962A0;
    }
L_08A962A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A961F4;
      }
      goto L_08A962A8;
    }
L_08A962A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96340;
      }
      goto L_08A962B0;
    }
L_08A962B0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-11));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A962C4;
      }
      goto L_08A962BC;
    }
L_08A962BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A961F4;
      }
      goto L_08A962C4;
    }
L_08A962C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96340;
      }
      goto L_08A962CC;
    }
L_08A962CC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A962E0;
      }
      goto L_08A962D8;
    }
L_08A962D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A961F4;
      }
      goto L_08A962E0;
    }
L_08A962E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96340;
      }
      goto L_08A962E8;
    }
L_08A962E8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A962FC;
      }
      goto L_08A962F4;
    }
L_08A962F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A961F4;
      }
      goto L_08A962FC;
    }
L_08A962FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96340;
      }
      goto L_08A96304;
    }
L_08A96304:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A96318;
      }
      goto L_08A96310;
    }
L_08A96310:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A961F4;
      }
      goto L_08A96318;
    }
L_08A96318:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96340;
      }
      goto L_08A96320;
    }
L_08A96320:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A96334;
      }
      goto L_08A9632C;
    }
L_08A9632C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A961F4;
      }
      goto L_08A96334;
    }
L_08A96334:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96340;
      }
      goto L_08A9633C;
    }
L_08A9633C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A96340;
L_08A96340:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96348:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A963AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A963D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20488));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A963D4u) goto L_08A963D4;
    return;
L_08A963D4:
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20908)));
    ctx.gpr[18] = (2233u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-25440));
      if (branch_taken) {
          goto L_08A963F0;
      }
      goto L_08A963E8;
    }
L_08A963E8:
    ctx.gpr[31] = (0x08A963F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 549u, 0x08AFA6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A963F0u) goto L_08A963F0;
    return;
L_08A963F0:
    ctx.gpr[31] = (0x08A963F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20908)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 575u, 0x08837F9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A963F8u) goto L_08A963F8;
    return;
L_08A963F8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[16] = (2229u << 16u);
    goto L_08A9640C;
L_08A9640C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A96418u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A96BF4;
L_08A96418:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(130), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(25332), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(192));
      if (branch_taken) {
          goto L_08A9640C;
      }
      goto L_08A96434;
    }
L_08A96434:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6106), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6107), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6108), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25328), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25329), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (16128u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08A96474u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08A964B8;
L_08A96474:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08A96488u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08A964B8;
L_08A96488:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A96498u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20464));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A96498u) goto L_08A96498;
    return;
L_08A96498:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A964B8:
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25440));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A964D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A964E4u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A964B8;
L_08A964E4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A964F0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 338u, 0x08A98F38u>(ctx, &aot_mem) && ctx.pc == 0x08A964F0u) goto L_08A964F0;
    return;
L_08A964F0:
    ctx.gpr[31] = (0x08A964F8u);
    ctx.gpr[4] = (0u | 1u);
    goto L_08A964B8;
L_08A964F8:
    ctx.gpr[31] = (0x08A96500u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    goto L_08A96348;
L_08A96500:
    ctx.gpr[31] = (0x08A96508u);
    ctx.gpr[4] = (0u | 1u);
    goto L_08A964B8;
L_08A96508:
    ctx.gpr[31] = (0x08A96510u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(52));
    goto L_08A96348;
L_08A96510:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9651C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9652Cu);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A964B8;
L_08A9652C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A96538u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A96A10;
L_08A96538:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96544:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A96558u);
    // nop
    goto L_08A964D4;
L_08A96558:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-6106)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96578;
      }
      goto L_08A96568;
    }
L_08A96568:
    ctx.gpr[31] = (0x08A96570u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A964B8;
L_08A96570:
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(128), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-6106), static_cast<std::uint8_t>(0u));
    goto L_08A96578;
L_08A96578:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96588:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96590:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A965DC;
      }
      goto L_08A965C4;
    }
L_08A965C4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6108)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A965E4;
      }
      goto L_08A965D4;
    }
L_08A965D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96788;
      }
      goto L_08A965DC;
    }
L_08A965DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96918;
      }
      goto L_08A965E4;
    }
L_08A965E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29512)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A96788;
      }
      goto L_08A965F0;
    }
L_08A965F0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(305)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A96788;
      }
      goto L_08A96600;
    }
L_08A96600:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (17172u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-20));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 37450u);
    ctx.gpr[6] = (16800u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (17184u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A96648u);
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08A96648u) goto L_08A96648;
    return;
L_08A96648:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[6] = (0u | 50u);
    ctx.gpr[7] = (0u | 50u);
    ctx.gpr[31] = (0x08A96668u);
    ctx.gpr[8] = (0u | 210u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08A96668u) goto L_08A96668;
    return;
L_08A96668:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A96678u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A96678u) goto L_08A96678;
    return;
L_08A96678:
    ctx.gpr[4] = (16217u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[31] = (0x08A96690u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08A96690u) goto L_08A96690;
    return;
L_08A96690:
    ctx.gpr[31] = (0x08A96698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A96698u) goto L_08A96698;
    return;
L_08A96698:
    ctx.gpr[31] = (0x08A966A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x08A966A0u) goto L_08A966A0;
    return;
L_08A966A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-50));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A966B4u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x08A966B4u) goto L_08A966B4;
    return;
L_08A966B4:
    ctx.gpr[31] = (0x08A966BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x08A966BCu) goto L_08A966BC;
    return;
L_08A966BC:
    ctx.gpr[31] = (0x08A966C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x08A966C4u) goto L_08A966C4;
    return;
L_08A966C4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 200u);
    ctx.gpr[31] = (0x08A966DCu);
    ctx.gpr[8] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08A966DCu) goto L_08A966DC;
    return;
L_08A966DC:
    ctx.gpr[31] = (0x08A966E4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08A966E4u) goto L_08A966E4;
    return;
L_08A966E4:
    ctx.gpr[31] = (0x08A966ECu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08A966ECu) goto L_08A966EC;
    return;
L_08A966EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[16] = (2227u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08A9675C;
      }
      goto L_08A96734;
    }
L_08A96734:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A96740u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A96740u) goto L_08A96740;
    return;
L_08A96740:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96758;
      }
      goto L_08A9674C;
    }
L_08A9674C:
    ctx.gpr[31] = (0x08A96754u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A96754u) goto L_08A96754;
    return;
L_08A96754:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08A96758;
L_08A96758:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    goto L_08A9675C;
L_08A9675C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A9676Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20452));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A9676Cu) goto L_08A9676C;
    return;
L_08A9676C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A96780u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08A96780u) goto L_08A96780;
    return;
L_08A96780:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96918;
      }
      goto L_08A96788;
    }
L_08A96788:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6106)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A96918;
      }
      goto L_08A96798;
    }
L_08A96798:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (17172u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-20));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 37450u);
    ctx.gpr[6] = (16800u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[6] = (17184u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A967E0u);
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08A967E0u) goto L_08A967E0;
    return;
L_08A967E0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[6] = (0u | 50u);
    ctx.gpr[7] = (0u | 50u);
    ctx.gpr[31] = (0x08A96800u);
    ctx.gpr[8] = (0u | 210u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08A96800u) goto L_08A96800;
    return;
L_08A96800:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A96810u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A96810u) goto L_08A96810;
    return;
L_08A96810:
    ctx.gpr[4] = (16217u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[31] = (0x08A96828u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08A96828u) goto L_08A96828;
    return;
L_08A96828:
    ctx.gpr[31] = (0x08A96830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A96830u) goto L_08A96830;
    return;
L_08A96830:
    ctx.gpr[31] = (0x08A96838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x08A96838u) goto L_08A96838;
    return;
L_08A96838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-50));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A9684Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x08A9684Cu) goto L_08A9684C;
    return;
L_08A9684C:
    ctx.gpr[31] = (0x08A96854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x08A96854u) goto L_08A96854;
    return;
L_08A96854:
    ctx.gpr[31] = (0x08A9685Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x08A9685Cu) goto L_08A9685C;
    return;
L_08A9685C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 200u);
    ctx.gpr[31] = (0x08A96874u);
    ctx.gpr[8] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08A96874u) goto L_08A96874;
    return;
L_08A96874:
    ctx.gpr[31] = (0x08A9687Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08A9687Cu) goto L_08A9687C;
    return;
L_08A9687C:
    ctx.gpr[31] = (0x08A96884u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08A96884u) goto L_08A96884;
    return;
L_08A96884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[16] = (2227u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08A968F4;
      }
      goto L_08A968CC;
    }
L_08A968CC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A968D8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A968D8u) goto L_08A968D8;
    return;
L_08A968D8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A968F0;
      }
      goto L_08A968E4;
    }
L_08A968E4:
    ctx.gpr[31] = (0x08A968ECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A968ECu) goto L_08A968EC;
    return;
L_08A968EC:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08A968F0;
L_08A968F0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    goto L_08A968F4;
L_08A968F4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A96904u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20444));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A96904u) goto L_08A96904;
    return;
L_08A96904:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A96918u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08A96918u) goto L_08A96918;
    return;
L_08A96918:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9693C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9694Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 567u, 0x08932E68u>(ctx, &aot_mem) && ctx.pc == 0x08A9694Cu) goto L_08A9694C;
    return;
L_08A9694C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16396), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25816), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15916), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15917), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15918), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15919), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15920), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15921), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15922), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15923), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15924), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15925), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15180), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15181), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-17392), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5292), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7524), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29144), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29141), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29143), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29142), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96A10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A96A40;
      }
      goto L_08A96A2C;
    }
L_08A96A2C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(40))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96A48;
      }
      goto L_08A96A38;
    }
L_08A96A38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A96A5C;
      }
      goto L_08A96A40;
    }
L_08A96A40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96BE4;
      }
      goto L_08A96A48;
    }
L_08A96A48:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(90))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A96A5C;
      }
      goto L_08A96A54;
    }
L_08A96A54:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A96A5C;
L_08A96A5C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96A70;
      }
      goto L_08A96A64;
    }
L_08A96A64:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A96A70u);
    ctx.gpr[5] = (0u | 84u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 473u, 0x08A997C0u>(ctx, &aot_mem) && ctx.pc == 0x08A96A70u) goto L_08A96A70;
    return;
L_08A96A70:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96A8C;
      }
      goto L_08A96A7C;
    }
L_08A96A7C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(94))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A96A90;
      }
      goto L_08A96A88;
    }
L_08A96A88:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A96A8C;
L_08A96A8C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A96A90;
L_08A96A90:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96AA4;
      }
      goto L_08A96A98;
    }
L_08A96A98:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A96AA4u);
    ctx.gpr[5] = (0u | 67u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 473u, 0x08A997C0u>(ctx, &aot_mem) && ctx.pc == 0x08A96AA4u) goto L_08A96AA4;
    return;
L_08A96AA4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96AC0;
      }
      goto L_08A96AB0;
    }
L_08A96AB0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A96AC4;
      }
      goto L_08A96ABC;
    }
L_08A96ABC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A96AC0;
L_08A96AC0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A96AC4;
L_08A96AC4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96AD8;
      }
      goto L_08A96ACC;
    }
L_08A96ACC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A96AD8u);
    ctx.gpr[5] = (0u | 88u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 473u, 0x08A997C0u>(ctx, &aot_mem) && ctx.pc == 0x08A96AD8u) goto L_08A96AD8;
    return;
L_08A96AD8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96AF4;
      }
      goto L_08A96AE4;
    }
L_08A96AE4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A96AF8;
      }
      goto L_08A96AF0;
    }
L_08A96AF0:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A96AF4;
L_08A96AF4:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A96AF8;
L_08A96AF8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96B0C;
      }
      goto L_08A96B00;
    }
L_08A96B00:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A96B0Cu);
    ctx.gpr[5] = (0u | 83u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 473u, 0x08A997C0u>(ctx, &aot_mem) && ctx.pc == 0x08A96B0Cu) goto L_08A96B0C;
    return;
L_08A96B0C:
    ctx.gpr[31] = (0x08A96B14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96E28;
L_08A96B14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96B28;
      }
      goto L_08A96B1C;
    }
L_08A96B1C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A96B28u);
    ctx.gpr[5] = (0u | 85u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 473u, 0x08A997C0u>(ctx, &aot_mem) && ctx.pc == 0x08A96B28u) goto L_08A96B28;
    return;
L_08A96B28:
    ctx.gpr[31] = (0x08A96B30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96E84;
L_08A96B30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96B44;
      }
      goto L_08A96B38;
    }
L_08A96B38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A96B44u);
    ctx.gpr[5] = (0u | 68u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 473u, 0x08A997C0u>(ctx, &aot_mem) && ctx.pc == 0x08A96B44u) goto L_08A96B44;
    return;
L_08A96B44:
    ctx.gpr[31] = (0x08A96B4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96EE0;
L_08A96B4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96B60;
      }
      goto L_08A96B54;
    }
L_08A96B54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A96B60u);
    ctx.gpr[5] = (0u | 76u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 473u, 0x08A997C0u>(ctx, &aot_mem) && ctx.pc == 0x08A96B60u) goto L_08A96B60;
    return;
L_08A96B60:
    ctx.gpr[31] = (0x08A96B68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96F98;
L_08A96B68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96B7C;
      }
      goto L_08A96B70;
    }
L_08A96B70:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A96B7Cu);
    ctx.gpr[5] = (0u | 82u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 473u, 0x08A997C0u>(ctx, &aot_mem) && ctx.pc == 0x08A96B7Cu) goto L_08A96B7C;
    return;
L_08A96B7C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96B98;
      }
      goto L_08A96B88;
    }
L_08A96B88:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A96B9C;
      }
      goto L_08A96B94;
    }
L_08A96B94:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A96B98;
L_08A96B98:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A96B9C;
L_08A96B9C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96BB0;
      }
      goto L_08A96BA4;
    }
L_08A96BA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A96BB0u);
    ctx.gpr[5] = (0u | 49u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 473u, 0x08A997C0u>(ctx, &aot_mem) && ctx.pc == 0x08A96BB0u) goto L_08A96BB0;
    return;
L_08A96BB0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96BCC;
      }
      goto L_08A96BBC;
    }
L_08A96BBC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A96BD0;
      }
      goto L_08A96BC8;
    }
L_08A96BC8:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A96BCC;
L_08A96BCC:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A96BD0;
L_08A96BD0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96BE4;
      }
      goto L_08A96BD8;
    }
L_08A96BD8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A96BE4u);
    ctx.gpr[5] = (0u | 50u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 473u, 0x08A997C0u>(ctx, &aot_mem) && ctx.pc == 0x08A96BE4u) goto L_08A96BE4;
    return;
L_08A96BE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96BF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[31] = (0x08A96C18u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    goto L_08A96348;
L_08A96C18:
    ctx.gpr[31] = (0x08A96C20u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    goto L_08A96348;
L_08A96C20:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(132), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96C34;
L_08A96C34:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(102), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A96C34;
      }
      goto L_08A96C48;
    }
L_08A96C48:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), 0u);
      if (branch_taken) {
          goto L_08A96C54;
      }
      goto L_08A96C50;
    }
L_08A96C50:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(0u));
    goto L_08A96C54;
L_08A96C54:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(147), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 0u);
    goto L_08A96C60;
L_08A96C60:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(138), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96C60;
      }
      goto L_08A96C7C;
    }
L_08A96C7C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(146), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u | 32u);
    goto L_08A96C88;
L_08A96C88:
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96C88;
      }
      goto L_08A96CA8;
    }
L_08A96CA8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-10000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96CDC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96CF0:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96CF8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96D00:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96D08:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96D10:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96D48;
      }
      goto L_08A96D20;
    }
L_08A96D20:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A96D4C;
      }
      goto L_08A96D48;
    }
L_08A96D48:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    goto L_08A96D4C;
L_08A96D4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96D54:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96D8C;
      }
      goto L_08A96D64;
    }
L_08A96D64:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A96D90;
      }
      goto L_08A96D8C;
    }
L_08A96D8C:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    goto L_08A96D90;
L_08A96D90:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96D98:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96DB0;
      }
      goto L_08A96DA8;
    }
L_08A96DA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(26))))));
      if (branch_taken) {
          goto L_08A96DB4;
      }
      goto L_08A96DB0;
    }
L_08A96DB0:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    goto L_08A96DB4;
L_08A96DB4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96DBC:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96DD4;
      }
      goto L_08A96DCC;
    }
L_08A96DCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
      if (branch_taken) {
          goto L_08A96DD8;
      }
      goto L_08A96DD4;
    }
L_08A96DD4:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    goto L_08A96DD8;
L_08A96DD8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96DE0:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96DF8;
      }
      goto L_08A96DF0;
    }
L_08A96DF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
      if (branch_taken) {
          goto L_08A96DFC;
      }
      goto L_08A96DF8;
    }
L_08A96DF8:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    goto L_08A96DFC;
L_08A96DFC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96E04:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96E1C;
      }
      goto L_08A96E14;
    }
L_08A96E14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_08A96E20;
      }
      goto L_08A96E1C;
    }
L_08A96E1C:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    goto L_08A96E20;
L_08A96E20:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96E28:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96E5C;
      }
      goto L_08A96E38;
    }
L_08A96E38:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(26))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96E54;
      }
      goto L_08A96E44;
    }
L_08A96E44:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(76))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96E54;
      }
      goto L_08A96E50;
    }
L_08A96E50:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A96E54;
L_08A96E54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A96E7C;
      }
      goto L_08A96E5C;
    }
L_08A96E5C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96E78;
      }
      goto L_08A96E68;
    }
L_08A96E68:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(68))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96E78;
      }
      goto L_08A96E74;
    }
L_08A96E74:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A96E78;
L_08A96E78:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08A96E7C;
L_08A96E7C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96E84:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96EB8;
      }
      goto L_08A96E94;
    }
L_08A96E94:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96EB0;
      }
      goto L_08A96EA0;
    }
L_08A96EA0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(78))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96EB0;
      }
      goto L_08A96EAC;
    }
L_08A96EAC:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A96EB0;
L_08A96EB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A96ED8;
      }
      goto L_08A96EB8;
    }
L_08A96EB8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96ED4;
      }
      goto L_08A96EC4;
    }
L_08A96EC4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(70))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96ED4;
      }
      goto L_08A96ED0;
    }
L_08A96ED0:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A96ED4;
L_08A96ED4:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08A96ED8;
L_08A96ED8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96EE0:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96F14;
      }
      goto L_08A96EF0;
    }
L_08A96EF0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96F0C;
      }
      goto L_08A96EFC;
    }
L_08A96EFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96F0C;
      }
      goto L_08A96F08;
    }
L_08A96F08:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A96F0C;
L_08A96F0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A96F34;
      }
      goto L_08A96F14;
    }
L_08A96F14:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96F30;
      }
      goto L_08A96F20;
    }
L_08A96F20:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(72))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96F30;
      }
      goto L_08A96F2C;
    }
L_08A96F2C:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A96F30;
L_08A96F30:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08A96F34;
L_08A96F34:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96F3C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96F70;
      }
      goto L_08A96F4C;
    }
L_08A96F4C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96F68;
      }
      goto L_08A96F58;
    }
L_08A96F58:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96F68;
      }
      goto L_08A96F64;
    }
L_08A96F64:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A96F68;
L_08A96F68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A96F90;
      }
      goto L_08A96F70;
    }
L_08A96F70:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96F8C;
      }
      goto L_08A96F7C;
    }
L_08A96F7C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(72))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96F8C;
      }
      goto L_08A96F88;
    }
L_08A96F88:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A96F8C;
L_08A96F8C:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08A96F90;
L_08A96F90:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96F98:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96FCC;
      }
      goto L_08A96FA8;
    }
L_08A96FA8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96FC4;
      }
      goto L_08A96FB4;
    }
L_08A96FB4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(82))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96FC4;
      }
      goto L_08A96FC0;
    }
L_08A96FC0:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A96FC4;
L_08A96FC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A96FEC;
      }
      goto L_08A96FCC;
    }
L_08A96FCC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96FE8;
      }
      goto L_08A96FD8;
    }
L_08A96FD8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(74))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96FE8;
      }
      goto L_08A96FE4;
    }
L_08A96FE4:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A96FE8;
L_08A96FE8:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08A96FEC;
L_08A96FEC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96FF4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97028;
      }
      goto L_08A97004;
    }
L_08A97004:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97020;
      }
      goto L_08A97010;
    }
L_08A97010:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(82))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97020;
      }
      goto L_08A9701C;
    }
L_08A9701C:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A97020;
L_08A97020:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A97048;
      }
      goto L_08A97028;
    }
L_08A97028:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97044;
      }
      goto L_08A97034;
    }
L_08A97034:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(74))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97044;
      }
      goto L_08A97040;
    }
L_08A97040:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A97044;
L_08A97044:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08A97048;
L_08A97048:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97050:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A97064u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 184u, 0x08A9879Cu>(ctx, &aot_mem) && ctx.pc == 0x08A97064u) goto L_08A97064;
    return;
L_08A97064:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9707C;
      }
      goto L_08A9706C;
    }
L_08A9706C:
    ctx.gpr[31] = (0x08A97074u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96EE0;
L_08A97074:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97084;
      }
      goto L_08A9707C;
    }
L_08A9707C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A97088;
      }
      goto L_08A97084;
    }
L_08A97084:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A97088;
L_08A97088:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97098:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A970ACu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 191u, 0x08A987F4u>(ctx, &aot_mem) && ctx.pc == 0x08A970ACu) goto L_08A970AC;
    return;
L_08A970AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A970C4;
      }
      goto L_08A970B4;
    }
L_08A970B4:
    ctx.gpr[31] = (0x08A970BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96F98;
L_08A970BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A970CC;
      }
      goto L_08A970C4;
    }
L_08A970C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A970D0;
      }
      goto L_08A970CC;
    }
L_08A970CC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A970D0;
L_08A970D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A970E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A970F4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 170u, 0x08A986ECu>(ctx, &aot_mem) && ctx.pc == 0x08A970F4u) goto L_08A970F4;
    return;
L_08A970F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9710C;
      }
      goto L_08A970FC;
    }
L_08A970FC:
    ctx.gpr[31] = (0x08A97104u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96E28;
L_08A97104:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97114;
      }
      goto L_08A9710C;
    }
L_08A9710C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A97118;
      }
      goto L_08A97114;
    }
L_08A97114:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A97118;
L_08A97118:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97128:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9713Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 177u, 0x08A98744u>(ctx, &aot_mem) && ctx.pc == 0x08A9713Cu) goto L_08A9713C;
    return;
L_08A9713C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97154;
      }
      goto L_08A97144;
    }
L_08A97144:
    ctx.gpr[31] = (0x08A9714Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96E84;
L_08A9714C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9715C;
      }
      goto L_08A97154;
    }
L_08A97154:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A97160;
      }
      goto L_08A9715C;
    }
L_08A9715C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A97160;
L_08A97160:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97170:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9717C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[2] = (ctx.gpr[5] | ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97190:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A971AC;
      }
      goto L_08A9719C;
    }
L_08A9719C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(94))))));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40))))));
        goto L_08A971B0;
    }
    goto L_08A971A8;
L_08A971A8:
    ctx.gpr[6] = (0u | 1u);
    goto L_08A971AC;
L_08A971AC:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40))))));
    goto L_08A971B0;
L_08A971B0:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A971C8;
      }
      goto L_08A971B8;
    }
L_08A971B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(90))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A971CC;
      }
      goto L_08A971C4;
    }
L_08A971C4:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A971C8;
L_08A971C8:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08A971CC;
L_08A971CC:
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    ctx.gpr[2] = (ctx.gpr[5] | ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A971DC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A971F8;
      }
      goto L_08A971E8;
    }
L_08A971E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A971F8;
      }
      goto L_08A971F4;
    }
L_08A971F4:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A971F8;
L_08A971F8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97200:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
      if (branch_taken) {
          goto L_08A97224;
      }
      goto L_08A97214;
    }
L_08A97214:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A97250;
      }
      goto L_08A9721C;
    }
L_08A9721C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97230;
      }
      goto L_08A97224;
    }
L_08A97224:
    ctx.gpr[7] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A97250;
      }
      goto L_08A97230;
    }
L_08A97230:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97240;
      }
      goto L_08A97238;
    }
L_08A97238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97250;
      }
      goto L_08A97240;
    }
L_08A97240:
    ctx.gpr[31] = (0x08A97248u);
    // nop
    goto L_08A96E84;
L_08A97248:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9726C;
      }
      goto L_08A97250;
    }
L_08A97250:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97268;
      }
      goto L_08A97258;
    }
L_08A97258:
    ctx.gpr[31] = (0x08A97260u);
    // nop
    goto L_08A96E28;
L_08A97260:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9726C;
      }
      goto L_08A97268;
    }
L_08A97268:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A9726C;
L_08A9726C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97278:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A972B0;
      }
      goto L_08A97290;
    }
L_08A97290:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A972D0;
      }
      goto L_08A97298;
    }
L_08A97298:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A972C0;
      }
      goto L_08A972A0;
    }
L_08A972A0:
    ctx.gpr[31] = (0x08A972A8u);
    // nop
    goto L_08A96D98;
L_08A972A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A972D4;
      }
      goto L_08A972B0;
    }
L_08A972B0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A972A0;
      }
      goto L_08A972B8;
    }
L_08A972B8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A972D0;
      }
      goto L_08A972C0;
    }
L_08A972C0:
    ctx.gpr[31] = (0x08A972C8u);
    // nop
    goto L_08A96DBC;
L_08A972C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A972D4;
      }
      goto L_08A972D0;
    }
L_08A972D0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A972D4;
L_08A972D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A972E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A97338;
      }
      goto L_08A972F8;
    }
L_08A972F8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_08A97340;
    }
    goto L_08A97308;
L_08A97308:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A97318;
      }
      goto L_08A97310;
    }
L_08A97310:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97378;
      }
      goto L_08A97318;
    }
L_08A97318:
    ctx.gpr[31] = (0x08A97320u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96D10;
L_08A97320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(102), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(102))))));
      if (branch_taken) {
          goto L_08A97378;
      }
      goto L_08A97338;
    }
L_08A97338:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97378;
      }
      goto L_08A97340;
    }
L_08A97340:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97310;
      }
      goto L_08A97348;
    }
L_08A97348:
    ctx.gpr[31] = (0x08A97350u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96D10;
L_08A97350:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(102), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97368;
      }
      goto L_08A97360;
    }
L_08A97360:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97310;
      }
      goto L_08A97368;
    }
L_08A97368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(102))))));
    goto L_08A97378;
L_08A97378:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97388:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A973CC;
      }
      goto L_08A9739C;
    }
L_08A9739C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
        goto L_08A973D4;
    }
    goto L_08A973AC;
L_08A973AC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A973BC;
      }
      goto L_08A973B4;
    }
L_08A973B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A973F8;
      }
      goto L_08A973BC;
    }
L_08A973BC:
    ctx.gpr[31] = (0x08A973C4u);
    // nop
    goto L_08A96D54;
L_08A973C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A973F8;
      }
      goto L_08A973CC;
    }
L_08A973CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A973F8;
      }
      goto L_08A973D4;
    }
L_08A973D4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A973B4;
      }
      goto L_08A973DC;
    }
L_08A973DC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A973F0;
      }
      goto L_08A973E8;
    }
L_08A973E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A973B4;
      }
      goto L_08A973F0;
    }
L_08A973F0:
    ctx.gpr[31] = (0x08A973F8u);
    // nop
    goto L_08A96D54;
L_08A973F8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97404:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97478;
      }
      goto L_08A97424;
    }
L_08A97424:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97444;
      }
      goto L_08A9742C;
    }
L_08A9742C:
    ctx.gpr[31] = (0x08A97434u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A97E40;
L_08A97434:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
        goto L_08A97480;
    }
    goto L_08A9743C;
L_08A9743C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A974A0;
      }
      goto L_08A97444;
    }
L_08A97444:
    ctx.gpr[31] = (0x08A9744Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96E04;
L_08A9744C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A97458u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08A96DE0;
L_08A97458:
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[2]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A974A0;
      }
      goto L_08A97478;
    }
L_08A97478:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A974A0;
      }
      goto L_08A97480;
    }
L_08A97480:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
    goto L_08A974A0;
L_08A974A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A974B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A974FC;
      }
      goto L_08A974C8;
    }
L_08A974C8:
    ctx.gpr[31] = (0x08A974D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A97E40;
L_08A974D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A974F4;
      }
      goto L_08A974D8;
    }
L_08A974D8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A974EC;
      }
      goto L_08A974E4;
    }
L_08A974E4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97504;
      }
      goto L_08A974EC;
    }
L_08A974EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9750C;
      }
      goto L_08A974F4;
    }
L_08A974F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9750C;
      }
      goto L_08A974FC;
    }
L_08A974FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9750C;
      }
      goto L_08A97504;
    }
L_08A97504:
    ctx.gpr[31] = (0x08A9750Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96D54;
L_08A9750C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9751C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A975D0;
      }
      goto L_08A9753C;
    }
L_08A9753C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A975D0;
      }
      goto L_08A97544;
    }
L_08A97544:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A97550u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A96D10;
L_08A97550:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A9755Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A96E04;
L_08A9755C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A97568u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08A96DE0;
L_08A97568:
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[2]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A97594;
      }
      goto L_08A9758C;
    }
L_08A9758C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A97594;
      }
      goto L_08A97594;
    }
L_08A97594:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A975A4;
      }
      goto L_08A9759C;
    }
L_08A9759C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A975A4;
      }
      goto L_08A975A4;
    }
L_08A975A4:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A975C8;
      }
      goto L_08A975C0;
    }
L_08A975C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A975D4;
      }
      goto L_08A975C8;
    }
L_08A975C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A975D4;
      }
      goto L_08A975D0;
    }
L_08A975D0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A975D4;
L_08A975D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A975E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97630;
      }
      goto L_08A975FC;
    }
L_08A975FC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97628;
      }
      goto L_08A9760C;
    }
L_08A9760C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97620;
      }
      goto L_08A97618;
    }
L_08A97618:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97638;
      }
      goto L_08A97620;
    }
L_08A97620:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97640;
      }
      goto L_08A97628;
    }
L_08A97628:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97640;
      }
      goto L_08A97630;
    }
L_08A97630:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97640;
      }
      goto L_08A97638;
    }
L_08A97638:
    ctx.gpr[31] = (0x08A97640u);
    // nop
    goto L_08A96D10;
L_08A97640:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9764C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97694;
      }
      goto L_08A97660;
    }
L_08A97660:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9768C;
      }
      goto L_08A97670;
    }
L_08A97670:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97684;
      }
      goto L_08A9767C;
    }
L_08A9767C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9769C;
      }
      goto L_08A97684;
    }
L_08A97684:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A976A4;
      }
      goto L_08A9768C;
    }
L_08A9768C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A976A4;
      }
      goto L_08A97694;
    }
L_08A97694:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A976A4;
      }
      goto L_08A9769C;
    }
L_08A9769C:
    ctx.gpr[31] = (0x08A976A4u);
    // nop
    goto L_08A96D54;
L_08A976A4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A976B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97764;
      }
      goto L_08A976D0;
    }
L_08A976D0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97764;
      }
      goto L_08A976D8;
    }
L_08A976D8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A976E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A96D54;
L_08A976E4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A976F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A96DBC;
L_08A976F0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A976FCu);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08A96D98;
L_08A976FC:
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[2]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A97728;
      }
      goto L_08A97720;
    }
L_08A97720:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A97728;
      }
      goto L_08A97728;
    }
L_08A97728:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A97738;
      }
      goto L_08A97730;
    }
L_08A97730:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A97738;
      }
      goto L_08A97738;
    }
L_08A97738:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9775C;
      }
      goto L_08A97754;
    }
L_08A97754:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A97768;
      }
      goto L_08A9775C;
    }
L_08A9775C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97768;
      }
      goto L_08A97764;
    }
L_08A97764:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A97768;
L_08A97768:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9777C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A977D0;
      }
      goto L_08A97794;
    }
L_08A97794:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A977D8;
      }
      goto L_08A977C8;
    }
L_08A977C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9780C;
      }
      goto L_08A977D0;
    }
L_08A977D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97940;
      }
      goto L_08A977D8;
    }
L_08A977D8:
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
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A97828;
      }
      goto L_08A9780C;
    }
L_08A9780C:
    ctx.gpr[31] = (0x08A97814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A97814u) goto L_08A97814;
    return;
L_08A97814:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97830;
      }
      goto L_08A97820;
    }
L_08A97820:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97860;
      }
      goto L_08A97828;
    }
L_08A97828:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97940;
      }
      goto L_08A97830;
    }
L_08A97830:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 138u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 162u);
      if (branch_taken) {
          goto L_08A97848;
      }
      goto L_08A97840;
    }
L_08A97840:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A97860;
      }
      goto L_08A97848;
    }
L_08A97848:
    ctx.gpr[31] = (0x08A97850u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A964B8;
L_08A97850:
    ctx.gpr[31] = (0x08A97858u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A97E40;
L_08A97858:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9788C;
      }
      goto L_08A97860;
    }
L_08A97860:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_08A97894;
    }
    goto L_08A97870;
L_08A97870:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A978A8;
      }
      goto L_08A97878;
    }
L_08A97878:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A978B0;
      }
      goto L_08A97884;
    }
L_08A97884:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A978C4;
      }
      goto L_08A9788C;
    }
L_08A9788C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97940;
      }
      goto L_08A97894;
    }
L_08A97894:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A978A8;
      }
      goto L_08A9789C;
    }
L_08A9789C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97934;
      }
      goto L_08A978A8;
    }
L_08A978A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97940;
      }
      goto L_08A978B0;
    }
L_08A978B0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A978C4;
      }
      goto L_08A978BC;
    }
L_08A978BC:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A978C4;
L_08A978C4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A978E0;
      }
      goto L_08A978CC;
    }
L_08A978CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A978E8;
      }
      goto L_08A978D8;
    }
L_08A978D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A978FC;
      }
      goto L_08A978E0;
    }
L_08A978E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97940;
      }
      goto L_08A978E8;
    }
L_08A978E8:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A978FC;
      }
      goto L_08A978F4;
    }
L_08A978F4:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08A978FC;
L_08A978FC:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97918;
      }
      goto L_08A97904;
    }
L_08A97904:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97920;
      }
      goto L_08A97910;
    }
L_08A97910:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9792C;
      }
      goto L_08A97918;
    }
L_08A97918:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97940;
      }
      goto L_08A97920;
    }
L_08A97920:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9792C;
      }
      goto L_08A97928;
    }
L_08A97928:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A9792C;
L_08A9792C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A97940;
      }
      goto L_08A97934;
    }
L_08A97934:
    ctx.gpr[31] = (0x08A9793Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96D10;
L_08A9793C:
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < -10 ? 1u : 0u);
    goto L_08A97940;
L_08A97940:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97950:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A979A4;
      }
      goto L_08A97968;
    }
L_08A97968:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A979AC;
      }
      goto L_08A9799C;
    }
L_08A9799C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A979E0;
      }
      goto L_08A979A4;
    }
L_08A979A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97B18;
      }
      goto L_08A979AC;
    }
L_08A979AC:
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
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A979FC;
      }
      goto L_08A979E0;
    }
L_08A979E0:
    ctx.gpr[31] = (0x08A979E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A979E8u) goto L_08A979E8;
    return;
L_08A979E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97A04;
      }
      goto L_08A979F4;
    }
L_08A979F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97A34;
      }
      goto L_08A979FC;
    }
L_08A979FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97B18;
      }
      goto L_08A97A04;
    }
L_08A97A04:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 138u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 162u);
      if (branch_taken) {
          goto L_08A97A1C;
      }
      goto L_08A97A14;
    }
L_08A97A14:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A97A34;
      }
      goto L_08A97A1C;
    }
L_08A97A1C:
    ctx.gpr[31] = (0x08A97A24u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A964B8;
L_08A97A24:
    ctx.gpr[31] = (0x08A97A2Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A97E40;
L_08A97A2C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97A60;
      }
      goto L_08A97A34;
    }
L_08A97A34:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_08A97A68;
    }
    goto L_08A97A44;
L_08A97A44:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A97A7C;
      }
      goto L_08A97A4C;
    }
L_08A97A4C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97A84;
      }
      goto L_08A97A58;
    }
L_08A97A58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A97A98;
      }
      goto L_08A97A60;
    }
L_08A97A60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97B18;
      }
      goto L_08A97A68;
    }
L_08A97A68:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97A7C;
      }
      goto L_08A97A70;
    }
L_08A97A70:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97B08;
      }
      goto L_08A97A7C;
    }
L_08A97A7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97B18;
      }
      goto L_08A97A84;
    }
L_08A97A84:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A97A98;
      }
      goto L_08A97A90;
    }
L_08A97A90:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A97A98;
L_08A97A98:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97AB4;
      }
      goto L_08A97AA0;
    }
L_08A97AA0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97ABC;
      }
      goto L_08A97AAC;
    }
L_08A97AAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A97AD0;
      }
      goto L_08A97AB4;
    }
L_08A97AB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97B18;
      }
      goto L_08A97ABC;
    }
L_08A97ABC:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A97AD0;
      }
      goto L_08A97AC8;
    }
L_08A97AC8:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08A97AD0;
L_08A97AD0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97AEC;
      }
      goto L_08A97AD8;
    }
L_08A97AD8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97AF4;
      }
      goto L_08A97AE4;
    }
L_08A97AE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97B00;
      }
      goto L_08A97AEC;
    }
L_08A97AEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97B18;
      }
      goto L_08A97AF4;
    }
L_08A97AF4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97B00;
      }
      goto L_08A97AFC;
    }
L_08A97AFC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A97B00;
L_08A97B00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A97B18;
      }
      goto L_08A97B08;
    }
L_08A97B08:
    ctx.gpr[31] = (0x08A97B10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96D10;
L_08A97B10:
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < 11 ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[2] ^ 1u);
    goto L_08A97B18;
L_08A97B18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97B28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A97B7C;
      }
      goto L_08A97B40;
    }
L_08A97B40:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A97B84;
      }
      goto L_08A97B74;
    }
L_08A97B74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97BB8;
      }
      goto L_08A97B7C;
    }
L_08A97B7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97CCC;
      }
      goto L_08A97B84;
    }
L_08A97B84:
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
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A97BD8;
      }
      goto L_08A97BB8;
    }
L_08A97BB8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_08A97BE0;
    }
    goto L_08A97BC8;
L_08A97BC8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A97CC8;
      }
      goto L_08A97BD0;
    }
L_08A97BD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97BF0;
      }
      goto L_08A97BD8;
    }
L_08A97BD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97CCC;
      }
      goto L_08A97BE0;
    }
L_08A97BE0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97C78;
      }
      goto L_08A97BE8;
    }
L_08A97BE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97CC8;
      }
      goto L_08A97BF0;
    }
L_08A97BF0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97C24;
      }
      goto L_08A97BFC;
    }
L_08A97BFC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97C18;
      }
      goto L_08A97C08;
    }
L_08A97C08:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A97C1C;
      }
      goto L_08A97C14;
    }
L_08A97C14:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A97C18;
L_08A97C18:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A97C1C;
L_08A97C1C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97C28;
      }
      goto L_08A97C24;
    }
L_08A97C24:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A97C28;
L_08A97C28:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97C60;
      }
      goto L_08A97C38;
    }
L_08A97C38:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97C54;
      }
      goto L_08A97C44;
    }
L_08A97C44:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A97C58;
      }
      goto L_08A97C50;
    }
L_08A97C50:
    ctx.gpr[6] = (0u | 1u);
    goto L_08A97C54;
L_08A97C54:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08A97C58;
L_08A97C58:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97C64;
      }
      goto L_08A97C60;
    }
L_08A97C60:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A97C64;
L_08A97C64:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[2] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A97CCC;
      }
      goto L_08A97C78;
    }
L_08A97C78:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97CC8;
      }
      goto L_08A97C84;
    }
L_08A97C84:
    ctx.gpr[31] = (0x08A97C8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96D10;
L_08A97C8C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A97CA0;
      }
      goto L_08A97C98;
    }
L_08A97C98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A97CA0;
      }
      goto L_08A97CA0;
    }
L_08A97CA0:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 30 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97CC8;
      }
      goto L_08A97CB4;
    }
L_08A97CB4:
    ctx.gpr[31] = (0x08A97CBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96D54;
L_08A97CBC:
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < 11 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] ^ 1u);
      if (branch_taken) {
          goto L_08A97CCC;
      }
      goto L_08A97CC8;
    }
L_08A97CC8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A97CCC;
L_08A97CCC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97CDC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29520)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97D14;
      }
      goto L_08A97CEC;
    }
L_08A97CEC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97D0C;
      }
      goto L_08A97CF8;
    }
L_08A97CF8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97D1C;
      }
      goto L_08A97D04;
    }
L_08A97D04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97D2C;
      }
      goto L_08A97D0C;
    }
L_08A97D0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97D30;
      }
      goto L_08A97D14;
    }
L_08A97D14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97D30;
      }
      goto L_08A97D1C;
    }
L_08A97D1C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97D2C;
      }
      goto L_08A97D28;
    }
L_08A97D28:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A97D2C;
L_08A97D2C:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08A97D30;
L_08A97D30:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97D38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97D64;
      }
      goto L_08A97D4C;
    }
L_08A97D4C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97D6C;
      }
      goto L_08A97D5C;
    }
L_08A97D5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97D8C;
      }
      goto L_08A97D64;
    }
L_08A97D64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97DB0;
      }
      goto L_08A97D6C;
    }
L_08A97D6C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A97DAC;
      }
      goto L_08A97D74;
    }
L_08A97D74:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A97D9C;
      }
      goto L_08A97D7C;
    }
L_08A97D7C:
    ctx.gpr[31] = (0x08A97D84u);
    // nop
    goto L_08A96DBC;
L_08A97D84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97DB0;
      }
      goto L_08A97D8C;
    }
L_08A97D8C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97D7C;
      }
      goto L_08A97D94;
    }
L_08A97D94:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97DAC;
      }
      goto L_08A97D9C;
    }
L_08A97D9C:
    ctx.gpr[31] = (0x08A97DA4u);
    // nop
    goto L_08A96D98;
L_08A97DA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97DB0;
      }
      goto L_08A97DAC;
    }
L_08A97DAC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A97DB0;
L_08A97DB0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97DBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97DE8;
      }
      goto L_08A97DD0;
    }
L_08A97DD0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97DF0;
      }
      goto L_08A97DE0;
    }
L_08A97DE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97E10;
      }
      goto L_08A97DE8;
    }
L_08A97DE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97E34;
      }
      goto L_08A97DF0;
    }
L_08A97DF0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A97E30;
      }
      goto L_08A97DF8;
    }
L_08A97DF8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A97E20;
      }
      goto L_08A97E00;
    }
L_08A97E00:
    ctx.gpr[31] = (0x08A97E08u);
    // nop
    goto L_08A96E84;
L_08A97E08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97E34;
      }
      goto L_08A97E10;
    }
L_08A97E10:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97E00;
      }
      goto L_08A97E18;
    }
L_08A97E18:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97E30;
      }
      goto L_08A97E20;
    }
L_08A97E20:
    ctx.gpr[31] = (0x08A97E28u);
    // nop
    goto L_08A96E28;
L_08A97E28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97E34;
      }
      goto L_08A97E30;
    }
L_08A97E30:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A97E34;
L_08A97E34:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97E40:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97E54;
      }
      goto L_08A97E4C;
    }
L_08A97E4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97E5C;
      }
      goto L_08A97E54;
    }
L_08A97E54:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08A97E5C;
L_08A97E5C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97E64:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97E84;
      }
      goto L_08A97E70;
    }
L_08A97E70:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97E8C;
      }
      goto L_08A97E7C;
    }
L_08A97E7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97E9C;
      }
      goto L_08A97E84;
    }
L_08A97E84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97EA0;
      }
      goto L_08A97E8C;
    }
L_08A97E8C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(94))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97E9C;
      }
      goto L_08A97E98;
    }
L_08A97E98:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A97E9C;
L_08A97E9C:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08A97EA0;
L_08A97EA0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97EA8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97EC8;
      }
      goto L_08A97EB4;
    }
L_08A97EB4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97ED0;
      }
      goto L_08A97EC0;
    }
L_08A97EC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97EE0;
      }
      goto L_08A97EC8;
    }
L_08A97EC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97EE4;
      }
      goto L_08A97ED0;
    }
L_08A97ED0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(94))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97EE0;
      }
      goto L_08A97EDC;
    }
L_08A97EDC:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A97EE0;
L_08A97EE0:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08A97EE4;
L_08A97EE4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97EEC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97F2C;
      }
      goto L_08A97EF8;
    }
L_08A97EF8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
        goto L_08A97F34;
    }
    goto L_08A97F08;
L_08A97F08:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A97F24;
      }
      goto L_08A97F10;
    }
L_08A97F10:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97F44;
      }
      goto L_08A97F1C;
    }
L_08A97F1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] << 16u);
      if (branch_taken) {
          goto L_08A97F58;
      }
      goto L_08A97F24;
    }
L_08A97F24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97F5C;
      }
      goto L_08A97F2C;
    }
L_08A97F2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97F5C;
      }
      goto L_08A97F34;
    }
L_08A97F34:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97F24;
      }
      goto L_08A97F3C;
    }
L_08A97F3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(14))))));
      if (branch_taken) {
          goto L_08A97F5C;
      }
      goto L_08A97F44;
    }
L_08A97F44:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(38))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (ctx.gpr[5] << 16u);
      if (branch_taken) {
          goto L_08A97F58;
      }
      goto L_08A97F50;
    }
L_08A97F50:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[2] = (ctx.gpr[5] << 16u);
    goto L_08A97F58;
L_08A97F58:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
    goto L_08A97F5C;
L_08A97F5C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97F64:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97F78;
      }
      goto L_08A97F70;
    }
L_08A97F70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97F7C;
      }
      goto L_08A97F78;
    }
L_08A97F78:
    {
        const bool driving = lcs::lcs_guest_player_in_vehicle(aot_mem);
        if (driving) lcs::lcs_note_vehicle_control_read();
        std::int16_t brake = static_cast<std::int16_t>(
            aot_mem.aot_load16(ctx.gpr[4] + (driving ? lcs::lcs_brake_pad_offset() : 38u)));
        if (driving && brake == 0) brake = lcs::lcs_host_brake();
        ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(brake)));
    }
    goto L_08A97F7C;
L_08A97F7C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97F84:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97FB0;
      }
      goto L_08A97F90;
    }
L_08A97F90:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97FB0;
      }
      goto L_08A97F9C;
    }
L_08A97F9C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(147)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97FB8;
      }
      goto L_08A97FA8;
    }
L_08A97FA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97FC0;
      }
      goto L_08A97FB0;
    }
L_08A97FB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97FC0;
      }
      goto L_08A97FB8;
    }
L_08A97FB8:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08A97FC0;
L_08A97FC0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97FC8:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40))))));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97FD4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 4u, 0x08A9801Cu>(ctx, &aot_mem); return;
      }
      goto L_08A97FE0;
    }
L_08A97FE0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(147)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 3u, 0x08A98014u>(ctx, &aot_mem); return;
      }
      goto L_08A97FEC;
    }
L_08A97FEC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 2u, 0x08A9800Cu>(ctx, &aot_mem); return;
      }
      goto L_08A97FF8;
    }
L_08A97FF8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 5u, 0x08A98024u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 1u, 0x08A98004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0164(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0164_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_164(Runtime &runtime) {
    runtime.register_generated_unit(164u, 0x08A94000u, 16384u, &recomp_unit_0164, &recomp_unit_0164_entry);
    runtime.register_function(0x08A94000u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94008u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94010u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94018u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94020u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94028u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94030u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94038u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94040u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94048u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94078u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A940B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A940BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A940C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A940D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A940D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A940D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A940E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A940FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94118u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94120u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94130u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9413Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9414Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9415Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94168u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94194u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A941B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A941BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A941C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A941D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A941E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A941E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A941FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94240u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94264u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94270u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9427Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94284u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94288u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94290u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9429Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A942B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A942F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94318u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94328u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94334u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94340u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94348u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9434Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94354u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94360u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94374u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94378u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9438Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94394u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9439Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A943A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A943B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A943BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A943C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A943D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A943D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A943E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A943F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94400u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94408u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94418u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94420u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94430u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94468u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94514u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9451Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9453Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94548u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94554u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94560u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94568u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9456Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94570u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9457Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94590u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9459Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A945A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A945ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A945BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A945E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A945F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A945FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94608u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94614u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94618u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94620u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A946A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A946B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A946D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9471Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9472Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94738u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94748u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94754u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9477Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94788u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94794u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9479Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A947A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A947A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A947B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A947C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A947E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94800u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94818u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94820u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94824u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94830u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94850u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94864u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94880u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A948BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A948C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A948D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A948E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A948ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A948F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A948F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94900u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9490Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94920u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94928u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94958u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94960u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94974u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A949ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A949C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A949C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A949D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A949D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A949E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A68u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94AD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94AE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94AECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94AF4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94AF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94AFCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B68u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94BA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94BC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94BD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94BE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94BE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94BECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94BF4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CA8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CCCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D6Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D78u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DD8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94EA0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94EB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94EE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F2Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94FC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94FF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94FFCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95008u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95010u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95014u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9501Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95028u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95040u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95058u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95090u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A950B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A950C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A950CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A950D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A950D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A950E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A950ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95100u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95108u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95110u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95128u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95134u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95168u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9518Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95198u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95220u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95244u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95250u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9525Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95264u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95268u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95270u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9527Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95294u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9529Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A952CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A952F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A952FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95308u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95310u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95314u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9531Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95328u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95340u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95348u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95378u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9539Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95424u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95448u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95454u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95460u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95468u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9546Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95474u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95480u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95498u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A954A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A954D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A954F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95500u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9550Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95514u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95518u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95520u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9552Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95544u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9554Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9557Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95630u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95654u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95660u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9566Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95674u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95678u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95680u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9568Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A956A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A956E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95708u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95714u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95720u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95728u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9572Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95734u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95740u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95758u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95798u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9580Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9584Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95870u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9587Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95888u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95890u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95894u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9589Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A958A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A958C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95900u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95924u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95930u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9593Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95944u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95948u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95950u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9595Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95974u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A04u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A68u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95AA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95AACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95AB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95AB8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95AC4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95ADCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B90u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95BB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95BE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C04u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C3Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95CB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95CBCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95CC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95CD0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95CD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95CDCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95CE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D68u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D94u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95DACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95DECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E3Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95EA0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95EC4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95ED0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95EDCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95EE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95EE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95EF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95EFCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FA0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FBCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96000u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96030u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9603Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9604Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9605Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96068u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96074u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9607Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96080u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96088u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96094u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9611Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96128u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96134u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9613Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96140u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96148u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96154u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9616Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96200u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96208u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96214u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9621Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96224u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96230u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96238u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96240u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9624Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96254u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9625Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96268u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96270u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96278u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96284u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9628Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96294u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96304u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96310u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96318u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96320u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9632Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96334u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9633Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96340u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96348u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A963ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A963D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A963E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A963F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A963F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9640Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96418u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96434u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96474u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96488u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96498u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96500u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96508u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96510u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9651Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9652Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96538u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96544u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96558u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96568u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96570u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96578u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96588u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96590u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A965C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A965D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A965DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A965E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A965F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96600u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96648u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96668u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96678u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96690u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96698u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96734u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96740u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9674Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96754u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96758u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9675Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9676Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96780u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96788u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96798u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A967E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96800u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96810u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96828u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96830u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96838u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9684Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96854u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9685Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96874u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9687Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96884u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A968CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A968D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A968E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A968ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A968F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A968F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96904u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96918u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9693Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9694Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A2Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A90u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96ABCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AC4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96ACCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AD8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AF4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B68u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B94u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B9Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BBCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BCCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BD0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BD8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BF4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96CA8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96CDCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96CF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96CF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D90u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DA8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DBCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DCCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DD8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DFCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E04u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E68u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E78u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E94u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96EA0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96EACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96EB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96EB8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96EC4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96ED0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96ED4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96ED8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96EE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96EF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96EFCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F2Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F3Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F68u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F90u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FA8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FC4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FCCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FD8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FF4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97004u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97010u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9701Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97020u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97028u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97034u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97040u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97044u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97048u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97050u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97064u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9706Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97074u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9707Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97084u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97088u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97098u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97104u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9710Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97114u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97118u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97128u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9713Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97144u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9714Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97154u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9715Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97160u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97170u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9717Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97190u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9719Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97200u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97214u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9721Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97224u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97230u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97238u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97240u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97248u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97250u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97258u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97260u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97268u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9726Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97278u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97290u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97298u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97308u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97310u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97318u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97320u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97338u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97340u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97348u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97350u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97360u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97368u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97378u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97388u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9739Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97404u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97424u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9742Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97434u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9743Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97444u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9744Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97458u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97478u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97480u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A974A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A974B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A974C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A974D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A974D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A974E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A974ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A974F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A974FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97504u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9750Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9751Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9753Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97544u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97550u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9755Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97568u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9758Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97594u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9759Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9760Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97618u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97620u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97628u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97630u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97638u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97640u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9764Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97660u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97670u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9767Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97684u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9768Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97694u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9769Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97720u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97728u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97730u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97738u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97754u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9775Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97764u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97768u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9777Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97794u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A977C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A977D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A977D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9780Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97814u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97820u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97828u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97830u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97840u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97848u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97850u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97858u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97860u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97870u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97878u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97884u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9788Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97894u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9789Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97904u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97910u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97918u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97920u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97928u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9792Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97934u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9793Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97940u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97950u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97968u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9799Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A979A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A979ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A979E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A979E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A979F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A979FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A04u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A2Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A68u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A90u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AA0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97ABCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AD0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AD8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AF4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AFCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BB8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BD0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BD8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BFCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C78u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CA0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CBCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CCCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CDCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D04u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D2Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D6Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D94u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D9Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DBCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DD0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E9Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EA0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EA8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97ED0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EDCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F2Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F3Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F78u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F90u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F9Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FA8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FB8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FF8u, &recomp_unit_0164, "recomp_unit_0164");
}
} // namespace psprecomp
