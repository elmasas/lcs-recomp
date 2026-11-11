#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "lcs_menu_pages.hpp"  // [lcs-menu-pages]
#include "decomp.hpp"  // [decomp-hook]
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0181[4087] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 5, 6, 7, 0, 0, 8, 0, 0, 0, 0, 9, 0, 10, 0, 0, 11, 0,
    0, 12, 0, 0, 13, 0, 14, 15, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0,
    22, 23, 24, 0, 0, 25, 0, 0, 0, 0, 26, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30,
    0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 34, 35, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40,
    0, 0, 41, 0, 42, 43, 44, 0, 0, 45, 0, 0, 0, 0, 46, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 51, 52, 0, 53, 0,
    0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 59, 60, 61, 0, 0, 62, 0, 0, 0, 0, 63,
    64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 70, 71, 0, 72, 0, 0,
    73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 78, 79, 80, 0, 0, 81, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 88, 89, 0, 90, 0,
    0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 96, 97, 98, 0, 0, 99, 0, 0, 0,
    0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 103, 0, 104, 105, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 108, 109, 110, 0, 111, 0, 112, 0, 113, 0, 0, 114, 0, 115,
    0, 0, 116, 0, 0, 0, 0, 117, 118, 119, 0, 120, 0, 121, 0, 0, 122, 0, 0, 0, 0, 123, 0, 124, 0, 0, 125, 0, 0, 0, 0, 126,
    127, 128, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 136, 0, 137, 0, 0, 138, 0, 0, 0, 0,
    139, 140, 141, 0, 142, 0, 143, 0, 144, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0,
    0, 0, 0, 0, 151, 0, 152, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 0, 159,
    0, 0, 160, 0, 0, 0, 161, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 168, 0, 0,
    169, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0,
    178, 0, 0, 179, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0,
    0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206,
    0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0,
    0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0,
    0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222,
    0, 223, 0, 224, 0, 225, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 232,
    0, 233, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 239, 0, 240, 0, 0, 0, 0, 0, 241, 0, 242, 0, 243, 0, 0,
    0, 0, 0, 244, 0, 245, 0, 246, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0,
    252, 253, 254, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 260, 261, 0, 262, 0, 263, 0, 0, 264, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 271, 0, 0, 272, 273, 0, 274, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 277,
    0, 0, 278, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 288, 0, 289, 0, 0, 290, 0,
    0, 0, 0, 291, 0, 292, 0, 0, 293, 0, 0, 0, 0, 294, 0, 295, 0, 0, 296, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 299, 0,
    300, 0, 301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0, 307, 308, 0, 0, 309, 0, 0, 0, 0, 310, 0, 311, 0, 312, 0, 313, 0, 314,
    0, 315, 0, 316, 0, 317, 0, 318, 319, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 323, 0, 324, 0, 325, 0, 326, 0, 327, 0,
    328, 0, 329, 0, 330, 0, 331, 0, 332, 0, 333, 0, 334, 0, 335, 0, 336, 0, 337, 0, 338, 0, 339, 0, 340, 0, 341, 0, 342, 0, 343, 0,
    344, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 349, 0, 350, 0, 351, 0, 352, 0, 353, 0, 354, 0, 355, 0, 356, 0,
    357, 0, 358, 0, 359, 0, 360, 0, 361, 0, 362, 0, 363, 0, 364, 0, 365, 0, 366, 0, 367, 0, 368, 0, 369, 0, 370, 371, 0, 0, 0, 372,
    0, 0, 0, 373, 0, 374, 375, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0,
    379, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0,
    0, 382, 0, 0, 383, 0, 384, 0, 0, 385, 0, 0, 0, 386, 0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 391,
    0, 0, 392, 0, 0, 393, 0, 0, 0, 394, 0, 395, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 399, 0, 400, 0, 0, 0, 0, 0,
    0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0, 404, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 407, 408,
    0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 412, 0, 0, 0, 0, 0, 413, 0, 414, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 417, 0, 418,
    0, 419, 0, 420, 0, 0, 421, 0, 422, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 0, 425, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0,
    0, 0, 428, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0, 0, 0, 0, 432, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 435,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 0, 440, 0, 0, 441, 0, 0, 442,
    0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 446, 0, 447, 0, 448, 0, 449, 0,
    0, 450, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 454, 0, 455, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 458, 0, 0, 0,
    0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 463, 0, 0, 464, 0, 465, 466, 0, 467, 0, 468, 0,
    0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0,
    475, 0, 0, 476, 0, 0, 477, 0, 0, 478, 0, 0, 479, 0, 480, 481, 0, 482, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 486, 0, 487, 0, 0, 0, 488, 0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 0, 491, 492, 0, 493,
    0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0,
    0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 497, 0, 498, 0, 0, 0, 499, 0, 500, 501, 0, 502, 0, 503, 0, 0, 0, 504, 0, 505, 506, 0,
    0, 507, 0, 508, 0, 509, 0, 0, 0, 510, 0, 0, 511, 0, 512, 513, 0, 514, 0, 515, 0, 516, 0, 0, 517, 0, 0, 0, 0, 518, 0, 519,
    0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 0, 0, 527,
    0, 0, 0, 0, 0, 0, 528, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 532, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0,
    534, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 540, 0, 0, 0, 0, 541, 0, 542, 0, 543, 0, 544, 0, 0, 0, 545, 0,
    546, 0, 547, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 550, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 553, 0, 554, 0,
    0, 0, 0, 0, 0, 555, 0, 556, 0, 0, 0, 557, 0, 558, 0, 0, 0, 559, 0, 560, 0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 563, 0,
    0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 566, 0, 567, 0, 0, 0, 0, 0, 0, 568, 0, 569, 0, 0, 0, 0, 0, 0, 570, 0,
    571, 0, 572, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 576, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 579, 0, 580,
    0, 0, 0, 0, 0, 0, 581, 0, 582, 0, 0, 0, 0, 0, 0, 583, 0, 584, 0, 585, 0, 0, 0, 586, 0, 0, 0, 587, 0, 0, 0, 0,
    0, 0, 588, 0, 589, 0, 590, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 593, 0, 594, 0, 0, 0, 0, 0, 0, 595, 0, 596, 0,
    597, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 600, 0, 0, 0, 0, 0, 0, 601,
    0, 602, 0, 603, 0, 0, 0, 0, 0, 0, 604, 0, 605, 606, 0, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 609, 0, 0, 0, 610,
    0, 611, 0, 612, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 614, 615, 0, 616, 0, 0, 617, 0, 0, 618, 0, 619, 0, 0, 0, 620, 0,
    0, 621, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 0, 0, 0, 625,
    0, 0, 626, 0, 0, 627, 0, 628, 629, 630, 0, 0, 631, 0, 0, 632, 0, 0, 633, 0, 0, 634, 0, 635, 636, 637, 0, 638, 0, 0, 639, 0,
    0, 640, 0, 0, 641, 0, 642, 643, 644, 0, 645, 0, 0, 646, 0, 0, 647, 0, 0, 648, 0, 0, 649, 0, 650, 651, 0, 652, 0, 653, 0, 654,
    0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 656, 0, 657, 0, 658, 0, 659, 0, 660, 0, 661, 0, 662, 0, 663, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 664, 0, 665, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 668,
    0, 669, 0, 670, 0, 671, 0, 0, 672, 0, 673, 0, 0, 674, 0, 0, 675, 0, 0, 676, 677, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 679, 0, 680, 0, 681, 0, 0, 0, 0, 682, 0, 683, 0, 0, 684, 0, 685, 0, 0, 686, 0, 687, 0, 688, 0, 689, 0, 0, 0, 0,
    690, 0, 691, 0, 692, 0, 0, 693, 0, 0, 0, 0, 0, 694, 0, 695, 0, 0, 696, 0, 0, 697, 0, 0, 698, 0, 699, 700, 0, 701, 0, 702,
    0, 0, 703, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707,
    0, 0, 0, 0, 708, 0, 0, 709, 0, 0, 0, 0, 0, 710, 0, 711, 0, 712, 0, 0, 713, 0, 0, 0, 0, 714, 0, 715, 0, 0, 0, 716,
    0, 0, 717, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    720, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 723,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 724, 725, 0, 0, 0, 726, 0, 727, 0, 0, 728,
    0, 0, 0, 0, 729, 0, 0, 730, 0, 0, 731, 0, 0, 732, 0, 0, 733, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0,
    0, 0, 0, 0, 736, 0, 0, 737, 0, 738, 0, 0, 0, 739, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 742, 0, 0, 743, 0, 744, 0, 745, 0, 746, 0, 0, 0, 0, 0, 747, 0,
    0, 748, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 752, 0, 0, 0, 0, 753, 0,
    0, 0, 0, 0, 0, 754, 0, 755, 0, 0, 0, 756, 757, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 759, 0, 0, 760, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 762, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 765, 0, 0,
    0, 766, 0, 0, 767, 768, 769, 0, 770, 0, 0, 0, 771, 0, 772, 0, 0, 0, 773, 0, 0, 774, 775, 776, 0, 777, 0, 0, 0, 0, 778, 0,
    0, 0, 779, 0, 0, 780, 0, 781, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 782, 0, 0, 783, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 784, 0, 785, 0, 786, 0, 787, 0, 0, 788, 0, 789, 0,
    0, 790, 0, 791, 0, 792, 0, 0, 0, 0, 793, 794, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 797, 0, 0, 0, 798, 0, 799, 800, 0, 801, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 803, 0, 0, 0, 804, 0, 0, 0,
    805, 0, 806, 807, 0, 808, 0, 0, 0, 0, 809, 0, 0, 0, 0, 0, 810, 0, 0, 811, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 812, 0, 0, 0, 813, 0, 0, 0, 814, 0, 0, 0, 815, 0, 0, 816, 0, 817, 0, 818, 0, 0, 0, 819,
    0, 0, 0, 820, 0, 0, 0, 821, 0, 0, 0, 822, 0, 0, 823, 0, 824, 0, 825, 826, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 827,
    0, 828, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 830, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 831, 0,
    832, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 833, 0, 834, 835, 0, 836, 0, 0, 837, 0, 838, 0, 0, 839, 0, 840, 0, 841,
    0, 0, 0, 0, 0, 842, 843, 0, 0, 0, 844, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 845, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 846, 0, 0,
    0, 847, 0, 0, 848, 0, 849, 0, 850, 0, 0, 0, 0, 0, 851, 0, 0, 0, 0, 0, 0, 0, 852, 0, 0, 0, 853, 0, 0, 0, 854, 0,
    0, 0, 855, 0, 0, 856, 857, 0, 0, 0, 0, 0, 858, 0, 0, 859, 860, 0, 861, 0, 0, 0, 862, 0, 0, 0, 863, 0, 0, 864, 0, 865,
    0, 866, 0, 0, 0, 0, 0, 867, 0, 0, 0, 0, 0, 0, 0, 868, 0, 0, 0, 869, 0, 0, 0, 870, 0, 0, 0, 871, 0, 0, 872, 873,
    0, 0, 0, 0, 0, 874, 0, 0, 875, 876, 0, 877, 0, 0, 878, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 879, 0, 0, 0, 880, 0, 0, 0, 881, 0, 0, 0, 882, 0, 0, 883, 0, 884, 0, 885, 0, 0, 0, 886, 0, 0, 0, 887, 0,
    0, 0, 888, 0, 0, 0, 889, 0, 0, 890, 0, 891, 0, 892, 893, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 894, 0, 895, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 896, 0, 897, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 898, 0, 899, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 900, 0, 901, 902, 0, 0, 903, 0, 904, 0, 905, 0, 906, 0, 907, 0, 908, 909, 0, 0, 0, 910, 911,
    0, 0, 0, 912, 0, 0, 0, 0, 913, 0, 914, 0, 915, 0, 916, 0, 917, 0, 918, 0, 919, 0, 920, 0, 921, 0, 922, 0, 923, 0, 0, 0,
    0, 0, 0, 0, 924, 0, 0, 0, 0, 0, 0, 0, 0, 0, 925, 0, 0, 0, 0, 926, 0, 0, 927,
};
void recomp_unit_0181_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AD8000u;
        entry_id = (entry_delta < 16348u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0181[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AD8000;
    case 2u: goto L_08AD801C;
    case 3u: goto L_08AD8028;
    case 4u: goto L_08AD8034;
    case 5u: goto L_08AD803C;
    case 6u: goto L_08AD8040;
    case 7u: goto L_08AD8044;
    case 8u: goto L_08AD8050;
    case 9u: goto L_08AD8064;
    case 10u: goto L_08AD806C;
    case 11u: goto L_08AD8078;
    case 12u: goto L_08AD8084;
    case 13u: goto L_08AD8090;
    case 14u: goto L_08AD8098;
    case 15u: goto L_08AD809C;
    case 16u: goto L_08AD80A4;
    case 17u: goto L_08AD80B0;
    case 18u: goto L_08AD80BC;
    case 19u: goto L_08AD80E0;
    case 20u: goto L_08AD80EC;
    case 21u: goto L_08AD80F8;
    case 22u: goto L_08AD8100;
    case 23u: goto L_08AD8104;
    case 24u: goto L_08AD8108;
    case 25u: goto L_08AD8114;
    case 26u: goto L_08AD8128;
    case 27u: goto L_08AD812C;
    case 28u: goto L_08AD814C;
    case 29u: goto L_08AD818C;
    case 30u: goto L_08AD81FC;
    case 31u: goto L_08AD8208;
    case 32u: goto L_08AD8214;
    case 33u: goto L_08AD8220;
    case 34u: goto L_08AD8228;
    case 35u: goto L_08AD822C;
    case 36u: goto L_08AD8234;
    case 37u: goto L_08AD8240;
    case 38u: goto L_08AD824C;
    case 39u: goto L_08AD8270;
    case 40u: goto L_08AD827C;
    case 41u: goto L_08AD8288;
    case 42u: goto L_08AD8290;
    case 43u: goto L_08AD8294;
    case 44u: goto L_08AD8298;
    case 45u: goto L_08AD82A4;
    case 46u: goto L_08AD82B8;
    case 47u: goto L_08AD82C0;
    case 48u: goto L_08AD82CC;
    case 49u: goto L_08AD82D8;
    case 50u: goto L_08AD82E4;
    case 51u: goto L_08AD82EC;
    case 52u: goto L_08AD82F0;
    case 53u: goto L_08AD82F8;
    case 54u: goto L_08AD8304;
    case 55u: goto L_08AD8310;
    case 56u: goto L_08AD8334;
    case 57u: goto L_08AD8340;
    case 58u: goto L_08AD834C;
    case 59u: goto L_08AD8354;
    case 60u: goto L_08AD8358;
    case 61u: goto L_08AD835C;
    case 62u: goto L_08AD8368;
    case 63u: goto L_08AD837C;
    case 64u: goto L_08AD8380;
    case 65u: goto L_08AD83A0;
    case 66u: goto L_08AD83E0;
    case 67u: goto L_08AD8448;
    case 68u: goto L_08AD8454;
    case 69u: goto L_08AD8460;
    case 70u: goto L_08AD8468;
    case 71u: goto L_08AD846C;
    case 72u: goto L_08AD8474;
    case 73u: goto L_08AD8480;
    case 74u: goto L_08AD848C;
    case 75u: goto L_08AD84B8;
    case 76u: goto L_08AD84C4;
    case 77u: goto L_08AD84D0;
    case 78u: goto L_08AD84D8;
    case 79u: goto L_08AD84DC;
    case 80u: goto L_08AD84E0;
    case 81u: goto L_08AD84EC;
    case 82u: goto L_08AD8500;
    case 83u: goto L_08AD8524;
    case 84u: goto L_08AD8564;
    case 85u: goto L_08AD85CC;
    case 86u: goto L_08AD85D8;
    case 87u: goto L_08AD85E4;
    case 88u: goto L_08AD85EC;
    case 89u: goto L_08AD85F0;
    case 90u: goto L_08AD85F8;
    case 91u: goto L_08AD8604;
    case 92u: goto L_08AD8610;
    case 93u: goto L_08AD863C;
    case 94u: goto L_08AD8648;
    case 95u: goto L_08AD8654;
    case 96u: goto L_08AD865C;
    case 97u: goto L_08AD8660;
    case 98u: goto L_08AD8664;
    case 99u: goto L_08AD8670;
    case 100u: goto L_08AD8684;
    case 101u: goto L_08AD86A8;
    case 102u: goto L_08AD86E8;
    case 103u: goto L_08AD8710;
    case 104u: goto L_08AD8718;
    case 105u: goto L_08AD871C;
    case 106u: goto L_08AD8728;
    case 107u: goto L_08AD8734;
    case 108u: goto L_08AD8748;
    case 109u: goto L_08AD874C;
    case 110u: goto L_08AD8750;
    case 111u: goto L_08AD8758;
    case 112u: goto L_08AD8760;
    case 113u: goto L_08AD8768;
    case 114u: goto L_08AD8774;
    case 115u: goto L_08AD877C;
    case 116u: goto L_08AD8788;
    case 117u: goto L_08AD879C;
    case 118u: goto L_08AD87A0;
    case 119u: goto L_08AD87A4;
    case 120u: goto L_08AD87AC;
    case 121u: goto L_08AD87B4;
    case 122u: goto L_08AD87C0;
    case 123u: goto L_08AD87D4;
    case 124u: goto L_08AD87DC;
    case 125u: goto L_08AD87E8;
    case 126u: goto L_08AD87FC;
    case 127u: goto L_08AD8800;
    case 128u: goto L_08AD8804;
    case 129u: goto L_08AD880C;
    case 130u: goto L_08AD8814;
    case 131u: goto L_08AD881C;
    case 132u: goto L_08AD8824;
    case 133u: goto L_08AD882C;
    case 134u: goto L_08AD8838;
    case 135u: goto L_08AD8844;
    case 136u: goto L_08AD8858;
    case 137u: goto L_08AD8860;
    case 138u: goto L_08AD886C;
    case 139u: goto L_08AD8880;
    case 140u: goto L_08AD8884;
    case 141u: goto L_08AD8888;
    case 142u: goto L_08AD8890;
    case 143u: goto L_08AD8898;
    case 144u: goto L_08AD88A0;
    case 145u: goto L_08AD88A8;
    case 146u: goto L_08AD88B0;
    case 147u: goto L_08AD88CC;
    case 148u: goto L_08AD88D4;
    case 149u: goto L_08AD88EC;
    case 150u: goto L_08AD88F4;
    case 151u: goto L_08AD8910;
    case 152u: goto L_08AD8918;
    case 153u: goto L_08AD8920;
    case 154u: goto L_08AD8934;
    case 155u: goto L_08AD894C;
    case 156u: goto L_08AD8954;
    case 157u: goto L_08AD8964;
    case 158u: goto L_08AD8970;
    case 159u: goto L_08AD897C;
    case 160u: goto L_08AD8988;
    case 161u: goto L_08AD8998;
    case 162u: goto L_08AD89A4;
    case 163u: goto L_08AD89AC;
    case 164u: goto L_08AD89BC;
    case 165u: goto L_08AD89C8;
    case 166u: goto L_08AD89D8;
    case 167u: goto L_08AD89E4;
    case 168u: goto L_08AD89F4;
    case 169u: goto L_08AD8A00;
    case 170u: goto L_08AD8A10;
    case 171u: goto L_08AD8A1C;
    case 172u: goto L_08AD8A2C;
    case 173u: goto L_08AD8A38;
    case 174u: goto L_08AD8A48;
    case 175u: goto L_08AD8A54;
    case 176u: goto L_08AD8A64;
    case 177u: goto L_08AD8A70;
    case 178u: goto L_08AD8A80;
    case 179u: goto L_08AD8A8C;
    case 180u: goto L_08AD8A9C;
    case 181u: goto L_08AD8AA4;
    case 182u: goto L_08AD8ABC;
    case 183u: goto L_08AD8AD8;
    case 184u: goto L_08AD8AF0;
    case 185u: goto L_08AD8B3C;
    case 186u: goto L_08AD8B58;
    case 187u: goto L_08AD8B74;
    case 188u: goto L_08AD8BC0;
    case 189u: goto L_08AD8BDC;
    case 190u: goto L_08AD8BF8;
    case 191u: goto L_08AD8C44;
    case 192u: goto L_08AD8C60;
    case 193u: goto L_08AD8C7C;
    case 194u: goto L_08AD8CD4;
    case 195u: goto L_08AD8CF0;
    case 196u: goto L_08AD8D10;
    case 197u: goto L_08AD8D70;
    case 198u: goto L_08AD8D8C;
    case 199u: goto L_08AD8DB8;
    case 200u: goto L_08AD8DD4;
    case 201u: goto L_08AD8E08;
    case 202u: goto L_08AD8E24;
    case 203u: goto L_08AD8E58;
    case 204u: goto L_08AD8E74;
    case 205u: goto L_08AD8E9C;
    case 206u: goto L_08AD8EFC;
    case 207u: goto L_08AD8F18;
    case 208u: goto L_08AD8F44;
    case 209u: goto L_08AD8F60;
    case 210u: goto L_08AD8F88;
    case 211u: goto L_08AD8FE8;
    case 212u: goto L_08AD9004;
    case 213u: goto L_08AD9030;
    case 214u: goto L_08AD904C;
    case 215u: goto L_08AD9074;
    case 216u: goto L_08AD90D0;
    case 217u: goto L_08AD90EC;
    case 218u: goto L_08AD910C;
    case 219u: goto L_08AD9128;
    case 220u: goto L_08AD914C;
    case 221u: goto L_08AD9168;
    case 222u: goto L_08AD917C;
    case 223u: goto L_08AD9184;
    case 224u: goto L_08AD918C;
    case 225u: goto L_08AD9194;
    case 226u: goto L_08AD91A8;
    case 227u: goto L_08AD91B0;
    case 228u: goto L_08AD91C4;
    case 229u: goto L_08AD91CC;
    case 230u: goto L_08AD91E0;
    case 231u: goto L_08AD91E8;
    case 232u: goto L_08AD91FC;
    case 233u: goto L_08AD9204;
    case 234u: goto L_08AD9218;
    case 235u: goto L_08AD9224;
    case 236u: goto L_08AD9298;
    case 237u: goto L_08AD92A4;
    case 238u: goto L_08AD92BC;
    case 239u: goto L_08AD92C4;
    case 240u: goto L_08AD92CC;
    case 241u: goto L_08AD92E4;
    case 242u: goto L_08AD92EC;
    case 243u: goto L_08AD92F4;
    case 244u: goto L_08AD930C;
    case 245u: goto L_08AD9314;
    case 246u: goto L_08AD931C;
    case 247u: goto L_08AD9334;
    case 248u: goto L_08AD933C;
    case 249u: goto L_08AD9360;
    case 250u: goto L_08AD936C;
    case 251u: goto L_08AD9378;
    case 252u: goto L_08AD9380;
    case 253u: goto L_08AD9384;
    case 254u: goto L_08AD9388;
    case 255u: goto L_08AD9394;
    case 256u: goto L_08AD93A8;
    case 257u: goto L_08AD93B4;
    case 258u: goto L_08AD93C0;
    case 259u: goto L_08AD93CC;
    case 260u: goto L_08AD93D4;
    case 261u: goto L_08AD93D8;
    case 262u: goto L_08AD93E0;
    case 263u: goto L_08AD93E8;
    case 264u: goto L_08AD93F4;
    case 265u: goto L_08AD9424;
    case 266u: goto L_08AD9448;
    case 267u: goto L_08AD9450;
    case 268u: goto L_08AD9464;
    case 269u: goto L_08AD94AC;
    case 270u: goto L_08AD94B4;
    case 271u: goto L_08AD94B8;
    case 272u: goto L_08AD94C4;
    case 273u: goto L_08AD94C8;
    case 274u: goto L_08AD94D0;
    case 275u: goto L_08AD94E4;
    case 276u: goto L_08AD94F0;
    case 277u: goto L_08AD94FC;
    case 278u: goto L_08AD9508;
    case 279u: goto L_08AD9510;
    case 280u: goto L_08AD9524;
    case 281u: goto L_08AD9534;
    case 282u: goto L_08AD9544;
    case 283u: goto L_08AD954C;
    case 284u: goto L_08AD9558;
    case 285u: goto L_08AD95AC;
    case 286u: goto L_08AD95D4;
    case 287u: goto L_08AD95DC;
    case 288u: goto L_08AD95E4;
    case 289u: goto L_08AD95EC;
    case 290u: goto L_08AD95F8;
    case 291u: goto L_08AD960C;
    case 292u: goto L_08AD9614;
    case 293u: goto L_08AD9620;
    case 294u: goto L_08AD9634;
    case 295u: goto L_08AD963C;
    case 296u: goto L_08AD9648;
    case 297u: goto L_08AD9658;
    case 298u: goto L_08AD9664;
    case 299u: goto L_08AD9678;
    case 300u: goto L_08AD9680;
    case 301u: goto L_08AD9688;
    case 302u: goto L_08AD9690;
    case 303u: goto L_08AD9698;
    case 304u: goto L_08AD96A0;
    case 305u: goto L_08AD96A8;
    case 306u: goto L_08AD96B0;
    case 307u: goto L_08AD96B8;
    case 308u: goto L_08AD96BC;
    case 309u: goto L_08AD96C8;
    case 310u: goto L_08AD96DC;
    case 311u: goto L_08AD96E4;
    case 312u: goto L_08AD96EC;
    case 313u: goto L_08AD96F4;
    case 314u: goto L_08AD96FC;
    case 315u: goto L_08AD9704;
    case 316u: goto L_08AD970C;
    case 317u: goto L_08AD9714;
    case 318u: goto L_08AD971C;
    case 319u: goto L_08AD9720;
    case 320u: goto L_08AD972C;
    case 321u: goto L_08AD9744;
    case 322u: goto L_08AD9750;
    case 323u: goto L_08AD9758;
    case 324u: goto L_08AD9760;
    case 325u: goto L_08AD9768;
    case 326u: goto L_08AD9770;
    case 327u: goto L_08AD9778;
    case 328u: goto L_08AD9780;
    case 329u: goto L_08AD9788;
    case 330u: goto L_08AD9790;
    case 331u: goto L_08AD9798;
    case 332u: goto L_08AD97A0;
    case 333u: goto L_08AD97A8;
    case 334u: goto L_08AD97B0;
    case 335u: goto L_08AD97B8;
    case 336u: goto L_08AD97C0;
    case 337u: goto L_08AD97C8;
    case 338u: goto L_08AD97D0;
    case 339u: goto L_08AD97D8;
    case 340u: goto L_08AD97E0;
    case 341u: goto L_08AD97E8;
    case 342u: goto L_08AD97F0;
    case 343u: goto L_08AD97F8;
    case 344u: goto L_08AD9800;
    case 345u: goto L_08AD9804;
    case 346u: goto L_08AD9814;
    case 347u: goto L_08AD982C;
    case 348u: goto L_08AD9838;
    case 349u: goto L_08AD9840;
    case 350u: goto L_08AD9848;
    case 351u: goto L_08AD9850;
    case 352u: goto L_08AD9858;
    case 353u: goto L_08AD9860;
    case 354u: goto L_08AD9868;
    case 355u: goto L_08AD9870;
    case 356u: goto L_08AD9878;
    case 357u: goto L_08AD9880;
    case 358u: goto L_08AD9888;
    case 359u: goto L_08AD9890;
    case 360u: goto L_08AD9898;
    case 361u: goto L_08AD98A0;
    case 362u: goto L_08AD98A8;
    case 363u: goto L_08AD98B0;
    case 364u: goto L_08AD98B8;
    case 365u: goto L_08AD98C0;
    case 366u: goto L_08AD98C8;
    case 367u: goto L_08AD98D0;
    case 368u: goto L_08AD98D8;
    case 369u: goto L_08AD98E0;
    case 370u: goto L_08AD98E8;
    case 371u: goto L_08AD98EC;
    case 372u: goto L_08AD98FC;
    case 373u: goto L_08AD990C;
    case 374u: goto L_08AD9914;
    case 375u: goto L_08AD9918;
    case 376u: goto L_08AD9920;
    case 377u: goto L_08AD994C;
    case 378u: goto L_08AD9960;
    case 379u: goto L_08AD9980;
    case 380u: goto L_08AD998C;
    case 381u: goto L_08AD99E8;
    case 382u: goto L_08AD9A04;
    case 383u: goto L_08AD9A10;
    case 384u: goto L_08AD9A18;
    case 385u: goto L_08AD9A24;
    case 386u: goto L_08AD9A34;
    case 387u: goto L_08AD9A40;
    case 388u: goto L_08AD9A4C;
    case 389u: goto L_08AD9A64;
    case 390u: goto L_08AD9A74;
    case 391u: goto L_08AD9A7C;
    case 392u: goto L_08AD9A88;
    case 393u: goto L_08AD9A94;
    case 394u: goto L_08AD9AA4;
    case 395u: goto L_08AD9AAC;
    case 396u: goto L_08AD9AB4;
    case 397u: goto L_08AD9AC8;
    case 398u: goto L_08AD9AD8;
    case 399u: goto L_08AD9AE0;
    case 400u: goto L_08AD9AE8;
    case 401u: goto L_08AD9B08;
    case 402u: goto L_08AD9B34;
    case 403u: goto L_08AD9B40;
    case 404u: goto L_08AD9B48;
    case 405u: goto L_08AD9B54;
    case 406u: goto L_08AD9B60;
    case 407u: goto L_08AD9B78;
    case 408u: goto L_08AD9B7C;
    case 409u: goto L_08AD9B88;
    case 410u: goto L_08AD9B94;
    case 411u: goto L_08AD9BA0;
    case 412u: goto L_08AD9BA8;
    case 413u: goto L_08AD9BC0;
    case 414u: goto L_08AD9BC8;
    case 415u: goto L_08AD9BD8;
    case 416u: goto L_08AD9BE4;
    case 417u: goto L_08AD9BF4;
    case 418u: goto L_08AD9BFC;
    case 419u: goto L_08AD9C04;
    case 420u: goto L_08AD9C0C;
    case 421u: goto L_08AD9C18;
    case 422u: goto L_08AD9C20;
    case 423u: goto L_08AD9C30;
    case 424u: goto L_08AD9C3C;
    case 425u: goto L_08AD9C50;
    case 426u: goto L_08AD9C54;
    case 427u: goto L_08AD9C74;
    case 428u: goto L_08AD9C88;
    case 429u: goto L_08AD9C90;
    case 430u: goto L_08AD9CB0;
    case 431u: goto L_08AD9CB8;
    case 432u: goto L_08AD9CCC;
    case 433u: goto L_08AD9CD4;
    case 434u: goto L_08AD9CF4;
    case 435u: goto L_08AD9CFC;
    case 436u: goto L_08AD9D24;
    case 437u: goto L_08AD9D30;
    case 438u: goto L_08AD9D3C;
    case 439u: goto L_08AD9D4C;
    case 440u: goto L_08AD9D64;
    case 441u: goto L_08AD9D70;
    case 442u: goto L_08AD9D7C;
    case 443u: goto L_08AD9D94;
    case 444u: goto L_08AD9DA4;
    case 445u: goto L_08AD9DD8;
    case 446u: goto L_08AD9DE0;
    case 447u: goto L_08AD9DE8;
    case 448u: goto L_08AD9DF0;
    case 449u: goto L_08AD9DF8;
    case 450u: goto L_08AD9E04;
    case 451u: goto L_08AD9E0C;
    case 452u: goto L_08AD9E1C;
    case 453u: goto L_08AD9E34;
    case 454u: goto L_08AD9E3C;
    case 455u: goto L_08AD9E44;
    case 456u: goto L_08AD9E50;
    case 457u: goto L_08AD9E68;
    case 458u: goto L_08AD9E70;
    case 459u: goto L_08AD9E8C;
    case 460u: goto L_08AD9EA0;
    case 461u: goto L_08AD9EB4;
    case 462u: goto L_08AD9EC4;
    case 463u: goto L_08AD9ED0;
    case 464u: goto L_08AD9EDC;
    case 465u: goto L_08AD9EE4;
    case 466u: goto L_08AD9EE8;
    case 467u: goto L_08AD9EF0;
    case 468u: goto L_08AD9EF8;
    case 469u: goto L_08AD9F08;
    case 470u: goto L_08AD9F18;
    case 471u: goto L_08AD9F28;
    case 472u: goto L_08AD9F3C;
    case 473u: goto L_08AD9F60;
    case 474u: goto L_08AD9F70;
    case 475u: goto L_08AD9F80;
    case 476u: goto L_08AD9F8C;
    case 477u: goto L_08AD9F98;
    case 478u: goto L_08AD9FA4;
    case 479u: goto L_08AD9FB0;
    case 480u: goto L_08AD9FB8;
    case 481u: goto L_08AD9FBC;
    case 482u: goto L_08AD9FC4;
    case 483u: goto L_08AD9FCC;
    case 484u: goto L_08AD9FE0;
    case 485u: goto L_08ADA00C;
    case 486u: goto L_08ADA028;
    case 487u: goto L_08ADA030;
    case 488u: goto L_08ADA040;
    case 489u: goto L_08ADA04C;
    case 490u: goto L_08ADA058;
    case 491u: goto L_08ADA070;
    case 492u: goto L_08ADA074;
    case 493u: goto L_08ADA07C;
    case 494u: goto L_08ADA094;
    case 495u: goto L_08ADA0F8;
    case 496u: goto L_08ADA110;
    case 497u: goto L_08ADA128;
    case 498u: goto L_08ADA130;
    case 499u: goto L_08ADA140;
    case 500u: goto L_08ADA148;
    case 501u: goto L_08ADA14C;
    case 502u: goto L_08ADA154;
    case 503u: goto L_08ADA15C;
    case 504u: goto L_08ADA16C;
    case 505u: goto L_08ADA174;
    case 506u: goto L_08ADA178;
    case 507u: goto L_08ADA184;
    case 508u: goto L_08ADA18C;
    case 509u: goto L_08ADA194;
    case 510u: goto L_08ADA1A4;
    case 511u: goto L_08ADA1B0;
    case 512u: goto L_08ADA1B8;
    case 513u: goto L_08ADA1BC;
    case 514u: goto L_08ADA1C4;
    case 515u: goto L_08ADA1CC;
    case 516u: goto L_08ADA1D4;
    case 517u: goto L_08ADA1E0;
    case 518u: goto L_08ADA1F4;
    case 519u: goto L_08ADA1FC;
    case 520u: goto L_08ADA204;
    case 521u: goto L_08ADA214;
    case 522u: goto L_08ADA22C;
    case 523u: goto L_08ADA234;
    case 524u: goto L_08ADA248;
    case 525u: goto L_08ADA260;
    case 526u: goto L_08ADA268;
    case 527u: goto L_08ADA27C;
    case 528u: goto L_08ADA298;
    case 529u: goto L_08ADA2A0;
    case 530u: goto L_08ADA2B0;
    case 531u: goto L_08ADA2C4;
    case 532u: goto L_08ADA2CC;
    case 533u: goto L_08ADA2E0;
    case 534u: goto L_08ADA300;
    case 535u: goto L_08ADA320;
    case 536u: goto L_08ADA330;
    case 537u: goto L_08ADA340;
    case 538u: goto L_08ADA358;
    case 539u: goto L_08ADA3B0;
    case 540u: goto L_08ADA3BC;
    case 541u: goto L_08ADA3D0;
    case 542u: goto L_08ADA3D8;
    case 543u: goto L_08ADA3E0;
    case 544u: goto L_08ADA3E8;
    case 545u: goto L_08ADA3F8;
    case 546u: goto L_08ADA400;
    case 547u: goto L_08ADA408;
    case 548u: goto L_08ADA418;
    case 549u: goto L_08ADA42C;
    case 550u: goto L_08ADA434;
    case 551u: goto L_08ADA444;
    case 552u: goto L_08ADA458;
    case 553u: goto L_08ADA470;
    case 554u: goto L_08ADA478;
    case 555u: goto L_08ADA494;
    case 556u: goto L_08ADA49C;
    case 557u: goto L_08ADA4AC;
    case 558u: goto L_08ADA4B4;
    case 559u: goto L_08ADA4C4;
    case 560u: goto L_08ADA4CC;
    case 561u: goto L_08ADA4DC;
    case 562u: goto L_08ADA4F0;
    case 563u: goto L_08ADA4F8;
    case 564u: goto L_08ADA504;
    case 565u: goto L_08ADA518;
    case 566u: goto L_08ADA530;
    case 567u: goto L_08ADA538;
    case 568u: goto L_08ADA554;
    case 569u: goto L_08ADA55C;
    case 570u: goto L_08ADA578;
    case 571u: goto L_08ADA580;
    case 572u: goto L_08ADA588;
    case 573u: goto L_08ADA590;
    case 574u: goto L_08ADA5A0;
    case 575u: goto L_08ADA5B4;
    case 576u: goto L_08ADA5BC;
    case 577u: goto L_08ADA5C8;
    case 578u: goto L_08ADA5DC;
    case 579u: goto L_08ADA5F4;
    case 580u: goto L_08ADA5FC;
    case 581u: goto L_08ADA618;
    case 582u: goto L_08ADA620;
    case 583u: goto L_08ADA63C;
    case 584u: goto L_08ADA644;
    case 585u: goto L_08ADA64C;
    case 586u: goto L_08ADA65C;
    case 587u: goto L_08ADA66C;
    case 588u: goto L_08ADA688;
    case 589u: goto L_08ADA690;
    case 590u: goto L_08ADA698;
    case 591u: goto L_08ADA6A0;
    case 592u: goto L_08ADA6C4;
    case 593u: goto L_08ADA6CC;
    case 594u: goto L_08ADA6D4;
    case 595u: goto L_08ADA6F0;
    case 596u: goto L_08ADA6F8;
    case 597u: goto L_08ADA700;
    case 598u: goto L_08ADA718;
    case 599u: goto L_08ADA758;
    case 600u: goto L_08ADA760;
    case 601u: goto L_08ADA77C;
    case 602u: goto L_08ADA784;
    case 603u: goto L_08ADA78C;
    case 604u: goto L_08ADA7A8;
    case 605u: goto L_08ADA7B0;
    case 606u: goto L_08ADA7B4;
    case 607u: goto L_08ADA7C8;
    case 608u: goto L_08ADA7D8;
    case 609u: goto L_08ADA7EC;
    case 610u: goto L_08ADA7FC;
    case 611u: goto L_08ADA804;
    case 612u: goto L_08ADA80C;
    case 613u: goto L_08ADA82C;
    case 614u: goto L_08ADA83C;
    case 615u: goto L_08ADA840;
    case 616u: goto L_08ADA848;
    case 617u: goto L_08ADA854;
    case 618u: goto L_08ADA860;
    case 619u: goto L_08ADA868;
    case 620u: goto L_08ADA878;
    case 621u: goto L_08ADA884;
    case 622u: goto L_08ADA8A4;
    case 623u: goto L_08ADA8D8;
    case 624u: goto L_08ADA8E0;
    case 625u: goto L_08ADA8FC;
    case 626u: goto L_08ADA908;
    case 627u: goto L_08ADA914;
    case 628u: goto L_08ADA91C;
    case 629u: goto L_08ADA920;
    case 630u: goto L_08ADA924;
    case 631u: goto L_08ADA930;
    case 632u: goto L_08ADA93C;
    case 633u: goto L_08ADA948;
    case 634u: goto L_08ADA954;
    case 635u: goto L_08ADA95C;
    case 636u: goto L_08ADA960;
    case 637u: goto L_08ADA964;
    case 638u: goto L_08ADA96C;
    case 639u: goto L_08ADA978;
    case 640u: goto L_08ADA984;
    case 641u: goto L_08ADA990;
    case 642u: goto L_08ADA998;
    case 643u: goto L_08ADA99C;
    case 644u: goto L_08ADA9A0;
    case 645u: goto L_08ADA9A8;
    case 646u: goto L_08ADA9B4;
    case 647u: goto L_08ADA9C0;
    case 648u: goto L_08ADA9CC;
    case 649u: goto L_08ADA9D8;
    case 650u: goto L_08ADA9E0;
    case 651u: goto L_08ADA9E4;
    case 652u: goto L_08ADA9EC;
    case 653u: goto L_08ADA9F4;
    case 654u: goto L_08ADA9FC;
    case 655u: goto L_08ADAA20;
    case 656u: goto L_08ADAA2C;
    case 657u: goto L_08ADAA34;
    case 658u: goto L_08ADAA3C;
    case 659u: goto L_08ADAA44;
    case 660u: goto L_08ADAA4C;
    case 661u: goto L_08ADAA54;
    case 662u: goto L_08ADAA5C;
    case 663u: goto L_08ADAA64;
    case 664u: goto L_08ADAA8C;
    case 665u: goto L_08ADAA94;
    case 666u: goto L_08ADAA9C;
    case 667u: goto L_08ADAADC;
    case 668u: goto L_08ADAAFC;
    case 669u: goto L_08ADAB04;
    case 670u: goto L_08ADAB0C;
    case 671u: goto L_08ADAB14;
    case 672u: goto L_08ADAB20;
    case 673u: goto L_08ADAB28;
    case 674u: goto L_08ADAB34;
    case 675u: goto L_08ADAB40;
    case 676u: goto L_08ADAB4C;
    case 677u: goto L_08ADAB50;
    case 678u: goto L_08ADAB5C;
    case 679u: goto L_08ADAB88;
    case 680u: goto L_08ADAB90;
    case 681u: goto L_08ADAB98;
    case 682u: goto L_08ADABAC;
    case 683u: goto L_08ADABB4;
    case 684u: goto L_08ADABC0;
    case 685u: goto L_08ADABC8;
    case 686u: goto L_08ADABD4;
    case 687u: goto L_08ADABDC;
    case 688u: goto L_08ADABE4;
    case 689u: goto L_08ADABEC;
    case 690u: goto L_08ADAC00;
    case 691u: goto L_08ADAC08;
    case 692u: goto L_08ADAC10;
    case 693u: goto L_08ADAC1C;
    case 694u: goto L_08ADAC34;
    case 695u: goto L_08ADAC3C;
    case 696u: goto L_08ADAC48;
    case 697u: goto L_08ADAC54;
    case 698u: goto L_08ADAC60;
    case 699u: goto L_08ADAC68;
    case 700u: goto L_08ADAC6C;
    case 701u: goto L_08ADAC74;
    case 702u: goto L_08ADAC7C;
    case 703u: goto L_08ADAC88;
    case 704u: goto L_08ADAC90;
    case 705u: goto L_08ADACB4;
    case 706u: goto L_08ADACC4;
    case 707u: goto L_08ADACFC;
    case 708u: goto L_08ADAD10;
    case 709u: goto L_08ADAD1C;
    case 710u: goto L_08ADAD34;
    case 711u: goto L_08ADAD3C;
    case 712u: goto L_08ADAD44;
    case 713u: goto L_08ADAD50;
    case 714u: goto L_08ADAD64;
    case 715u: goto L_08ADAD6C;
    case 716u: goto L_08ADAD7C;
    case 717u: goto L_08ADAD88;
    case 718u: goto L_08ADAD94;
    case 719u: goto L_08ADADBC;
    case 720u: goto L_08ADAE00;
    case 721u: goto L_08ADAE24;
    case 722u: goto L_08ADAED0;
    case 723u: goto L_08ADAF7C;
    case 724u: goto L_08ADAFD4;
    case 725u: goto L_08ADAFD8;
    case 726u: goto L_08ADAFE8;
    case 727u: goto L_08ADAFF0;
    case 728u: goto L_08ADAFFC;
    case 729u: goto L_08ADB010;
    case 730u: goto L_08ADB01C;
    case 731u: goto L_08ADB028;
    case 732u: goto L_08ADB034;
    case 733u: goto L_08ADB040;
    case 734u: goto L_08ADB04C;
    case 735u: goto L_08ADB078;
    case 736u: goto L_08ADB090;
    case 737u: goto L_08ADB09C;
    case 738u: goto L_08ADB0A4;
    case 739u: goto L_08ADB0B4;
    case 740u: goto L_08ADB0C0;
    case 741u: goto L_08ADB130;
    case 742u: goto L_08ADB13C;
    case 743u: goto L_08ADB148;
    case 744u: goto L_08ADB150;
    case 745u: goto L_08ADB158;
    case 746u: goto L_08ADB160;
    case 747u: goto L_08ADB178;
    case 748u: goto L_08ADB184;
    case 749u: goto L_08ADB198;
    case 750u: goto L_08ADB1B0;
    case 751u: goto L_08ADB1D8;
    case 752u: goto L_08ADB1E4;
    case 753u: goto L_08ADB1F8;
    case 754u: goto L_08ADB214;
    case 755u: goto L_08ADB21C;
    case 756u: goto L_08ADB22C;
    case 757u: goto L_08ADB230;
    case 758u: goto L_08ADB234;
    case 759u: goto L_08ADB290;
    case 760u: goto L_08ADB29C;
    case 761u: goto L_08ADB2A4;
    case 762u: goto L_08ADB398;
    case 763u: goto L_08ADB3A4;
    case 764u: goto L_08ADB46C;
    case 765u: goto L_08ADB474;
    case 766u: goto L_08ADB484;
    case 767u: goto L_08ADB490;
    case 768u: goto L_08ADB494;
    case 769u: goto L_08ADB498;
    case 770u: goto L_08ADB4A0;
    case 771u: goto L_08ADB4B0;
    case 772u: goto L_08ADB4B8;
    case 773u: goto L_08ADB4C8;
    case 774u: goto L_08ADB4D4;
    case 775u: goto L_08ADB4D8;
    case 776u: goto L_08ADB4DC;
    case 777u: goto L_08ADB4E4;
    case 778u: goto L_08ADB4F8;
    case 779u: goto L_08ADB508;
    case 780u: goto L_08ADB514;
    case 781u: goto L_08ADB51C;
    case 782u: goto L_08ADB58C;
    case 783u: goto L_08ADB598;
    case 784u: goto L_08ADB5CC;
    case 785u: goto L_08ADB5D4;
    case 786u: goto L_08ADB5DC;
    case 787u: goto L_08ADB5E4;
    case 788u: goto L_08ADB5F0;
    case 789u: goto L_08ADB5F8;
    case 790u: goto L_08ADB604;
    case 791u: goto L_08ADB60C;
    case 792u: goto L_08ADB614;
    case 793u: goto L_08ADB628;
    case 794u: goto L_08ADB62C;
    case 795u: goto L_08ADB648;
    case 796u: goto L_08ADB6B8;
    case 797u: goto L_08ADB710;
    case 798u: goto L_08ADB720;
    case 799u: goto L_08ADB728;
    case 800u: goto L_08ADB72C;
    case 801u: goto L_08ADB734;
    case 802u: goto L_08ADB748;
    case 803u: goto L_08ADB760;
    case 804u: goto L_08ADB770;
    case 805u: goto L_08ADB780;
    case 806u: goto L_08ADB788;
    case 807u: goto L_08ADB78C;
    case 808u: goto L_08ADB794;
    case 809u: goto L_08ADB7A8;
    case 810u: goto L_08ADB7C0;
    case 811u: goto L_08ADB7CC;
    case 812u: goto L_08ADB820;
    case 813u: goto L_08ADB830;
    case 814u: goto L_08ADB840;
    case 815u: goto L_08ADB850;
    case 816u: goto L_08ADB85C;
    case 817u: goto L_08ADB864;
    case 818u: goto L_08ADB86C;
    case 819u: goto L_08ADB87C;
    case 820u: goto L_08ADB88C;
    case 821u: goto L_08ADB89C;
    case 822u: goto L_08ADB8AC;
    case 823u: goto L_08ADB8B8;
    case 824u: goto L_08ADB8C0;
    case 825u: goto L_08ADB8C8;
    case 826u: goto L_08ADB8CC;
    case 827u: goto L_08ADB8FC;
    case 828u: goto L_08ADB904;
    case 829u: goto L_08ADB93C;
    case 830u: goto L_08ADB944;
    case 831u: goto L_08ADB978;
    case 832u: goto L_08ADB980;
    case 833u: goto L_08ADB9B8;
    case 834u: goto L_08ADB9C0;
    case 835u: goto L_08ADB9C4;
    case 836u: goto L_08ADB9CC;
    case 837u: goto L_08ADB9D8;
    case 838u: goto L_08ADB9E0;
    case 839u: goto L_08ADB9EC;
    case 840u: goto L_08ADB9F4;
    case 841u: goto L_08ADB9FC;
    case 842u: goto L_08ADBA14;
    case 843u: goto L_08ADBA18;
    case 844u: goto L_08ADBA28;
    case 845u: goto L_08ADBA98;
    case 846u: goto L_08ADBAF4;
    case 847u: goto L_08ADBB04;
    case 848u: goto L_08ADBB10;
    case 849u: goto L_08ADBB18;
    case 850u: goto L_08ADBB20;
    case 851u: goto L_08ADBB38;
    case 852u: goto L_08ADBB58;
    case 853u: goto L_08ADBB68;
    case 854u: goto L_08ADBB78;
    case 855u: goto L_08ADBB88;
    case 856u: goto L_08ADBB94;
    case 857u: goto L_08ADBB98;
    case 858u: goto L_08ADBBB0;
    case 859u: goto L_08ADBBBC;
    case 860u: goto L_08ADBBC0;
    case 861u: goto L_08ADBBC8;
    case 862u: goto L_08ADBBD8;
    case 863u: goto L_08ADBBE8;
    case 864u: goto L_08ADBBF4;
    case 865u: goto L_08ADBBFC;
    case 866u: goto L_08ADBC04;
    case 867u: goto L_08ADBC1C;
    case 868u: goto L_08ADBC3C;
    case 869u: goto L_08ADBC4C;
    case 870u: goto L_08ADBC5C;
    case 871u: goto L_08ADBC6C;
    case 872u: goto L_08ADBC78;
    case 873u: goto L_08ADBC7C;
    case 874u: goto L_08ADBC94;
    case 875u: goto L_08ADBCA0;
    case 876u: goto L_08ADBCA4;
    case 877u: goto L_08ADBCAC;
    case 878u: goto L_08ADBCB8;
    case 879u: goto L_08ADBD0C;
    case 880u: goto L_08ADBD1C;
    case 881u: goto L_08ADBD2C;
    case 882u: goto L_08ADBD3C;
    case 883u: goto L_08ADBD48;
    case 884u: goto L_08ADBD50;
    case 885u: goto L_08ADBD58;
    case 886u: goto L_08ADBD68;
    case 887u: goto L_08ADBD78;
    case 888u: goto L_08ADBD88;
    case 889u: goto L_08ADBD98;
    case 890u: goto L_08ADBDA4;
    case 891u: goto L_08ADBDAC;
    case 892u: goto L_08ADBDB4;
    case 893u: goto L_08ADBDB8;
    case 894u: goto L_08ADBDE8;
    case 895u: goto L_08ADBDF0;
    case 896u: goto L_08ADBE28;
    case 897u: goto L_08ADBE30;
    case 898u: goto L_08ADBE64;
    case 899u: goto L_08ADBE6C;
    case 900u: goto L_08ADBEA4;
    case 901u: goto L_08ADBEAC;
    case 902u: goto L_08ADBEB0;
    case 903u: goto L_08ADBEBC;
    case 904u: goto L_08ADBEC4;
    case 905u: goto L_08ADBECC;
    case 906u: goto L_08ADBED4;
    case 907u: goto L_08ADBEDC;
    case 908u: goto L_08ADBEE4;
    case 909u: goto L_08ADBEE8;
    case 910u: goto L_08ADBEF8;
    case 911u: goto L_08ADBEFC;
    case 912u: goto L_08ADBF0C;
    case 913u: goto L_08ADBF20;
    case 914u: goto L_08ADBF28;
    case 915u: goto L_08ADBF30;
    case 916u: goto L_08ADBF38;
    case 917u: goto L_08ADBF40;
    case 918u: goto L_08ADBF48;
    case 919u: goto L_08ADBF50;
    case 920u: goto L_08ADBF58;
    case 921u: goto L_08ADBF60;
    case 922u: goto L_08ADBF68;
    case 923u: goto L_08ADBF70;
    case 924u: goto L_08ADBF90;
    case 925u: goto L_08ADBFB8;
    case 926u: goto L_08ADBFCC;
    case 927u: goto L_08ADBFD8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AD8000:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[19]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
      if (branch_taken) {
          goto L_08AD8044;
      }
      goto L_08AD801C;
    }
L_08AD801C:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08AD8028u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD8028u) goto L_08AD8028;
    return;
L_08AD8028:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8040;
      }
      goto L_08AD8034;
    }
L_08AD8034:
    ctx.gpr[31] = (0x08AD803Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD803Cu) goto L_08AD803C;
    return;
L_08AD803C:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08AD8040;
L_08AD8040:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24444), ctx.gpr[22]);
    goto L_08AD8044;
L_08AD8044:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD8050u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD8050u) goto L_08AD8050;
    return;
L_08AD8050:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD8064u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08AD8064u) goto L_08AD8064;
    return;
L_08AD8064:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AD812C;
      }
      goto L_08AD806C;
    }
L_08AD806C:
    ctx.gpr[21] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-8832));
      if (branch_taken) {
          goto L_08AD80A4;
      }
      goto L_08AD8078;
    }
L_08AD8078:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AD8084u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD8084u) goto L_08AD8084;
    return;
L_08AD8084:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD809C;
      }
      goto L_08AD8090;
    }
L_08AD8090:
    ctx.gpr[31] = (0x08AD8098u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8098u) goto L_08AD8098;
    return;
L_08AD8098:
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
    goto L_08AD809C;
L_08AD809C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24444), ctx.gpr[19]);
    ctx.gpr[22] = (ctx.gpr[19] | 0u);
    goto L_08AD80A4;
L_08AD80A4:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD80B0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD80B0u) goto L_08AD80B0;
    return;
L_08AD80B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD80BCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x08AD80BCu) goto L_08AD80BC;
    return;
L_08AD80BC:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24444)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[19]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
      if (branch_taken) {
          goto L_08AD8108;
      }
      goto L_08AD80E0;
    }
L_08AD80E0:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08AD80ECu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD80ECu) goto L_08AD80EC;
    return;
L_08AD80EC:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8104;
      }
      goto L_08AD80F8;
    }
L_08AD80F8:
    ctx.gpr[31] = (0x08AD8100u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8100u) goto L_08AD8100;
    return;
L_08AD8100:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08AD8104;
L_08AD8104:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24444), ctx.gpr[22]);
    goto L_08AD8108;
L_08AD8108:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD8114u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD8114u) goto L_08AD8114;
    return;
L_08AD8114:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD8128u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08AD8128u) goto L_08AD8128;
    return;
L_08AD8128:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    goto L_08AD812C;
L_08AD812C:
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AD814Cu);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AD8BF8;
L_08AD814C:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD818C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16776u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (2230u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-25811)));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD82C0;
      }
      goto L_08AD81FC;
    }
L_08AD81FC:
    ctx.gpr[21] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-8824));
      if (branch_taken) {
          goto L_08AD8234;
      }
      goto L_08AD8208;
    }
L_08AD8208:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AD8214u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD8214u) goto L_08AD8214;
    return;
L_08AD8214:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD822C;
      }
      goto L_08AD8220;
    }
L_08AD8220:
    ctx.gpr[31] = (0x08AD8228u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8228u) goto L_08AD8228;
    return;
L_08AD8228:
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
    goto L_08AD822C;
L_08AD822C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24444), ctx.gpr[19]);
    ctx.gpr[22] = (ctx.gpr[19] | 0u);
    goto L_08AD8234;
L_08AD8234:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD8240u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD8240u) goto L_08AD8240;
    return;
L_08AD8240:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD824Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x08AD824Cu) goto L_08AD824C;
    return;
L_08AD824C:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24444)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[19]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
      if (branch_taken) {
          goto L_08AD8298;
      }
      goto L_08AD8270;
    }
L_08AD8270:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08AD827Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD827Cu) goto L_08AD827C;
    return;
L_08AD827C:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8294;
      }
      goto L_08AD8288;
    }
L_08AD8288:
    ctx.gpr[31] = (0x08AD8290u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8290u) goto L_08AD8290;
    return;
L_08AD8290:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08AD8294;
L_08AD8294:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24444), ctx.gpr[22]);
    goto L_08AD8298;
L_08AD8298:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD82A4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD82A4u) goto L_08AD82A4;
    return;
L_08AD82A4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD82B8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08AD82B8u) goto L_08AD82B8;
    return;
L_08AD82B8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AD8380;
      }
      goto L_08AD82C0;
    }
L_08AD82C0:
    ctx.gpr[21] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-8816));
      if (branch_taken) {
          goto L_08AD82F8;
      }
      goto L_08AD82CC;
    }
L_08AD82CC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AD82D8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD82D8u) goto L_08AD82D8;
    return;
L_08AD82D8:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD82F0;
      }
      goto L_08AD82E4;
    }
L_08AD82E4:
    ctx.gpr[31] = (0x08AD82ECu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD82ECu) goto L_08AD82EC;
    return;
L_08AD82EC:
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
    goto L_08AD82F0;
L_08AD82F0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24444), ctx.gpr[19]);
    ctx.gpr[22] = (ctx.gpr[19] | 0u);
    goto L_08AD82F8;
L_08AD82F8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD8304u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD8304u) goto L_08AD8304;
    return;
L_08AD8304:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD8310u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x08AD8310u) goto L_08AD8310;
    return;
L_08AD8310:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24444)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[19]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
      if (branch_taken) {
          goto L_08AD835C;
      }
      goto L_08AD8334;
    }
L_08AD8334:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08AD8340u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD8340u) goto L_08AD8340;
    return;
L_08AD8340:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8358;
      }
      goto L_08AD834C;
    }
L_08AD834C:
    ctx.gpr[31] = (0x08AD8354u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8354u) goto L_08AD8354;
    return;
L_08AD8354:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08AD8358;
L_08AD8358:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24444), ctx.gpr[22]);
    goto L_08AD835C;
L_08AD835C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD8368u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD8368u) goto L_08AD8368;
    return;
L_08AD8368:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD837Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08AD837Cu) goto L_08AD837C;
    return;
L_08AD837C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    goto L_08AD8380;
L_08AD8380:
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AD83A0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AD8AF0;
L_08AD83A0:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD83E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16904u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8808));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD8474;
      }
      goto L_08AD8448;
    }
L_08AD8448:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08AD8454u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD8454u) goto L_08AD8454;
    return;
L_08AD8454:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD846C;
      }
      goto L_08AD8460;
    }
L_08AD8460:
    ctx.gpr[31] = (0x08AD8468u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8468u) goto L_08AD8468;
    return;
L_08AD8468:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_08AD846C;
L_08AD846C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[21]);
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    goto L_08AD8474;
L_08AD8474:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD8480u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD8480u) goto L_08AD8480;
    return;
L_08AD8480:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD848Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x08AD848Cu) goto L_08AD848C;
    return;
L_08AD848C:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[21]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
      if (branch_taken) {
          goto L_08AD84E0;
      }
      goto L_08AD84B8;
    }
L_08AD84B8:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08AD84C4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD84C4u) goto L_08AD84C4;
    return;
L_08AD84C4:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD84DC;
      }
      goto L_08AD84D0;
    }
L_08AD84D0:
    ctx.gpr[31] = (0x08AD84D8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD84D8u) goto L_08AD84D8;
    return;
L_08AD84D8:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08AD84DC;
L_08AD84DC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[22]);
    goto L_08AD84E0;
L_08AD84E0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD84ECu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD84ECu) goto L_08AD84EC;
    return;
L_08AD84EC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD8500u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08AD8500u) goto L_08AD8500;
    return;
L_08AD8500:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AD8524u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AD9074;
L_08AD8524:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8564:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16904u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8800));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD85F8;
      }
      goto L_08AD85CC;
    }
L_08AD85CC:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08AD85D8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD85D8u) goto L_08AD85D8;
    return;
L_08AD85D8:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD85F0;
      }
      goto L_08AD85E4;
    }
L_08AD85E4:
    ctx.gpr[31] = (0x08AD85ECu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD85ECu) goto L_08AD85EC;
    return;
L_08AD85EC:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_08AD85F0;
L_08AD85F0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[21]);
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    goto L_08AD85F8;
L_08AD85F8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD8604u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD8604u) goto L_08AD8604;
    return;
L_08AD8604:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD8610u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x08AD8610u) goto L_08AD8610;
    return;
L_08AD8610:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[21]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
      if (branch_taken) {
          goto L_08AD8664;
      }
      goto L_08AD863C;
    }
L_08AD863C:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08AD8648u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD8648u) goto L_08AD8648;
    return;
L_08AD8648:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8660;
      }
      goto L_08AD8654;
    }
L_08AD8654:
    ctx.gpr[31] = (0x08AD865Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD865Cu) goto L_08AD865C;
    return;
L_08AD865C:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08AD8660;
L_08AD8660:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[22]);
    goto L_08AD8664;
L_08AD8664:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD8670u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD8670u) goto L_08AD8670;
    return;
L_08AD8670:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD8684u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08AD8684u) goto L_08AD8684;
    return;
L_08AD8684:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AD86A8u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AD9074;
L_08AD86A8:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD86E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AD871C;
      }
      goto L_08AD8710;
    }
L_08AD8710:
    ctx.gpr[31] = (0x08AD8718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD8718u) goto L_08AD8718;
    return;
L_08AD8718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    goto L_08AD871C;
L_08AD871C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD8748;
      }
      goto L_08AD8728;
    }
L_08AD8728:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 1u);
        goto L_08AD874C;
    }
    goto L_08AD8734;
L_08AD8734:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (2209u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-26392));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AD8750;
      }
      goto L_08AD8748;
    }
L_08AD8748:
    ctx.gpr[5] = (0u | 1u);
    goto L_08AD874C;
L_08AD874C:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08AD8750;
L_08AD8750:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8890;
      }
      goto L_08AD8758;
    }
L_08AD8758:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD8774;
      }
      goto L_08AD8760;
    }
L_08AD8760:
    ctx.gpr[31] = (0x08AD8768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD8768u) goto L_08AD8768;
    return;
L_08AD8768:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD8774;
L_08AD8774:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD879C;
      }
      goto L_08AD877C;
    }
L_08AD877C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (0u | 1u);
        goto L_08AD87A0;
    }
    goto L_08AD8788;
L_08AD8788:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (2209u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-26392));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[8];
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08AD87A4;
      }
      goto L_08AD879C;
    }
L_08AD879C:
    ctx.gpr[6] = (0u | 1u);
    goto L_08AD87A0;
L_08AD87A0:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08AD87A4;
L_08AD87A4:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
        goto L_08AD8804;
    }
    goto L_08AD87AC;
L_08AD87AC:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD87D4;
      }
      goto L_08AD87B4;
    }
L_08AD87B4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD87D4;
      }
      goto L_08AD87C0;
    }
L_08AD87C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (2209u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-26384));
    if (ctx.gpr[8] == ctx.gpr[6]) {
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
        goto L_08AD8804;
    }
    goto L_08AD87D4;
L_08AD87D4:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (0u | 1u);
        goto L_08AD8800;
    }
    goto L_08AD87DC;
L_08AD87DC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 1u);
        goto L_08AD8800;
    }
    goto L_08AD87E8;
L_08AD87E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (2209u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-25736));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AD8804;
      }
      goto L_08AD87FC;
    }
L_08AD87FC:
    ctx.gpr[5] = (0u | 1u);
    goto L_08AD8800;
L_08AD8800:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08AD8804;
L_08AD8804:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8890;
      }
      goto L_08AD880C;
    }
L_08AD880C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3164)));
        goto L_08AD8824;
    }
    goto L_08AD8814;
L_08AD8814:
    ctx.gpr[31] = (0x08AD881Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD881Cu) goto L_08AD881C;
    return;
L_08AD881C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3164)));
    goto L_08AD8824;
L_08AD8824:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD8880;
      }
      goto L_08AD882C;
    }
L_08AD882C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8858;
      }
      goto L_08AD8838;
    }
L_08AD8838:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8858;
      }
      goto L_08AD8844;
    }
L_08AD8844:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (2209u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-25060));
    if (ctx.gpr[8] == ctx.gpr[7]) {
    ctx.gpr[6] = (0u | 1u);
        goto L_08AD8884;
    }
    goto L_08AD8858;
L_08AD8858:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
        goto L_08AD8888;
    }
    goto L_08AD8860;
L_08AD8860:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
        goto L_08AD8888;
    }
    goto L_08AD886C;
L_08AD886C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25068));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08AD8888;
      }
      goto L_08AD8880;
    }
L_08AD8880:
    ctx.gpr[6] = (0u | 1u);
    goto L_08AD8884;
L_08AD8884:
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    goto L_08AD8888;
L_08AD8888:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD894C;
      }
      goto L_08AD8890;
    }
L_08AD8890:
    ctx.gpr[31] = (0x08AD8898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x08AD8898u) goto L_08AD8898;
    return;
L_08AD8898:
    ctx.gpr[31] = (0x08AD88A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A55018u>(ctx, &aot_mem) && ctx.pc == 0x08AD88A0u) goto L_08AD88A0;
    return;
L_08AD88A0:
    ctx.gpr[31] = (0x08AD88A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD88A8u) goto L_08AD88A8;
    return;
L_08AD88A8:
    ctx.gpr[31] = (0x08AD88B0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD88B0u) goto L_08AD88B0;
    return;
L_08AD88B0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08AD88CCu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD88CCu) goto L_08AD88CC;
    return;
L_08AD88CC:
    ctx.gpr[31] = (0x08AD88D4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08AD88D4u) goto L_08AD88D4;
    return;
L_08AD88D4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AD88ECu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD88ECu) goto L_08AD88EC;
    return;
L_08AD88EC:
    ctx.gpr[31] = (0x08AD88F4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 236u, 0x08A55248u>(ctx, &aot_mem) && ctx.pc == 0x08AD88F4u) goto L_08AD88F4;
    return;
L_08AD88F4:
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[31] = (0x08AD8910u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08AD8910u) goto L_08AD8910;
    return;
L_08AD8910:
    ctx.gpr[31] = (0x08AD8918u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08AD8918u) goto L_08AD8918;
    return;
L_08AD8918:
    ctx.gpr[31] = (0x08AD8920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x08AD8920u) goto L_08AD8920;
    return;
L_08AD8920:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1368)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[7] = (ctx.gpr[17] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD8AA4;
      }
      goto L_08AD8934;
    }
L_08AD8934:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-8320)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD894C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8AD8;
      }
      goto L_08AD8954;
    }
L_08AD8954:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD8964u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 678u, 0x08AD7470u>(ctx, &aot_mem) && ctx.pc == 0x08AD8964u) goto L_08AD8964;
    return;
L_08AD8964:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
      if (branch_taken) {
          goto L_08AD8AA4;
      }
      goto L_08AD8970;
    }
L_08AD8970:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8988;
      }
      goto L_08AD897C;
    }
L_08AD897C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD89A4;
      }
      goto L_08AD8988;
    }
L_08AD8988:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD8998u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 696u, 0x08AD75F4u>(ctx, &aot_mem) && ctx.pc == 0x08AD8998u) goto L_08AD8998;
    return;
L_08AD8998:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
      if (branch_taken) {
          goto L_08AD8AA4;
      }
      goto L_08AD89A4;
    }
L_08AD89A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8AD8;
      }
      goto L_08AD89AC;
    }
L_08AD89AC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD89BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 714u, 0x08AD7778u>(ctx, &aot_mem) && ctx.pc == 0x08AD89BCu) goto L_08AD89BC;
    return;
L_08AD89BC:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
      if (branch_taken) {
          goto L_08AD8AA4;
      }
      goto L_08AD89C8;
    }
L_08AD89C8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD89D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 732u, 0x08AD78D8u>(ctx, &aot_mem) && ctx.pc == 0x08AD89D8u) goto L_08AD89D8;
    return;
L_08AD89D8:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
      if (branch_taken) {
          goto L_08AD8AA4;
      }
      goto L_08AD89E4;
    }
L_08AD89E4:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD89F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 750u, 0x08AD7A64u>(ctx, &aot_mem) && ctx.pc == 0x08AD89F4u) goto L_08AD89F4;
    return;
L_08AD89F4:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
      if (branch_taken) {
          goto L_08AD8AA4;
      }
      goto L_08AD8A00;
    }
L_08AD8A00:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD8A10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 768u, 0x08AD7C00u>(ctx, &aot_mem) && ctx.pc == 0x08AD8A10u) goto L_08AD8A10;
    return;
L_08AD8A10:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
      if (branch_taken) {
          goto L_08AD8AA4;
      }
      goto L_08AD8A1C;
    }
L_08AD8A1C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD8A2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 786u, 0x08AD7D9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD8A2Cu) goto L_08AD8A2C;
    return;
L_08AD8A2C:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
      if (branch_taken) {
          goto L_08AD8AA4;
      }
      goto L_08AD8A38;
    }
L_08AD8A38:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD8A48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 804u, 0x08AD7F38u>(ctx, &aot_mem) && ctx.pc == 0x08AD8A48u) goto L_08AD8A48;
    return;
L_08AD8A48:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
      if (branch_taken) {
          goto L_08AD8AA4;
      }
      goto L_08AD8A54;
    }
L_08AD8A54:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD8A64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD818C;
L_08AD8A64:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
      if (branch_taken) {
          goto L_08AD8AA4;
      }
      goto L_08AD8A70;
    }
L_08AD8A70:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD8A80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD83E0;
L_08AD8A80:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
      if (branch_taken) {
          goto L_08AD8AA4;
      }
      goto L_08AD8A8C;
    }
L_08AD8A8C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD8A9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD8564;
L_08AD8A9C:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    goto L_08AD8AA4;
L_08AD8AA4:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1364), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1372)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8AD8;
      }
      goto L_08AD8ABC;
    }
L_08AD8ABC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1372), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 477u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1368)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1364), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1368), ctx.gpr[4]);
    goto L_08AD8AD8;
L_08AD8AD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8AF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(1276));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[9] = (16776u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD8B3Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8B3Cu) goto L_08AD8B3C;
    return;
L_08AD8B3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AD8B58u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD8B58u) goto L_08AD8B58;
    return;
L_08AD8B58:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8B74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(1272));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[9] = (16776u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD8BC0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8BC0u) goto L_08AD8BC0;
    return;
L_08AD8BC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AD8BDCu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD8BDCu) goto L_08AD8BDC;
    return;
L_08AD8BDC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8BF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(1308));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[9] = (16776u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD8C44u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8C44u) goto L_08AD8C44;
    return;
L_08AD8C44:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AD8C60u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD8C60u) goto L_08AD8C60;
    return;
L_08AD8C60:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8C7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[9] = (16768u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(1312));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[9] = (16816u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD8CD4u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8CD4u) goto L_08AD8CD4;
    return;
L_08AD8CD4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AD8CF0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD8CF0u) goto L_08AD8CF0;
    return;
L_08AD8CF0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8D10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[9] = (16776u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1292));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD8D70u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8D70u) goto L_08AD8D70;
    return;
L_08AD8D70:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AD8D8Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD8D8Cu) goto L_08AD8D8C;
    return;
L_08AD8D8C:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[24];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1300));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08AD8DB8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8DB8u) goto L_08AD8DB8;
    return;
L_08AD8DB8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AD8DD4u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD8DD4u) goto L_08AD8DD4;
    return;
L_08AD8DD4:
    ctx.gpr[4] = (16904u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1320));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08AD8E08u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8E08u) goto L_08AD8E08;
    return;
L_08AD8E08:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD8E24u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD8E24u) goto L_08AD8E24;
    return;
L_08AD8E24:
    ctx.gpr[4] = (16972u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1280));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08AD8E58u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8E58u) goto L_08AD8E58;
    return;
L_08AD8E58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD8E74u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD8E74u) goto L_08AD8E74;
    return;
L_08AD8E74:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
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
L_08AD8E9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[9] = (16776u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1288));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD8EFCu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8EFCu) goto L_08AD8EFC;
    return;
L_08AD8EFC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AD8F18u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD8F18u) goto L_08AD8F18;
    return;
L_08AD8F18:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[24];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1296));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08AD8F44u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8F44u) goto L_08AD8F44;
    return;
L_08AD8F44:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AD8F60u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD8F60u) goto L_08AD8F60;
    return;
L_08AD8F60:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
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
L_08AD8F88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[9] = (16776u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1320));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD8FE8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8FE8u) goto L_08AD8FE8;
    return;
L_08AD8FE8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AD9004u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9004u) goto L_08AD9004;
    return;
L_08AD9004:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[24];
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1280));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08AD9030u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD9030u) goto L_08AD9030;
    return;
L_08AD9030:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AD904Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD904Cu) goto L_08AD904C;
    return;
L_08AD904C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
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
L_08AD9074:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[9] = (16776u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1292));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD90D0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD90D0u) goto L_08AD90D0;
    return;
L_08AD90D0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AD90ECu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD90ECu) goto L_08AD90EC;
    return;
L_08AD90EC:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[24];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1300));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08AD910Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD910Cu) goto L_08AD910C;
    return;
L_08AD910C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AD9128u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9128u) goto L_08AD9128;
    return;
L_08AD9128:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD914C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25764)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (16241u << 16u);
      if (branch_taken) {
          goto L_08AD9218;
      }
      goto L_08AD9168;
    }
L_08AD9168:
    ctx.gpr[5] = (ctx.gpr[5] | 60293u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AD91B0;
      }
      goto L_08AD917C;
    }
L_08AD917C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AD91E8;
      }
      goto L_08AD9184;
    }
L_08AD9184:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD91CC;
      }
      goto L_08AD918C;
    }
L_08AD918C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08AD9204;
      }
      goto L_08AD9194;
    }
L_08AD9194:
    ctx.gpr[4] = (16129u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 1573u);
    ctx.gpr[31] = (0x08AD91A8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08AD91A8u) goto L_08AD91A8;
    return;
L_08AD91A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9218;
      }
      goto L_08AD91B0;
    }
L_08AD91B0:
    ctx.gpr[4] = (16089u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 5767u);
    ctx.gpr[31] = (0x08AD91C4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08AD91C4u) goto L_08AD91C4;
    return;
L_08AD91C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9218;
      }
      goto L_08AD91CC;
    }
L_08AD91CC:
    ctx.gpr[4] = (16081u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 6607u);
    ctx.gpr[31] = (0x08AD91E0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08AD91E0u) goto L_08AD91E0;
    return;
L_08AD91E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9218;
      }
      goto L_08AD91E8;
    }
L_08AD91E8:
    ctx.gpr[4] = (16101u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 38064u);
    ctx.gpr[31] = (0x08AD91FCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08AD91FCu) goto L_08AD91FC;
    return;
L_08AD91FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9218;
      }
      goto L_08AD9204;
    }
L_08AD9204:
    ctx.gpr[4] = (16076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x08AD9218u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08AD9218u) goto L_08AD9218;
    return;
L_08AD9218:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9224:
    lcs::lcs_menu_note_tab(aot_mem.aot_load32(ctx.gpr[5]), static_cast<std::int32_t>(ctx.gpr[6]), static_cast<std::int32_t>(ctx.gpr[7]));  // [lcs-menu-pages] where the tab bar draws this tab, for the mouse
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[10]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[18] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AD92F4;
      }
      goto L_08AD9298;
    }
L_08AD9298:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD92CC;
      }
      goto L_08AD92A4;
    }
L_08AD92A4:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[5] = (0u | 174u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD92BCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD92BCu) goto L_08AD92BC;
    return;
L_08AD92BC:
    ctx.gpr[31] = (0x08AD92C4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08AD92C4u) goto L_08AD92C4;
    return;
L_08AD92C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9314;
      }
      goto L_08AD92CC;
    }
L_08AD92CC:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (0u | 174u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD92E4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD92E4u) goto L_08AD92E4;
    return;
L_08AD92E4:
    ctx.gpr[31] = (0x08AD92ECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08AD92ECu) goto L_08AD92EC;
    return;
L_08AD92EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9314;
      }
      goto L_08AD92F4;
    }
L_08AD92F4:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (0u | 253u);
    ctx.gpr[6] = (0u | 179u);
    ctx.gpr[31] = (0x08AD930Cu);
    ctx.gpr[7] = (0u | 54u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD930Cu) goto L_08AD930C;
    return;
L_08AD930C:
    ctx.gpr[31] = (0x08AD9314u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08AD9314u) goto L_08AD9314;
    return;
L_08AD9314:
    ctx.gpr[31] = (0x08AD931Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD931Cu) goto L_08AD931C;
    return;
L_08AD931C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AD9334u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD9334u) goto L_08AD9334;
    return;
L_08AD9334:
    ctx.gpr[31] = (0x08AD933Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 236u, 0x08A55248u>(ctx, &aot_mem) && ctx.pc == 0x08AD933Cu) goto L_08AD933C;
    return;
L_08AD933C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[14];
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08AD9388;
      }
      goto L_08AD9360;
    }
L_08AD9360:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AD936Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD936Cu) goto L_08AD936C;
    return;
L_08AD936C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9384;
      }
      goto L_08AD9378;
    }
L_08AD9378:
    ctx.gpr[31] = (0x08AD9380u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD9380u) goto L_08AD9380;
    return;
L_08AD9380:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AD9384;
L_08AD9384:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_08AD9388;
L_08AD9388:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD9394u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD9394u) goto L_08AD9394;
    return;
L_08AD9394:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08AD93A8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08AD93A8u) goto L_08AD93A8;
    return;
L_08AD93A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AD93E0;
      }
      goto L_08AD93B4;
    }
L_08AD93B4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AD93C0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD93C0u) goto L_08AD93C0;
    return;
L_08AD93C0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD93D8;
      }
      goto L_08AD93CC;
    }
L_08AD93CC:
    ctx.gpr[31] = (0x08AD93D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD93D4u) goto L_08AD93D4;
    return;
L_08AD93D4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AD93D8;
L_08AD93D8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD93E0;
L_08AD93E0:
    ctx.gpr[31] = (0x08AD93E8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD93E8u) goto L_08AD93E8;
    return;
L_08AD93E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD93F4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x08AD93F4u) goto L_08AD93F4;
    return;
L_08AD93F4:
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[12];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9424:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6224), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD9448u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 104u, 0x088647A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9448u) goto L_08AD9448;
    return;
L_08AD9448:
    ctx.gpr[31] = (0x08AD9450u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD9464;
L_08AD9450:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9464:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25772)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[16] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25808)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6128));
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AD94B4;
      }
      goto L_08AD94AC;
    }
L_08AD94AC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(23516), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08AD94B8;
      }
      goto L_08AD94B4;
    }
L_08AD94B4:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(23516), static_cast<std::uint8_t>(0u));
    goto L_08AD94B8;
L_08AD94B8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25809)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AD94C8;
      }
      goto L_08AD94C4;
    }
L_08AD94C4:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25809), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AD94C8;
L_08AD94C8:
    ctx.gpr[31] = (0x08AD94D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 94u, 0x088646F8u>(ctx, &aot_mem) && ctx.pc == 0x08AD94D0u) goto L_08AD94D0;
    return;
L_08AD94D0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(308), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[31] = (0x08AD94E4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 649u, 0x08AD71F8u>(ctx, &aot_mem) && ctx.pc == 0x08AD94E4u) goto L_08AD94E4;
    return;
L_08AD94E4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD94F0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD9B08;
L_08AD94F0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD94FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 114u, 0x08864830u>(ctx, &aot_mem) && ctx.pc == 0x08AD94FCu) goto L_08AD94FC;
    return;
L_08AD94FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD9508u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 118u, 0x08864868u>(ctx, &aot_mem) && ctx.pc == 0x08AD9508u) goto L_08AD9508;
    return;
L_08AD9508:
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08AD9510;
L_08AD9510:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD9510;
      }
      goto L_08AD9524;
    }
L_08AD9524:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[31] = (0x08AD9534u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 149u, 0x08864AB0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9534u) goto L_08AD9534;
    return;
L_08AD9534:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AD9558;
      }
      goto L_08AD9544;
    }
L_08AD9544:
    ctx.gpr[31] = (0x08AD954Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 320u, 0x088456DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD954Cu) goto L_08AD954C;
    return;
L_08AD954C:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AD9558;
L_08AD9558:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1412), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(7128), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(7136), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(7132), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(7168), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25824), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-24904), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-24902), static_cast<std::uint8_t>(0u));
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
L_08AD95AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1132), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-25838), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25330)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD95E4;
      }
      goto L_08AD95D4;
    }
L_08AD95D4:
    ctx.gpr[31] = (0x08AD95DCu);
    ctx.gpr[5] = (0u | 11u);
    goto L_08AD9CFC;
L_08AD95DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD95EC;
      }
      goto L_08AD95E4;
    }
L_08AD95E4:
    ctx.gpr[31] = (0x08AD95ECu);
    ctx.gpr[5] = (0u | 12u);
    goto L_08AD9CFC;
L_08AD95EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD95F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD960Cu);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25851), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 172u, 0x088B0F08u>(ctx, &aot_mem) && ctx.pc == 0x08AD960Cu) goto L_08AD960C;
    return;
L_08AD960C:
    ctx.gpr[31] = (0x08AD9614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 508u, 0x088B2404u>(ctx, &aot_mem) && ctx.pc == 0x08AD9614u) goto L_08AD9614;
    return;
L_08AD9614:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9620:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD9634u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 911u, 0x08A9B36Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9634u) goto L_08AD9634;
    return;
L_08AD9634:
    ctx.gpr[31] = (0x08AD963Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 304u, 0x088B161Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD963Cu) goto L_08AD963C;
    return;
L_08AD963C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9648:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD9658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 306u, 0x088B1654u>(ctx, &aot_mem) && ctx.pc == 0x08AD9658u) goto L_08AD9658;
    return;
L_08AD9658:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9664:
    if (lcs::decomp::run<0x08AD9664u>(rt, ctx)) { jump_target = ctx.gpr[31]; local_pc = jump_target; if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; } ctx.pc = jump_target; return; }  // [decomp-hook]
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(321)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD96B8;
      }
      goto L_08AD9678;
    }
L_08AD9678:
    ctx.gpr[31] = (0x08AD9680u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9680u) goto L_08AD9680;
    return;
L_08AD9680:
    ctx.gpr[31] = (0x08AD9688u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 170u, 0x08A986ECu>(ctx, &aot_mem) && ctx.pc == 0x08AD9688u) goto L_08AD9688;
    return;
L_08AD9688:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD96A8;
      }
      goto L_08AD9690;
    }
L_08AD9690:
    ctx.gpr[31] = (0x08AD9698u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9698u) goto L_08AD9698;
    return;
L_08AD9698:
    ctx.gpr[31] = (0x08AD96A0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 683u, 0x08A96E28u>(ctx, &aot_mem) && ctx.pc == 0x08AD96A0u) goto L_08AD96A0;
    return;
L_08AD96A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD96B0;
      }
      goto L_08AD96A8;
    }
L_08AD96A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD96BC;
      }
      goto L_08AD96B0;
    }
L_08AD96B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD96BC;
      }
      goto L_08AD96B8;
    }
L_08AD96B8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD96BC;
L_08AD96BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD96C8:
    if (lcs::decomp::run<0x08AD96C8u>(rt, ctx)) { jump_target = ctx.gpr[31]; local_pc = jump_target; if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; } ctx.pc = jump_target; return; }  // [decomp-hook]
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(321)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD971C;
      }
      goto L_08AD96DC;
    }
L_08AD96DC:
    ctx.gpr[31] = (0x08AD96E4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD96E4u) goto L_08AD96E4;
    return;
L_08AD96E4:
    ctx.gpr[31] = (0x08AD96ECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 177u, 0x08A98744u>(ctx, &aot_mem) && ctx.pc == 0x08AD96ECu) goto L_08AD96EC;
    return;
L_08AD96EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD970C;
      }
      goto L_08AD96F4;
    }
L_08AD96F4:
    ctx.gpr[31] = (0x08AD96FCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD96FCu) goto L_08AD96FC;
    return;
L_08AD96FC:
    ctx.gpr[31] = (0x08AD9704u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 693u, 0x08A96E84u>(ctx, &aot_mem) && ctx.pc == 0x08AD9704u) goto L_08AD9704;
    return;
L_08AD9704:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9714;
      }
      goto L_08AD970C;
    }
L_08AD970C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD9720;
      }
      goto L_08AD9714;
    }
L_08AD9714:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD9720;
      }
      goto L_08AD971C;
    }
L_08AD971C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD9720;
L_08AD9720:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD972C:
    if (lcs::decomp::run<0x08AD972Cu>(rt, ctx)) { jump_target = ctx.gpr[31]; local_pc = jump_target; if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; } ctx.pc = jump_target; return; }  // [decomp-hook]
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(321)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD9800;
      }
      goto L_08AD9744;
    }
L_08AD9744:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD97C0;
      }
      goto L_08AD9750;
    }
L_08AD9750:
    ctx.gpr[31] = (0x08AD9758u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9758u) goto L_08AD9758;
    return;
L_08AD9758:
    ctx.gpr[31] = (0x08AD9760u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 184u, 0x08A9879Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9760u) goto L_08AD9760;
    return;
L_08AD9760:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD97B8;
      }
      goto L_08AD9768;
    }
L_08AD9768:
    ctx.gpr[31] = (0x08AD9770u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9770u) goto L_08AD9770;
    return;
L_08AD9770:
    ctx.gpr[31] = (0x08AD9778u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 703u, 0x08A96EE0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9778u) goto L_08AD9778;
    return;
L_08AD9778:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD97B8;
      }
      goto L_08AD9780;
    }
L_08AD9780:
    ctx.gpr[31] = (0x08AD9788u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9788u) goto L_08AD9788;
    return;
L_08AD9788:
    ctx.gpr[31] = (0x08AD9790u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 191u, 0x08A987F4u>(ctx, &aot_mem) && ctx.pc == 0x08AD9790u) goto L_08AD9790;
    return;
L_08AD9790:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD97B8;
      }
      goto L_08AD9798;
    }
L_08AD9798:
    ctx.gpr[31] = (0x08AD97A0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD97A0u) goto L_08AD97A0;
    return;
L_08AD97A0:
    ctx.gpr[31] = (0x08AD97A8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 723u, 0x08A96F98u>(ctx, &aot_mem) && ctx.pc == 0x08AD97A8u) goto L_08AD97A8;
    return;
L_08AD97A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD97B8;
      }
      goto L_08AD97B0;
    }
L_08AD97B0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1156), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AD97C0;
      }
      goto L_08AD97B8;
    }
L_08AD97B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD9804;
      }
      goto L_08AD97C0;
    }
L_08AD97C0:
    ctx.gpr[31] = (0x08AD97C8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD97C8u) goto L_08AD97C8;
    return;
L_08AD97C8:
    ctx.gpr[31] = (0x08AD97D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 184u, 0x08A9879Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD97D0u) goto L_08AD97D0;
    return;
L_08AD97D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD97F0;
      }
      goto L_08AD97D8;
    }
L_08AD97D8:
    ctx.gpr[31] = (0x08AD97E0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD97E0u) goto L_08AD97E0;
    return;
L_08AD97E0:
    ctx.gpr[31] = (0x08AD97E8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 703u, 0x08A96EE0u>(ctx, &aot_mem) && ctx.pc == 0x08AD97E8u) goto L_08AD97E8;
    return;
L_08AD97E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD97F8;
      }
      goto L_08AD97F0;
    }
L_08AD97F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD9804;
      }
      goto L_08AD97F8;
    }
L_08AD97F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD9804;
      }
      goto L_08AD9800;
    }
L_08AD9800:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD9804;
L_08AD9804:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9814:
    if (lcs::decomp::run<0x08AD9814u>(rt, ctx)) { jump_target = ctx.gpr[31]; local_pc = jump_target; if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; } ctx.pc = jump_target; return; }  // [decomp-hook]
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(321)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD98E8;
      }
      goto L_08AD982C;
    }
L_08AD982C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD98A8;
      }
      goto L_08AD9838;
    }
L_08AD9838:
    ctx.gpr[31] = (0x08AD9840u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9840u) goto L_08AD9840;
    return;
L_08AD9840:
    ctx.gpr[31] = (0x08AD9848u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 191u, 0x08A987F4u>(ctx, &aot_mem) && ctx.pc == 0x08AD9848u) goto L_08AD9848;
    return;
L_08AD9848:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD98A0;
      }
      goto L_08AD9850;
    }
L_08AD9850:
    ctx.gpr[31] = (0x08AD9858u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9858u) goto L_08AD9858;
    return;
L_08AD9858:
    ctx.gpr[31] = (0x08AD9860u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 723u, 0x08A96F98u>(ctx, &aot_mem) && ctx.pc == 0x08AD9860u) goto L_08AD9860;
    return;
L_08AD9860:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD98A0;
      }
      goto L_08AD9868;
    }
L_08AD9868:
    ctx.gpr[31] = (0x08AD9870u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9870u) goto L_08AD9870;
    return;
L_08AD9870:
    ctx.gpr[31] = (0x08AD9878u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 184u, 0x08A9879Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9878u) goto L_08AD9878;
    return;
L_08AD9878:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD98A0;
      }
      goto L_08AD9880;
    }
L_08AD9880:
    ctx.gpr[31] = (0x08AD9888u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9888u) goto L_08AD9888;
    return;
L_08AD9888:
    ctx.gpr[31] = (0x08AD9890u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 703u, 0x08A96EE0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9890u) goto L_08AD9890;
    return;
L_08AD9890:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD98A0;
      }
      goto L_08AD9898;
    }
L_08AD9898:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1156), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AD98A8;
      }
      goto L_08AD98A0;
    }
L_08AD98A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD98EC;
      }
      goto L_08AD98A8;
    }
L_08AD98A8:
    ctx.gpr[31] = (0x08AD98B0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD98B0u) goto L_08AD98B0;
    return;
L_08AD98B0:
    ctx.gpr[31] = (0x08AD98B8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 191u, 0x08A987F4u>(ctx, &aot_mem) && ctx.pc == 0x08AD98B8u) goto L_08AD98B8;
    return;
L_08AD98B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD98D8;
      }
      goto L_08AD98C0;
    }
L_08AD98C0:
    ctx.gpr[31] = (0x08AD98C8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD98C8u) goto L_08AD98C8;
    return;
L_08AD98C8:
    ctx.gpr[31] = (0x08AD98D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 723u, 0x08A96F98u>(ctx, &aot_mem) && ctx.pc == 0x08AD98D0u) goto L_08AD98D0;
    return;
L_08AD98D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD98E0;
      }
      goto L_08AD98D8;
    }
L_08AD98D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD98EC;
      }
      goto L_08AD98E0;
    }
L_08AD98E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD98EC;
      }
      goto L_08AD98E8;
    }
L_08AD98E8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD98EC;
L_08AD98EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD98FC:
    if (lcs::decomp::run<0x08AD98FCu>(rt, ctx)) { jump_target = ctx.gpr[31]; local_pc = jump_target; if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; } ctx.pc = jump_target; return; }  // [decomp-hook]
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9914;
      }
      goto L_08AD990C;
    }
L_08AD990C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9918;
      }
      goto L_08AD9914;
    }
L_08AD9914:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    goto L_08AD9918;
L_08AD9918:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9920:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1157), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD9AE8;
      }
      goto L_08AD994C;
    }
L_08AD994C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26464));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(297)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9AE8;
      }
      goto L_08AD9960;
    }
L_08AD9960:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08AD9980u);
    ctx.gpr[10] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 266u, 0x089C11D8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9980u) goto L_08AD9980;
    return;
L_08AD9980:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x08AD998Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 333u, 0x089C16A4u>(ctx, &aot_mem) && ctx.pc == 0x08AD998Cu) goto L_08AD998C;
    return;
L_08AD998C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(321), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-50));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), 0u);
    ctx.gpr[4] = (0u | 999u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (17174u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1388), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17264u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (17110u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1373), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1374), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08AD99E8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1376), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 540u, 0x08A96588u>(ctx, &aot_mem) && ctx.pc == 0x08AD99E8u) goto L_08AD99E8;
    return;
L_08AD99E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-9999));
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[18] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AD9A34;
      }
      goto L_08AD9A04;
    }
L_08AD9A04:
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_08AD9A34;
      }
      goto L_08AD9A10;
    }
L_08AD9A10:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD9A34;
      }
      goto L_08AD9A18;
    }
L_08AD9A18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9A34;
      }
      goto L_08AD9A24;
    }
L_08AD9A24:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x08AD9A34u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 525u, 0x08A964D4u>(ctx, &aot_mem) && ctx.pc == 0x08AD9A34u) goto L_08AD9A34;
    return;
L_08AD9A34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-25788)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AD9A4C;
      }
      goto L_08AD9A40;
    }
L_08AD9A40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-25784)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AD9A64;
      }
      goto L_08AD9A4C;
    }
L_08AD9A4C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25780)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-25788), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25776)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-25784), ctx.gpr[4]);
    goto L_08AD9A64;
L_08AD9A64:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9A7C;
      }
      goto L_08AD9A74;
    }
L_08AD9A74:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AD9A7C;
L_08AD9A7C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1420), 0u);
    ctx.gpr[31] = (0x08AD9A88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADAA94;
L_08AD9A88:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AD9A94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 189u, 0x08864D5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9A94u) goto L_08AD9A94;
    return;
L_08AD9A94:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-25791), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-25791))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AD9AAC;
      }
      goto L_08AD9AA4;
    }
L_08AD9AA4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9AC8;
      }
      goto L_08AD9AAC;
    }
L_08AD9AAC:
    ctx.gpr[31] = (0x08AD9AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08AD9AB4u) goto L_08AD9AB4;
    return;
L_08AD9AB4:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (0u | 10u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-25791), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AD9AC8;
L_08AD9AC8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9636));
    ctx.gpr[31] = (0x08AD9AD8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 189u, 0x088B9044u>(ctx, &aot_mem) && ctx.pc == 0x08AD9AD8u) goto L_08AD9AD8;
    return;
L_08AD9AD8:
    ctx.gpr[31] = (0x08AD9AE0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 189u, 0x088B9044u>(ctx, &aot_mem) && ctx.pc == 0x08AD9AE0u) goto L_08AD9AE0;
    return;
L_08AD9AE0:
    ctx.gpr[31] = (0x08AD9AE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 180u, 0x08AE4F44u>(ctx, &aot_mem) && ctx.pc == 0x08AD9AE8u) goto L_08AD9AE8;
    return;
L_08AD9AE8:
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
L_08AD9B08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD9C54;
      }
      goto L_08AD9B34;
    }
L_08AD9B34:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD9B40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8792));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 559u, 0x08AD69ECu>(ctx, &aot_mem) && ctx.pc == 0x08AD9B40u) goto L_08AD9B40;
    return;
L_08AD9B40:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9B7C;
      }
      goto L_08AD9B48;
    }
L_08AD9B48:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD9B54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8760));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 559u, 0x08AD69ECu>(ctx, &aot_mem) && ctx.pc == 0x08AD9B54u) goto L_08AD9B54;
    return;
L_08AD9B54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1168)));
    ctx.gpr[31] = (0x08AD9B60u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 376u, 0x0894E268u>(ctx, &aot_mem) && ctx.pc == 0x08AD9B60u) goto L_08AD9B60;
    return;
L_08AD9B60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1168)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    ctx.gpr[31] = (0x08AD9B78u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9B78u) goto L_08AD9B78;
    return;
L_08AD9B78:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1168), 0u);
    goto L_08AD9B7C;
L_08AD9B7C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD9B88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8728));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 586u, 0x0892FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9B88u) goto L_08AD9B88;
    return;
L_08AD9B88:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_08AD9B94;
L_08AD9B94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1168)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9BA8;
      }
      goto L_08AD9BA0;
    }
L_08AD9BA0:
    ctx.gpr[31] = (0x08AD9BA8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 376u, 0x0894E268u>(ctx, &aot_mem) && ctx.pc == 0x08AD9BA8u) goto L_08AD9BA8;
    return;
L_08AD9BA8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1168), 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1160), 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 39 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD9B94;
      }
      goto L_08AD9BC0;
    }
L_08AD9BC0:
    ctx.gpr[31] = (0x08AD9BC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 661u, 0x0892FF24u>(ctx, &aot_mem) && ctx.pc == 0x08AD9BC8u) goto L_08AD9BC8;
    return;
L_08AD9BC8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AD9BD8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 608u, 0x0892FB3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9BD8u) goto L_08AD9BD8;
    return;
L_08AD9BD8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD9BE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8716));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 586u, 0x0892FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9BE4u) goto L_08AD9BE4;
    return;
L_08AD9BE4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD9C18;
      }
      goto L_08AD9BF4;
    }
L_08AD9BF4:
    ctx.gpr[31] = (0x08AD9BFCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 665u, 0x0892FF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9BFCu) goto L_08AD9BFC;
    return;
L_08AD9BFC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AD9C18;
      }
      goto L_08AD9C04;
    }
L_08AD9C04:
    ctx.gpr[31] = (0x08AD9C0Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 661u, 0x0892FF24u>(ctx, &aot_mem) && ctx.pc == 0x08AD9C0Cu) goto L_08AD9C0C;
    return;
L_08AD9C0C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD9C18u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 616u, 0x0892FBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9C18u) goto L_08AD9C18;
    return;
L_08AD9C18:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9C50;
      }
      goto L_08AD9C20;
    }
L_08AD9C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD9C3C;
      }
      goto L_08AD9C30;
    }
L_08AD9C30:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD9C3Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08AD9CFC;
L_08AD9C3C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1388), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(312), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08AD9C50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8464));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 117u, 0x0883C8A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9C50u) goto L_08AD9C50;
    return;
L_08AD9C50:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1164), static_cast<std::uint8_t>(0u));
    goto L_08AD9C54;
L_08AD9C54:
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
L_08AD9C74:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[4] = (0u | 640u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (17440u << 16u);
      if (branch_taken) {
          goto L_08AD9C90;
      }
      goto L_08AD9C88;
    }
L_08AD9C88:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AD9CB0;
      }
      goto L_08AD9C90;
    }
L_08AD9C90:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
      if (branch_taken) {
          goto L_08AD9CB0;
      }
      goto L_08AD9CB0;
    }
L_08AD9CB0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9CB8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[4] = (0u | 448u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (17376u << 16u);
      if (branch_taken) {
          goto L_08AD9CD4;
      }
      goto L_08AD9CCC;
    }
L_08AD9CCC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AD9CF4;
      }
      goto L_08AD9CD4;
    }
L_08AD9CD4:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
      if (branch_taken) {
          goto L_08AD9CF4;
      }
      goto L_08AD9CF4;
    }
L_08AD9CF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9CFC:
    if (lcs::decomp::run<0x08AD9CFCu>(rt, ctx)) { jump_target = ctx.gpr[31]; local_pc = jump_target; if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; } ctx.pc = jump_target; return; }  // [decomp-hook]
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1380)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 12u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AD9D3C;
      }
      goto L_08AD9D24;
    }
L_08AD9D24:
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD9D3C;
      }
      goto L_08AD9D30;
    }
L_08AD9D30:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25837), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AD9D3C;
L_08AD9D3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD9D4Cu);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1396), ctx.gpr[5]);
    goto L_08ADAA94;
L_08AD9D4C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1380), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1384), 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27324)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[18];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AD9D70;
      }
      goto L_08AD9D64;
    }
L_08AD9D64:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25851), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AD9D70;
L_08AD9D70:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1412), 0u);
    ctx.gpr[31] = (0x08AD9D7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08ADA00C;
L_08AD9D7C:
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
L_08AD9D94:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(300), 0u);
    ctx.gpr[5] = (0u | 300u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1360), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9DA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD9DD8u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x08AD9DD8u) goto L_08AD9DD8;
    return;
L_08AD9DD8:
    ctx.gpr[31] = (0x08AD9DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x08AD9DE0u) goto L_08AD9DE0;
    return;
L_08AD9DE0:
    ctx.gpr[31] = (0x08AD9DE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 203u, 0x08A54FCCu>(ctx, &aot_mem) && ctx.pc == 0x08AD9DE8u) goto L_08AD9DE8;
    return;
L_08AD9DE8:
    ctx.gpr[31] = (0x08AD9DF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 223u, 0x08A5513Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9DF0u) goto L_08AD9DF0;
    return;
L_08AD9DF0:
    ctx.gpr[31] = (0x08AD9DF8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08AD9DF8u) goto L_08AD9DF8;
    return;
L_08AD9DF8:
    ctx.gpr[4] = (17367u << 16u);
    ctx.gpr[31] = (0x08AD9E04u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD9E04u) goto L_08AD9E04;
    return;
L_08AD9E04:
    ctx.gpr[31] = (0x08AD9E0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD9E0Cu) goto L_08AD9E0C;
    return;
L_08AD9E0C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD9E1Cu);
    ctx.gpr[5] = (0u | 255u);
    goto L_08AD98FC;
L_08AD9E1C:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08AD9E34u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD9E34u) goto L_08AD9E34;
    return;
L_08AD9E34:
    ctx.gpr[31] = (0x08AD9E3Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08AD9E3Cu) goto L_08AD9E3C;
    return;
L_08AD9E3C:
    ctx.gpr[31] = (0x08AD9E44u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD9E44u) goto L_08AD9E44;
    return;
L_08AD9E44:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD9E50u);
    ctx.gpr[5] = (0u | 255u);
    goto L_08AD98FC;
L_08AD9E50:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD9E68u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD9E68u) goto L_08AD9E68;
    return;
L_08AD9E68:
    ctx.gpr[31] = (0x08AD9E70u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD9E70u) goto L_08AD9E70;
    return;
L_08AD9E70:
    ctx.gpr[4] = (16058u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 34854u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16202u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49283u);
    ctx.gpr[31] = (0x08AD9E8Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08AD9E8Cu) goto L_08AD9E8C;
    return;
L_08AD9E8C:
    ctx.gpr[5] = (17312u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD9EA0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08AD9C74;
L_08AD9EA0:
    ctx.gpr[5] = (17159u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD9EB4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AD9CB8;
L_08AD9EB4:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD9EF0;
      }
      goto L_08AD9EC4;
    }
L_08AD9EC4:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AD9ED0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD9ED0u) goto L_08AD9ED0;
    return;
L_08AD9ED0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9EE8;
      }
      goto L_08AD9EDC;
    }
L_08AD9EDC:
    ctx.gpr[31] = (0x08AD9EE4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD9EE4u) goto L_08AD9EE4;
    return;
L_08AD9EE4:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08AD9EE8;
L_08AD9EE8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24444), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08AD9EF0;
L_08AD9EF0:
    ctx.gpr[31] = (0x08AD9EF8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD9EF8u) goto L_08AD9EF8;
    return;
L_08AD9EF8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD9F08u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 637u, 0x08A57550u>(ctx, &aot_mem) && ctx.pc == 0x08AD9F08u) goto L_08AD9F08;
    return;
L_08AD9F08:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9F60;
      }
      goto L_08AD9F18;
    }
L_08AD9F18:
    ctx.gpr[5] = (17216u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD9F28u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AD9CB8;
L_08AD9F28:
    ctx.gpr[5] = (16640u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD9F3Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AD9CB8;
L_08AD9F3C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
      if (branch_taken) {
          goto L_08AD9F80;
      }
      goto L_08AD9F60;
    }
L_08AD9F60:
    ctx.gpr[5] = (17206u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD9F70u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AD9CB8;
L_08AD9F70:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    goto L_08AD9F80;
L_08AD9F80:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD9F8Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08AD9C74;
L_08AD9F8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD9FC4;
      }
      goto L_08AD9F98;
    }
L_08AD9F98:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AD9FA4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD9FA4u) goto L_08AD9FA4;
    return;
L_08AD9FA4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9FBC;
      }
      goto L_08AD9FB0;
    }
L_08AD9FB0:
    ctx.gpr[31] = (0x08AD9FB8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD9FB8u) goto L_08AD9FB8;
    return;
L_08AD9FB8:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08AD9FBC;
L_08AD9FBC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AD9FC4;
L_08AD9FC4:
    ctx.gpr[31] = (0x08AD9FCCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD9FCCu) goto L_08AD9FCC;
    return;
L_08AD9FCC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08AD9FE0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08AD9FE0u) goto L_08AD9FE0;
    return;
L_08AD9FE0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADA00C:
    if (lcs::decomp::run<0x08ADA00Cu>(rt, ctx)) { jump_target = ctx.gpr[31]; local_pc = jump_target; if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; } ctx.pc = jump_target; return; }  // [decomp-hook]
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ADA028u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1388), static_cast<std::uint8_t>(0u));
    goto L_08ADAA94;
L_08ADA028:
    ctx.gpr[31] = (0x08ADA030u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD9D94;
L_08ADA030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADA07C;
      }
      goto L_08ADA040;
    }
L_08ADA040:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(311)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA07C;
      }
      goto L_08ADA04C;
    }
L_08ADA04C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(306)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA07C;
      }
      goto L_08ADA058;
    }
L_08ADA058:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25808)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25809)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08ADA074;
      }
      goto L_08ADA070;
    }
L_08ADA070:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25809), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08ADA074;
L_08ADA074:
    ctx.gpr[31] = (0x08ADA07Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADA65C;
L_08ADA07C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1396), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADA094:
    if (lcs::decomp::run<0x08ADA094u>(rt, ctx)) { jump_target = ctx.gpr[31]; local_pc = jump_target; if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; } ctx.pc = jump_target; return; }  // [decomp-hook]
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA340;
      }
      goto L_08ADA0F8;
    }
L_08ADA0F8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-8272)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADA110:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25812)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x08ADA128u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25812), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08ADAA8C;
L_08ADA128:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA340;
      }
      goto L_08ADA130;
    }
L_08ADA130:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA14C;
      }
      goto L_08ADA140;
    }
L_08ADA140:
    ctx.gpr[31] = (0x08ADA148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x08ADA148u) goto L_08ADA148;
    return;
L_08ADA148:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20904)));
    goto L_08ADA14C;
L_08ADA14C:
    ctx.gpr[31] = (0x08ADA154u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 157u, 0x08838A28u>(ctx, &aot_mem) && ctx.pc == 0x08ADA154u) goto L_08ADA154;
    return;
L_08ADA154:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA22C;
      }
      goto L_08ADA15C;
    }
L_08ADA15C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20904)));
    ctx.gpr[16] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-8107));
      if (branch_taken) {
          goto L_08ADA178;
      }
      goto L_08ADA16C;
    }
L_08ADA16C:
    ctx.gpr[31] = (0x08ADA174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x08ADA174u) goto L_08ADA174;
    return;
L_08ADA174:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20904)));
    goto L_08ADA178;
L_08ADA178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA18C;
      }
      goto L_08ADA184;
    }
L_08ADA184:
    ctx.gpr[31] = (0x08ADA18Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x08ADA18Cu) goto L_08ADA18C;
    return;
L_08ADA18C:
    ctx.gpr[31] = (0x08ADA194u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20904)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x08ADA194u) goto L_08ADA194;
    return;
L_08ADA194:
    ctx.gpr[5] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x08ADA1A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 38u, 0x0883822Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA1A4u) goto L_08ADA1A4;
    return;
L_08ADA1A4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA1BC;
      }
      goto L_08ADA1B0;
    }
L_08ADA1B0:
    ctx.gpr[31] = (0x08ADA1B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x08ADA1B8u) goto L_08ADA1B8;
    return;
L_08ADA1B8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20904)));
    goto L_08ADA1BC;
L_08ADA1BC:
    ctx.gpr[31] = (0x08ADA1C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x08ADA1C4u) goto L_08ADA1C4;
    return;
L_08ADA1C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA1FC;
      }
      goto L_08ADA1CC;
    }
L_08ADA1CC:
    ctx.gpr[31] = (0x08ADA1D4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 83u, 0x088BC4A8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA1D4u) goto L_08ADA1D4;
    return;
L_08ADA1D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADA1E0u);
    ctx.gpr[5] = (0u | 65u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 191u, 0x08864D7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA1E0u) goto L_08ADA1E0;
    return;
L_08ADA1E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 65u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08ADA1F4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 145u, 0x08864A64u>(ctx, &aot_mem) && ctx.pc == 0x08ADA1F4u) goto L_08ADA1F4;
    return;
L_08ADA1F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA22C;
      }
      goto L_08ADA1FC;
    }
L_08ADA1FC:
    ctx.gpr[31] = (0x08ADA204u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 83u, 0x088BC4A8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA204u) goto L_08ADA204;
    return;
L_08ADA204:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-25791))))));
    ctx.gpr[31] = (0x08ADA214u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 191u, 0x08864D7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA214u) goto L_08ADA214;
    return;
L_08ADA214:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-25791))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08ADA22Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 145u, 0x08864A64u>(ctx, &aot_mem) && ctx.pc == 0x08ADA22Cu) goto L_08ADA22C;
    return;
L_08ADA22C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA340;
      }
      goto L_08ADA234;
    }
L_08ADA234:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25811)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25811), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ADA340;
      }
      goto L_08ADA248;
    }
L_08ADA248:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25810)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x08ADA260u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25810), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08ADAA8C;
L_08ADA260:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA340;
      }
      goto L_08ADA268;
    }
L_08ADA268:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25846)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25846), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ADA340;
      }
      goto L_08ADA27C;
    }
L_08ADA27C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25847)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25847), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25847)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA2C4;
      }
      goto L_08ADA298;
    }
L_08ADA298:
    ctx.gpr[31] = (0x08ADA2A0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA2A0u) goto L_08ADA2A0;
    return;
L_08ADA2A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 300u);
    ctx.gpr[31] = (0x08ADA2B0u);
    ctx.gpr[6] = (0u | 150u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 656u, 0x08A96CF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA2B0u) goto L_08ADA2B0;
    return;
L_08ADA2B0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27324)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(500));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29220), ctx.gpr[4]);
    goto L_08ADA2C4;
L_08ADA2C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA340;
      }
      goto L_08ADA2CC;
    }
L_08ADA2CC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25331)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25331), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ADA340;
      }
      goto L_08ADA2E0;
    }
L_08ADA2E0:
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25332)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(25332), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08ADA300u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA300u) goto L_08ADA300;
    return;
L_08ADA300:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(130)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25332)));
    ctx.gpr[4] = (ctx.gpr[4] & 65534u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08ADA320u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA320u) goto L_08ADA320;
    return;
L_08ADA320:
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(130), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1156), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ADA340;
      }
      goto L_08ADA330;
    }
L_08ADA330:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25840)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25840), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08ADA340;
L_08ADA340:
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
L_08ADA358:
    if (lcs::decomp::run<0x08ADA358u>(rt, ctx)) { jump_target = ctx.gpr[31]; local_pc = jump_target; if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; } ctx.pc = jump_target; return; }  // [decomp-hook]
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[8] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 15 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADA3D8;
      }
      goto L_08ADA3B0;
    }
L_08ADA3B0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA4AC;
      }
      goto L_08ADA3BC;
    }
L_08ADA3BC:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-25816)));
    ctx.gpr[4] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADA400;
      }
      goto L_08ADA3D0;
    }
L_08ADA3D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA418;
      }
      goto L_08ADA3D8;
    }
L_08ADA3D8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADA4B4;
      }
      goto L_08ADA3E0;
    }
L_08ADA3E0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA4AC;
      }
      goto L_08ADA3E8;
    }
L_08ADA3E8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25800)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA588;
      }
      goto L_08ADA3F8;
    }
L_08ADA3F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA5A0;
      }
      goto L_08ADA400;
    }
L_08ADA400:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ADA418;
      }
      goto L_08ADA408;
    }
L_08ADA408:
    ctx.gpr[4] = (0u | 384u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25816), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADA458;
      }
      goto L_08ADA418;
    }
L_08ADA418:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-25816)));
    ctx.gpr[4] = (0u | 384u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADA444;
      }
      goto L_08ADA42C;
    }
L_08ADA42C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ADA444;
      }
      goto L_08ADA434;
    }
L_08ADA434:
    ctx.gpr[4] = (0u | 128u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25816), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADA458;
      }
      goto L_08ADA444;
    }
L_08ADA444:
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25816)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25816), ctx.gpr[4]);
    goto L_08ADA458;
L_08ADA458:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25816)));
    ctx.gpr[4] = (0u | 128u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA478;
      }
      goto L_08ADA470;
    }
L_08ADA470:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25816)));
    goto L_08ADA478;
L_08ADA478:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25816), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 384u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA49C;
      }
      goto L_08ADA494;
    }
L_08ADA494:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25816)));
    goto L_08ADA49C;
L_08ADA49C:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25816), ctx.gpr[4]);
    ctx.gpr[31] = (0x08ADA4ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADAA8C;
L_08ADA4AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA64C;
      }
      goto L_08ADA4B4;
    }
L_08ADA4B4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25796)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA4DC;
      }
      goto L_08ADA4C4;
    }
L_08ADA4C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ADA4DC;
      }
      goto L_08ADA4CC;
    }
L_08ADA4CC:
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25796), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADA518;
      }
      goto L_08ADA4DC;
    }
L_08ADA4DC:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-25796)));
    ctx.gpr[4] = (0u | 127u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADA504;
      }
      goto L_08ADA4F0;
    }
L_08ADA4F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ADA504;
      }
      goto L_08ADA4F8;
    }
L_08ADA4F8:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25796), 0u);
      if (branch_taken) {
          goto L_08ADA518;
      }
      goto L_08ADA504;
    }
L_08ADA504:
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25796)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25796), ctx.gpr[4]);
    goto L_08ADA518;
L_08ADA518:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25796)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA538;
      }
      goto L_08ADA530;
    }
L_08ADA530:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25796)));
    goto L_08ADA538;
L_08ADA538:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25796), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA55C;
      }
      goto L_08ADA554;
    }
L_08ADA554:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25796)));
    goto L_08ADA55C;
L_08ADA55C:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25796), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x08ADA578u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 110u, 0x088647F8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA578u) goto L_08ADA578;
    return;
L_08ADA578:
    ctx.gpr[31] = (0x08ADA580u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADAA8C;
L_08ADA580:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA4AC;
      }
      goto L_08ADA588;
    }
L_08ADA588:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ADA5A0;
      }
      goto L_08ADA590;
    }
L_08ADA590:
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25800), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADA5DC;
      }
      goto L_08ADA5A0;
    }
L_08ADA5A0:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-25800)));
    ctx.gpr[4] = (0u | 127u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADA5C8;
      }
      goto L_08ADA5B4;
    }
L_08ADA5B4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ADA5C8;
      }
      goto L_08ADA5BC;
    }
L_08ADA5BC:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25800), 0u);
      if (branch_taken) {
          goto L_08ADA5DC;
      }
      goto L_08ADA5C8;
    }
L_08ADA5C8:
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25800)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25800), ctx.gpr[4]);
    goto L_08ADA5DC;
L_08ADA5DC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25800)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA5FC;
      }
      goto L_08ADA5F4;
    }
L_08ADA5F4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25800)));
    goto L_08ADA5FC;
L_08ADA5FC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25800), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA620;
      }
      goto L_08ADA618;
    }
L_08ADA618:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25800)));
    goto L_08ADA620;
L_08ADA620:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25800), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x08ADA63Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 106u, 0x088647C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA63Cu) goto L_08ADA63C;
    return;
L_08ADA63C:
    ctx.gpr[31] = (0x08ADA644u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADAA8C;
L_08ADA644:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA4AC;
      }
      goto L_08ADA64C;
    }
L_08ADA64C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADA65C:
    if (lcs::decomp::run<0x08ADA65Cu>(rt, ctx)) { jump_target = ctx.gpr[31]; local_pc = jump_target; if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; } ctx.pc = jump_target; return; }  // [decomp-hook]
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25839), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADA66C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1157)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ADA7B4;
      }
      goto L_08ADA688;
    }
L_08ADA688:
    ctx.gpr[31] = (0x08ADA690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 393u, 0x089C198Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA690u) goto L_08ADA690;
    return;
L_08ADA690:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA7B4;
      }
      goto L_08ADA698;
    }
L_08ADA698:
    ctx.gpr[31] = (0x08ADA6A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 552u, 0x08AB3028u>(ctx, &aot_mem) && ctx.pc == 0x08ADA6A0u) goto L_08ADA6A0;
    return;
L_08ADA6A0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5168));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08ADA6C4u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 414u, 0x08A7F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA6C4u) goto L_08ADA6C4;
    return;
L_08ADA6C4:
    ctx.gpr[31] = (0x08ADA6CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 571u, 0x08AB332Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA6CCu) goto L_08ADA6CC;
    return;
L_08ADA6CC:
    ctx.gpr[31] = (0x08ADA6D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 552u, 0x08AB3028u>(ctx, &aot_mem) && ctx.pc == 0x08ADA6D4u) goto L_08ADA6D4;
    return;
L_08ADA6D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08ADA6F0u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 414u, 0x08A7F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA6F0u) goto L_08ADA6F0;
    return;
L_08ADA6F0:
    ctx.gpr[31] = (0x08ADA6F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 571u, 0x08AB332Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA6F8u) goto L_08ADA6F8;
    return;
L_08ADA6F8:
    ctx.gpr[31] = (0x08ADA700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 539u, 0x08AB2F98u>(ctx, &aot_mem) && ctx.pc == 0x08ADA700u) goto L_08ADA700;
    return;
L_08ADA700:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 512u);
    ctx.gpr[7] = (0u | 320u);
    ctx.gpr[31] = (0x08ADA718u);
    ctx.gpr[8] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 2u, 0x08AB4014u>(ctx, &aot_mem) && ctx.pc == 0x08ADA718u) goto L_08ADA718;
    return;
L_08ADA718:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17392u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[5] = (17288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[31] = (0x08ADA758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 880u, 0x08AD388Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA758u) goto L_08ADA758;
    return;
L_08ADA758:
    ctx.gpr[31] = (0x08ADA760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 552u, 0x08AB3028u>(ctx, &aot_mem) && ctx.pc == 0x08ADA760u) goto L_08ADA760;
    return;
L_08ADA760:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08ADA77Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 414u, 0x08A7F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA77Cu) goto L_08ADA77C;
    return;
L_08ADA77C:
    ctx.gpr[31] = (0x08ADA784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 571u, 0x08AB332Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA784u) goto L_08ADA784;
    return;
L_08ADA784:
    ctx.gpr[31] = (0x08ADA78Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 552u, 0x08AB3028u>(ctx, &aot_mem) && ctx.pc == 0x08ADA78Cu) goto L_08ADA78C;
    return;
L_08ADA78C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08ADA7A8u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 414u, 0x08A7F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA7A8u) goto L_08ADA7A8;
    return;
L_08ADA7A8:
    ctx.gpr[31] = (0x08ADA7B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 571u, 0x08AB332Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA7B0u) goto L_08ADA7B0;
    return;
L_08ADA7B0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1157), static_cast<std::uint8_t>(0u));
    goto L_08ADA7B4;
L_08ADA7B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADA7C8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25846)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADA7D8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    ctx.gpr[2] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25844)));
      if (branch_taken) {
          goto L_08ADA804;
      }
      goto L_08ADA7EC;
    }
L_08ADA7EC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[2] != ctx.gpr[5]) {
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
        goto L_08ADA7FC;
    }
    goto L_08ADA7FC;
L_08ADA7FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ADA804;
      }
      goto L_08ADA804;
    }
L_08ADA804:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADA80C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-544));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ADA82Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54364u>(ctx, &aot_mem) && ctx.pc == 0x08ADA82Cu) goto L_08ADA82C;
    return;
L_08ADA82C:
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADA884;
      }
      goto L_08ADA83C;
    }
L_08ADA83C:
    ctx.gpr[7] = (0u | 126u);
    goto L_08ADA840;
L_08ADA840:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08ADA868;
      }
      goto L_08ADA848;
    }
L_08ADA848:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08ADA878;
      }
      goto L_08ADA854;
    }
L_08ADA854:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08ADA854;
      }
      goto L_08ADA860;
    }
L_08ADA860:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA878;
      }
      goto L_08ADA868;
    }
L_08ADA868:
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[16] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08ADA878;
L_08ADA878:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA840;
      }
      goto L_08ADA884;
    }
L_08ADA884:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADA8A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-29216)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAA64;
      }
      goto L_08ADA8D8;
    }
L_08ADA8D8:
    ctx.gpr[31] = (0x08ADA8E0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-29216), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 718u, 0x0891B398u>(ctx, &aot_mem) && ctx.pc == 0x08ADA8E0u) goto L_08ADA8E0;
    return;
L_08ADA8E0:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[20] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADA924;
      }
      goto L_08ADA8FC;
    }
L_08ADA8FC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08ADA908u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08ADA908u) goto L_08ADA908;
    return;
L_08ADA908:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA920;
      }
      goto L_08ADA914;
    }
L_08ADA914:
    ctx.gpr[31] = (0x08ADA91Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08ADA91Cu) goto L_08ADA91C;
    return;
L_08ADA91C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08ADA920;
L_08ADA920:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    goto L_08ADA924;
L_08ADA924:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ADA930u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 400u, 0x08913A48u>(ctx, &aot_mem) && ctx.pc == 0x08ADA930u) goto L_08ADA930;
    return;
L_08ADA930:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA964;
      }
      goto L_08ADA93C;
    }
L_08ADA93C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08ADA948u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08ADA948u) goto L_08ADA948;
    return;
L_08ADA948:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA960;
      }
      goto L_08ADA954;
    }
L_08ADA954:
    ctx.gpr[31] = (0x08ADA95Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08ADA95Cu) goto L_08ADA95C;
    return;
L_08ADA95C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08ADA960;
L_08ADA960:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    goto L_08ADA964;
L_08ADA964:
    ctx.gpr[31] = (0x08ADA96Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 407u, 0x08913B04u>(ctx, &aot_mem) && ctx.pc == 0x08ADA96Cu) goto L_08ADA96C;
    return;
L_08ADA96C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA9A0;
      }
      goto L_08ADA978;
    }
L_08ADA978:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08ADA984u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08ADA984u) goto L_08ADA984;
    return;
L_08ADA984:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA99C;
      }
      goto L_08ADA990;
    }
L_08ADA990:
    ctx.gpr[31] = (0x08ADA998u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08ADA998u) goto L_08ADA998;
    return;
L_08ADA998:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08ADA99C;
L_08ADA99C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    goto L_08ADA9A0;
L_08ADA9A0:
    ctx.gpr[31] = (0x08ADA9A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 442u, 0x08913D64u>(ctx, &aot_mem) && ctx.pc == 0x08ADA9A8u) goto L_08ADA9A8;
    return;
L_08ADA9A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA9F4;
      }
      goto L_08ADA9B4;
    }
L_08ADA9B4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08ADA9EC;
      }
      goto L_08ADA9C0;
    }
L_08ADA9C0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08ADA9CCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08ADA9CCu) goto L_08ADA9CC;
    return;
L_08ADA9CC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA9E4;
      }
      goto L_08ADA9D8;
    }
L_08ADA9D8:
    ctx.gpr[31] = (0x08ADA9E0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08ADA9E0u) goto L_08ADA9E0;
    return;
L_08ADA9E0:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08ADA9E4;
L_08ADA9E4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08ADA9EC;
L_08ADA9EC:
    ctx.gpr[31] = (0x08ADA9F4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 2u, 0x0891402Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA9F4u) goto L_08ADA9F4;
    return;
L_08ADA9F4:
    ctx.gpr[31] = (0x08ADA9FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 719u, 0x0891B3ACu>(ctx, &aot_mem) && ctx.pc == 0x08ADA9FCu) goto L_08ADA9FC;
    return;
L_08ADA9FC:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-29515), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(-29514), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29516), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25764)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAA64;
      }
      goto L_08ADAA20;
    }
L_08ADAA20:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08ADAA4C;
      }
      goto L_08ADAA2C;
    }
L_08ADAA2C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08ADAA54;
      }
      goto L_08ADAA34;
    }
L_08ADAA34:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ADAA5C;
      }
      goto L_08ADAA3C;
    }
L_08ADAA3C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08ADAA5C;
      }
      goto L_08ADAA44;
    }
L_08ADAA44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAA64;
      }
      goto L_08ADAA4C;
    }
L_08ADAA4C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-29515), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_08ADAA64;
      }
      goto L_08ADAA54;
    }
L_08ADAA54:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(-29514), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_08ADAA64;
      }
      goto L_08ADAA5C;
    }
L_08ADAA5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAA64;
      }
      goto L_08ADAA64;
    }
L_08ADAA64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADAA8C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADAA94:
    if (lcs::decomp::run<0x08ADAA94u>(rt, ctx)) { jump_target = ctx.gpr[31]; local_pc = jump_target; if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; } ctx.pc = jump_target; return; }  // [decomp-hook]
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1416), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADAA9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-608));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ADAADCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADAADCu) goto L_08ADAADC;
    return;
L_08ADAADC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(130)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-25908));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ADAB14;
      }
      goto L_08ADAAFC;
    }
L_08ADAAFC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08ADAB4C;
      }
      goto L_08ADAB04;
    }
L_08ADAB04:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08ADAB34;
      }
      goto L_08ADAB0C;
    }
L_08ADAB0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADAB50;
      }
      goto L_08ADAB14;
    }
L_08ADAB14:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADAB40;
      }
      goto L_08ADAB20;
    }
L_08ADAB20:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAB4C;
      }
      goto L_08ADAB28;
    }
L_08ADAB28:
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADAB50;
      }
      goto L_08ADAB34;
    }
L_08ADAB34:
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADAB50;
      }
      goto L_08ADAB40;
    }
L_08ADAB40:
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADAB50;
      }
      goto L_08ADAB4C;
    }
L_08ADAB4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08ADAB50;
L_08ADAB50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[4] = (16041u << 16u);
      if (branch_taken) {
          goto L_08ADACC4;
      }
      goto L_08ADAB5C;
    }
L_08ADAB5C:
    ctx.gpr[4] = (ctx.gpr[4] | 37645u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[21] = (2227u << 16u);
    goto L_08ADAB88;
L_08ADAB88:
    ctx.gpr[31] = (0x08ADAB90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x08ADAB90u) goto L_08ADAB90;
    return;
L_08ADAB90:
    ctx.gpr[31] = (0x08ADAB98u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A5505Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAB98u) goto L_08ADAB98;
    return;
L_08ADAB98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08ADABACu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADABACu) goto L_08ADABAC;
    return;
L_08ADABAC:
    ctx.gpr[31] = (0x08ADABB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADABB4u) goto L_08ADABB4;
    return;
L_08ADABB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAC00;
      }
      goto L_08ADABC0;
    }
L_08ADABC0:
    ctx.gpr[31] = (0x08ADABC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A55028u>(ctx, &aot_mem) && ctx.pc == 0x08ADABC8u) goto L_08ADABC8;
    return;
L_08ADABC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ADAC00;
      }
      goto L_08ADABD4;
    }
L_08ADABD4:
    ctx.gpr[31] = (0x08ADABDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A55018u>(ctx, &aot_mem) && ctx.pc == 0x08ADABDCu) goto L_08ADABDC;
    return;
L_08ADABDC:
    ctx.gpr[31] = (0x08ADABE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 203u, 0x08A54FCCu>(ctx, &aot_mem) && ctx.pc == 0x08ADABE4u) goto L_08ADABE4;
    return;
L_08ADABE4:
    ctx.gpr[31] = (0x08ADABECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 223u, 0x08A5513Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADABECu) goto L_08ADABEC;
    return;
L_08ADABEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08ADAC00u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAC00u) goto L_08ADAC00;
    return;
L_08ADAC00:
    ctx.gpr[31] = (0x08ADAC08u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADAC08u) goto L_08ADAC08;
    return;
L_08ADAC08:
    ctx.gpr[31] = (0x08ADAC10u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08ADAC10u) goto L_08ADAC10;
    return;
L_08ADAC10:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08ADAC1Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08ADAC1Cu) goto L_08ADAC1C;
    return;
L_08ADAC1C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08ADAC34u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08ADAC34u) goto L_08ADAC34;
    return;
L_08ADAC34:
    ctx.gpr[31] = (0x08ADAC3Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08ADAC3Cu) goto L_08ADAC3C;
    return;
L_08ADAC3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24444)));
        goto L_08ADAC74;
    }
    goto L_08ADAC48;
L_08ADAC48:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08ADAC54u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08ADAC54u) goto L_08ADAC54;
    return;
L_08ADAC54:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAC6C;
      }
      goto L_08ADAC60;
    }
L_08ADAC60:
    ctx.gpr[31] = (0x08ADAC68u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08ADAC68u) goto L_08ADAC68;
    return;
L_08ADAC68:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08ADAC6C;
L_08ADAC6C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24444), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24444)));
    goto L_08ADAC74;
L_08ADAC74:
    ctx.gpr[31] = (0x08ADAC7Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08ADAC7Cu) goto L_08ADAC7C;
    return;
L_08ADAC7C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ADAC88u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54364u>(ctx, &aot_mem) && ctx.pc == 0x08ADAC88u) goto L_08ADAC88;
    return;
L_08ADAC88:
    ctx.gpr[31] = (0x08ADAC90u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 348u, 0x08879F84u>(ctx, &aot_mem) && ctx.pc == 0x08ADAC90u) goto L_08ADAC90;
    return;
L_08ADAC90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08ADACB4u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08ADACB4u) goto L_08ADACB4;
    return;
L_08ADACB4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ADAB88;
      }
      goto L_08ADACC4;
    }
L_08ADACC4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADACFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAD3C;
      }
      goto L_08ADAD10;
    }
L_08ADAD10:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1373)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAD44;
      }
      goto L_08ADAD1C;
    }
L_08ADAD1C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1373), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADAD34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADAD34u) goto L_08ADAD34;
    return;
L_08ADAD34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAD44;
      }
      goto L_08ADAD3C;
    }
L_08ADAD3C:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1373), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08ADAD44;
L_08ADAD44:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADAD50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_08ADAD6C;
      }
      goto L_08ADAD64;
    }
L_08ADAD64:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08ADAD88;
      }
      goto L_08ADAD6C;
    }
L_08ADAD6C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08ADAD7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 147u, 0x08864A90u>(ctx, &aot_mem) && ctx.pc == 0x08ADAD7Cu) goto L_08ADAD7C;
    return;
L_08ADAD7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08ADAD88u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08AD9B08;
L_08ADAD88:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADAD94:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADADBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADAE00:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADAE24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (17279u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[7] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[16];
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[17] - ctx.fpr[18];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[19];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[2];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[1] - ctx.fpr[3];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[4] - ctx.fpr[5];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[6] - ctx.fpr[7];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADAED0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[15];
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[17] = ctx.fpr[18] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[0] + ctx.fpr[19];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[14] = ctx.fpr[16] + ctx.fpr[14];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = ctx.fpr[18] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADAF7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-480));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAFD8;
      }
      goto L_08ADAFD4;
    }
L_08ADAFD4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), 0u);
    goto L_08ADAFD8;
L_08ADAFD8:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(306), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(308), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08ADAFE8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08ADA8A4;
L_08ADAFE8:
    ctx.gpr[31] = (0x08ADAFF0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 669u, 0x08ADE850u>(ctx, &aot_mem) && ctx.pc == 0x08ADAFF0u) goto L_08ADAFF0;
    return;
L_08ADAFF0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(305)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 216u, 0x08ADCB58u>(ctx, &aot_mem); return;
      }
      goto L_08ADAFFC;
    }
L_08ADAFFC:
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25456));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[31] = (0x08ADB010u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AD9920;
L_08ADB010:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(321)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 7u);
      if (branch_taken) {
          goto L_08ADB034;
      }
      goto L_08ADB01C;
    }
L_08ADB01C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ADB028u);
    ctx.gpr[5] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 374u, 0x088B6224u>(ctx, &aot_mem) && ctx.pc == 0x08ADB028u) goto L_08ADB028;
    return;
L_08ADB028:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ADB034u);
    ctx.gpr[5] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 375u, 0x088B622Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB034u) goto L_08ADB034;
    return;
L_08ADB034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1380)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 135u, 0x08ADC7F8u>(ctx, &aot_mem); return;
      }
      goto L_08ADB040;
    }
L_08ADB040:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 135u, 0x08ADC7F8u>(ctx, &aot_mem); return;
      }
      goto L_08ADB04C;
    }
L_08ADB04C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7128)));
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[30] = (0u | 0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[22] = (2229u << 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[21] = (2229u << 16u);
      if (branch_taken) {
          goto L_08ADB090;
      }
      goto L_08ADB078;
    }
L_08ADB078:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7128), ctx.gpr[5]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7124));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7124), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08ADB090;
L_08ADB090:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1374)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB13C;
      }
      goto L_08ADB09C;
    }
L_08ADB09C:
    ctx.gpr[31] = (0x08ADB0A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB0A4u) goto L_08ADB0A4;
    return;
L_08ADB0A4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (2232u << 16u);
      if (branch_taken) {
          goto L_08ADB0C0;
      }
      goto L_08ADB0B4;
    }
L_08ADB0B4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27324)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1376), ctx.gpr[4]);
    goto L_08ADB0C0;
L_08ADB0C0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1374), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08ADB130u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 786u, 0x08967AC0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB130u) goto L_08ADB130;
    return;
L_08ADB130:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-7124));
    ctx.gpr[31] = (0x08ADB13Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 796u, 0x08967C70u>(ctx, &aot_mem) && ctx.pc == 0x08ADB13Cu) goto L_08ADB13C;
    return;
L_08ADB13C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08ADB148u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB148u) goto L_08ADB148;
    return;
L_08ADB148:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB184;
      }
      goto L_08ADB150;
    }
L_08ADB150:
    ctx.gpr[31] = (0x08ADB158u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 209u, 0x089D5A30u>(ctx, &aot_mem) && ctx.pc == 0x08ADB158u) goto L_08ADB158;
    return;
L_08ADB158:
    ctx.gpr[31] = (0x08ADB160u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 209u, 0x089D5A30u>(ctx, &aot_mem) && ctx.pc == 0x08ADB160u) goto L_08ADB160;
    return;
L_08ADB160:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x08ADB178u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 791u, 0x08967BB0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB178u) goto L_08ADB178;
    return;
L_08ADB178:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ADB184u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 768u, 0x089678F0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB184u) goto L_08ADB184;
    return;
L_08ADB184:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08ADB46C;
      }
      goto L_08ADB198;
    }
L_08ADB198:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27324)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1200));
    ctx.gpr[5] = (ctx.gpr[16] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB46C;
      }
      goto L_08ADB1B0;
    }
L_08ADB1B0:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1200));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[6] = (17352u << 16u);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (2232u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08ADB1E4;
      }
      goto L_08ADB1D8;
    }
L_08ADB1D8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    goto L_08ADB1E4;
L_08ADB1E4:
    ctx.gpr[4] = (17558u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[24] / ctx.fpr[12];
    ctx.gpr[31] = (0x08ADB1F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 608u, 0x08AD6DC4u>(ctx, &aot_mem) && ctx.pc == 0x08ADB1F8u) goto L_08ADB1F8;
    return;
L_08ADB1F8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1136)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[24] = ctx.fpr[22] - ctx.fpr[0];
      if (branch_taken) {
          goto L_08ADB21C;
      }
      goto L_08ADB214;
    }
L_08ADB214:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADB230;
      }
      goto L_08ADB21C;
    }
L_08ADB21C:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[28]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27020)));
        goto L_08ADB234;
    }
    goto L_08ADB22C;
L_08ADB22C:
    ctx.gpr[23] = (0u | 1u);
    goto L_08ADB230;
L_08ADB230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27020)));
    goto L_08ADB234;
L_08ADB234:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08ADB290u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 786u, 0x08967AC0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB290u) goto L_08ADB290;
    return;
L_08ADB290:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.gpr[31] = (0x08ADB29Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 796u, 0x08967C70u>(ctx, &aot_mem) && ctx.pc == 0x08ADB29Cu) goto L_08ADB29C;
    return;
L_08ADB29C:
    ctx.gpr[31] = (0x08ADB2A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 209u, 0x089D5A30u>(ctx, &aot_mem) && ctx.pc == 0x08ADB2A4u) goto L_08ADB2A4;
    return;
L_08ADB2A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7124)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-7124));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[18];
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[6]);
    ctx.gpr[31] = (0x08ADB398u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 791u, 0x08967BB0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB398u) goto L_08ADB398;
    return;
L_08ADB398:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x08ADB3A4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 768u, 0x089678F0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB3A4u) goto L_08ADB3A4;
    return;
L_08ADB3A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[22] = ctx.fpr[15] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1136)));
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[12];
    goto L_08ADB46C;
L_08ADB46C:
    ctx.gpr[31] = (0x08ADB474u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADB474u) goto L_08ADB474;
    return;
L_08ADB474:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADB494;
      }
      goto L_08ADB484;
    }
L_08ADB484:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08ADB498;
      }
      goto L_08ADB490;
    }
L_08ADB490:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ADB494;
L_08ADB494:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08ADB498;
L_08ADB498:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB4B0;
      }
      goto L_08ADB4A0;
    }
L_08ADB4A0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25811)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25811), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08ADB4B0;
L_08ADB4B0:
    ctx.gpr[31] = (0x08ADB4B8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADB4B8u) goto L_08ADB4B8;
    return;
L_08ADB4B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(38))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADB4D8;
      }
      goto L_08ADB4C8;
    }
L_08ADB4C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08ADB4DC;
      }
      goto L_08ADB4D4;
    }
L_08ADB4D4:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ADB4D8;
L_08ADB4D8:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08ADB4DC;
L_08ADB4DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB5DC;
      }
      goto L_08ADB4E4;
    }
L_08ADB4E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADB4F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADB4F8u) goto L_08ADB4F8;
    return;
L_08ADB4F8:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-25824)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADB51C;
      }
      goto L_08ADB508;
    }
L_08ADB508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-25820)));
    ctx.gpr[31] = (0x08ADB514u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-25824), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 29u, 0x08968270u>(ctx, &aot_mem) && ctx.pc == 0x08ADB514u) goto L_08ADB514;
    return;
L_08ADB514:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25820), 0u);
      if (branch_taken) {
          goto L_08ADB5DC;
      }
      goto L_08ADB51C;
    }
L_08ADB51C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[13];
    ctx.gpr[31] = (0x08ADB58Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 786u, 0x08967AC0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB58Cu) goto L_08ADB58C;
    return;
L_08ADB58C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.gpr[31] = (0x08ADB598u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 796u, 0x08967C70u>(ctx, &aot_mem) && ctx.pc == 0x08ADB598u) goto L_08ADB598;
    return;
L_08ADB598:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7176));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08ADB5CCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 837u, 0x08967FC8u>(ctx, &aot_mem) && ctx.pc == 0x08ADB5CCu) goto L_08ADB5CC;
    return;
L_08ADB5CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25820), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ADB5DC;
      }
      goto L_08ADB5D4;
    }
L_08ADB5D4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-25824), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08ADB5DC;
L_08ADB5DC:
    ctx.gpr[31] = (0x08ADB5E4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADB5E4u) goto L_08ADB5E4;
    return;
L_08ADB5E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB60C;
      }
      goto L_08ADB5F0;
    }
L_08ADB5F0:
    ctx.gpr[31] = (0x08ADB5F8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADB5F8u) goto L_08ADB5F8;
    return;
L_08ADB5F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB60C;
      }
      goto L_08ADB604;
    }
L_08ADB604:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB614;
      }
      goto L_08ADB60C;
    }
L_08ADB60C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB9C4;
      }
      goto L_08ADB614;
    }
L_08ADB614:
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1136)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08ADB62C;
      }
      goto L_08ADB628;
    }
L_08ADB628:
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08ADB62C;
L_08ADB62C:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    ctx.gpr[4] = (17430u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB9C4;
      }
      goto L_08ADB648;
    }
L_08ADB648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(236));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[13];
    ctx.gpr[31] = (0x08ADB6B8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 786u, 0x08967AC0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB6B8u) goto L_08ADB6B8;
    return;
L_08ADB6B8:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1136)));
    ctx.gpr[4] = (17154u << 16u);
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[28];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[17] - ctx.fpr[12];
    ctx.gpr[4] = (17124u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1136), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[16] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[19] = (0u | 0u);
    ctx.fpr[28] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[20] = (0u | 1u);
    ctx.fpr[15] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[18]) || std::isnan(ctx.fpr[20])) && ctx.fpr[18] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_08ADB734;
      }
      goto L_08ADB710;
    }
L_08ADB710:
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB728;
      }
      goto L_08ADB720;
    }
L_08ADB720:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADB72C;
      }
      goto L_08ADB728;
    }
L_08ADB728:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    goto L_08ADB72C;
L_08ADB72C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08ADB760;
      }
      goto L_08ADB734;
    }
L_08ADB734:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1144)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB760;
      }
      goto L_08ADB748;
    }
L_08ADB748:
    ctx.fpr[15] = ctx.fpr[17] + ctx.fpr[24];
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[17];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADB760;
L_08ADB760:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[19]) || std::isnan(ctx.fpr[20])) && ctx.fpr[19] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB794;
      }
      goto L_08ADB770;
    }
L_08ADB770:
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB788;
      }
      goto L_08ADB780;
    }
L_08ADB780:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
      if (branch_taken) {
          goto L_08ADB78C;
      }
      goto L_08ADB788;
    }
L_08ADB788:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_08ADB78C;
L_08ADB78C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08ADB7C0;
      }
      goto L_08ADB794;
    }
L_08ADB794:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1140)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB7C0;
      }
      goto L_08ADB7A8;
    }
L_08ADB7A8:
    ctx.fpr[13] = ctx.fpr[17] + ctx.fpr[24];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADB7C0;
L_08ADB7C0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.gpr[31] = (0x08ADB7CCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 768u, 0x089678F0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB7CCu) goto L_08ADB7CC;
    return;
L_08ADB7CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[13];
      if (branch_taken) {
          goto L_08ADB830;
      }
      goto L_08ADB820;
    }
L_08ADB820:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB850;
      }
      goto L_08ADB830;
    }
L_08ADB830:
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB85C;
      }
      goto L_08ADB840;
    }
L_08ADB840:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB85C;
      }
      goto L_08ADB850;
    }
L_08ADB850:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08ADB86C;
      }
      goto L_08ADB85C;
    }
L_08ADB85C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB86C;
      }
      goto L_08ADB864;
    }
L_08ADB864:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADB86C;
L_08ADB86C:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB88C;
      }
      goto L_08ADB87C;
    }
L_08ADB87C:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB8AC;
      }
      goto L_08ADB88C;
    }
L_08ADB88C:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB8B8;
      }
      goto L_08ADB89C;
    }
L_08ADB89C:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB8B8;
      }
      goto L_08ADB8AC;
    }
L_08ADB8AC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08ADB8C8;
      }
      goto L_08ADB8B8;
    }
L_08ADB8B8:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
        goto L_08ADB8CC;
    }
    goto L_08ADB8C0;
L_08ADB8C0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08ADB8C8;
L_08ADB8C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
    goto L_08ADB8CC;
L_08ADB8CC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB904;
      }
      goto L_08ADB8FC;
    }
L_08ADB8FC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADB904;
      }
      goto L_08ADB904;
    }
L_08ADB904:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB944;
      }
      goto L_08ADB93C;
    }
L_08ADB93C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADB944;
      }
      goto L_08ADB944;
    }
L_08ADB944:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB980;
      }
      goto L_08ADB978;
    }
L_08ADB978:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08ADB980;
      }
      goto L_08ADB980;
    }
L_08ADB980:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB9C0;
      }
      goto L_08ADB9B8;
    }
L_08ADB9B8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADB9C0;
      }
      goto L_08ADB9C0;
    }
L_08ADB9C0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08ADB9C4;
L_08ADB9C4:
    ctx.gpr[31] = (0x08ADB9CCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADB9CCu) goto L_08ADB9CC;
    return;
L_08ADB9CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB9F4;
      }
      goto L_08ADB9D8;
    }
L_08ADB9D8:
    ctx.gpr[31] = (0x08ADB9E0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADB9E0u) goto L_08ADB9E0;
    return;
L_08ADB9E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB9F4;
      }
      goto L_08ADB9EC;
    }
L_08ADB9EC:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB9FC;
      }
      goto L_08ADB9F4;
    }
L_08ADB9F4:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADBEB0;
      }
      goto L_08ADB9FC;
    }
L_08ADB9FC:
    ctx.gpr[4] = (49408u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1136)));
    ctx.gpr[4] = (17154u << 16u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADBA18;
      }
      goto L_08ADBA14;
    }
L_08ADBA14:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08ADBA18;
L_08ADBA18:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBEB0;
      }
      goto L_08ADBA28;
    }
L_08ADBA28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(252));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[13];
    ctx.gpr[31] = (0x08ADBA98u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 786u, 0x08967AC0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBA98u) goto L_08ADBA98;
    return;
L_08ADBA98:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1136)));
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[20] = (0u | 1u);
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1136), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (17124u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[24] - ctx.fpr[14];
    ctx.fpr[17] = ctx.fpr[14] + ctx.fpr[24];
    ctx.fpr[18] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[20])) && ctx.fpr[15] == ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
      if (branch_taken) {
          goto L_08ADBB20;
      }
      goto L_08ADBAF4;
    }
L_08ADBAF4:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBB10;
      }
      goto L_08ADBB04;
    }
L_08ADBB04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADBB18;
      }
      goto L_08ADBB10;
    }
L_08ADBB10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADBB18;
L_08ADBB18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08ADBBC8;
      }
      goto L_08ADBB20;
    }
L_08ADBB20:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1144)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[17]) || std::isnan(ctx.fpr[12])) && ctx.fpr[17] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
      if (branch_taken) {
          goto L_08ADBB58;
      }
      goto L_08ADBB38;
    }
L_08ADBB38:
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = ctx.fpr[13] - ctx.fpr[18];
    ctx.fpr[18] = ctx.fpr[18] / ctx.fpr[13];
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[12];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    goto L_08ADBB58;
L_08ADBB58:
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBB78;
      }
      goto L_08ADBB68;
    }
L_08ADBB68:
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBBC8;
      }
      goto L_08ADBB78;
    }
L_08ADBB78:
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1144));
      if (branch_taken) {
          goto L_08ADBB94;
      }
      goto L_08ADBB88;
    }
L_08ADBB88:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADBB98;
      }
      goto L_08ADBB94;
    }
L_08ADBB94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08ADBB98;
L_08ADBB98:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1144)));
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1144));
      if (branch_taken) {
          goto L_08ADBBBC;
      }
      goto L_08ADBBB0;
    }
L_08ADBBB0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADBBC0;
      }
      goto L_08ADBBBC;
    }
L_08ADBBBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08ADBBC0;
L_08ADBBC0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    goto L_08ADBBC8;
L_08ADBBC8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[20])) && ctx.fpr[14] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBC04;
      }
      goto L_08ADBBD8;
    }
L_08ADBBD8:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBBF4;
      }
      goto L_08ADBBE8;
    }
L_08ADBBE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADBBFC;
      }
      goto L_08ADBBF4;
    }
L_08ADBBF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADBBFC;
L_08ADBBFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08ADBCAC;
      }
      goto L_08ADBC04;
    }
L_08ADBC04:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1140)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[24])) && ctx.fpr[15] == ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
      if (branch_taken) {
          goto L_08ADBC3C;
      }
      goto L_08ADBC1C;
    }
L_08ADBC1C:
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[13] = ctx.fpr[16] / ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[24];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    goto L_08ADBC3C;
L_08ADBC3C:
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBC5C;
      }
      goto L_08ADBC4C;
    }
L_08ADBC4C:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBCAC;
      }
      goto L_08ADBC5C;
    }
L_08ADBC5C:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1140));
      if (branch_taken) {
          goto L_08ADBC78;
      }
      goto L_08ADBC6C;
    }
L_08ADBC6C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(280));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADBC7C;
      }
      goto L_08ADBC78;
    }
L_08ADBC78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08ADBC7C;
L_08ADBC7C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1140)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1140));
      if (branch_taken) {
          goto L_08ADBCA0;
      }
      goto L_08ADBC94;
    }
L_08ADBC94:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(284));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADBCA4;
      }
      goto L_08ADBCA0;
    }
L_08ADBCA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08ADBCA4;
L_08ADBCA4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    goto L_08ADBCAC;
L_08ADBCAC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[31] = (0x08ADBCB8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 768u, 0x089678F0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBCB8u) goto L_08ADBCB8;
    return;
L_08ADBCB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[13];
      if (branch_taken) {
          goto L_08ADBD1C;
      }
      goto L_08ADBD0C;
    }
L_08ADBD0C:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBD3C;
      }
      goto L_08ADBD1C;
    }
L_08ADBD1C:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBD48;
      }
      goto L_08ADBD2C;
    }
L_08ADBD2C:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBD48;
      }
      goto L_08ADBD3C;
    }
L_08ADBD3C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08ADBD58;
      }
      goto L_08ADBD48;
    }
L_08ADBD48:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADBD58;
      }
      goto L_08ADBD50;
    }
L_08ADBD50:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADBD58;
L_08ADBD58:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBD78;
      }
      goto L_08ADBD68;
    }
L_08ADBD68:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBD98;
      }
      goto L_08ADBD78;
    }
L_08ADBD78:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBDA4;
      }
      goto L_08ADBD88;
    }
L_08ADBD88:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBDA4;
      }
      goto L_08ADBD98;
    }
L_08ADBD98:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08ADBDB4;
      }
      goto L_08ADBDA4;
    }
L_08ADBDA4:
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
        goto L_08ADBDB8;
    }
    goto L_08ADBDAC;
L_08ADBDAC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08ADBDB4;
L_08ADBDB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
    goto L_08ADBDB8;
L_08ADBDB8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBDF0;
      }
      goto L_08ADBDE8;
    }
L_08ADBDE8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADBDF0;
      }
      goto L_08ADBDF0;
    }
L_08ADBDF0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBE30;
      }
      goto L_08ADBE28;
    }
L_08ADBE28:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADBE30;
      }
      goto L_08ADBE30;
    }
L_08ADBE30:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBE6C;
      }
      goto L_08ADBE64;
    }
L_08ADBE64:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08ADBE6C;
      }
      goto L_08ADBE6C;
    }
L_08ADBE6C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBEAC;
      }
      goto L_08ADBEA4;
    }
L_08ADBEA4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADBEAC;
      }
      goto L_08ADBEAC;
    }
L_08ADBEAC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08ADBEB0;
L_08ADBEB0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08ADBEBCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADBEBCu) goto L_08ADBEBC;
    return;
L_08ADBEBC:
    ctx.gpr[31] = (0x08ADBEC4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 667u, 0x08A96D98u>(ctx, &aot_mem) && ctx.pc == 0x08ADBEC4u) goto L_08ADBEC4;
    return;
L_08ADBEC4:
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08ADBEE8;
    }
    goto L_08ADBECC;
L_08ADBECC:
    ctx.gpr[31] = (0x08ADBED4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADBED4u) goto L_08ADBED4;
    return;
L_08ADBED4:
    ctx.gpr[31] = (0x08ADBEDCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 888u, 0x08A976B0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBEDCu) goto L_08ADBEDC;
    return;
L_08ADBEDC:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08ADBEFC;
    }
    goto L_08ADBEE4;
L_08ADBEE4:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08ADBEE8;
L_08ADBEE8:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBF0C;
      }
      goto L_08ADBEF8;
    }
L_08ADBEF8:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08ADBEFC;
L_08ADBEFC:
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0ACu>(ctx, &aot_mem); return;
      }
      goto L_08ADBF0C;
    }
L_08ADBF0C:
    ctx.gpr[4] = (17154u << 16u);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADBF28;
      }
      goto L_08ADBF20;
    }
L_08ADBF20:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08ADBF90;
      }
      goto L_08ADBF28;
    }
L_08ADBF28:
    ctx.gpr[31] = (0x08ADBF30u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADBF30u) goto L_08ADBF30;
    return;
L_08ADBF30:
    ctx.gpr[31] = (0x08ADBF38u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 667u, 0x08A96D98u>(ctx, &aot_mem) && ctx.pc == 0x08ADBF38u) goto L_08ADBF38;
    return;
L_08ADBF38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADBF48;
      }
      goto L_08ADBF40;
    }
L_08ADBF40:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08ADBF48;
L_08ADBF48:
    ctx.gpr[31] = (0x08ADBF50u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADBF50u) goto L_08ADBF50;
    return;
L_08ADBF50:
    ctx.gpr[31] = (0x08ADBF58u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 888u, 0x08A976B0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBF58u) goto L_08ADBF58;
    return;
L_08ADBF58:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ADBF90;
      }
      goto L_08ADBF60;
    }
L_08ADBF60:
    ctx.gpr[31] = (0x08ADBF68u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADBF68u) goto L_08ADBF68;
    return;
L_08ADBF68:
    ctx.gpr[31] = (0x08ADBF70u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 888u, 0x08A976B0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBF70u) goto L_08ADBF70;
    return;
L_08ADBF70:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_08ADBF90;
L_08ADBF90:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1136)));
    ctx.gpr[4] = (17124u << 16u);
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 4u, 0x08ADC024u>(ctx, &aot_mem); return;
      }
      goto L_08ADBFB8;
    }
L_08ADBFB8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1144)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
        goto L_08ADBFD8;
    }
    goto L_08ADBFCC;
L_08ADBFCC:
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[24];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0ACu>(ctx, &aot_mem); return;
      }
      goto L_08ADBFD8;
    }
L_08ADBFD8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.pc = 0x08ADC000u; return;
}

void recomp_unit_0181(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0181_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_181(Runtime &runtime) {
    runtime.register_generated_unit(181u, 0x08AD8000u, 16384u, &recomp_unit_0181, &recomp_unit_0181_entry);
    runtime.register_function(0x08AD8000u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD801Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8028u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8034u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD803Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8040u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8044u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8050u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8064u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD806Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8078u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8084u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8090u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8098u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD809Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD80A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD80B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD80BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD80E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD80ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD80F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8100u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8104u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8108u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8114u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8128u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD812Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD814Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD818Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD81FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8208u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8214u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8220u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8228u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD822Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8234u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8240u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD824Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8270u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD827Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8288u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8290u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8294u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8298u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD82A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD82B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD82C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD82CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD82D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD82E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD82ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD82F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD82F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8304u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8310u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8334u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8340u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD834Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8354u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8358u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD835Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8368u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD837Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8380u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD83A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD83E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8448u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8454u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8460u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8468u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD846Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8474u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8480u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD848Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD84B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD84C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD84D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD84D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD84DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD84E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD84ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8500u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8524u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8564u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD85CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD85D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD85E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD85ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD85F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD85F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8604u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8610u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD863Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8648u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8654u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD865Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8660u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8664u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8670u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8684u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD86A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD86E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8710u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8718u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD871Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8728u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8734u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8748u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD874Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8750u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8758u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8760u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8768u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8774u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD877Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8788u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD879Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD87A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD87A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD87ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD87B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD87C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD87D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD87DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD87E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD87FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8800u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8804u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD880Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8814u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD881Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8824u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD882Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8838u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8844u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8858u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8860u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD886Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8880u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8884u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8888u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8890u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8898u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD88A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD88A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD88B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD88CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD88D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD88ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD88F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8910u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8918u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8920u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8934u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD894Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8954u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8964u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8970u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD897Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8988u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8998u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD89A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD89ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD89BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD89C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD89D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD89E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD89F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A00u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A10u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A1Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A2Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A38u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A48u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A54u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A64u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A70u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A80u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A8Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A9Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8AA4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8ABCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8AD8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8AF0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8B3Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8B58u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8B74u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8BC0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8BDCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8BF8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8C44u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8C60u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8C7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8CD4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8CF0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D10u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D70u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D8Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8DB8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8DD4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E08u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E24u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E58u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E74u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E9Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8EFCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F18u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F44u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F60u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F88u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8FE8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9004u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9030u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD904Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9074u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD90D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD90ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD910Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9128u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD914Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9168u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD917Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9184u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD918Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9194u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9204u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9218u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9224u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9298u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD930Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9314u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD931Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9334u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD933Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9360u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD936Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9378u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9380u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9384u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9388u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9394u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9424u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9448u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9450u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9464u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9508u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9510u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9524u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9534u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9544u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD954Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9558u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD960Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9614u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9620u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9634u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD963Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9648u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9658u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9664u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9678u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9680u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9688u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9690u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9698u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9704u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD970Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9714u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD971Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9720u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD972Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9744u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9750u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9758u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9760u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9768u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9770u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9778u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9780u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9788u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9790u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9798u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9800u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9804u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9814u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD982Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9838u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9840u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9848u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9850u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9858u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9860u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9868u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9870u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9878u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9880u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9888u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9890u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9898u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD98A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD98A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD98B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD98B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD98C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD98C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD98D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD98D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD98E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD98E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD98ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD98FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD990Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9914u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9918u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9920u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD994Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9960u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9980u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD998Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD99E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A04u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A10u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A18u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A24u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A34u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A40u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A4Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A64u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A74u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A88u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A94u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9AA4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9AACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9AB4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9AC8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9AD8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9AE0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9AE8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B08u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B34u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B40u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B48u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B54u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B60u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B78u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B88u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B94u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9BA0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9BA8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9BC0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9BC8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9BD8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9BE4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9BF4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9BFCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C04u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C0Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C18u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C20u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C30u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C3Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C50u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C54u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C74u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C88u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C90u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9CB0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9CB8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9CCCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9CD4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9CF4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9CFCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D24u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D30u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D3Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D4Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D64u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D70u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D94u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9DA4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9DD8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9DE0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9DE8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9DF0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9DF8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E04u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E0Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E1Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E34u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E3Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E44u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E50u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E68u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E70u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E8Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9EA0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9EB4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9EC4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9ED0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9EDCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9EE4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9EE8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9EF0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9EF8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F08u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F18u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F28u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F3Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F60u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F70u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F80u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F8Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F98u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9FA4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9FB0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9FB8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9FBCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9FC4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9FCCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9FE0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA00Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA028u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA030u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA040u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA04Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA058u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA070u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA074u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA07Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA094u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA0F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA110u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA128u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA130u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA140u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA148u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA14Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA154u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA15Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA16Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA174u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA178u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA184u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA18Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA194u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA1A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA1B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA1B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA1BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA1C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA1CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA1D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA1E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA1F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA1FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA204u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA214u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA22Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA234u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA248u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA260u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA268u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA27Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA298u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA2A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA2B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA2C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA2CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA2E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA300u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA320u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA330u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA340u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA358u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA3B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA3BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA3D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA3D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA3E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA3E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA3F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA400u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA408u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA418u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA42Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA434u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA444u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA458u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA470u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA478u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA494u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA49Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA4ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA4B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA4C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA4CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA4DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA4F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA4F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA504u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA518u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA530u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA538u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA554u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA55Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA578u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA580u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA588u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA590u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA5A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA5B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA5BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA5C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA5DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA5F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA5FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA618u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA620u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA63Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA644u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA64Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA65Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA66Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA688u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA690u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA698u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA6A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA6C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA6CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA6D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA6F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA6F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA700u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA718u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA758u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA760u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA77Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA784u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA78Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA7A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA7B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA7B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA7C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA7D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA7ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA7FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA804u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA80Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA82Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA83Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA840u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA848u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA854u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA860u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA868u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA878u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA884u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA908u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA914u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA91Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA920u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA924u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA930u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA93Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA948u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA954u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA95Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA960u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA964u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA96Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA978u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA984u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA990u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA998u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA99Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA20u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA2Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA34u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA3Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA44u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA4Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA54u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA5Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA64u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA8Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA94u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA9Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAADCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAAFCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB04u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB0Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB14u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB20u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB28u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB34u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB40u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB4Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB50u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB5Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB88u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB90u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB98u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADABACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADABB4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADABC0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADABC8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADABD4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADABDCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADABE4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADABECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC00u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC08u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC10u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC1Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC34u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC3Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC48u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC54u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC60u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC68u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC6Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC74u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC88u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC90u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADACB4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADACC4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADACFCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD10u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD1Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD34u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD3Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD44u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD50u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD64u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD6Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD88u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD94u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADADBCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAE00u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAE24u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAED0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAF7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAFD4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAFD8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAFE8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAFF0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAFFCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB010u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB01Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB028u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB034u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB040u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB04Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB078u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB090u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB09Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB0A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB0B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB0C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB130u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB13Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB148u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB150u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB158u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB160u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB178u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB184u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB198u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB1B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB1D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB1E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB1F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB214u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB21Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB22Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB230u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB234u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB290u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB29Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB2A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB398u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB46Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB474u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB484u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB490u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB494u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB498u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB508u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB514u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB51Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB58Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB598u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB5CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB5D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB5DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB5E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB5F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB5F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB604u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB60Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB614u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB628u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB62Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB648u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB6B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB710u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB720u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB728u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB72Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB734u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB748u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB760u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB770u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB780u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB788u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB78Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB794u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB7A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB7C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB7CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB820u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB830u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB840u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB850u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB85Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB864u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB86Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB87Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB88Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB89Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB904u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB93Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB944u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB978u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB980u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB9B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB9C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB9C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB9CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB9D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB9E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB9ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB9F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB9FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA14u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA18u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA28u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA98u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBAF4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB04u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB10u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB18u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB20u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB38u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB58u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB68u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB78u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB88u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB94u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB98u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBB0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBBCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBC0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBC8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBD8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBE8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBF4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBFCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC04u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC1Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC3Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC4Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC5Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC6Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC78u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC94u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBCA0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBCA4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBCACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBCB8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD0Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD1Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD2Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD3Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD48u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD50u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD58u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD68u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD78u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD88u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD98u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBDA4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBDACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBDB4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBDB8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBDE8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBDF0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE28u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE30u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE64u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE6Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBEA4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBEACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBEB0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBEBCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBEC4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBECCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBED4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBEDCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBEE4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBEE8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBEF8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBEFCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF0Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF20u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF28u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF30u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF38u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF40u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF48u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF50u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF58u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF60u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF68u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF70u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF90u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBFB8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBFCCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBFD8u, &recomp_unit_0181, "recomp_unit_0181");
}
} // namespace psprecomp
