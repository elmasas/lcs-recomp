#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "decomp.hpp"  // [decomp-hook]
#include "lcs_lang.hpp"
#include "lcs_menu_pages.hpp"  // [lcs-menu-pages]
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0182[4095] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 8, 9, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 12, 0, 13, 0, 14, 0, 15, 0, 16, 0, 17, 0, 18, 19, 0, 0, 0, 20, 21, 0, 0,
    0, 22, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 0, 30, 0, 31, 0, 32, 0, 33, 0, 0, 0, 0, 0,
    0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 38, 0, 39, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 44, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 46, 0, 47, 48, 0, 49, 0, 50, 0, 51, 0, 52, 0, 53, 0, 54, 55, 0, 0, 0, 56, 57, 0, 0, 0, 58, 0, 0, 0, 0,
    59, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0,
    76, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 80, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0,
    83, 84, 0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 91, 0, 0, 0, 92, 93, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 96, 0,
    97, 0, 98, 0, 99, 0, 100, 0, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 112, 0, 0, 0, 113,
    0, 0, 0, 114, 0, 0, 0, 115, 0, 116, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 120, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123,
    0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 134, 0, 135, 0,
    136, 0, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 146, 0, 147, 0, 148, 0,
    149, 0, 150, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 155, 0, 156, 0, 157, 0, 0, 158, 0, 0, 159, 0, 160,
    0, 161, 0, 162, 0, 163, 0, 164, 0, 165, 0, 0, 0, 0, 0, 166, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0,
    0, 0, 173, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 177, 0, 178, 0, 179, 0, 0, 180, 0, 0, 0, 181, 0, 182, 0, 183, 0, 0, 0,
    184, 0, 185, 0, 186, 0, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 0, 192, 0, 193, 0, 0, 0, 194, 0, 195, 0, 196, 0, 197, 0,
    0, 0, 198, 0, 0, 199, 200, 201, 0, 202, 0, 203, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 208, 0, 0, 0, 209, 0,
    0, 0, 0, 0, 210, 0, 211, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0,
    0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 225, 0, 226, 0, 227, 0, 0, 0, 228, 0, 229, 0, 230, 0, 231, 0, 0,
    232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 235, 0, 236, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 244, 0, 245, 0, 246, 0, 0, 0, 247, 0, 248,
    0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 255, 0, 256, 0, 257, 0, 0,
    258, 0, 259, 0, 260, 0, 0, 261, 0, 262, 0, 263, 0, 0, 264, 0, 265, 0, 266, 0, 0, 267, 0, 268, 0, 0, 0, 269, 0, 0, 270, 0,
    271, 0, 272, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 275, 276, 0, 0, 277, 0, 278, 0, 0, 0, 279, 0, 0, 280, 281, 282, 0, 283, 0,
    0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 287, 288, 0, 0, 289, 0, 290, 291, 0, 292, 0, 293, 0, 294, 0, 295, 296, 0,
    0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 304, 0,
    305, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 309, 0, 310, 0, 311, 0, 312, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0,
    0, 315, 0, 0, 316, 0, 317, 0, 318, 0, 319, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 323, 0, 324, 0, 325, 0, 326,
    0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 330, 0, 331, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 334, 0, 335, 336,
    0, 337, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 345,
    0, 0, 346, 0, 0, 347, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 353, 0, 0, 354,
    0, 355, 0, 0, 356, 0, 0, 357, 0, 0, 358, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361, 0, 362, 363, 0, 364, 0, 365, 366, 0, 367, 0,
    368, 0, 369, 0, 370, 0, 371, 0, 372, 0, 373, 374, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376,
    0, 0, 377, 0, 378, 0, 379, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 384, 0, 0, 385, 386, 387, 0, 388,
    0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0,
    0, 0, 0, 0, 393, 0, 394, 0, 395, 0, 0, 0, 0, 396, 0, 397, 0, 398, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 402, 0,
    0, 0, 0, 403, 0, 404, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0,
    0, 407, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 411, 0, 412, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0, 0, 419,
    0, 0, 420, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 429, 0, 0,
    430, 0, 431, 0, 432, 433, 0, 434, 0, 435, 436, 0, 437, 0, 438, 0, 439, 0, 0, 0, 440, 0, 441, 0, 0, 0, 442, 0, 0, 443, 0, 0,
    0, 0, 444, 0, 0, 0, 445, 0, 446, 0, 447, 0, 0, 448, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0,
    0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 454, 455, 0, 0, 0, 456, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0,
    0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 463, 0, 464,
    0, 465, 466, 0, 0, 0, 467, 0, 468, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 474, 0, 475, 0, 476, 477, 0, 0, 0, 478, 0, 479, 0, 480, 481, 0, 482, 0,
    483, 484, 0, 485, 486, 0, 487, 488, 0, 489, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491,
    0, 492, 0, 0, 493, 0, 494, 0, 495, 0, 0, 0, 0, 496, 0, 497, 0, 498, 0, 0, 0, 0, 499, 0, 0, 500, 0, 0, 0, 501, 0, 0,
    0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 506,
    0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 509, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 512, 0, 513, 0, 0, 514, 0, 515, 0, 516, 0,
    0, 0, 517, 0, 0, 0, 0, 518, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 521, 522, 0, 0, 0, 523, 0, 0, 0, 524,
    0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 528, 0, 0, 529,
    0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 537, 0, 0, 0, 538, 0, 0, 539,
    0, 540, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 543, 0, 544, 0, 545, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 548, 0, 549, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 551, 0, 552, 0, 553, 0, 554, 0, 0, 0, 0, 555, 0, 556, 0, 557, 0,
    558, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 0, 561, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 566, 0, 567, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 569, 0, 0, 0, 570, 0, 571, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 576, 0, 577, 0, 578, 0, 579, 580, 0, 0, 581, 0,
    0, 0, 582, 0, 583, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 586, 0, 0, 587, 0, 0, 0, 0, 0, 0, 588, 0, 589, 0, 0, 0, 590,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 593, 0, 594, 0, 595, 0, 0, 0, 0, 0,
    0, 0, 596, 0, 597, 0, 598, 0, 0, 0, 0, 0, 0, 0, 599, 0, 600, 0, 601, 0, 0, 0, 0, 0, 0, 0, 602, 0, 603, 0, 604, 0,
    0, 0, 0, 0, 0, 0, 605, 0, 606, 0, 607, 0, 608, 0, 0, 0, 0, 609, 0, 610, 0, 611, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 613, 0, 0, 614, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 617, 0, 618, 0,
    0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 620, 0, 621, 622, 0, 0, 623, 0, 624, 0, 625, 0, 626, 0, 627, 0, 0, 628, 0, 0, 0, 629,
    0, 630, 0, 631, 0, 0, 632, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 635, 0, 636, 0, 637, 0,
    0, 0, 638, 0, 639, 640, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 643, 0, 0, 644, 0, 0, 0, 0, 645, 0, 646, 0,
    0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 649, 0, 650, 0, 651, 0, 0, 652, 653, 0, 654, 0, 655, 0, 0, 0, 656, 657, 0, 658,
    659, 0, 660, 0, 0, 0, 0, 661, 0, 0, 662, 0, 0, 0, 0, 663, 0, 664, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 666, 0, 667, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 670, 0, 671, 672, 0, 673, 0, 674, 0, 0, 675, 0, 0, 0, 676, 0, 0, 677, 0, 678, 0, 679, 0, 680, 0, 0, 681, 0, 0,
    0, 0, 0, 0, 0, 0, 682, 0, 683, 0, 684, 0, 0, 0, 685, 0, 686, 0, 0, 687, 688, 0, 689, 0, 690, 0, 691, 0, 0, 692, 0, 693,
    0, 0, 0, 694, 0, 0, 0, 0, 695, 0, 696, 0, 0, 0, 697, 0, 698, 0, 0, 0, 699, 0, 0, 700, 701, 702, 0, 703, 0, 0, 0, 704,
    0, 705, 0, 706, 0, 0, 707, 708, 0, 709, 0, 0, 710, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 712, 0, 0, 713, 0, 0, 714,
    0, 0, 0, 0, 715, 0, 0, 0, 0, 716, 0, 0, 0, 0, 717, 0, 0, 718, 0, 0, 719, 0, 0, 720, 0, 721, 0, 722, 0, 723, 0, 0,
    724, 0, 725, 0, 0, 0, 0, 0, 0, 726, 727, 0, 0, 0, 0, 0, 728, 729, 0, 0, 730, 0, 0, 731, 0, 0, 732, 0, 733, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0, 0, 736, 0, 737, 738, 0, 739, 740, 0, 0, 741, 0, 742, 0, 0,
    743, 0, 744, 0, 745, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 748, 0, 749, 0, 0, 0, 0, 0, 0, 750, 0, 751, 0, 752, 0,
    0, 0, 0, 0, 753, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 756,
    0, 0, 757, 0, 0, 0, 758, 0, 759, 760, 0, 761, 0, 762, 763, 0, 0, 0, 764, 0, 765, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 767, 0, 0, 0, 0, 0, 0, 768, 0, 0, 769, 0, 0, 770, 0, 771, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0,
    0, 0, 0, 0, 0, 774, 0, 0, 0, 775, 0, 776, 0, 0, 0, 777, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0,
    0, 0, 0, 780, 0, 0, 0, 781, 0, 782, 0, 0, 0, 783, 0, 0, 0, 0, 0, 0, 0, 0, 784, 785, 0, 0, 0, 786, 0, 787, 0, 0,
    0, 0, 788, 0, 0, 0, 789, 0, 0, 0, 0, 0, 790, 0, 0, 791, 0, 0, 792, 0, 0, 793, 0, 794, 0, 0, 795, 0, 796, 0, 0, 797,
    0, 0, 798, 0, 0, 0, 799, 0, 0, 0, 0, 0, 800, 0, 0, 801, 0, 0, 802, 0, 0, 803, 0, 804, 0, 805, 0, 0, 806, 0, 0, 807,
    0, 0, 808, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 0, 811, 0, 0, 0, 812, 0, 0, 813, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 814, 815, 0, 0, 0, 816, 0, 817, 0, 0, 0, 0, 818, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 819, 0, 0, 0, 820, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0, 822, 0, 0, 0, 823, 0, 0, 824, 0, 0, 825, 0,
    0, 826, 0, 827, 0, 0, 0, 828, 0, 829, 830, 0, 0, 831, 0, 0, 832, 0, 0, 0, 0, 833, 834, 835, 0, 836, 0, 837, 0, 838, 0, 839,
    0, 840, 0, 841, 0, 842, 0, 843, 0, 844, 0, 0, 845, 0, 0, 846, 0, 0, 0, 0, 847, 0, 848, 0, 0, 849, 0, 0, 0, 0, 850, 851,
    852, 0, 853, 0, 0, 0, 0, 854, 0, 855, 0, 856, 0, 857, 0, 858, 0, 859, 0, 0, 860, 0, 0, 0, 0, 861, 862, 863, 0, 864, 0, 865,
    0, 866, 0, 867, 0, 868, 0, 869, 0, 870, 0, 871, 0, 872, 0, 0, 873, 0, 0, 874, 0, 0, 0, 0, 875, 0, 876, 0, 0, 877, 0, 0,
    0, 0, 878, 879, 880, 0, 881, 0, 882, 0, 883, 0, 884, 0, 885, 0, 0, 886, 0, 0, 0, 0, 887, 888, 889, 0, 890, 0, 891, 0, 892, 0,
    893, 0, 894, 0, 895, 0, 896, 0, 897, 0, 898, 0, 0, 899, 0, 0, 900, 0, 0, 0, 0, 901, 0, 902, 0, 0, 903, 0, 0, 0, 0, 904,
    905, 906, 0, 907, 0, 908, 0, 909, 0, 910, 0, 911, 0, 0, 912, 0, 0, 0, 0, 913, 914, 915, 0, 916, 0, 0, 917, 0, 0, 918, 0, 919,
    0, 0, 0, 0, 0, 920, 0, 0, 921, 0, 0, 922, 0, 0, 923, 0, 924, 0, 925, 0, 926, 0, 0, 927, 0, 0, 0, 0, 928, 929, 930, 0,
    931, 0, 932, 0, 933, 0, 934, 0, 935, 0, 936, 0, 937, 0, 938, 0, 939, 0, 0, 940, 0, 0, 941, 0, 0, 0, 0, 942, 0, 943, 0, 0,
    944, 0, 0, 0, 0, 945, 946, 947, 0, 948, 0, 949, 0, 950, 0, 951, 0, 952, 0, 0, 953, 0, 0, 954, 0, 0, 0, 0, 955, 0, 956, 0,
    0, 957, 0, 0, 0, 0, 958, 959, 960, 0, 961, 0, 0, 962, 0, 963, 0, 0, 964, 0, 0, 965, 0, 0, 966, 0, 967, 0, 0, 968, 0, 969,
    0, 0, 970, 0, 0, 971, 0, 0, 972, 0, 0, 0, 0, 0, 0, 973, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 974, 0, 975, 0, 0,
    976, 0, 0, 977, 0, 0, 978, 0, 979, 0, 0, 0, 980, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 981, 0,
    0, 0, 0, 0, 0, 982, 0, 0, 0, 0, 0, 983, 0, 0, 0, 984, 0, 985, 0, 0, 0, 0, 986, 0, 987, 0, 0, 988, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 989, 0, 0, 0, 0, 0, 0, 990, 0, 0, 0, 0, 0, 991, 0, 0, 0, 992, 0, 993, 0, 0,
    0, 0, 994, 0, 0, 0, 995, 0, 0, 0, 0, 0, 0, 996, 0, 0, 0, 0, 0, 997, 0, 998, 0, 0, 999, 0, 0, 1000, 0, 1001, 0, 0,
    1002, 0, 0, 1003, 0, 0, 1004, 0, 0, 1005, 0, 0, 1006, 0, 0, 0, 0, 1007, 0, 1008, 0, 0, 0, 1009, 0, 1010, 0, 1011, 0, 1012, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1013, 0, 0, 1014,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1015, 0, 1016, 0, 0, 0, 0, 1017, 1018, 0, 1019, 0, 1020, 0, 0, 1021, 0,
    1022, 0, 0, 0, 1023, 0, 0, 1024, 0, 0, 1025, 0, 1026, 1027, 0, 1028, 0, 0, 1029, 0, 0, 1030, 0, 1031, 0, 1032, 0, 1033, 0, 0, 0, 0,
    0, 0, 1034, 0, 0, 1035, 0, 1036, 0, 1037, 0, 0, 0, 0, 0, 0, 1038, 0, 1039, 0, 1040, 0, 0, 0, 0, 0, 1041, 0, 1042, 0, 0, 0,
    0, 0, 0, 1043, 0, 1044, 0, 0, 1045, 0, 0, 1046, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1047, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048, 0, 1049, 0, 1050, 0, 1051, 0, 1052, 0, 0, 0, 0, 0, 1053, 0, 0, 1054, 0, 0, 0, 1055,
    0, 1056, 0, 1057, 0, 1058, 0, 1059, 0, 1060, 0, 1061, 0, 1062, 0, 0, 0, 1063, 0, 1064, 1065, 0, 1066, 0, 1067, 0, 0, 0, 1068, 0, 0, 0,
    1069, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1070, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1071, 0, 1072, 0, 1073, 0, 1074, 0, 1075, 0,
    0, 0, 0, 0, 0, 1076, 0, 0, 0, 0, 0, 0, 0, 1077, 0, 1078, 0, 0, 0, 1079, 0, 0, 1080, 0, 0, 1081, 0, 1082, 1083, 0, 0, 1084,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1085, 0, 0, 0, 0, 0, 0, 1086, 1087, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1088,
};
void recomp_unit_0182_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08ADC000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0182[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08ADC000;
    case 2u: goto L_08ADC014;
    case 3u: goto L_08ADC01C;
    case 4u: goto L_08ADC024;
    case 5u: goto L_08ADC038;
    case 6u: goto L_08ADC048;
    case 7u: goto L_08ADC058;
    case 8u: goto L_08ADC060;
    case 9u: goto L_08ADC064;
    case 10u: goto L_08ADC0A0;
    case 11u: goto L_08ADC0A8;
    case 12u: goto L_08ADC0AC;
    case 13u: goto L_08ADC0B4;
    case 14u: goto L_08ADC0BC;
    case 15u: goto L_08ADC0C4;
    case 16u: goto L_08ADC0CC;
    case 17u: goto L_08ADC0D4;
    case 18u: goto L_08ADC0DC;
    case 19u: goto L_08ADC0E0;
    case 20u: goto L_08ADC0F0;
    case 21u: goto L_08ADC0F4;
    case 22u: goto L_08ADC104;
    case 23u: goto L_08ADC118;
    case 24u: goto L_08ADC120;
    case 25u: goto L_08ADC128;
    case 26u: goto L_08ADC130;
    case 27u: goto L_08ADC138;
    case 28u: goto L_08ADC140;
    case 29u: goto L_08ADC148;
    case 30u: goto L_08ADC150;
    case 31u: goto L_08ADC158;
    case 32u: goto L_08ADC160;
    case 33u: goto L_08ADC168;
    case 34u: goto L_08ADC188;
    case 35u: goto L_08ADC1B0;
    case 36u: goto L_08ADC1C8;
    case 37u: goto L_08ADC1D4;
    case 38u: goto L_08ADC208;
    case 39u: goto L_08ADC210;
    case 40u: goto L_08ADC218;
    case 41u: goto L_08ADC228;
    case 42u: goto L_08ADC238;
    case 43u: goto L_08ADC248;
    case 44u: goto L_08ADC250;
    case 45u: goto L_08ADC254;
    case 46u: goto L_08ADC288;
    case 47u: goto L_08ADC290;
    case 48u: goto L_08ADC294;
    case 49u: goto L_08ADC29C;
    case 50u: goto L_08ADC2A4;
    case 51u: goto L_08ADC2AC;
    case 52u: goto L_08ADC2B4;
    case 53u: goto L_08ADC2BC;
    case 54u: goto L_08ADC2C4;
    case 55u: goto L_08ADC2C8;
    case 56u: goto L_08ADC2D8;
    case 57u: goto L_08ADC2DC;
    case 58u: goto L_08ADC2EC;
    case 59u: goto L_08ADC300;
    case 60u: goto L_08ADC308;
    case 61u: goto L_08ADC310;
    case 62u: goto L_08ADC318;
    case 63u: goto L_08ADC320;
    case 64u: goto L_08ADC328;
    case 65u: goto L_08ADC330;
    case 66u: goto L_08ADC338;
    case 67u: goto L_08ADC340;
    case 68u: goto L_08ADC348;
    case 69u: goto L_08ADC350;
    case 70u: goto L_08ADC370;
    case 71u: goto L_08ADC398;
    case 72u: goto L_08ADC3AC;
    case 73u: goto L_08ADC3B8;
    case 74u: goto L_08ADC3F0;
    case 75u: goto L_08ADC3F8;
    case 76u: goto L_08ADC400;
    case 77u: goto L_08ADC414;
    case 78u: goto L_08ADC424;
    case 79u: goto L_08ADC434;
    case 80u: goto L_08ADC43C;
    case 81u: goto L_08ADC440;
    case 82u: goto L_08ADC478;
    case 83u: goto L_08ADC480;
    case 84u: goto L_08ADC484;
    case 85u: goto L_08ADC48C;
    case 86u: goto L_08ADC494;
    case 87u: goto L_08ADC49C;
    case 88u: goto L_08ADC4A4;
    case 89u: goto L_08ADC4AC;
    case 90u: goto L_08ADC4B4;
    case 91u: goto L_08ADC4B8;
    case 92u: goto L_08ADC4C8;
    case 93u: goto L_08ADC4CC;
    case 94u: goto L_08ADC4DC;
    case 95u: goto L_08ADC4F0;
    case 96u: goto L_08ADC4F8;
    case 97u: goto L_08ADC500;
    case 98u: goto L_08ADC508;
    case 99u: goto L_08ADC510;
    case 100u: goto L_08ADC518;
    case 101u: goto L_08ADC520;
    case 102u: goto L_08ADC528;
    case 103u: goto L_08ADC530;
    case 104u: goto L_08ADC538;
    case 105u: goto L_08ADC540;
    case 106u: goto L_08ADC560;
    case 107u: goto L_08ADC588;
    case 108u: goto L_08ADC59C;
    case 109u: goto L_08ADC5A8;
    case 110u: goto L_08ADC5DC;
    case 111u: goto L_08ADC5E4;
    case 112u: goto L_08ADC5EC;
    case 113u: goto L_08ADC5FC;
    case 114u: goto L_08ADC60C;
    case 115u: goto L_08ADC61C;
    case 116u: goto L_08ADC624;
    case 117u: goto L_08ADC628;
    case 118u: goto L_08ADC65C;
    case 119u: goto L_08ADC664;
    case 120u: goto L_08ADC668;
    case 121u: goto L_08ADC690;
    case 122u: goto L_08ADC6A0;
    case 123u: goto L_08ADC6FC;
    case 124u: goto L_08ADC704;
    case 125u: goto L_08ADC714;
    case 126u: goto L_08ADC71C;
    case 127u: goto L_08ADC74C;
    case 128u: goto L_08ADC758;
    case 129u: goto L_08ADC7B8;
    case 130u: goto L_08ADC7C0;
    case 131u: goto L_08ADC7D0;
    case 132u: goto L_08ADC7D8;
    case 133u: goto L_08ADC7E8;
    case 134u: goto L_08ADC7F0;
    case 135u: goto L_08ADC7F8;
    case 136u: goto L_08ADC800;
    case 137u: goto L_08ADC80C;
    case 138u: goto L_08ADC814;
    case 139u: goto L_08ADC81C;
    case 140u: goto L_08ADC824;
    case 141u: goto L_08ADC82C;
    case 142u: goto L_08ADC834;
    case 143u: goto L_08ADC83C;
    case 144u: goto L_08ADC858;
    case 145u: goto L_08ADC860;
    case 146u: goto L_08ADC868;
    case 147u: goto L_08ADC870;
    case 148u: goto L_08ADC878;
    case 149u: goto L_08ADC880;
    case 150u: goto L_08ADC888;
    case 151u: goto L_08ADC8A0;
    case 152u: goto L_08ADC8A8;
    case 153u: goto L_08ADC8B4;
    case 154u: goto L_08ADC8C4;
    case 155u: goto L_08ADC8CC;
    case 156u: goto L_08ADC8D4;
    case 157u: goto L_08ADC8DC;
    case 158u: goto L_08ADC8E8;
    case 159u: goto L_08ADC8F4;
    case 160u: goto L_08ADC8FC;
    case 161u: goto L_08ADC904;
    case 162u: goto L_08ADC90C;
    case 163u: goto L_08ADC914;
    case 164u: goto L_08ADC91C;
    case 165u: goto L_08ADC924;
    case 166u: goto L_08ADC93C;
    case 167u: goto L_08ADC944;
    case 168u: goto L_08ADC94C;
    case 169u: goto L_08ADC954;
    case 170u: goto L_08ADC95C;
    case 171u: goto L_08ADC964;
    case 172u: goto L_08ADC96C;
    case 173u: goto L_08ADC988;
    case 174u: goto L_08ADC990;
    case 175u: goto L_08ADC99C;
    case 176u: goto L_08ADC9AC;
    case 177u: goto L_08ADC9B4;
    case 178u: goto L_08ADC9BC;
    case 179u: goto L_08ADC9C4;
    case 180u: goto L_08ADC9D0;
    case 181u: goto L_08ADC9E0;
    case 182u: goto L_08ADC9E8;
    case 183u: goto L_08ADC9F0;
    case 184u: goto L_08ADCA00;
    case 185u: goto L_08ADCA08;
    case 186u: goto L_08ADCA10;
    case 187u: goto L_08ADCA1C;
    case 188u: goto L_08ADCA24;
    case 189u: goto L_08ADCA2C;
    case 190u: goto L_08ADCA34;
    case 191u: goto L_08ADCA3C;
    case 192u: goto L_08ADCA48;
    case 193u: goto L_08ADCA50;
    case 194u: goto L_08ADCA60;
    case 195u: goto L_08ADCA68;
    case 196u: goto L_08ADCA70;
    case 197u: goto L_08ADCA78;
    case 198u: goto L_08ADCA88;
    case 199u: goto L_08ADCA94;
    case 200u: goto L_08ADCA98;
    case 201u: goto L_08ADCA9C;
    case 202u: goto L_08ADCAA4;
    case 203u: goto L_08ADCAAC;
    case 204u: goto L_08ADCAB4;
    case 205u: goto L_08ADCABC;
    case 206u: goto L_08ADCAD8;
    case 207u: goto L_08ADCAE4;
    case 208u: goto L_08ADCAE8;
    case 209u: goto L_08ADCAF8;
    case 210u: goto L_08ADCB10;
    case 211u: goto L_08ADCB18;
    case 212u: goto L_08ADCB20;
    case 213u: goto L_08ADCB30;
    case 214u: goto L_08ADCB44;
    case 215u: goto L_08ADCB4C;
    case 216u: goto L_08ADCB58;
    case 217u: goto L_08ADCB64;
    case 218u: goto L_08ADCB84;
    case 219u: goto L_08ADCB90;
    case 220u: goto L_08ADCB9C;
    case 221u: goto L_08ADCBA8;
    case 222u: goto L_08ADCBEC;
    case 223u: goto L_08ADCC24;
    case 224u: goto L_08ADCC34;
    case 225u: goto L_08ADCC3C;
    case 226u: goto L_08ADCC44;
    case 227u: goto L_08ADCC4C;
    case 228u: goto L_08ADCC5C;
    case 229u: goto L_08ADCC64;
    case 230u: goto L_08ADCC6C;
    case 231u: goto L_08ADCC74;
    case 232u: goto L_08ADCC80;
    case 233u: goto L_08ADCC98;
    case 234u: goto L_08ADCCA8;
    case 235u: goto L_08ADCCB0;
    case 236u: goto L_08ADCCB8;
    case 237u: goto L_08ADCCC8;
    case 238u: goto L_08ADCCD8;
    case 239u: goto L_08ADCCE4;
    case 240u: goto L_08ADCD14;
    case 241u: goto L_08ADCD24;
    case 242u: goto L_08ADCD34;
    case 243u: goto L_08ADCD4C;
    case 244u: goto L_08ADCD54;
    case 245u: goto L_08ADCD5C;
    case 246u: goto L_08ADCD64;
    case 247u: goto L_08ADCD74;
    case 248u: goto L_08ADCD7C;
    case 249u: goto L_08ADCD90;
    case 250u: goto L_08ADCD98;
    case 251u: goto L_08ADCDAC;
    case 252u: goto L_08ADCDB4;
    case 253u: goto L_08ADCDC8;
    case 254u: goto L_08ADCDD0;
    case 255u: goto L_08ADCDE4;
    case 256u: goto L_08ADCDEC;
    case 257u: goto L_08ADCDF4;
    case 258u: goto L_08ADCE00;
    case 259u: goto L_08ADCE08;
    case 260u: goto L_08ADCE10;
    case 261u: goto L_08ADCE1C;
    case 262u: goto L_08ADCE24;
    case 263u: goto L_08ADCE2C;
    case 264u: goto L_08ADCE38;
    case 265u: goto L_08ADCE40;
    case 266u: goto L_08ADCE48;
    case 267u: goto L_08ADCE54;
    case 268u: goto L_08ADCE5C;
    case 269u: goto L_08ADCE6C;
    case 270u: goto L_08ADCE78;
    case 271u: goto L_08ADCE80;
    case 272u: goto L_08ADCE88;
    case 273u: goto L_08ADCE90;
    case 274u: goto L_08ADCE9C;
    case 275u: goto L_08ADCEB4;
    case 276u: goto L_08ADCEB8;
    case 277u: goto L_08ADCEC4;
    case 278u: goto L_08ADCECC;
    case 279u: goto L_08ADCEDC;
    case 280u: goto L_08ADCEE8;
    case 281u: goto L_08ADCEEC;
    case 282u: goto L_08ADCEF0;
    case 283u: goto L_08ADCEF8;
    case 284u: goto L_08ADCF0C;
    case 285u: goto L_08ADCF24;
    case 286u: goto L_08ADCF30;
    case 287u: goto L_08ADCF38;
    case 288u: goto L_08ADCF3C;
    case 289u: goto L_08ADCF48;
    case 290u: goto L_08ADCF50;
    case 291u: goto L_08ADCF54;
    case 292u: goto L_08ADCF5C;
    case 293u: goto L_08ADCF64;
    case 294u: goto L_08ADCF6C;
    case 295u: goto L_08ADCF74;
    case 296u: goto L_08ADCF78;
    case 297u: goto L_08ADCF84;
    case 298u: goto L_08ADCF94;
    case 299u: goto L_08ADCFB4;
    case 300u: goto L_08ADCFB8;
    case 301u: goto L_08ADD018;
    case 302u: goto L_08ADD068;
    case 303u: goto L_08ADD070;
    case 304u: goto L_08ADD078;
    case 305u: goto L_08ADD080;
    case 306u: goto L_08ADD08C;
    case 307u: goto L_08ADD0A0;
    case 308u: goto L_08ADD0B0;
    case 309u: goto L_08ADD0BC;
    case 310u: goto L_08ADD0C4;
    case 311u: goto L_08ADD0CC;
    case 312u: goto L_08ADD0D4;
    case 313u: goto L_08ADD0E0;
    case 314u: goto L_08ADD0F4;
    case 315u: goto L_08ADD104;
    case 316u: goto L_08ADD110;
    case 317u: goto L_08ADD118;
    case 318u: goto L_08ADD120;
    case 319u: goto L_08ADD128;
    case 320u: goto L_08ADD134;
    case 321u: goto L_08ADD148;
    case 322u: goto L_08ADD158;
    case 323u: goto L_08ADD164;
    case 324u: goto L_08ADD16C;
    case 325u: goto L_08ADD174;
    case 326u: goto L_08ADD17C;
    case 327u: goto L_08ADD188;
    case 328u: goto L_08ADD19C;
    case 329u: goto L_08ADD1AC;
    case 330u: goto L_08ADD1B8;
    case 331u: goto L_08ADD1C0;
    case 332u: goto L_08ADD1D0;
    case 333u: goto L_08ADD1E0;
    case 334u: goto L_08ADD1F0;
    case 335u: goto L_08ADD1F8;
    case 336u: goto L_08ADD1FC;
    case 337u: goto L_08ADD204;
    case 338u: goto L_08ADD210;
    case 339u: goto L_08ADD224;
    case 340u: goto L_08ADD238;
    case 341u: goto L_08ADD250;
    case 342u: goto L_08ADD25C;
    case 343u: goto L_08ADD268;
    case 344u: goto L_08ADD274;
    case 345u: goto L_08ADD27C;
    case 346u: goto L_08ADD288;
    case 347u: goto L_08ADD294;
    case 348u: goto L_08ADD2A0;
    case 349u: goto L_08ADD2AC;
    case 350u: goto L_08ADD2C0;
    case 351u: goto L_08ADD2D8;
    case 352u: goto L_08ADD2E4;
    case 353u: goto L_08ADD2F0;
    case 354u: goto L_08ADD2FC;
    case 355u: goto L_08ADD304;
    case 356u: goto L_08ADD310;
    case 357u: goto L_08ADD31C;
    case 358u: goto L_08ADD328;
    case 359u: goto L_08ADD330;
    case 360u: goto L_08ADD340;
    case 361u: goto L_08ADD350;
    case 362u: goto L_08ADD358;
    case 363u: goto L_08ADD35C;
    case 364u: goto L_08ADD364;
    case 365u: goto L_08ADD36C;
    case 366u: goto L_08ADD370;
    case 367u: goto L_08ADD378;
    case 368u: goto L_08ADD380;
    case 369u: goto L_08ADD388;
    case 370u: goto L_08ADD390;
    case 371u: goto L_08ADD398;
    case 372u: goto L_08ADD3A0;
    case 373u: goto L_08ADD3A8;
    case 374u: goto L_08ADD3AC;
    case 375u: goto L_08ADD3B4;
    case 376u: goto L_08ADD3FC;
    case 377u: goto L_08ADD408;
    case 378u: goto L_08ADD410;
    case 379u: goto L_08ADD418;
    case 380u: goto L_08ADD42C;
    case 381u: goto L_08ADD434;
    case 382u: goto L_08ADD448;
    case 383u: goto L_08ADD450;
    case 384u: goto L_08ADD460;
    case 385u: goto L_08ADD46C;
    case 386u: goto L_08ADD470;
    case 387u: goto L_08ADD474;
    case 388u: goto L_08ADD47C;
    case 389u: goto L_08ADD48C;
    case 390u: goto L_08ADD49C;
    case 391u: goto L_08ADD4AC;
    case 392u: goto L_08ADD4F8;
    case 393u: goto L_08ADD510;
    case 394u: goto L_08ADD518;
    case 395u: goto L_08ADD520;
    case 396u: goto L_08ADD534;
    case 397u: goto L_08ADD53C;
    case 398u: goto L_08ADD544;
    case 399u: goto L_08ADD54C;
    case 400u: goto L_08ADD55C;
    case 401u: goto L_08ADD570;
    case 402u: goto L_08ADD578;
    case 403u: goto L_08ADD58C;
    case 404u: goto L_08ADD594;
    case 405u: goto L_08ADD59C;
    case 406u: goto L_08ADD5F0;
    case 407u: goto L_08ADD604;
    case 408u: goto L_08ADD60C;
    case 409u: goto L_08ADD620;
    case 410u: goto L_08ADD630;
    case 411u: goto L_08ADD638;
    case 412u: goto L_08ADD640;
    case 413u: goto L_08ADD650;
    case 414u: goto L_08ADD660;
    case 415u: goto L_08ADD66C;
    case 416u: goto L_08ADD6CC;
    case 417u: goto L_08ADD6E0;
    case 418u: goto L_08ADD6E8;
    case 419u: goto L_08ADD6FC;
    case 420u: goto L_08ADD708;
    case 421u: goto L_08ADD710;
    case 422u: goto L_08ADD71C;
    case 423u: goto L_08ADD764;
    case 424u: goto L_08ADD7AC;
    case 425u: goto L_08ADD7C0;
    case 426u: goto L_08ADD7C8;
    case 427u: goto L_08ADD7DC;
    case 428u: goto L_08ADD7EC;
    case 429u: goto L_08ADD7F4;
    case 430u: goto L_08ADD800;
    case 431u: goto L_08ADD808;
    case 432u: goto L_08ADD810;
    case 433u: goto L_08ADD814;
    case 434u: goto L_08ADD81C;
    case 435u: goto L_08ADD824;
    case 436u: goto L_08ADD828;
    case 437u: goto L_08ADD830;
    case 438u: goto L_08ADD838;
    case 439u: goto L_08ADD840;
    case 440u: goto L_08ADD850;
    case 441u: goto L_08ADD858;
    case 442u: goto L_08ADD868;
    case 443u: goto L_08ADD874;
    case 444u: goto L_08ADD888;
    case 445u: goto L_08ADD898;
    case 446u: goto L_08ADD8A0;
    case 447u: goto L_08ADD8A8;
    case 448u: goto L_08ADD8B4;
    case 449u: goto L_08ADD8BC;
    case 450u: goto L_08ADD8EC;
    case 451u: goto L_08ADD904;
    case 452u: goto L_08ADD914;
    case 453u: goto L_08ADD92C;
    case 454u: goto L_08ADD934;
    case 455u: goto L_08ADD938;
    case 456u: goto L_08ADD948;
    case 457u: goto L_08ADD954;
    case 458u: goto L_08ADD964;
    case 459u: goto L_08ADD978;
    case 460u: goto L_08ADD998;
    case 461u: goto L_08ADD9E0;
    case 462u: goto L_08ADD9E8;
    case 463u: goto L_08ADD9F4;
    case 464u: goto L_08ADD9FC;
    case 465u: goto L_08ADDA04;
    case 466u: goto L_08ADDA08;
    case 467u: goto L_08ADDA18;
    case 468u: goto L_08ADDA20;
    case 469u: goto L_08ADDA28;
    case 470u: goto L_08ADDA3C;
    case 471u: goto L_08ADDA5C;
    case 472u: goto L_08ADDAA4;
    case 473u: goto L_08ADDAAC;
    case 474u: goto L_08ADDAB8;
    case 475u: goto L_08ADDAC0;
    case 476u: goto L_08ADDAC8;
    case 477u: goto L_08ADDACC;
    case 478u: goto L_08ADDADC;
    case 479u: goto L_08ADDAE4;
    case 480u: goto L_08ADDAEC;
    case 481u: goto L_08ADDAF0;
    case 482u: goto L_08ADDAF8;
    case 483u: goto L_08ADDB00;
    case 484u: goto L_08ADDB04;
    case 485u: goto L_08ADDB0C;
    case 486u: goto L_08ADDB10;
    case 487u: goto L_08ADDB18;
    case 488u: goto L_08ADDB1C;
    case 489u: goto L_08ADDB24;
    case 490u: goto L_08ADDB34;
    case 491u: goto L_08ADDB7C;
    case 492u: goto L_08ADDB84;
    case 493u: goto L_08ADDB90;
    case 494u: goto L_08ADDB98;
    case 495u: goto L_08ADDBA0;
    case 496u: goto L_08ADDBB4;
    case 497u: goto L_08ADDBBC;
    case 498u: goto L_08ADDBC4;
    case 499u: goto L_08ADDBD8;
    case 500u: goto L_08ADDBE4;
    case 501u: goto L_08ADDBF4;
    case 502u: goto L_08ADDC08;
    case 503u: goto L_08ADDC1C;
    case 504u: goto L_08ADDC2C;
    case 505u: goto L_08ADDC70;
    case 506u: goto L_08ADDC7C;
    case 507u: goto L_08ADDC8C;
    case 508u: goto L_08ADDCD0;
    case 509u: goto L_08ADDD18;
    case 510u: goto L_08ADDD1C;
    case 511u: goto L_08ADDD4C;
    case 512u: goto L_08ADDD54;
    case 513u: goto L_08ADDD5C;
    case 514u: goto L_08ADDD68;
    case 515u: goto L_08ADDD70;
    case 516u: goto L_08ADDD78;
    case 517u: goto L_08ADDD88;
    case 518u: goto L_08ADDD9C;
    case 519u: goto L_08ADDDA0;
    case 520u: goto L_08ADDDD0;
    case 521u: goto L_08ADDDD8;
    case 522u: goto L_08ADDDDC;
    case 523u: goto L_08ADDDEC;
    case 524u: goto L_08ADDDFC;
    case 525u: goto L_08ADDE0C;
    case 526u: goto L_08ADDE1C;
    case 527u: goto L_08ADDE60;
    case 528u: goto L_08ADDE70;
    case 529u: goto L_08ADDE7C;
    case 530u: goto L_08ADDE8C;
    case 531u: goto L_08ADDE9C;
    case 532u: goto L_08ADDEA8;
    case 533u: goto L_08ADDEB8;
    case 534u: goto L_08ADDEC8;
    case 535u: goto L_08ADDF0C;
    case 536u: goto L_08ADDF54;
    case 537u: goto L_08ADDF60;
    case 538u: goto L_08ADDF70;
    case 539u: goto L_08ADDF7C;
    case 540u: goto L_08ADDF84;
    case 541u: goto L_08ADDF8C;
    case 542u: goto L_08ADDFD4;
    case 543u: goto L_08ADDFE0;
    case 544u: goto L_08ADDFE8;
    case 545u: goto L_08ADDFF0;
    case 546u: goto L_08ADE038;
    case 547u: goto L_08ADE050;
    case 548u: goto L_08ADE084;
    case 549u: goto L_08ADE08C;
    case 550u: goto L_08ADE09C;
    case 551u: goto L_08ADE0BC;
    case 552u: goto L_08ADE0C4;
    case 553u: goto L_08ADE0CC;
    case 554u: goto L_08ADE0D4;
    case 555u: goto L_08ADE0E8;
    case 556u: goto L_08ADE0F0;
    case 557u: goto L_08ADE0F8;
    case 558u: goto L_08ADE100;
    case 559u: goto L_08ADE11C;
    case 560u: goto L_08ADE12C;
    case 561u: goto L_08ADE140;
    case 562u: goto L_08ADE14C;
    case 563u: goto L_08ADE15C;
    case 564u: goto L_08ADE1A4;
    case 565u: goto L_08ADE1D0;
    case 566u: goto L_08ADE1D8;
    case 567u: goto L_08ADE1E0;
    case 568u: goto L_08ADE228;
    case 569u: goto L_08ADE230;
    case 570u: goto L_08ADE240;
    case 571u: goto L_08ADE248;
    case 572u: goto L_08ADE258;
    case 573u: goto L_08ADE2A0;
    case 574u: goto L_08ADE2B0;
    case 575u: goto L_08ADE2C4;
    case 576u: goto L_08ADE2D0;
    case 577u: goto L_08ADE2D8;
    case 578u: goto L_08ADE2E0;
    case 579u: goto L_08ADE2E8;
    case 580u: goto L_08ADE2EC;
    case 581u: goto L_08ADE2F8;
    case 582u: goto L_08ADE308;
    case 583u: goto L_08ADE310;
    case 584u: goto L_08ADE320;
    case 585u: goto L_08ADE330;
    case 586u: goto L_08ADE33C;
    case 587u: goto L_08ADE348;
    case 588u: goto L_08ADE364;
    case 589u: goto L_08ADE36C;
    case 590u: goto L_08ADE37C;
    case 591u: goto L_08ADE3A8;
    case 592u: goto L_08ADE3BC;
    case 593u: goto L_08ADE3D8;
    case 594u: goto L_08ADE3E0;
    case 595u: goto L_08ADE3E8;
    case 596u: goto L_08ADE408;
    case 597u: goto L_08ADE410;
    case 598u: goto L_08ADE418;
    case 599u: goto L_08ADE438;
    case 600u: goto L_08ADE440;
    case 601u: goto L_08ADE448;
    case 602u: goto L_08ADE468;
    case 603u: goto L_08ADE470;
    case 604u: goto L_08ADE478;
    case 605u: goto L_08ADE498;
    case 606u: goto L_08ADE4A0;
    case 607u: goto L_08ADE4A8;
    case 608u: goto L_08ADE4B0;
    case 609u: goto L_08ADE4C4;
    case 610u: goto L_08ADE4CC;
    case 611u: goto L_08ADE4D4;
    case 612u: goto L_08ADE4DC;
    case 613u: goto L_08ADE504;
    case 614u: goto L_08ADE510;
    case 615u: goto L_08ADE51C;
    case 616u: goto L_08ADE564;
    case 617u: goto L_08ADE570;
    case 618u: goto L_08ADE578;
    case 619u: goto L_08ADE598;
    case 620u: goto L_08ADE5A8;
    case 621u: goto L_08ADE5B0;
    case 622u: goto L_08ADE5B4;
    case 623u: goto L_08ADE5C0;
    case 624u: goto L_08ADE5C8;
    case 625u: goto L_08ADE5D0;
    case 626u: goto L_08ADE5D8;
    case 627u: goto L_08ADE5E0;
    case 628u: goto L_08ADE5EC;
    case 629u: goto L_08ADE5FC;
    case 630u: goto L_08ADE604;
    case 631u: goto L_08ADE60C;
    case 632u: goto L_08ADE618;
    case 633u: goto L_08ADE61C;
    case 634u: goto L_08ADE660;
    case 635u: goto L_08ADE668;
    case 636u: goto L_08ADE670;
    case 637u: goto L_08ADE678;
    case 638u: goto L_08ADE688;
    case 639u: goto L_08ADE690;
    case 640u: goto L_08ADE694;
    case 641u: goto L_08ADE6A0;
    case 642u: goto L_08ADE6C4;
    case 643u: goto L_08ADE6D0;
    case 644u: goto L_08ADE6DC;
    case 645u: goto L_08ADE6F0;
    case 646u: goto L_08ADE6F8;
    case 647u: goto L_08ADE710;
    case 648u: goto L_08ADE728;
    case 649u: goto L_08ADE730;
    case 650u: goto L_08ADE738;
    case 651u: goto L_08ADE740;
    case 652u: goto L_08ADE74C;
    case 653u: goto L_08ADE750;
    case 654u: goto L_08ADE758;
    case 655u: goto L_08ADE760;
    case 656u: goto L_08ADE770;
    case 657u: goto L_08ADE774;
    case 658u: goto L_08ADE77C;
    case 659u: goto L_08ADE780;
    case 660u: goto L_08ADE788;
    case 661u: goto L_08ADE79C;
    case 662u: goto L_08ADE7A8;
    case 663u: goto L_08ADE7BC;
    case 664u: goto L_08ADE7C4;
    case 665u: goto L_08ADE7D0;
    case 666u: goto L_08ADE818;
    case 667u: goto L_08ADE820;
    case 668u: goto L_08ADE824;
    case 669u: goto L_08ADE850;
    case 670u: goto L_08ADE88C;
    case 671u: goto L_08ADE894;
    case 672u: goto L_08ADE898;
    case 673u: goto L_08ADE8A0;
    case 674u: goto L_08ADE8A8;
    case 675u: goto L_08ADE8B4;
    case 676u: goto L_08ADE8C4;
    case 677u: goto L_08ADE8D0;
    case 678u: goto L_08ADE8D8;
    case 679u: goto L_08ADE8E0;
    case 680u: goto L_08ADE8E8;
    case 681u: goto L_08ADE8F4;
    case 682u: goto L_08ADE918;
    case 683u: goto L_08ADE920;
    case 684u: goto L_08ADE928;
    case 685u: goto L_08ADE938;
    case 686u: goto L_08ADE940;
    case 687u: goto L_08ADE94C;
    case 688u: goto L_08ADE950;
    case 689u: goto L_08ADE958;
    case 690u: goto L_08ADE960;
    case 691u: goto L_08ADE968;
    case 692u: goto L_08ADE974;
    case 693u: goto L_08ADE97C;
    case 694u: goto L_08ADE98C;
    case 695u: goto L_08ADE9A0;
    case 696u: goto L_08ADE9A8;
    case 697u: goto L_08ADE9B8;
    case 698u: goto L_08ADE9C0;
    case 699u: goto L_08ADE9D0;
    case 700u: goto L_08ADE9DC;
    case 701u: goto L_08ADE9E0;
    case 702u: goto L_08ADE9E4;
    case 703u: goto L_08ADE9EC;
    case 704u: goto L_08ADE9FC;
    case 705u: goto L_08ADEA04;
    case 706u: goto L_08ADEA0C;
    case 707u: goto L_08ADEA18;
    case 708u: goto L_08ADEA1C;
    case 709u: goto L_08ADEA24;
    case 710u: goto L_08ADEA30;
    case 711u: goto L_08ADEA48;
    case 712u: goto L_08ADEA64;
    case 713u: goto L_08ADEA70;
    case 714u: goto L_08ADEA7C;
    case 715u: goto L_08ADEA90;
    case 716u: goto L_08ADEAA4;
    case 717u: goto L_08ADEAB8;
    case 718u: goto L_08ADEAC4;
    case 719u: goto L_08ADEAD0;
    case 720u: goto L_08ADEADC;
    case 721u: goto L_08ADEAE4;
    case 722u: goto L_08ADEAEC;
    case 723u: goto L_08ADEAF4;
    case 724u: goto L_08ADEB00;
    case 725u: goto L_08ADEB08;
    case 726u: goto L_08ADEB24;
    case 727u: goto L_08ADEB28;
    case 728u: goto L_08ADEB40;
    case 729u: goto L_08ADEB44;
    case 730u: goto L_08ADEB50;
    case 731u: goto L_08ADEB5C;
    case 732u: goto L_08ADEB68;
    case 733u: goto L_08ADEB70;
    case 734u: goto L_08ADEBA4;
    case 735u: goto L_08ADEBB8;
    case 736u: goto L_08ADEBC8;
    case 737u: goto L_08ADEBD0;
    case 738u: goto L_08ADEBD4;
    case 739u: goto L_08ADEBDC;
    case 740u: goto L_08ADEBE0;
    case 741u: goto L_08ADEBEC;
    case 742u: goto L_08ADEBF4;
    case 743u: goto L_08ADEC00;
    case 744u: goto L_08ADEC08;
    case 745u: goto L_08ADEC10;
    case 746u: goto L_08ADEC18;
    case 747u: goto L_08ADEC3C;
    case 748u: goto L_08ADEC44;
    case 749u: goto L_08ADEC4C;
    case 750u: goto L_08ADEC68;
    case 751u: goto L_08ADEC70;
    case 752u: goto L_08ADEC78;
    case 753u: goto L_08ADEC90;
    case 754u: goto L_08ADEC98;
    case 755u: goto L_08ADEDF0;
    case 756u: goto L_08ADEDFC;
    case 757u: goto L_08ADEE08;
    case 758u: goto L_08ADEE18;
    case 759u: goto L_08ADEE20;
    case 760u: goto L_08ADEE24;
    case 761u: goto L_08ADEE2C;
    case 762u: goto L_08ADEE34;
    case 763u: goto L_08ADEE38;
    case 764u: goto L_08ADEE48;
    case 765u: goto L_08ADEE50;
    case 766u: goto L_08ADEE58;
    case 767u: goto L_08ADEE88;
    case 768u: goto L_08ADEEA4;
    case 769u: goto L_08ADEEB0;
    case 770u: goto L_08ADEEBC;
    case 771u: goto L_08ADEEC4;
    case 772u: goto L_08ADEECC;
    case 773u: goto L_08ADEEF8;
    case 774u: goto L_08ADEF14;
    case 775u: goto L_08ADEF24;
    case 776u: goto L_08ADEF2C;
    case 777u: goto L_08ADEF3C;
    case 778u: goto L_08ADEF44;
    case 779u: goto L_08ADEF70;
    case 780u: goto L_08ADEF8C;
    case 781u: goto L_08ADEF9C;
    case 782u: goto L_08ADEFA4;
    case 783u: goto L_08ADEFB4;
    case 784u: goto L_08ADEFD8;
    case 785u: goto L_08ADEFDC;
    case 786u: goto L_08ADEFEC;
    case 787u: goto L_08ADEFF4;
    case 788u: goto L_08ADF008;
    case 789u: goto L_08ADF018;
    case 790u: goto L_08ADF030;
    case 791u: goto L_08ADF03C;
    case 792u: goto L_08ADF048;
    case 793u: goto L_08ADF054;
    case 794u: goto L_08ADF05C;
    case 795u: goto L_08ADF068;
    case 796u: goto L_08ADF070;
    case 797u: goto L_08ADF07C;
    case 798u: goto L_08ADF088;
    case 799u: goto L_08ADF098;
    case 800u: goto L_08ADF0B0;
    case 801u: goto L_08ADF0BC;
    case 802u: goto L_08ADF0C8;
    case 803u: goto L_08ADF0D4;
    case 804u: goto L_08ADF0DC;
    case 805u: goto L_08ADF0E4;
    case 806u: goto L_08ADF0F0;
    case 807u: goto L_08ADF0FC;
    case 808u: goto L_08ADF108;
    case 809u: goto L_08ADF110;
    case 810u: goto L_08ADF13C;
    case 811u: goto L_08ADF158;
    case 812u: goto L_08ADF168;
    case 813u: goto L_08ADF174;
    case 814u: goto L_08ADF1A8;
    case 815u: goto L_08ADF1AC;
    case 816u: goto L_08ADF1BC;
    case 817u: goto L_08ADF1C4;
    case 818u: goto L_08ADF1D8;
    case 819u: goto L_08ADF214;
    case 820u: goto L_08ADF224;
    case 821u: goto L_08ADF23C;
    case 822u: goto L_08ADF250;
    case 823u: goto L_08ADF260;
    case 824u: goto L_08ADF26C;
    case 825u: goto L_08ADF278;
    case 826u: goto L_08ADF284;
    case 827u: goto L_08ADF28C;
    case 828u: goto L_08ADF29C;
    case 829u: goto L_08ADF2A4;
    case 830u: goto L_08ADF2A8;
    case 831u: goto L_08ADF2B4;
    case 832u: goto L_08ADF2C0;
    case 833u: goto L_08ADF2D4;
    case 834u: goto L_08ADF2D8;
    case 835u: goto L_08ADF2DC;
    case 836u: goto L_08ADF2E4;
    case 837u: goto L_08ADF2EC;
    case 838u: goto L_08ADF2F4;
    case 839u: goto L_08ADF2FC;
    case 840u: goto L_08ADF304;
    case 841u: goto L_08ADF30C;
    case 842u: goto L_08ADF314;
    case 843u: goto L_08ADF31C;
    case 844u: goto L_08ADF324;
    case 845u: goto L_08ADF330;
    case 846u: goto L_08ADF33C;
    case 847u: goto L_08ADF350;
    case 848u: goto L_08ADF358;
    case 849u: goto L_08ADF364;
    case 850u: goto L_08ADF378;
    case 851u: goto L_08ADF37C;
    case 852u: goto L_08ADF380;
    case 853u: goto L_08ADF388;
    case 854u: goto L_08ADF39C;
    case 855u: goto L_08ADF3A4;
    case 856u: goto L_08ADF3AC;
    case 857u: goto L_08ADF3B4;
    case 858u: goto L_08ADF3BC;
    case 859u: goto L_08ADF3C4;
    case 860u: goto L_08ADF3D0;
    case 861u: goto L_08ADF3E4;
    case 862u: goto L_08ADF3E8;
    case 863u: goto L_08ADF3EC;
    case 864u: goto L_08ADF3F4;
    case 865u: goto L_08ADF3FC;
    case 866u: goto L_08ADF404;
    case 867u: goto L_08ADF40C;
    case 868u: goto L_08ADF414;
    case 869u: goto L_08ADF41C;
    case 870u: goto L_08ADF424;
    case 871u: goto L_08ADF42C;
    case 872u: goto L_08ADF434;
    case 873u: goto L_08ADF440;
    case 874u: goto L_08ADF44C;
    case 875u: goto L_08ADF460;
    case 876u: goto L_08ADF468;
    case 877u: goto L_08ADF474;
    case 878u: goto L_08ADF488;
    case 879u: goto L_08ADF48C;
    case 880u: goto L_08ADF490;
    case 881u: goto L_08ADF498;
    case 882u: goto L_08ADF4A0;
    case 883u: goto L_08ADF4A8;
    case 884u: goto L_08ADF4B0;
    case 885u: goto L_08ADF4B8;
    case 886u: goto L_08ADF4C4;
    case 887u: goto L_08ADF4D8;
    case 888u: goto L_08ADF4DC;
    case 889u: goto L_08ADF4E0;
    case 890u: goto L_08ADF4E8;
    case 891u: goto L_08ADF4F0;
    case 892u: goto L_08ADF4F8;
    case 893u: goto L_08ADF500;
    case 894u: goto L_08ADF508;
    case 895u: goto L_08ADF510;
    case 896u: goto L_08ADF518;
    case 897u: goto L_08ADF520;
    case 898u: goto L_08ADF528;
    case 899u: goto L_08ADF534;
    case 900u: goto L_08ADF540;
    case 901u: goto L_08ADF554;
    case 902u: goto L_08ADF55C;
    case 903u: goto L_08ADF568;
    case 904u: goto L_08ADF57C;
    case 905u: goto L_08ADF580;
    case 906u: goto L_08ADF584;
    case 907u: goto L_08ADF58C;
    case 908u: goto L_08ADF594;
    case 909u: goto L_08ADF59C;
    case 910u: goto L_08ADF5A4;
    case 911u: goto L_08ADF5AC;
    case 912u: goto L_08ADF5B8;
    case 913u: goto L_08ADF5CC;
    case 914u: goto L_08ADF5D0;
    case 915u: goto L_08ADF5D4;
    case 916u: goto L_08ADF5DC;
    case 917u: goto L_08ADF5E8;
    case 918u: goto L_08ADF5F4;
    case 919u: goto L_08ADF5FC;
    case 920u: goto L_08ADF614;
    case 921u: goto L_08ADF620;
    case 922u: goto L_08ADF62C;
    case 923u: goto L_08ADF638;
    case 924u: goto L_08ADF640;
    case 925u: goto L_08ADF648;
    case 926u: goto L_08ADF650;
    case 927u: goto L_08ADF65C;
    case 928u: goto L_08ADF670;
    case 929u: goto L_08ADF674;
    case 930u: goto L_08ADF678;
    case 931u: goto L_08ADF680;
    case 932u: goto L_08ADF688;
    case 933u: goto L_08ADF690;
    case 934u: goto L_08ADF698;
    case 935u: goto L_08ADF6A0;
    case 936u: goto L_08ADF6A8;
    case 937u: goto L_08ADF6B0;
    case 938u: goto L_08ADF6B8;
    case 939u: goto L_08ADF6C0;
    case 940u: goto L_08ADF6CC;
    case 941u: goto L_08ADF6D8;
    case 942u: goto L_08ADF6EC;
    case 943u: goto L_08ADF6F4;
    case 944u: goto L_08ADF700;
    case 945u: goto L_08ADF714;
    case 946u: goto L_08ADF718;
    case 947u: goto L_08ADF71C;
    case 948u: goto L_08ADF724;
    case 949u: goto L_08ADF72C;
    case 950u: goto L_08ADF734;
    case 951u: goto L_08ADF73C;
    case 952u: goto L_08ADF744;
    case 953u: goto L_08ADF750;
    case 954u: goto L_08ADF75C;
    case 955u: goto L_08ADF770;
    case 956u: goto L_08ADF778;
    case 957u: goto L_08ADF784;
    case 958u: goto L_08ADF798;
    case 959u: goto L_08ADF79C;
    case 960u: goto L_08ADF7A0;
    case 961u: goto L_08ADF7A8;
    case 962u: goto L_08ADF7B4;
    case 963u: goto L_08ADF7BC;
    case 964u: goto L_08ADF7C8;
    case 965u: goto L_08ADF7D4;
    case 966u: goto L_08ADF7E0;
    case 967u: goto L_08ADF7E8;
    case 968u: goto L_08ADF7F4;
    case 969u: goto L_08ADF7FC;
    case 970u: goto L_08ADF808;
    case 971u: goto L_08ADF814;
    case 972u: goto L_08ADF820;
    case 973u: goto L_08ADF83C;
    case 974u: goto L_08ADF86C;
    case 975u: goto L_08ADF874;
    case 976u: goto L_08ADF880;
    case 977u: goto L_08ADF88C;
    case 978u: goto L_08ADF898;
    case 979u: goto L_08ADF8A0;
    case 980u: goto L_08ADF8B0;
    case 981u: goto L_08ADF8F8;
    case 982u: goto L_08ADF914;
    case 983u: goto L_08ADF92C;
    case 984u: goto L_08ADF93C;
    case 985u: goto L_08ADF944;
    case 986u: goto L_08ADF958;
    case 987u: goto L_08ADF960;
    case 988u: goto L_08ADF96C;
    case 989u: goto L_08ADF9A8;
    case 990u: goto L_08ADF9C4;
    case 991u: goto L_08ADF9DC;
    case 992u: goto L_08ADF9EC;
    case 993u: goto L_08ADF9F4;
    case 994u: goto L_08ADFA08;
    case 995u: goto L_08ADFA18;
    case 996u: goto L_08ADFA34;
    case 997u: goto L_08ADFA4C;
    case 998u: goto L_08ADFA54;
    case 999u: goto L_08ADFA60;
    case 1000u: goto L_08ADFA6C;
    case 1001u: goto L_08ADFA74;
    case 1002u: goto L_08ADFA80;
    case 1003u: goto L_08ADFA8C;
    case 1004u: goto L_08ADFA98;
    case 1005u: goto L_08ADFAA4;
    case 1006u: goto L_08ADFAB0;
    case 1007u: goto L_08ADFAC4;
    case 1008u: goto L_08ADFACC;
    case 1009u: goto L_08ADFADC;
    case 1010u: goto L_08ADFAE4;
    case 1011u: goto L_08ADFAEC;
    case 1012u: goto L_08ADFAF4;
    case 1013u: goto L_08ADFB70;
    case 1014u: goto L_08ADFB7C;
    case 1015u: goto L_08ADFBBC;
    case 1016u: goto L_08ADFBC4;
    case 1017u: goto L_08ADFBD8;
    case 1018u: goto L_08ADFBDC;
    case 1019u: goto L_08ADFBE4;
    case 1020u: goto L_08ADFBEC;
    case 1021u: goto L_08ADFBF8;
    case 1022u: goto L_08ADFC00;
    case 1023u: goto L_08ADFC10;
    case 1024u: goto L_08ADFC1C;
    case 1025u: goto L_08ADFC28;
    case 1026u: goto L_08ADFC30;
    case 1027u: goto L_08ADFC34;
    case 1028u: goto L_08ADFC3C;
    case 1029u: goto L_08ADFC48;
    case 1030u: goto L_08ADFC54;
    case 1031u: goto L_08ADFC5C;
    case 1032u: goto L_08ADFC64;
    case 1033u: goto L_08ADFC6C;
    case 1034u: goto L_08ADFC88;
    case 1035u: goto L_08ADFC94;
    case 1036u: goto L_08ADFC9C;
    case 1037u: goto L_08ADFCA4;
    case 1038u: goto L_08ADFCC0;
    case 1039u: goto L_08ADFCC8;
    case 1040u: goto L_08ADFCD0;
    case 1041u: goto L_08ADFCE8;
    case 1042u: goto L_08ADFCF0;
    case 1043u: goto L_08ADFD0C;
    case 1044u: goto L_08ADFD14;
    case 1045u: goto L_08ADFD20;
    case 1046u: goto L_08ADFD2C;
    case 1047u: goto L_08ADFD58;
    case 1048u: goto L_08ADFDA8;
    case 1049u: goto L_08ADFDB0;
    case 1050u: goto L_08ADFDB8;
    case 1051u: goto L_08ADFDC0;
    case 1052u: goto L_08ADFDC8;
    case 1053u: goto L_08ADFDE0;
    case 1054u: goto L_08ADFDEC;
    case 1055u: goto L_08ADFDFC;
    case 1056u: goto L_08ADFE04;
    case 1057u: goto L_08ADFE0C;
    case 1058u: goto L_08ADFE14;
    case 1059u: goto L_08ADFE1C;
    case 1060u: goto L_08ADFE24;
    case 1061u: goto L_08ADFE2C;
    case 1062u: goto L_08ADFE34;
    case 1063u: goto L_08ADFE44;
    case 1064u: goto L_08ADFE4C;
    case 1065u: goto L_08ADFE50;
    case 1066u: goto L_08ADFE58;
    case 1067u: goto L_08ADFE60;
    case 1068u: goto L_08ADFE70;
    case 1069u: goto L_08ADFE80;
    case 1070u: goto L_08ADFEB0;
    case 1071u: goto L_08ADFED8;
    case 1072u: goto L_08ADFEE0;
    case 1073u: goto L_08ADFEE8;
    case 1074u: goto L_08ADFEF0;
    case 1075u: goto L_08ADFEF8;
    case 1076u: goto L_08ADFF14;
    case 1077u: goto L_08ADFF34;
    case 1078u: goto L_08ADFF3C;
    case 1079u: goto L_08ADFF4C;
    case 1080u: goto L_08ADFF58;
    case 1081u: goto L_08ADFF64;
    case 1082u: goto L_08ADFF6C;
    case 1083u: goto L_08ADFF70;
    case 1084u: goto L_08ADFF7C;
    case 1085u: goto L_08ADFFAC;
    case 1086u: goto L_08ADFFC8;
    case 1087u: goto L_08ADFFCC;
    case 1088u: goto L_08ADFFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08ADC000:
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADC01C;
      }
      goto L_08ADC014;
    }
L_08ADC014:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADC01C;
      }
      goto L_08ADC01C;
    }
L_08ADC01C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08ADC0AC;
      }
      goto L_08ADC024;
    }
L_08ADC024:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[24];
      if (branch_taken) {
          goto L_08ADC060;
      }
      goto L_08ADC038;
    }
L_08ADC038:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08ADC064;
    }
    goto L_08ADC048;
L_08ADC048:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08ADC064;
    }
    goto L_08ADC058;
L_08ADC058:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08ADC0AC;
      }
      goto L_08ADC060;
    }
L_08ADC060:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADC064;
L_08ADC064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADC0A8;
      }
      goto L_08ADC0A0;
    }
L_08ADC0A0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08ADC0A8;
      }
      goto L_08ADC0A8;
    }
L_08ADC0A8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADC0AC;
L_08ADC0AC:
    ctx.gpr[31] = (0x08ADC0B4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC0B4u) goto L_08ADC0B4;
    return;
L_08ADC0B4:
    ctx.gpr[31] = (0x08ADC0BCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 671u, 0x08A96DBCu>(ctx, &aot_mem) && ctx.pc == 0x08ADC0BCu) goto L_08ADC0BC;
    return;
L_08ADC0BC:
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08ADC0E0;
    }
    goto L_08ADC0C4;
L_08ADC0C4:
    ctx.gpr[31] = (0x08ADC0CCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC0CCu) goto L_08ADC0CC;
    return;
L_08ADC0CC:
    ctx.gpr[31] = (0x08ADC0D4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 888u, 0x08A976B0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC0D4u) goto L_08ADC0D4;
    return;
L_08ADC0D4:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08ADC0F4;
    }
    goto L_08ADC0DC;
L_08ADC0DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08ADC0E0;
L_08ADC0E0:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADC104;
      }
      goto L_08ADC0F0;
    }
L_08ADC0F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08ADC0F4;
L_08ADC0F4:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADC294;
      }
      goto L_08ADC104;
    }
L_08ADC104:
    ctx.gpr[4] = (17154u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADC120;
      }
      goto L_08ADC118;
    }
L_08ADC118:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADC188;
      }
      goto L_08ADC120;
    }
L_08ADC120:
    ctx.gpr[31] = (0x08ADC128u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC128u) goto L_08ADC128;
    return;
L_08ADC128:
    ctx.gpr[31] = (0x08ADC130u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 671u, 0x08A96DBCu>(ctx, &aot_mem) && ctx.pc == 0x08ADC130u) goto L_08ADC130;
    return;
L_08ADC130:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC140;
      }
      goto L_08ADC138;
    }
L_08ADC138:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08ADC140;
L_08ADC140:
    ctx.gpr[31] = (0x08ADC148u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC148u) goto L_08ADC148;
    return;
L_08ADC148:
    ctx.gpr[31] = (0x08ADC150u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 888u, 0x08A976B0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC150u) goto L_08ADC150;
    return;
L_08ADC150:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ADC188;
      }
      goto L_08ADC158;
    }
L_08ADC158:
    ctx.gpr[31] = (0x08ADC160u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC160u) goto L_08ADC160;
    return;
L_08ADC160:
    ctx.gpr[31] = (0x08ADC168u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 888u, 0x08A976B0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC168u) goto L_08ADC168;
    return;
L_08ADC168:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (16640u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_08ADC188;
L_08ADC188:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1136)));
    ctx.gpr[4] = (17124u << 16u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[22];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[20])) && ctx.fpr[14] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
      if (branch_taken) {
          goto L_08ADC218;
      }
      goto L_08ADC1B0;
    }
L_08ADC1B0:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1144)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[24];
        goto L_08ADC1D4;
    }
    goto L_08ADC1C8;
L_08ADC1C8:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADC294;
      }
      goto L_08ADC1D4;
    }
L_08ADC1D4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADC210;
      }
      goto L_08ADC208;
    }
L_08ADC208:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08ADC210;
      }
      goto L_08ADC210;
    }
L_08ADC210:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADC294;
      }
      goto L_08ADC218;
    }
L_08ADC218:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[24];
      if (branch_taken) {
          goto L_08ADC250;
      }
      goto L_08ADC228;
    }
L_08ADC228:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08ADC254;
    }
    goto L_08ADC238;
L_08ADC238:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08ADC254;
    }
    goto L_08ADC248;
L_08ADC248:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08ADC294;
      }
      goto L_08ADC250;
    }
L_08ADC250:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADC254;
L_08ADC254:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADC290;
      }
      goto L_08ADC288;
    }
L_08ADC288:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08ADC290;
      }
      goto L_08ADC290;
    }
L_08ADC290:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADC294;
L_08ADC294:
    ctx.gpr[31] = (0x08ADC29Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC29Cu) goto L_08ADC29C;
    return;
L_08ADC29C:
    ctx.gpr[31] = (0x08ADC2A4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 675u, 0x08A96DE0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC2A4u) goto L_08ADC2A4;
    return;
L_08ADC2A4:
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08ADC2C8;
    }
    goto L_08ADC2AC;
L_08ADC2AC:
    ctx.gpr[31] = (0x08ADC2B4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC2B4u) goto L_08ADC2B4;
    return;
L_08ADC2B4:
    ctx.gpr[31] = (0x08ADC2BCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 856u, 0x08A9751Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC2BCu) goto L_08ADC2BC;
    return;
L_08ADC2BC:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08ADC2DC;
    }
    goto L_08ADC2C4;
L_08ADC2C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08ADC2C8;
L_08ADC2C8:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADC2EC;
      }
      goto L_08ADC2D8;
    }
L_08ADC2D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08ADC2DC;
L_08ADC2DC:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADC484;
      }
      goto L_08ADC2EC;
    }
L_08ADC2EC:
    ctx.gpr[4] = (17154u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADC308;
      }
      goto L_08ADC300;
    }
L_08ADC300:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08ADC370;
      }
      goto L_08ADC308;
    }
L_08ADC308:
    ctx.gpr[31] = (0x08ADC310u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC310u) goto L_08ADC310;
    return;
L_08ADC310:
    ctx.gpr[31] = (0x08ADC318u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 675u, 0x08A96DE0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC318u) goto L_08ADC318;
    return;
L_08ADC318:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC328;
      }
      goto L_08ADC320;
    }
L_08ADC320:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08ADC328;
L_08ADC328:
    ctx.gpr[31] = (0x08ADC330u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC330u) goto L_08ADC330;
    return;
L_08ADC330:
    ctx.gpr[31] = (0x08ADC338u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 856u, 0x08A9751Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC338u) goto L_08ADC338;
    return;
L_08ADC338:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ADC370;
      }
      goto L_08ADC340;
    }
L_08ADC340:
    ctx.gpr[31] = (0x08ADC348u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC348u) goto L_08ADC348;
    return;
L_08ADC348:
    ctx.gpr[31] = (0x08ADC350u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 856u, 0x08A9751Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC350u) goto L_08ADC350;
    return;
L_08ADC350:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_08ADC370;
L_08ADC370:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1136)));
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
      if (branch_taken) {
          goto L_08ADC400;
      }
      goto L_08ADC398;
    }
L_08ADC398:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1140)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
        goto L_08ADC3B8;
    }
    goto L_08ADC3AC;
L_08ADC3AC:
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[24];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADC484;
      }
      goto L_08ADC3B8;
    }
L_08ADC3B8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADC3F8;
      }
      goto L_08ADC3F0;
    }
L_08ADC3F0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADC3F8;
      }
      goto L_08ADC3F8;
    }
L_08ADC3F8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08ADC484;
      }
      goto L_08ADC400;
    }
L_08ADC400:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[24];
      if (branch_taken) {
          goto L_08ADC43C;
      }
      goto L_08ADC414;
    }
L_08ADC414:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08ADC440;
    }
    goto L_08ADC424;
L_08ADC424:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08ADC440;
    }
    goto L_08ADC434;
L_08ADC434:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08ADC484;
      }
      goto L_08ADC43C;
    }
L_08ADC43C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADC440;
L_08ADC440:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADC480;
      }
      goto L_08ADC478;
    }
L_08ADC478:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08ADC480;
      }
      goto L_08ADC480;
    }
L_08ADC480:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADC484;
L_08ADC484:
    ctx.gpr[31] = (0x08ADC48Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC48Cu) goto L_08ADC48C;
    return;
L_08ADC48C:
    ctx.gpr[31] = (0x08ADC494u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 679u, 0x08A96E04u>(ctx, &aot_mem) && ctx.pc == 0x08ADC494u) goto L_08ADC494;
    return;
L_08ADC494:
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08ADC4B8;
    }
    goto L_08ADC49C;
L_08ADC49C:
    ctx.gpr[31] = (0x08ADC4A4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC4A4u) goto L_08ADC4A4;
    return;
L_08ADC4A4:
    ctx.gpr[31] = (0x08ADC4ACu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 856u, 0x08A9751Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC4ACu) goto L_08ADC4AC;
    return;
L_08ADC4AC:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08ADC4CC;
    }
    goto L_08ADC4B4;
L_08ADC4B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08ADC4B8;
L_08ADC4B8:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADC4DC;
      }
      goto L_08ADC4C8;
    }
L_08ADC4C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08ADC4CC;
L_08ADC4CC:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADC668;
      }
      goto L_08ADC4DC;
    }
L_08ADC4DC:
    ctx.gpr[4] = (17154u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADC4F8;
      }
      goto L_08ADC4F0;
    }
L_08ADC4F0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADC560;
      }
      goto L_08ADC4F8;
    }
L_08ADC4F8:
    ctx.gpr[31] = (0x08ADC500u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC500u) goto L_08ADC500;
    return;
L_08ADC500:
    ctx.gpr[31] = (0x08ADC508u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 679u, 0x08A96E04u>(ctx, &aot_mem) && ctx.pc == 0x08ADC508u) goto L_08ADC508;
    return;
L_08ADC508:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC518;
      }
      goto L_08ADC510;
    }
L_08ADC510:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08ADC518;
L_08ADC518:
    ctx.gpr[31] = (0x08ADC520u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC520u) goto L_08ADC520;
    return;
L_08ADC520:
    ctx.gpr[31] = (0x08ADC528u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 856u, 0x08A9751Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC528u) goto L_08ADC528;
    return;
L_08ADC528:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ADC560;
      }
      goto L_08ADC530;
    }
L_08ADC530:
    ctx.gpr[31] = (0x08ADC538u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC538u) goto L_08ADC538;
    return;
L_08ADC538:
    ctx.gpr[31] = (0x08ADC540u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 856u, 0x08A9751Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC540u) goto L_08ADC540;
    return;
L_08ADC540:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (16640u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_08ADC560;
L_08ADC560:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1136)));
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[22];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[20])) && ctx.fpr[14] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
      if (branch_taken) {
          goto L_08ADC5EC;
      }
      goto L_08ADC588;
    }
L_08ADC588:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1140)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[24];
        goto L_08ADC5A8;
    }
    goto L_08ADC59C;
L_08ADC59C:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADC668;
      }
      goto L_08ADC5A8;
    }
L_08ADC5A8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADC5E4;
      }
      goto L_08ADC5DC;
    }
L_08ADC5DC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08ADC5E4;
      }
      goto L_08ADC5E4;
    }
L_08ADC5E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08ADC668;
      }
      goto L_08ADC5EC;
    }
L_08ADC5EC:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = ctx.fpr[14] + ctx.fpr[24];
      if (branch_taken) {
          goto L_08ADC624;
      }
      goto L_08ADC5FC;
    }
L_08ADC5FC:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08ADC628;
    }
    goto L_08ADC60C;
L_08ADC60C:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08ADC628;
    }
    goto L_08ADC61C;
L_08ADC61C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08ADC668;
      }
      goto L_08ADC624;
    }
L_08ADC624:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08ADC628;
L_08ADC628:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADC664;
      }
      goto L_08ADC65C;
    }
L_08ADC65C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADC664;
      }
      goto L_08ADC664;
    }
L_08ADC664:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08ADC668;
L_08ADC668:
    ctx.gpr[4] = (50413u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ADC690u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 791u, 0x08967BB0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC690u) goto L_08ADC690;
    return;
L_08ADC690:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ADC6A0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 768u, 0x089678F0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC6A0u) goto L_08ADC6A0;
    return;
L_08ADC6A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADC704;
      }
      goto L_08ADC6FC;
    }
L_08ADC6FC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08ADC704;
      }
      goto L_08ADC704;
    }
L_08ADC704:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08ADC71C;
      }
      goto L_08ADC714;
    }
L_08ADC714:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08ADC71C;
      }
      goto L_08ADC71C;
    }
L_08ADC71C:
    ctx.gpr[4] = (17645u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (17523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08ADC74Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 791u, 0x08967BB0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC74Cu) goto L_08ADC74C;
    return;
L_08ADC74C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ADC758u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 768u, 0x089678F0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC758u) goto L_08ADC758;
    return;
L_08ADC758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08ADC7C0;
      }
      goto L_08ADC7B8;
    }
L_08ADC7B8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08ADC7C0;
      }
      goto L_08ADC7C0;
    }
L_08ADC7C0:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08ADC7D8;
      }
      goto L_08ADC7D0;
    }
L_08ADC7D0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADC7D8;
      }
      goto L_08ADC7D8;
    }
L_08ADC7D8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ADC7E8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 707u, 0x08ADACFCu>(ctx, &aot_mem) && ctx.pc == 0x08ADC7E8u) goto L_08ADC7E8;
    return;
L_08ADC7E8:
    ctx.gpr[31] = (0x08ADC7F0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08ADCBEC;
L_08ADC7F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCB20;
      }
      goto L_08ADC7F8;
    }
L_08ADC7F8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC8DC;
      }
      goto L_08ADC800;
    }
L_08ADC800:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC8DC;
      }
      goto L_08ADC80C;
    }
L_08ADC80C:
    ctx.gpr[31] = (0x08ADC814u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC814u) goto L_08ADC814;
    return;
L_08ADC814:
    ctx.gpr[31] = (0x08ADC81Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 667u, 0x08A96D98u>(ctx, &aot_mem) && ctx.pc == 0x08ADC81Cu) goto L_08ADC81C;
    return;
L_08ADC81C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADC83C;
      }
      goto L_08ADC824;
    }
L_08ADC824:
    ctx.gpr[31] = (0x08ADC82Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC82Cu) goto L_08ADC82C;
    return;
L_08ADC82C:
    ctx.gpr[31] = (0x08ADC834u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 888u, 0x08A976B0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC834u) goto L_08ADC834;
    return;
L_08ADC834:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ADC858;
      }
      goto L_08ADC83C;
    }
L_08ADC83C:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25868), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25872), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ADC8CC;
      }
      goto L_08ADC858;
    }
L_08ADC858:
    ctx.gpr[31] = (0x08ADC860u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC860u) goto L_08ADC860;
    return;
L_08ADC860:
    ctx.gpr[31] = (0x08ADC868u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 671u, 0x08A96DBCu>(ctx, &aot_mem) && ctx.pc == 0x08ADC868u) goto L_08ADC868;
    return;
L_08ADC868:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC888;
      }
      goto L_08ADC870;
    }
L_08ADC870:
    ctx.gpr[31] = (0x08ADC878u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC878u) goto L_08ADC878;
    return;
L_08ADC878:
    ctx.gpr[31] = (0x08ADC880u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 888u, 0x08A976B0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC880u) goto L_08ADC880;
    return;
L_08ADC880:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ADC8A0;
      }
      goto L_08ADC888;
    }
L_08ADC888:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25868), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25872), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADC8CC;
      }
      goto L_08ADC8A0;
    }
L_08ADC8A0:
    ctx.gpr[31] = (0x08ADC8A8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC8A8u) goto L_08ADC8A8;
    return;
L_08ADC8A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC8C4;
      }
      goto L_08ADC8B4;
    }
L_08ADC8B4:
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25868), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADC8CC;
      }
      goto L_08ADC8C4;
    }
L_08ADC8C4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25868), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADC8CC;
L_08ADC8CC:
    ctx.gpr[31] = (0x08ADC8D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08ADCBEC;
L_08ADC8D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCB20;
      }
      goto L_08ADC8DC;
    }
L_08ADC8DC:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADC9C4;
      }
      goto L_08ADC8E8;
    }
L_08ADC8E8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC9C4;
      }
      goto L_08ADC8F4;
    }
L_08ADC8F4:
    ctx.gpr[31] = (0x08ADC8FCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC8FCu) goto L_08ADC8FC;
    return;
L_08ADC8FC:
    ctx.gpr[31] = (0x08ADC904u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 667u, 0x08A96D98u>(ctx, &aot_mem) && ctx.pc == 0x08ADC904u) goto L_08ADC904;
    return;
L_08ADC904:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADC924;
      }
      goto L_08ADC90C;
    }
L_08ADC90C:
    ctx.gpr[31] = (0x08ADC914u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC914u) goto L_08ADC914;
    return;
L_08ADC914:
    ctx.gpr[31] = (0x08ADC91Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 888u, 0x08A976B0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC91Cu) goto L_08ADC91C;
    return;
L_08ADC91C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ADC93C;
      }
      goto L_08ADC924;
    }
L_08ADC924:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25860), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25864), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADC9B4;
      }
      goto L_08ADC93C;
    }
L_08ADC93C:
    ctx.gpr[31] = (0x08ADC944u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC944u) goto L_08ADC944;
    return;
L_08ADC944:
    ctx.gpr[31] = (0x08ADC94Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 671u, 0x08A96DBCu>(ctx, &aot_mem) && ctx.pc == 0x08ADC94Cu) goto L_08ADC94C;
    return;
L_08ADC94C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC96C;
      }
      goto L_08ADC954;
    }
L_08ADC954:
    ctx.gpr[31] = (0x08ADC95Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC95Cu) goto L_08ADC95C;
    return;
L_08ADC95C:
    ctx.gpr[31] = (0x08ADC964u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 888u, 0x08A976B0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC964u) goto L_08ADC964;
    return;
L_08ADC964:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ADC988;
      }
      goto L_08ADC96C;
    }
L_08ADC96C:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25860), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25864), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ADC9B4;
      }
      goto L_08ADC988;
    }
L_08ADC988:
    ctx.gpr[31] = (0x08ADC990u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC990u) goto L_08ADC990;
    return;
L_08ADC990:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC9AC;
      }
      goto L_08ADC99C;
    }
L_08ADC99C:
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25860), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADC9B4;
      }
      goto L_08ADC9AC;
    }
L_08ADC9AC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25860), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADC9B4;
L_08ADC9B4:
    ctx.gpr[31] = (0x08ADC9BCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08ADCBEC;
L_08ADC9BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCB20;
      }
      goto L_08ADC9C4;
    }
L_08ADC9C4:
    ctx.gpr[17] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ADCA10;
      }
      goto L_08ADC9D0;
    }
L_08ADC9D0:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20928)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1424)));
      if (branch_taken) {
          goto L_08ADC9E8;
      }
      goto L_08ADC9E0;
    }
L_08ADC9E0:
    ctx.gpr[31] = (0x08ADC9E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 533u, 0x08AFA59Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC9E8u) goto L_08ADC9E8;
    return;
L_08ADC9E8:
    ctx.gpr[31] = (0x08ADC9F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20928)));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 434u, 0x0882BA08u>(ctx, &aot_mem) && ctx.pc == 0x08ADC9F0u) goto L_08ADC9F0;
    return;
L_08ADC9F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1424)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCA08;
      }
      goto L_08ADCA00;
    }
L_08ADCA00:
    ctx.gpr[31] = (0x08ADCA08u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08ADCBEC;
L_08ADCA08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCB20;
      }
      goto L_08ADCA10;
    }
L_08ADCA10:
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (0u | 23u);
      if (branch_taken) {
          goto L_08ADCA3C;
      }
      goto L_08ADCA1C;
    }
L_08ADCA1C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 26u);
      if (branch_taken) {
          goto L_08ADCA3C;
      }
      goto L_08ADCA24;
    }
L_08ADCA24:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 27u);
      if (branch_taken) {
          goto L_08ADCA3C;
      }
      goto L_08ADCA2C;
    }
L_08ADCA2C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 24u);
      if (branch_taken) {
          goto L_08ADCA3C;
      }
      goto L_08ADCA34;
    }
L_08ADCA34:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08ADCB18;
      }
      goto L_08ADCA3C;
    }
L_08ADCA3C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCB18;
      }
      goto L_08ADCA48;
    }
L_08ADCA48:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADCA70;
      }
      goto L_08ADCA50;
    }
L_08ADCA50:
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20932)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCA68;
      }
      goto L_08ADCA60;
    }
L_08ADCA60:
    ctx.gpr[31] = (0x08ADCA68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADCA68u) goto L_08ADCA68;
    return;
L_08ADCA68:
    ctx.gpr[31] = (0x08ADCA70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20932)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 292u, 0x08A092E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCA70u) goto L_08ADCA70;
    return;
L_08ADCA70:
    ctx.gpr[31] = (0x08ADCA78u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCA78u) goto L_08ADCA78;
    return;
L_08ADCA78:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADCA98;
      }
      goto L_08ADCA88;
    }
L_08ADCA88:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08ADCA9C;
      }
      goto L_08ADCA94;
    }
L_08ADCA94:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ADCA98;
L_08ADCA98:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08ADCA9C;
L_08ADCA9C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCABC;
      }
      goto L_08ADCAA4;
    }
L_08ADCAA4:
    ctx.gpr[31] = (0x08ADCAACu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCAACu) goto L_08ADCAAC;
    return;
L_08ADCAAC:
    ctx.gpr[31] = (0x08ADCAB4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 773u, 0x08A97190u>(ctx, &aot_mem) && ctx.pc == 0x08ADCAB4u) goto L_08ADCAB4;
    return;
L_08ADCAB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCB20;
      }
      goto L_08ADCABC;
    }
L_08ADCABC:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1380), ctx.gpr[17]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25764)));
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADCAE8;
      }
      goto L_08ADCAD8;
    }
L_08ADCAD8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ADCAE4u);
    ctx.gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 435u, 0x08AD9CFCu>(ctx, &aot_mem) && ctx.pc == 0x08ADCAE4u) goto L_08ADCAE4;
    return;
L_08ADCAE4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08ADCAE8;
L_08ADCAE8:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1388), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08ADCAF8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 665u, 0x08ADAA94u>(ctx, &aot_mem) && ctx.pc == 0x08ADCAF8u) goto L_08ADCAF8;
    return;
L_08ADCAF8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1420), 0u);
    ctx.gpr[5] = (0u | 197u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADCB10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADCB10u) goto L_08ADCB10;
    return;
L_08ADCB10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCB20;
      }
      goto L_08ADCB18;
    }
L_08ADCB18:
    ctx.gpr[31] = (0x08ADCB20u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08ADCBEC;
L_08ADCB20:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29220)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCB84;
      }
      goto L_08ADCB30;
    }
L_08ADCB30:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27324)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCB84;
      }
      goto L_08ADCB44;
    }
L_08ADCB44:
    ctx.gpr[31] = (0x08ADCB4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 540u, 0x08A96588u>(ctx, &aot_mem) && ctx.pc == 0x08ADCB4Cu) goto L_08ADCB4C;
    return;
L_08ADCB4C:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29220), 0u);
      if (branch_taken) {
          goto L_08ADCB84;
      }
      goto L_08ADCB58;
    }
L_08ADCB58:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ADCB64u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 401u, 0x08AD9B08u>(ctx, &aot_mem) && ctx.pc == 0x08ADCB64u) goto L_08ADCB64;
    return;
L_08ADCB64:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1130), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28892), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1384), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29212), 0u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(307), static_cast<std::uint8_t>(0u));
    goto L_08ADCB84;
L_08ADCB84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCBA8;
      }
      goto L_08ADCB90;
    }
L_08ADCB90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(311)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCBA8;
      }
      goto L_08ADCB9C;
    }
L_08ADCB9C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08ADCBA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 94u, 0x088646F8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCBA8u) goto L_08ADCBA8;
    return;
L_08ADCBA8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADCBEC:
    if (lcs::decomp::run<0x08ADCBECu>(rt, ctx)) { jump_target = ctx.gpr[31]; local_pc = jump_target; if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; } ctx.pc = jump_target; return; }  // [decomp-hook]
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[6] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ADCC4C;
      }
      goto L_08ADCC24;
    }
L_08ADCC24:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25851)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCC44;
      }
      goto L_08ADCC34;
    }
L_08ADCC34:
    ctx.gpr[31] = (0x08ADCC3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 290u, 0x08AD95F8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCC3Cu) goto L_08ADCC3C;
    return;
L_08ADCC3C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25851), static_cast<std::uint8_t>(0u));
    goto L_08ADCC44;
L_08ADCC44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADE824;
      }
      goto L_08ADCC4C;
    }
L_08ADCC4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADCCB8;
      }
      goto L_08ADCC5C;
    }
L_08ADCC5C:
    ctx.gpr[31] = (0x08ADCC64u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCC64u) goto L_08ADCC64;
    return;
L_08ADCC64:
    ctx.gpr[31] = (0x08ADCC6Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 773u, 0x08A97190u>(ctx, &aot_mem) && ctx.pc == 0x08ADCC6Cu) goto L_08ADCC6C;
    return;
L_08ADCC6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCCB0;
      }
      goto L_08ADCC74;
    }
L_08ADCC74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(321)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCCB0;
      }
      goto L_08ADCC80;
    }
L_08ADCC80:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25839), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[18] = (0u | 10u);
    ctx.gpr[31] = (0x08ADCC98u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCC98u) goto L_08ADCC98;
    return;
L_08ADCC98:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(147), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADCCA8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 435u, 0x08AD9CFCu>(ctx, &aot_mem) && ctx.pc == 0x08ADCCA8u) goto L_08ADCCA8;
    return;
L_08ADCCA8:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-28743), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08ADCCB0;
L_08ADCCB0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08ADCCB8;
L_08ADCCB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADCD14;
      }
      goto L_08ADCCC8;
    }
L_08ADCCC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADCD14;
      }
      goto L_08ADCCD8;
    }
L_08ADCCD8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADCCE4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 435u, 0x08AD9CFCu>(ctx, &aot_mem) && ctx.pc == 0x08ADCCE4u) goto L_08ADCCE4;
    return;
L_08ADCCE4:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6224), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25839), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4832));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28728), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28743), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08ADCD14;
L_08ADCD14:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29212)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCD5C;
      }
      goto L_08ADCD24;
    }
L_08ADCD24:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29208)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCD54;
      }
      goto L_08ADCD34;
    }
L_08ADCD34:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(321)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08ADCD64;
      }
      goto L_08ADCD4C;
    }
L_08ADCD4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCE5C;
      }
      goto L_08ADCD54;
    }
L_08ADCD54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADE824;
      }
      goto L_08ADCD5C;
    }
L_08ADCD5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADE824;
      }
      goto L_08ADCD64;
    }
L_08ADCD64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADCE5C;
      }
      goto L_08ADCD74;
    }
L_08ADCD74:
    ctx.gpr[31] = (0x08ADCD7Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCD7Cu) goto L_08ADCD7C;
    return;
L_08ADCD7C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCE5C;
      }
      goto L_08ADCD90;
    }
L_08ADCD90:
    ctx.gpr[31] = (0x08ADCD98u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCD98u) goto L_08ADCD98;
    return;
L_08ADCD98:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCE5C;
      }
      goto L_08ADCDAC;
    }
L_08ADCDAC:
    ctx.gpr[31] = (0x08ADCDB4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCDB4u) goto L_08ADCDB4;
    return;
L_08ADCDB4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCE5C;
      }
      goto L_08ADCDC8;
    }
L_08ADCDC8:
    ctx.gpr[31] = (0x08ADCDD0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCDD0u) goto L_08ADCDD0;
    return;
L_08ADCDD0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCE5C;
      }
      goto L_08ADCDE4;
    }
L_08ADCDE4:
    ctx.gpr[31] = (0x08ADCDECu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCDECu) goto L_08ADCDEC;
    return;
L_08ADCDEC:
    ctx.gpr[31] = (0x08ADCDF4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 659u, 0x08A96D10u>(ctx, &aot_mem) && ctx.pc == 0x08ADCDF4u) goto L_08ADCDF4;
    return;
L_08ADCDF4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < -4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCE5C;
      }
      goto L_08ADCE00;
    }
L_08ADCE00:
    ctx.gpr[31] = (0x08ADCE08u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCE08u) goto L_08ADCE08;
    return;
L_08ADCE08:
    ctx.gpr[31] = (0x08ADCE10u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 659u, 0x08A96D10u>(ctx, &aot_mem) && ctx.pc == 0x08ADCE10u) goto L_08ADCE10;
    return;
L_08ADCE10:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCE5C;
      }
      goto L_08ADCE1C;
    }
L_08ADCE1C:
    ctx.gpr[31] = (0x08ADCE24u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCE24u) goto L_08ADCE24;
    return;
L_08ADCE24:
    ctx.gpr[31] = (0x08ADCE2Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 663u, 0x08A96D54u>(ctx, &aot_mem) && ctx.pc == 0x08ADCE2Cu) goto L_08ADCE2C;
    return;
L_08ADCE2C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < -4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCE5C;
      }
      goto L_08ADCE38;
    }
L_08ADCE38:
    ctx.gpr[31] = (0x08ADCE40u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCE40u) goto L_08ADCE40;
    return;
L_08ADCE40:
    ctx.gpr[31] = (0x08ADCE48u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 663u, 0x08A96D54u>(ctx, &aot_mem) && ctx.pc == 0x08ADCE48u) goto L_08ADCE48;
    return;
L_08ADCE48:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCE5C;
      }
      goto L_08ADCE54;
    }
L_08ADCE54:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(321), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08ADCE5C;
L_08ADCE5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADCE78;
      }
      goto L_08ADCE6C;
    }
L_08ADCE6C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCEB8;
      }
      goto L_08ADCE78;
    }
L_08ADCE78:
    ctx.gpr[31] = (0x08ADCE80u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCE80u) goto L_08ADCE80;
    return;
L_08ADCE80:
    ctx.gpr[31] = (0x08ADCE88u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 773u, 0x08A97190u>(ctx, &aot_mem) && ctx.pc == 0x08ADCE88u) goto L_08ADCE88;
    return;
L_08ADCE88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCEB8;
      }
      goto L_08ADCE90;
    }
L_08ADCE90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(321)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCEB8;
      }
      goto L_08ADCE9C;
    }
L_08ADCE9C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25839), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[22] = (0u | 10u);
    ctx.gpr[31] = (0x08ADCEB4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCEB4u) goto L_08ADCEB4;
    return;
L_08ADCEB4:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(147), static_cast<std::uint8_t>(ctx.gpr[22]));
    goto L_08ADCEB8;
L_08ADCEB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD378;
      }
      goto L_08ADCEC4;
    }
L_08ADCEC4:
    ctx.gpr[31] = (0x08ADCECCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCECCu) goto L_08ADCECC;
    return;
L_08ADCECC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADCEEC;
      }
      goto L_08ADCEDC;
    }
L_08ADCEDC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08ADCEF0;
      }
      goto L_08ADCEE8;
    }
L_08ADCEE8:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ADCEEC;
L_08ADCEEC:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08ADCEF0;
L_08ADCEF0:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08ADCFB8;
    }
    goto L_08ADCEF8;
L_08ADCEF8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 195u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADCF0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADCF0Cu) goto L_08ADCF0C;
    return;
L_08ADCF0C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADCF78;
      }
      goto L_08ADCF24;
    }
L_08ADCF24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20928)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADCF3C;
      }
      goto L_08ADCF30;
    }
L_08ADCF30:
    ctx.gpr[31] = (0x08ADCF38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 533u, 0x08AFA59Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADCF38u) goto L_08ADCF38;
    return;
L_08ADCF38:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08ADCF3C;
L_08ADCF3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20932)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADCF54;
      }
      goto L_08ADCF48;
    }
L_08ADCF48:
    ctx.gpr[31] = (0x08ADCF50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADCF50u) goto L_08ADCF50;
    return;
L_08ADCF50:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08ADCF54;
L_08ADCF54:
    ctx.gpr[31] = (0x08ADCF5Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20932)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 292u, 0x08A092E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCF5Cu) goto L_08ADCF5C;
    return;
L_08ADCF5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCF74;
      }
      goto L_08ADCF64;
    }
L_08ADCF64:
    ctx.gpr[31] = (0x08ADCF6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 313u, 0x08935904u>(ctx, &aot_mem) && ctx.pc == 0x08ADCF6Cu) goto L_08ADCF6C;
    return;
L_08ADCF6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCF78;
      }
      goto L_08ADCF74;
    }
L_08ADCF74:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(0u));
    goto L_08ADCF78;
L_08ADCF78:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), 0u);
    ctx.gpr[31] = (0x08ADCF84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 665u, 0x08ADAA94u>(ctx, &aot_mem) && ctx.pc == 0x08ADCF84u) goto L_08ADCF84;
    return;
L_08ADCF84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 4u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08ADCFB8;
    }
    goto L_08ADCF94;
L_08ADCF94:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25791))))));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[31] = (0x08ADCFB4u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 145u, 0x08864A64u>(ctx, &aot_mem) && ctx.pc == 0x08ADCFB4u) goto L_08ADCFB4;
    return;
L_08ADCFB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08ADCFB8;
L_08ADCFB8:
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28884));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25764)));
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADD068;
      }
      goto L_08ADD018;
    }
L_08ADD018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28668));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08ADD068;
L_08ADD068:
    ctx.gpr[31] = (0x08ADD070u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 298u, 0x08AD9664u>(ctx, &aot_mem) && ctx.pc == 0x08ADD070u) goto L_08ADD070;
    return;
L_08ADD070:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD0BC;
      }
      goto L_08ADD078;
    }
L_08ADD078:
    ctx.gpr[31] = (0x08ADD080u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADD080u) goto L_08ADD080;
    return;
L_08ADD080:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD0BC;
      }
      goto L_08ADD08C;
    }
L_08ADD08C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD0A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADD0A0u) goto L_08ADD0A0;
    return;
L_08ADD0A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD0BC;
      }
      goto L_08ADD0B0;
    }
L_08ADD0B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08ADD0BC;
L_08ADD0BC:
    ctx.gpr[31] = (0x08ADD0C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 309u, 0x08AD96C8u>(ctx, &aot_mem) && ctx.pc == 0x08ADD0C4u) goto L_08ADD0C4;
    return;
L_08ADD0C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD110;
      }
      goto L_08ADD0CC;
    }
L_08ADD0CC:
    ctx.gpr[31] = (0x08ADD0D4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADD0D4u) goto L_08ADD0D4;
    return;
L_08ADD0D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD110;
      }
      goto L_08ADD0E0;
    }
L_08ADD0E0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD0F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADD0F4u) goto L_08ADD0F4;
    return;
L_08ADD0F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD110;
      }
      goto L_08ADD104;
    }
L_08ADD104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08ADD110;
L_08ADD110:
    ctx.gpr[31] = (0x08ADD118u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 320u, 0x08AD972Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD118u) goto L_08ADD118;
    return;
L_08ADD118:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD164;
      }
      goto L_08ADD120;
    }
L_08ADD120:
    ctx.gpr[31] = (0x08ADD128u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADD128u) goto L_08ADD128;
    return;
L_08ADD128:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD164;
      }
      goto L_08ADD134;
    }
L_08ADD134:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD148u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADD148u) goto L_08ADD148;
    return;
L_08ADD148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD164;
      }
      goto L_08ADD158;
    }
L_08ADD158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08ADD164;
L_08ADD164:
    ctx.gpr[31] = (0x08ADD16Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 346u, 0x08AD9814u>(ctx, &aot_mem) && ctx.pc == 0x08ADD16Cu) goto L_08ADD16C;
    return;
L_08ADD16C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD1B8;
      }
      goto L_08ADD174;
    }
L_08ADD174:
    ctx.gpr[31] = (0x08ADD17Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADD17Cu) goto L_08ADD17C;
    return;
L_08ADD17C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD1B8;
      }
      goto L_08ADD188;
    }
L_08ADD188:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD19Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADD19Cu) goto L_08ADD19C;
    return;
L_08ADD19C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD1B8;
      }
      goto L_08ADD1AC;
    }
L_08ADD1AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08ADD1B8;
L_08ADD1B8:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD370;
      }
      goto L_08ADD1C0;
    }
L_08ADD1C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD370;
      }
      goto L_08ADD1D0;
    }
L_08ADD1D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD204;
      }
      goto L_08ADD1E0;
    }
L_08ADD1E0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20928)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADD1FC;
      }
      goto L_08ADD1F0;
    }
L_08ADD1F0:
    ctx.gpr[31] = (0x08ADD1F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 533u, 0x08AFA59Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD1F8u) goto L_08ADD1F8;
    return;
L_08ADD1F8:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08ADD1FC;
L_08ADD1FC:
    ctx.gpr[31] = (0x08ADD204u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20928)));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 479u, 0x0882BC80u>(ctx, &aot_mem) && ctx.pc == 0x08ADD204u) goto L_08ADD204;
    return;
L_08ADD204:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1420), 0u);
    ctx.gpr[31] = (0x08ADD210u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 485u, 0x08ADA00Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD210u) goto L_08ADD210;
    return;
L_08ADD210:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25764)));
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADD2AC;
      }
      goto L_08ADD224;
    }
L_08ADD224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (const std::int32_t host_screen = lcs::lcs_menu_tab_screen(ctx.gpr[4]); host_screen >= 0) {  // [lcs-menu-pages] LANGUAGE, GRAPHICS
        aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), static_cast<std::uint32_t>(host_screen));
        goto L_08ADD330;
    }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ADD330;
      }
      goto L_08ADD238;
    }
L_08ADD238:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-8112)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD250:
    ctx.gpr[4] = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD330;
      }
      goto L_08ADD25C;
    }
L_08ADD25C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD330;
      }
      goto L_08ADD268;
    }
L_08ADD268:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD330;
      }
      goto L_08ADD274;
    }
L_08ADD274:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), 0u);
      if (branch_taken) {
          goto L_08ADD330;
      }
      goto L_08ADD27C;
    }
L_08ADD27C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD330;
      }
      goto L_08ADD288;
    }
L_08ADD288:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD330;
      }
      goto L_08ADD294;
    }
L_08ADD294:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD330;
      }
      goto L_08ADD2A0;
    }
L_08ADD2A0:
    ctx.gpr[4] = (0u | 14u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD330;
      }
      goto L_08ADD2AC;
    }
L_08ADD2AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (const std::int32_t host_screen = lcs::lcs_menu_tab_screen(ctx.gpr[4]); host_screen >= 0) {  // [lcs-menu-pages] LANGUAGE, GRAPHICS
        aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), static_cast<std::uint32_t>(host_screen));
        goto L_08ADD330;
    }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ADD330;
      }
      goto L_08ADD2C0;
    }
L_08ADD2C0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-8080)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD2D8:
    ctx.gpr[4] = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD330;
      }
      goto L_08ADD2E4;
    }
L_08ADD2E4:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD330;
      }
      goto L_08ADD2F0;
    }
L_08ADD2F0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD330;
      }
      goto L_08ADD2FC;
    }
L_08ADD2FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), 0u);
      if (branch_taken) {
          goto L_08ADD330;
      }
      goto L_08ADD304;
    }
L_08ADD304:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD330;
      }
      goto L_08ADD310;
    }
L_08ADD310:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD330;
      }
      goto L_08ADD31C;
    }
L_08ADD31C:
    ctx.gpr[4] = (0u | 14u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD330;
      }
      goto L_08ADD328;
    }
L_08ADD328:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
    goto L_08ADD330;
L_08ADD330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD370;
      }
      goto L_08ADD340;
    }
L_08ADD340:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20928)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADD35C;
      }
      goto L_08ADD350;
    }
L_08ADD350:
    ctx.gpr[31] = (0x08ADD358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 533u, 0x08AFA59Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD358u) goto L_08ADD358;
    return;
L_08ADD358:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08ADD35C;
L_08ADD35C:
    ctx.gpr[31] = (0x08ADD364u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20928)));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 424u, 0x0882B958u>(ctx, &aot_mem) && ctx.pc == 0x08ADD364u) goto L_08ADD364;
    return;
L_08ADD364:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD370;
      }
      goto L_08ADD36C;
    }
L_08ADD36C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(0u));
    goto L_08ADD370;
L_08ADD370:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDBD8;
      }
      goto L_08ADD378;
    }
L_08ADD378:
    ctx.gpr[31] = (0x08ADD380u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADD380u) goto L_08ADD380;
    return;
L_08ADD380:
    ctx.gpr[31] = (0x08ADD388u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 713u, 0x08A96F3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD388u) goto L_08ADD388;
    return;
L_08ADD388:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1388)));
        goto L_08ADD3AC;
    }
    goto L_08ADD390;
L_08ADD390:
    ctx.gpr[31] = (0x08ADD398u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADD398u) goto L_08ADD398;
    return;
L_08ADD398:
    ctx.gpr[31] = (0x08ADD3A0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 733u, 0x08A96FF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADD3A0u) goto L_08ADD3A0;
    return;
L_08ADD3A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD448;
      }
      goto L_08ADD3A8;
    }
L_08ADD3A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1388)));
    goto L_08ADD3AC;
L_08ADD3AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD448;
      }
      goto L_08ADD3B4;
    }
L_08ADD3B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
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
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_08ADD410;
      }
      goto L_08ADD3FC;
    }
L_08ADD3FC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD448;
      }
      goto L_08ADD408;
    }
L_08ADD408:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD434;
      }
      goto L_08ADD410;
    }
L_08ADD410:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD448;
      }
      goto L_08ADD418;
    }
L_08ADD418:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 199u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD42Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADD42Cu) goto L_08ADD42C;
    return;
L_08ADD42C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD448;
      }
      goto L_08ADD434;
    }
L_08ADD434:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD448u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADD448u) goto L_08ADD448;
    return;
L_08ADD448:
    ctx.gpr[31] = (0x08ADD450u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADD450u) goto L_08ADD450;
    return;
L_08ADD450:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADD470;
      }
      goto L_08ADD460;
    }
L_08ADD460:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08ADD474;
      }
      goto L_08ADD46C;
    }
L_08ADD46C:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ADD470;
L_08ADD470:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08ADD474;
L_08ADD474:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD7F4;
      }
      goto L_08ADD47C;
    }
L_08ADD47C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD7F4;
      }
      goto L_08ADD48C;
    }
L_08ADD48C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD640;
      }
      goto L_08ADD49C;
    }
L_08ADD49C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD640;
      }
      goto L_08ADD4AC;
    }
L_08ADD4AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
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
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(42) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08ADD59C;
      }
      goto L_08ADD4F8;
    }
L_08ADD4F8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-8048)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD510:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADD7F4;
      }
      goto L_08ADD518;
    }
L_08ADD518:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD7F4;
      }
      goto L_08ADD520;
    }
L_08ADD520:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 195u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD534u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADD534u) goto L_08ADD534;
    return;
L_08ADD534:
    ctx.gpr[31] = (0x08ADD53Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 494u, 0x08ADA094u>(ctx, &aot_mem) && ctx.pc == 0x08ADD53Cu) goto L_08ADD53C;
    return;
L_08ADD53C:
    ctx.gpr[31] = (0x08ADD544u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 665u, 0x08ADAA94u>(ctx, &aot_mem) && ctx.pc == 0x08ADD544u) goto L_08ADD544;
    return;
L_08ADD544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD7F4;
      }
      goto L_08ADD54C;
    }
L_08ADD54C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD570;
      }
      goto L_08ADD55C;
    }
L_08ADD55C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 195u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD570u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADD570u) goto L_08ADD570;
    return;
L_08ADD570:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADD7F4;
      }
      goto L_08ADD578;
    }
L_08ADD578:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 197u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD58Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADD58Cu) goto L_08ADD58C;
    return;
L_08ADD58C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADD7F4;
      }
      goto L_08ADD594;
    }
L_08ADD594:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD7F4;
      }
      goto L_08ADD59C;
    }
L_08ADD59C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1388)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1388), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[8] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADD60C;
      }
      goto L_08ADD5F0;
    }
L_08ADD5F0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD604u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADD604u) goto L_08ADD604;
    return;
L_08ADD604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD620;
      }
      goto L_08ADD60C;
    }
L_08ADD60C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 195u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD620u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADD620u) goto L_08ADD620;
    return;
L_08ADD620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD638;
      }
      goto L_08ADD630;
    }
L_08ADD630:
    ctx.gpr[31] = (0x08ADD638u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 665u, 0x08ADAA94u>(ctx, &aot_mem) && ctx.pc == 0x08ADD638u) goto L_08ADD638;
    return;
L_08ADD638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD7F4;
      }
      goto L_08ADD640;
    }
L_08ADD640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD660;
      }
      goto L_08ADD650;
    }
L_08ADD650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD7F4;
      }
      goto L_08ADD660;
    }
L_08ADD660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ADD710;
      }
      goto L_08ADD66C;
    }
L_08ADD66C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20000));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD6E8;
      }
      goto L_08ADD6CC;
    }
L_08ADD6CC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 198u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD6E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADD6E0u) goto L_08ADD6E0;
    return;
L_08ADD6E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD708;
      }
      goto L_08ADD6E8;
    }
L_08ADD6E8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD6FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADD6FCu) goto L_08ADD6FC;
    return;
L_08ADD6FC:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x08ADD708u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 665u, 0x08ADAA94u>(ctx, &aot_mem) && ctx.pc == 0x08ADD708u) goto L_08ADD708;
    return;
L_08ADD708:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD7F4;
      }
      goto L_08ADD710;
    }
L_08ADD710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD7C8;
      }
      goto L_08ADD71C;
    }
L_08ADD71C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
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
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD7AC;
      }
      goto L_08ADD764;
    }
L_08ADD764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
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
    ctx.gpr[5] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD7C8;
      }
      goto L_08ADD7AC;
    }
L_08ADD7AC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 198u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD7C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADD7C0u) goto L_08ADD7C0;
    return;
L_08ADD7C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADD7F4;
      }
      goto L_08ADD7C8;
    }
L_08ADD7C8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD7DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADD7DCu) goto L_08ADD7DC;
    return;
L_08ADD7DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADD7F4;
      }
      goto L_08ADD7EC;
    }
L_08ADD7EC:
    ctx.gpr[31] = (0x08ADD7F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 665u, 0x08ADAA94u>(ctx, &aot_mem) && ctx.pc == 0x08ADD7F4u) goto L_08ADD7F4;
    return;
L_08ADD7F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1388)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD828;
      }
      goto L_08ADD800;
    }
L_08ADD800:
    ctx.gpr[31] = (0x08ADD808u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 309u, 0x08AD96C8u>(ctx, &aot_mem) && ctx.pc == 0x08ADD808u) goto L_08ADD808;
    return;
L_08ADD808:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD814;
      }
      goto L_08ADD810;
    }
L_08ADD810:
    ctx.gpr[20] = (0u | 1u);
    goto L_08ADD814;
L_08ADD814:
    ctx.gpr[31] = (0x08ADD81Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 298u, 0x08AD9664u>(ctx, &aot_mem) && ctx.pc == 0x08ADD81Cu) goto L_08ADD81C;
    return;
L_08ADD81C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD828;
      }
      goto L_08ADD824;
    }
L_08ADD824:
    ctx.gpr[19] = (0u | 1u);
    goto L_08ADD828;
L_08ADD828:
    ctx.gpr[31] = (0x08ADD830u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADD830u) goto L_08ADD830;
    return;
L_08ADD830:
    ctx.gpr[31] = (0x08ADD838u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 773u, 0x08A97190u>(ctx, &aot_mem) && ctx.pc == 0x08ADD838u) goto L_08ADD838;
    return;
L_08ADD838:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD954;
      }
      goto L_08ADD840;
    }
L_08ADD840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD954;
      }
      goto L_08ADD850;
    }
L_08ADD850:
    ctx.gpr[31] = (0x08ADD858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 121u, 0x088B0A44u>(ctx, &aot_mem) && ctx.pc == 0x08ADD858u) goto L_08ADD858;
    return;
L_08ADD858:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD8BC;
      }
      goto L_08ADD868;
    }
L_08ADD868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ADD8BC;
      }
      goto L_08ADD874;
    }
L_08ADD874:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 197u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD888u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADD888u) goto L_08ADD888;
    return;
L_08ADD888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD8A0;
      }
      goto L_08ADD898;
    }
L_08ADD898:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), 0u);
      if (branch_taken) {
          goto L_08ADD8A8;
      }
      goto L_08ADD8A0;
    }
L_08ADD8A0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), ctx.gpr[4]);
    goto L_08ADD8A8;
L_08ADD8A8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08ADD8B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 665u, 0x08ADAA94u>(ctx, &aot_mem) && ctx.pc == 0x08ADD8B4u) goto L_08ADD8B4;
    return;
L_08ADD8B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD954;
      }
      goto L_08ADD8BC;
    }
L_08ADD8BC:
    ctx.gpr[5] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25868), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25860), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1388), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08ADD8ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 665u, 0x08ADAA94u>(ctx, &aot_mem) && ctx.pc == 0x08ADD8ECu) goto L_08ADD8EC;
    return;
L_08ADD8EC:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1420), 0u);
    ctx.gpr[5] = (0u | 197u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD904u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADD904u) goto L_08ADD904;
    return;
L_08ADD904:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(15) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD934;
      }
      goto L_08ADD914;
    }
L_08ADD914:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7880)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD92C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD938;
      }
      goto L_08ADD934;
    }
L_08ADD934:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), 0u);
    goto L_08ADD938;
L_08ADD938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD954;
      }
      goto L_08ADD948;
    }
L_08ADD948:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08ADD954u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 147u, 0x08864A90u>(ctx, &aot_mem) && ctx.pc == 0x08ADD954u) goto L_08ADD954;
    return;
L_08ADD954:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD964u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADD964u) goto L_08ADD964;
    return;
L_08ADD964:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDA20;
      }
      goto L_08ADD978;
    }
L_08ADD978:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27324)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25748)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(151) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDA18;
      }
      goto L_08ADD998;
    }
L_08ADD998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
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
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADDA08;
      }
      goto L_08ADD9E0;
    }
L_08ADD9E0:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 18 ? 1u : 0u);
        goto L_08ADD9FC;
    }
    goto L_08ADD9E8;
L_08ADD9E8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDA04;
      }
      goto L_08ADD9F4;
    }
L_08ADD9F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDA08;
      }
      goto L_08ADD9FC;
    }
L_08ADD9FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDA08;
      }
      goto L_08ADDA04;
    }
L_08ADDA04:
    ctx.gpr[23] = (0u | 1u);
    goto L_08ADDA08;
L_08ADDA08:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27324)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25748), ctx.gpr[4]);
    goto L_08ADDA18;
L_08ADDA18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDADC;
      }
      goto L_08ADDA20;
    }
L_08ADDA20:
    ctx.gpr[31] = (0x08ADDA28u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADDA28u) goto L_08ADDA28;
    return;
L_08ADDA28:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDADC;
      }
      goto L_08ADDA3C;
    }
L_08ADDA3C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27324)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25744)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(151) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDADC;
      }
      goto L_08ADDA5C;
    }
L_08ADDA5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
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
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADDACC;
      }
      goto L_08ADDAA4;
    }
L_08ADDAA4:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 18 ? 1u : 0u);
        goto L_08ADDAC0;
    }
    goto L_08ADDAAC;
L_08ADDAAC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDAC8;
      }
      goto L_08ADDAB8;
    }
L_08ADDAB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDACC;
      }
      goto L_08ADDAC0;
    }
L_08ADDAC0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDACC;
      }
      goto L_08ADDAC8;
    }
L_08ADDAC8:
    ctx.gpr[22] = (0u | 1u);
    goto L_08ADDACC;
L_08ADDACC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27324)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25744), ctx.gpr[4]);
    goto L_08ADDADC;
L_08ADDADC:
    ctx.gpr[31] = (0x08ADDAE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 346u, 0x08AD9814u>(ctx, &aot_mem) && ctx.pc == 0x08ADDAE4u) goto L_08ADDAE4;
    return;
L_08ADDAE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDAF0;
      }
      goto L_08ADDAEC;
    }
L_08ADDAEC:
    ctx.gpr[22] = (0u | 1u);
    goto L_08ADDAF0;
L_08ADDAF0:
    ctx.gpr[31] = (0x08ADDAF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 320u, 0x08AD972Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDAF8u) goto L_08ADDAF8;
    return;
L_08ADDAF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDB04;
      }
      goto L_08ADDB00;
    }
L_08ADDB00:
    ctx.gpr[23] = (0u | 1u);
    goto L_08ADDB04;
L_08ADDB04:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDB10;
      }
      goto L_08ADDB0C;
    }
L_08ADDB0C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08ADDB10;
L_08ADDB10:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDB1C;
      }
      goto L_08ADDB18;
    }
L_08ADDB18:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    goto L_08ADDB1C;
L_08ADDB1C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDBD8;
      }
      goto L_08ADDB24;
    }
L_08ADDB24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADDBD8;
      }
      goto L_08ADDB34;
    }
L_08ADDB34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
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
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADDBBC;
      }
      goto L_08ADDB7C;
    }
L_08ADDB7C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 18 ? 1u : 0u);
        goto L_08ADDB98;
    }
    goto L_08ADDB84;
L_08ADDB84:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDBA0;
      }
      goto L_08ADDB90;
    }
L_08ADDB90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDBBC;
      }
      goto L_08ADDB98;
    }
L_08ADDB98:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDBBC;
      }
      goto L_08ADDBA0;
    }
L_08ADDBA0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADDBB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADDBB4u) goto L_08ADDBB4;
    return;
L_08ADDBB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDBD8;
      }
      goto L_08ADDBBC;
    }
L_08ADDBBC:
    ctx.gpr[31] = (0x08ADDBC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 665u, 0x08ADAA94u>(ctx, &aot_mem) && ctx.pc == 0x08ADDBC4u) goto L_08ADDBC4;
    return;
L_08ADDBC4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADDBD8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADDBD8u) goto L_08ADDBD8;
    return;
L_08ADDBD8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
      if (branch_taken) {
          goto L_08ADDD70;
      }
      goto L_08ADDBE4;
    }
L_08ADDBE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADDC08;
      }
      goto L_08ADDBF4;
    }
L_08ADDBF4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADDC08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADDC08u) goto L_08ADDC08;
    return;
L_08ADDC08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADDC7C;
      }
      goto L_08ADDC1C;
    }
L_08ADDC1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADDC70;
      }
      goto L_08ADDC2C;
    }
L_08ADDC2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
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
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDD5C;
      }
      goto L_08ADDC70;
    }
L_08ADDC70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADDD5C;
      }
      goto L_08ADDC7C;
    }
L_08ADDC7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[5] = (0u | 15u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
        goto L_08ADDD1C;
    }
    goto L_08ADDC8C;
L_08ADDC8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
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
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
        goto L_08ADDD1C;
    }
    goto L_08ADDCD0;
L_08ADDCD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
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
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADDD5C;
      }
      goto L_08ADDD18;
    }
L_08ADDD18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    goto L_08ADDD1C;
L_08ADDD1C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADDD54;
      }
      goto L_08ADDD4C;
    }
L_08ADDD4C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), 0u);
      if (branch_taken) {
          goto L_08ADDD5C;
      }
      goto L_08ADDD54;
    }
L_08ADDD54:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), ctx.gpr[4]);
    goto L_08ADDD5C;
L_08ADDD5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADDD70;
      }
      goto L_08ADDD68;
    }
L_08ADDD68:
    ctx.gpr[31] = (0x08ADDD70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 665u, 0x08ADAA94u>(ctx, &aot_mem) && ctx.pc == 0x08ADDD70u) goto L_08ADDD70;
    return;
L_08ADDD70:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDF84;
      }
      goto L_08ADDD78;
    }
L_08ADDD78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 7u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
        goto L_08ADDDA0;
    }
    goto L_08ADDD88;
L_08ADDD88:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADDD9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADDD9Cu) goto L_08ADDD9C;
    return;
L_08ADDD9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    goto L_08ADDDA0;
L_08ADDDA0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADDDD8;
      }
      goto L_08ADDDD0;
    }
L_08ADDDD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADDDDC;
      }
      goto L_08ADDDD8;
    }
L_08ADDDD8:
    ctx.gpr[4] = (0u | 1u);
    goto L_08ADDDDC;
L_08ADDDDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08ADDE70;
      }
      goto L_08ADDDEC;
    }
L_08ADDDEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDE0C;
      }
      goto L_08ADDDFC;
    }
L_08ADDDFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADDF70;
      }
      goto L_08ADDE0C;
    }
L_08ADDE0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADDF70;
      }
      goto L_08ADDE1C;
    }
L_08ADDE1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(26))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDF70;
      }
      goto L_08ADDE60;
    }
L_08ADDE60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADDE0C;
      }
      goto L_08ADDE70;
    }
L_08ADDE70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADDE9C;
      }
      goto L_08ADDE7C;
    }
L_08ADDE7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADDE9C;
      }
      goto L_08ADDE8C;
    }
L_08ADDE8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADDF70;
      }
      goto L_08ADDE9C;
    }
L_08ADDE9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ADDEB8;
      }
      goto L_08ADDEA8;
    }
L_08ADDEA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADDF70;
      }
      goto L_08ADDEB8;
    }
L_08ADDEB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADDF70;
      }
      goto L_08ADDEC8;
    }
L_08ADDEC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(26))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDF70;
      }
      goto L_08ADDF0C;
    }
L_08ADDF0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(26))))));
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADDF70;
      }
      goto L_08ADDF54;
    }
L_08ADDF54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDF70;
      }
      goto L_08ADDF60;
    }
L_08ADDF60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADDEB8;
      }
      goto L_08ADDF70;
    }
L_08ADDF70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADDF84;
      }
      goto L_08ADDF7C;
    }
L_08ADDF7C:
    ctx.gpr[31] = (0x08ADDF84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 665u, 0x08ADAA94u>(ctx, &aot_mem) && ctx.pc == 0x08ADDF84u) goto L_08ADDF84;
    return;
L_08ADDF84:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE5C8;
      }
      goto L_08ADDF8C;
    }
L_08ADDF8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(19))))));
    ctx.gpr[5] = (0u | 9u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
        goto L_08ADDFF0;
    }
    goto L_08ADDFD4;
L_08ADDFD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(311)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
        goto L_08ADDFF0;
    }
    goto L_08ADDFE0;
L_08ADDFE0:
    ctx.gpr[31] = (0x08ADDFE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 268u, 0x08AD9464u>(ctx, &aot_mem) && ctx.pc == 0x08ADDFE8u) goto L_08ADDFE8;
    return;
L_08ADDFE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE5C8;
      }
      goto L_08ADDFF0;
    }
L_08ADDFF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
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
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08ADE5C8;
      }
      goto L_08ADE038;
    }
L_08ADE038:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7816)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADE050:
    ctx.gpr[5] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25868), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25860), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(312), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1388), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08ADE084u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 665u, 0x08ADAA94u>(ctx, &aot_mem) && ctx.pc == 0x08ADE084u) goto L_08ADE084;
    return;
L_08ADE084:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1420), 0u);
      if (branch_taken) {
          goto L_08ADE5C8;
      }
      goto L_08ADE08C;
    }
L_08ADE08C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[31] = (0x08ADE09Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 94u, 0x088646F8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE09Cu) goto L_08ADE09C;
    return;
L_08ADE09C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08ADE0BCu);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 266u, 0x089C11D8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE0BCu) goto L_08ADE0BC;
    return;
L_08ADE0BC:
    ctx.gpr[31] = (0x08ADE0C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 877u, 0x08AD37D8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE0C4u) goto L_08ADE0C4;
    return;
L_08ADE0C4:
    ctx.gpr[31] = (0x08ADE0CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 878u, 0x08AD37E0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE0CCu) goto L_08ADE0CC;
    return;
L_08ADE0CC:
    ctx.gpr[31] = (0x08ADE0D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 77u, 0x08A54684u>(ctx, &aot_mem) && ctx.pc == 0x08ADE0D4u) goto L_08ADE0D4;
    return;
L_08ADE0D4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[31] = (0x08ADE0E8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8696));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 444u, 0x08AD9DA4u>(ctx, &aot_mem) && ctx.pc == 0x08ADE0E8u) goto L_08ADE0E8;
    return;
L_08ADE0E8:
    ctx.gpr[31] = (0x08ADE0F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 216u, 0x08A4CE28u>(ctx, &aot_mem) && ctx.pc == 0x08ADE0F0u) goto L_08ADE0F0;
    return;
L_08ADE0F0:
    ctx.gpr[31] = (0x08ADE0F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54EFCu>(ctx, &aot_mem) && ctx.pc == 0x08ADE0F8u) goto L_08ADE0F8;
    return;
L_08ADE0F8:
    ctx.gpr[31] = (0x08ADE100u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 333u, 0x089C16A4u>(ctx, &aot_mem) && ctx.pc == 0x08ADE100u) goto L_08ADE100;
    return;
L_08ADE100:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25792)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25792), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[31] = (0x08ADE11Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 187u, 0x08864D38u>(ctx, &aot_mem) && ctx.pc == 0x08ADE11Cu) goto L_08ADE11C;
    return;
L_08ADE11C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADE12Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1396), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 665u, 0x08ADAA94u>(ctx, &aot_mem) && ctx.pc == 0x08ADE12Cu) goto L_08ADE12C;
    return;
L_08ADE12C:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), 0u);
    ctx.gpr[31] = (0x08ADE140u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 485u, 0x08ADA00Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE140u) goto L_08ADE140;
    return;
L_08ADE140:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADE5C8;
      }
      goto L_08ADE14C;
    }
L_08ADE14C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADE1D8;
      }
      goto L_08ADE15C;
    }
L_08ADE15C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
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
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADE1D0;
      }
      goto L_08ADE1A4;
    }
L_08ADE1A4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25839), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4832));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28728), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28743), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ADE1D8;
      }
      goto L_08ADE1D0;
    }
L_08ADE1D0:
    ctx.gpr[31] = (0x08ADE1D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 121u, 0x088B0A44u>(ctx, &aot_mem) && ctx.pc == 0x08ADE1D8u) goto L_08ADE1D8;
    return;
L_08ADE1D8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE364;
      }
      goto L_08ADE1E0;
    }
L_08ADE1E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[31] = (0x08ADE228u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8688));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 418u, 0x08AED750u>(ctx, &aot_mem) && ctx.pc == 0x08ADE228u) goto L_08ADE228;
    return;
L_08ADE228:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE248;
      }
      goto L_08ADE230;
    }
L_08ADE230:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADE240u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1396), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 665u, 0x08ADAA94u>(ctx, &aot_mem) && ctx.pc == 0x08ADE240u) goto L_08ADE240;
    return;
L_08ADE240:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE348;
      }
      goto L_08ADE248;
    }
L_08ADE248:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADE258u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1396), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 665u, 0x08ADAA94u>(ctx, &aot_mem) && ctx.pc == 0x08ADE258u) goto L_08ADE258;
    return;
L_08ADE258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(19))))));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADE2EC;
      }
      goto L_08ADE2A0;
    }
L_08ADE2A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1396)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADE2C4;
      }
      goto L_08ADE2B0;
    }
L_08ADE2B0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25851), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), 0u);
      if (branch_taken) {
          goto L_08ADE2EC;
      }
      goto L_08ADE2C4;
    }
L_08ADE2C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE2E0;
      }
      goto L_08ADE2D0;
    }
L_08ADE2D0:
    ctx.gpr[31] = (0x08ADE2D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 293u, 0x08AD9620u>(ctx, &aot_mem) && ctx.pc == 0x08ADE2D8u) goto L_08ADE2D8;
    return;
L_08ADE2D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE2E8;
      }
      goto L_08ADE2E0;
    }
L_08ADE2E0:
    ctx.gpr[31] = (0x08ADE2E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 296u, 0x08AD9648u>(ctx, &aot_mem) && ctx.pc == 0x08ADE2E8u) goto L_08ADE2E8;
    return;
L_08ADE2E8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), 0u);
    goto L_08ADE2EC;
L_08ADE2EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE348;
      }
      goto L_08ADE2F8;
    }
L_08ADE2F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADE320;
      }
      goto L_08ADE308;
    }
L_08ADE308:
    ctx.gpr[31] = (0x08ADE310u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 265u, 0x08AD9424u>(ctx, &aot_mem) && ctx.pc == 0x08ADE310u) goto L_08ADE310;
    return;
L_08ADE310:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28743), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ADE348;
      }
      goto L_08ADE320;
    }
L_08ADE320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADE348;
      }
      goto L_08ADE330;
    }
L_08ADE330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE348;
      }
      goto L_08ADE33C;
    }
L_08ADE33C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), 0u);
    ctx.gpr[31] = (0x08ADE348u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 293u, 0x08AD9620u>(ctx, &aot_mem) && ctx.pc == 0x08ADE348u) goto L_08ADE348;
    return;
L_08ADE348:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27324)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1408), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), 0u);
    ctx.gpr[31] = (0x08ADE364u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 485u, 0x08ADA00Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE364u) goto L_08ADE364;
    return;
L_08ADE364:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE5C8;
      }
      goto L_08ADE36C;
    }
L_08ADE36C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADE37Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1396), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 665u, 0x08ADAA94u>(ctx, &aot_mem) && ctx.pc == 0x08ADE37Cu) goto L_08ADE37C;
    return;
L_08ADE37C:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25791))))));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08ADE3A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 145u, 0x08864A64u>(ctx, &aot_mem) && ctx.pc == 0x08ADE3A8u) goto L_08ADE3A8;
    return;
L_08ADE3A8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27324)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADE5C8;
      }
      goto L_08ADE3BC;
    }
L_08ADE3BC:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25764), 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-29216), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08ADE3D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 622u, 0x08ADA8A4u>(ctx, &aot_mem) && ctx.pc == 0x08ADE3D8u) goto L_08ADE3D8;
    return;
L_08ADE3D8:
    ctx.gpr[31] = (0x08ADE3E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 664u, 0x08ADAA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE3E0u) goto L_08ADE3E0;
    return;
L_08ADE3E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE5C8;
      }
      goto L_08ADE3E8;
    }
L_08ADE3E8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25764), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-29216), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08ADE408u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 622u, 0x08ADA8A4u>(ctx, &aot_mem) && ctx.pc == 0x08ADE408u) goto L_08ADE408;
    return;
L_08ADE408:
    ctx.gpr[31] = (0x08ADE410u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 664u, 0x08ADAA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE410u) goto L_08ADE410;
    return;
L_08ADE410:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE5C8;
      }
      goto L_08ADE418;
    }
L_08ADE418:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25764), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-29216), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08ADE438u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 622u, 0x08ADA8A4u>(ctx, &aot_mem) && ctx.pc == 0x08ADE438u) goto L_08ADE438;
    return;
L_08ADE438:
    ctx.gpr[31] = (0x08ADE440u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 664u, 0x08ADAA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE440u) goto L_08ADE440;
    return;
L_08ADE440:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE5C8;
      }
      goto L_08ADE448;
    }
L_08ADE448:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25764), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-29216), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08ADE468u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 622u, 0x08ADA8A4u>(ctx, &aot_mem) && ctx.pc == 0x08ADE468u) goto L_08ADE468;
    return;
L_08ADE468:
    ctx.gpr[31] = (0x08ADE470u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 664u, 0x08ADAA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE470u) goto L_08ADE470;
    return;
L_08ADE470:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE5C8;
      }
      goto L_08ADE478;
    }
L_08ADE478:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25764), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-29216), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08ADE498u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 622u, 0x08ADA8A4u>(ctx, &aot_mem) && ctx.pc == 0x08ADE498u) goto L_08ADE498;
    return;
L_08ADE498:
    ctx.gpr[31] = (0x08ADE4A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 664u, 0x08ADAA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE4A0u) goto L_08ADE4A0;
    return;
L_08ADE4A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE5C8;
      }
      goto L_08ADE4A8;
    }
L_08ADE4A8:
    ctx.gpr[31] = (0x08ADE4B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 265u, 0x08AD9424u>(ctx, &aot_mem) && ctx.pc == 0x08ADE4B0u) goto L_08ADE4B0;
    return;
L_08ADE4B0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28743), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE5C8;
      }
      goto L_08ADE4C4;
    }
L_08ADE4C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADE824;
      }
      goto L_08ADE4CC;
    }
L_08ADE4CC:
    ctx.gpr[31] = (0x08ADE4D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 586u, 0x08ADA65Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE4D4u) goto L_08ADE4D4;
    return;
L_08ADE4D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE5C8;
      }
      goto L_08ADE4DC;
    }
L_08ADE4DC:
    ctx.gpr[4] = (0u | 288u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25816), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25846), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25764)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE510;
      }
      goto L_08ADE504;
    }
L_08ADE504:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25812), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADE51C;
      }
      goto L_08ADE510;
    }
L_08ADE510:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25812), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08ADE51C;
L_08ADE51C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25844), 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(21984), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-25796), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 96u);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-25800), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25791), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25792), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[31] = (0x08ADE564u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE564u) goto L_08ADE564;
    return;
L_08ADE564:
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(130), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[31] = (0x08ADE570u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE570u) goto L_08ADE570;
    return;
L_08ADE570:
    ctx.gpr[31] = (0x08ADE578u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 609u, 0x08AD6DFCu>(ctx, &aot_mem) && ctx.pc == 0x08ADE578u) goto L_08ADE578;
    return;
L_08ADE578:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25331), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1396), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[5]);
    ctx.gpr[31] = (0x08ADE598u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 485u, 0x08ADA00Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE598u) goto L_08ADE598;
    return;
L_08ADE598:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADE5B4;
      }
      goto L_08ADE5A8;
    }
L_08ADE5A8:
    ctx.gpr[31] = (0x08ADE5B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x08ADE5B0u) goto L_08ADE5B0;
    return;
L_08ADE5B0:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08ADE5B4;
L_08ADE5B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    ctx.gpr[31] = (0x08ADE5C0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 38u, 0x0883822Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE5C0u) goto L_08ADE5C0;
    return;
L_08ADE5C0:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), ctx.gpr[4]);
    goto L_08ADE5C8;
L_08ADE5C8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE5D8;
      }
      goto L_08ADE5D0;
    }
L_08ADE5D0:
    ctx.gpr[31] = (0x08ADE5D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 485u, 0x08ADA00Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE5D8u) goto L_08ADE5D8;
    return;
L_08ADE5D8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE820;
      }
      goto L_08ADE5E0;
    }
L_08ADE5E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
        goto L_08ADE61C;
    }
    goto L_08ADE5EC;
L_08ADE5EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADE604;
      }
      goto L_08ADE5FC;
    }
L_08ADE5FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), 0u);
      if (branch_taken) {
          goto L_08ADE60C;
      }
      goto L_08ADE604;
    }
L_08ADE604:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), ctx.gpr[4]);
    goto L_08ADE60C;
L_08ADE60C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08ADE618u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 665u, 0x08ADAA94u>(ctx, &aot_mem) && ctx.pc == 0x08ADE618u) goto L_08ADE618;
    return;
L_08ADE618:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    goto L_08ADE61C;
L_08ADE61C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
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
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 17u);
      if (branch_taken) {
          goto L_08ADE788;
      }
      goto L_08ADE660;
    }
L_08ADE660:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_08ADE678;
      }
      goto L_08ADE668;
    }
L_08ADE668:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADE730;
      }
      goto L_08ADE670;
    }
L_08ADE670:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE7C4;
      }
      goto L_08ADE678;
    }
L_08ADE678:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADE694;
      }
      goto L_08ADE688;
    }
L_08ADE688:
    ctx.gpr[31] = (0x08ADE690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x08ADE690u) goto L_08ADE690;
    return;
L_08ADE690:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08ADE694;
L_08ADE694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    ctx.gpr[31] = (0x08ADE6A0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 38u, 0x0883822Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE6A0u) goto L_08ADE6A0;
    return;
L_08ADE6A0:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-25791))))));
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-25791), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADE6C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADE6C4u) goto L_08ADE6C4;
    return;
L_08ADE6C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-25791))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ADE6DC;
      }
      goto L_08ADE6D0;
    }
L_08ADE6D0:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25791), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08ADE6DC;
L_08ADE6DC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25791))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE6F8;
      }
      goto L_08ADE6F0;
    }
L_08ADE6F0:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25791), static_cast<std::uint8_t>(0u));
    goto L_08ADE6F8;
L_08ADE6F8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-25791))))));
    ctx.gpr[31] = (0x08ADE710u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 191u, 0x08864D7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE710u) goto L_08ADE710;
    return;
L_08ADE710:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-25791))))));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08ADE728u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 145u, 0x08864A64u>(ctx, &aot_mem) && ctx.pc == 0x08ADE728u) goto L_08ADE728;
    return;
L_08ADE728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE7C4;
      }
      goto L_08ADE730;
    }
L_08ADE730:
    ctx.gpr[31] = (0x08ADE738u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE738u) goto L_08ADE738;
    return;
L_08ADE738:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) >= 0;
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(130)));
      if (branch_taken) {
          goto L_08ADE760;
      }
      goto L_08ADE740;
    }
L_08ADE740:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ADE750;
      }
      goto L_08ADE74C;
    }
L_08ADE74C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_08ADE750;
L_08ADE750:
    ctx.gpr[31] = (0x08ADE758u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE758u) goto L_08ADE758;
    return;
L_08ADE758:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(130), static_cast<std::uint16_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08ADE780;
      }
      goto L_08ADE760;
    }
L_08ADE760:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE774;
      }
      goto L_08ADE770;
    }
L_08ADE770:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4));
    goto L_08ADE774;
L_08ADE774:
    ctx.gpr[31] = (0x08ADE77Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE77Cu) goto L_08ADE77C;
    return;
L_08ADE77C:
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(130), static_cast<std::uint16_t>(ctx.gpr[17]));
    goto L_08ADE780;
L_08ADE780:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE7C4;
      }
      goto L_08ADE788;
    }
L_08ADE788:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25844)));
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25844), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ADE7A8;
      }
      goto L_08ADE79C;
    }
L_08ADE79C:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25844), ctx.gpr[4]);
    goto L_08ADE7A8;
L_08ADE7A8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25844)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE7C4;
      }
      goto L_08ADE7BC;
    }
L_08ADE7BC:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25844), 0u);
    goto L_08ADE7C4;
L_08ADE7C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADE7D0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 538u, 0x08ADA358u>(ctx, &aot_mem) && ctx.pc == 0x08ADE7D0u) goto L_08ADE7D0;
    return;
L_08ADE7D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
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
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADE820;
      }
      goto L_08ADE818;
    }
L_08ADE818:
    ctx.gpr[31] = (0x08ADE820u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 494u, 0x08ADA094u>(ctx, &aot_mem) && ctx.pc == 0x08ADE820u) goto L_08ADE820;
    return;
L_08ADE820:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ADE824;
L_08ADE824:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADE850:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-25837)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ADE898;
      }
      goto L_08ADE88C;
    }
L_08ADE88C:
    ctx.gpr[31] = (0x08ADE894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 121u, 0x088B0A44u>(ctx, &aot_mem) && ctx.pc == 0x08ADE894u) goto L_08ADE894;
    return;
L_08ADE894:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-25837), static_cast<std::uint8_t>(0u));
    goto L_08ADE898;
L_08ADE898:
    ctx.gpr[31] = (0x08ADE8A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 393u, 0x089C198Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE8A0u) goto L_08ADE8A0;
    return;
L_08ADE8A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADE8B4;
      }
      goto L_08ADE8A8;
    }
L_08ADE8A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25839)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE8E0;
      }
      goto L_08ADE8B4;
    }
L_08ADE8B4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE8D8;
      }
      goto L_08ADE8C4;
    }
L_08ADE8C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADE8E8;
      }
      goto L_08ADE8D0;
    }
L_08ADE8D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE8F4;
      }
      goto L_08ADE8D8;
    }
L_08ADE8D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEE58;
      }
      goto L_08ADE8E0;
    }
L_08ADE8E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEE58;
      }
      goto L_08ADE8E8;
    }
L_08ADE8E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-25838)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE8D8;
      }
      goto L_08ADE8F4;
    }
L_08ADE8F4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(305)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1131)));
    ctx.gpr[19] = (0u < ctx.gpr[19] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1132)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADE938;
      }
      goto L_08ADE918;
    }
L_08ADE918:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE938;
      }
      goto L_08ADE920;
    }
L_08ADE920:
    ctx.gpr[31] = (0x08ADE928u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 285u, 0x08AD95ACu>(ctx, &aot_mem) && ctx.pc == 0x08ADE928u) goto L_08ADE928;
    return;
L_08ADE928:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1132), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1131), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1132)));
    goto L_08ADE938;
L_08ADE938:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE950;
      }
      goto L_08ADE940;
    }
L_08ADE940:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1131)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE950;
      }
      goto L_08ADE94C;
    }
L_08ADE94C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1132), static_cast<std::uint8_t>(0u));
    goto L_08ADE950;
L_08ADE950:
    ctx.gpr[31] = (0x08ADE958u);
    ctx.gpr[20] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE958u) goto L_08ADE958;
    return;
L_08ADE958:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE98C;
      }
      goto L_08ADE960;
    }
L_08ADE960:
    ctx.gpr[31] = (0x08ADE968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE968u) goto L_08ADE968;
    return;
L_08ADE968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE98C;
      }
      goto L_08ADE974;
    }
L_08ADE974:
    ctx.gpr[31] = (0x08ADE97Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE97Cu) goto L_08ADE97C;
    return;
L_08ADE97C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[20] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[20] = (ctx.gpr[20] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08ADE98C;
L_08ADE98C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE9A8;
      }
      goto L_08ADE9A0;
    }
L_08ADE9A0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEE38;
      }
      goto L_08ADE9A8;
    }
L_08ADE9A8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25850)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEE38;
      }
      goto L_08ADE9B8;
    }
L_08ADE9B8:
    ctx.gpr[31] = (0x08ADE9C0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE9C0u) goto L_08ADE9C0;
    return;
L_08ADE9C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(34))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADE9E0;
      }
      goto L_08ADE9D0;
    }
L_08ADE9D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(84))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08ADE9E4;
      }
      goto L_08ADE9DC;
    }
L_08ADE9DC:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ADE9E0;
L_08ADE9E0:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08ADE9E4;
L_08ADE9E4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-25839)));
        goto L_08ADEA1C;
    }
    goto L_08ADE9EC;
L_08ADE9EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_08ADEA18;
      }
      goto L_08ADE9FC;
    }
L_08ADE9FC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 10u);
      if (branch_taken) {
          goto L_08ADEA18;
      }
      goto L_08ADEA04;
    }
L_08ADEA04:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADEA18;
      }
      goto L_08ADEA0C;
    }
L_08ADEA0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25852)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEA30;
      }
      goto L_08ADEA18;
    }
L_08ADEA18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-25839)));
    goto L_08ADEA1C;
L_08ADEA1C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEA30;
      }
      goto L_08ADEA24;
    }
L_08ADEA24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-25838)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEE38;
      }
      goto L_08ADEA30;
    }
L_08ADEA30:
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[31] = (0x08ADEA48u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADEA48u) goto L_08ADEA48;
    return;
L_08ADEA48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(305)));
    ctx.gpr[22] = (2233u << 16u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-26464));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (0u | 14u);
      if (branch_taken) {
          goto L_08ADEA70;
      }
      goto L_08ADEA64;
    }
L_08ADEA64:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08ADEA70u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 151u, 0x08864AD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEA70u) goto L_08ADEA70;
    return;
L_08ADEA70:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    ctx.gpr[31] = (0x08ADEA7Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 94u, 0x088646F8u>(ctx, &aot_mem) && ctx.pc == 0x08ADEA7Cu) goto L_08ADEA7C;
    return;
L_08ADEA7C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25796)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08ADEA90u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 110u, 0x088647F8u>(ctx, &aot_mem) && ctx.pc == 0x08ADEA90u) goto L_08ADEA90;
    return;
L_08ADEA90:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25800)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08ADEAA4u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 106u, 0x088647C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEAA4u) goto L_08ADEAA4;
    return;
L_08ADEAA4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8680));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08ADEAB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 838u, 0x08AA3F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADEAB8u) goto L_08ADEAB8;
    return;
L_08ADEAB8:
    ctx.gpr[5] = (ctx.gpr[2] >> 10u);
    ctx.gpr[31] = (0x08ADEAC4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 559u, 0x08AD69ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADEAC4u) goto L_08ADEAC4;
    return;
L_08ADEAC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08ADEAE4;
      }
      goto L_08ADEAD0;
    }
L_08ADEAD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(297)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08ADEAE4;
      }
      goto L_08ADEADC;
    }
L_08ADEADC:
    ctx.gpr[31] = (0x08ADEAE4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 131u, 0x089D5468u>(ctx, &aot_mem) && ctx.pc == 0x08ADEAE4u) goto L_08ADEAE4;
    return;
L_08ADEAE4:
    ctx.gpr[31] = (0x08ADEAECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 393u, 0x089C198Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADEAECu) goto L_08ADEAEC;
    return;
L_08ADEAEC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[22] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADEB28;
      }
      goto L_08ADEAF4;
    }
L_08ADEAF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28888)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEB28;
      }
      goto L_08ADEB00;
    }
L_08ADEB00:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEB24;
      }
      goto L_08ADEB08;
    }
L_08ADEB08:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ADEB24u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADEB24u) goto L_08ADEB24;
    return;
L_08ADEB24:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-28888), 0u);
    goto L_08ADEB28;
L_08ADEB28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(305)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(305), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-25839)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08ADEB44;
      }
      goto L_08ADEB40;
    }
L_08ADEB40:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(305), static_cast<std::uint8_t>(0u));
    goto L_08ADEB44;
L_08ADEB44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-25838)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08ADEB5C;
      }
      goto L_08ADEB50;
    }
L_08ADEB50:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), 0u);
    ctx.gpr[31] = (0x08ADEB5Cu);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(305), static_cast<std::uint8_t>(ctx.gpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 762u, 0x0891B770u>(ctx, &aot_mem) && ctx.pc == 0x08ADEB5Cu) goto L_08ADEB5C;
    return;
L_08ADEB5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(305)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEC08;
      }
      goto L_08ADEB68;
    }
L_08ADEB68:
    ctx.gpr[31] = (0x08ADEB70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 649u, 0x08AD71F8u>(ctx, &aot_mem) && ctx.pc == 0x08ADEB70u) goto L_08ADEB70;
    return;
L_08ADEB70:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25860), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25864), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25856), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x08ADEBA4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25868), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 664u, 0x08ADAA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADEBA4u) goto L_08ADEBA4;
    return;
L_08ADEBA4:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29208), 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08ADEBE0;
      }
      goto L_08ADEBB8;
    }
L_08ADEBB8:
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20928)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEBD4;
      }
      goto L_08ADEBC8;
    }
L_08ADEBC8:
    ctx.gpr[31] = (0x08ADEBD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 533u, 0x08AFA59Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADEBD0u) goto L_08ADEBD0;
    return;
L_08ADEBD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20928)));
    goto L_08ADEBD4;
L_08ADEBD4:
    ctx.gpr[31] = (0x08ADEBDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 479u, 0x0882BC80u>(ctx, &aot_mem) && ctx.pc == 0x08ADEBDCu) goto L_08ADEBDC;
    return;
L_08ADEBDC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    goto L_08ADEBE0;
L_08ADEBE0:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADEBF4;
      }
      goto L_08ADEBEC;
    }
L_08ADEBEC:
    ctx.gpr[31] = (0x08ADEBF4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 147u, 0x08864A90u>(ctx, &aot_mem) && ctx.pc == 0x08ADEBF4u) goto L_08ADEBF4;
    return;
L_08ADEBF4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08ADEC00u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 151u, 0x08864AD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEC00u) goto L_08ADEC00;
    return;
L_08ADEC00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEE38;
      }
      goto L_08ADEC08;
    }
L_08ADEC08:
    ctx.gpr[31] = (0x08ADEC10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 762u, 0x0891B770u>(ctx, &aot_mem) && ctx.pc == 0x08ADEC10u) goto L_08ADEC10;
    return;
L_08ADEC10:
    ctx.gpr[31] = (0x08ADEC18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 552u, 0x08AB3028u>(ctx, &aot_mem) && ctx.pc == 0x08ADEC18u) goto L_08ADEC18;
    return;
L_08ADEC18:
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(-5168));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08ADEC3Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 414u, 0x08A7F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08ADEC3Cu) goto L_08ADEC3C;
    return;
L_08ADEC3C:
    ctx.gpr[31] = (0x08ADEC44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 571u, 0x08AB332Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADEC44u) goto L_08ADEC44;
    return;
L_08ADEC44:
    ctx.gpr[31] = (0x08ADEC4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 552u, 0x08AB3028u>(ctx, &aot_mem) && ctx.pc == 0x08ADEC4Cu) goto L_08ADEC4C;
    return;
L_08ADEC4C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08ADEC68u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 414u, 0x08A7F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08ADEC68u) goto L_08ADEC68;
    return;
L_08ADEC68:
    ctx.gpr[31] = (0x08ADEC70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 571u, 0x08AB332Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADEC70u) goto L_08ADEC70;
    return;
L_08ADEC70:
    ctx.gpr[31] = (0x08ADEC78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 539u, 0x08AB2F98u>(ctx, &aot_mem) && ctx.pc == 0x08ADEC78u) goto L_08ADEC78;
    return;
L_08ADEC78:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 480u);
    ctx.gpr[7] = (0u | 272u);
    ctx.gpr[31] = (0x08ADEC90u);
    ctx.gpr[8] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 2u, 0x08AB4014u>(ctx, &aot_mem) && ctx.pc == 0x08ADEC90u) goto L_08ADEC90;
    return;
L_08ADEC90:
    ctx.gpr[31] = (0x08ADEC98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 552u, 0x08AB3028u>(ctx, &aot_mem) && ctx.pc == 0x08ADEC98u) goto L_08ADEC98;
    return;
L_08ADEC98:
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16896u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (49928u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (17152u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (17664u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17664u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[7] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (17920u << 16u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (19456u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28928));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (19712u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30592));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[9] = (54272u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[9] = (54528u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] << 10u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[7] = (5376u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (ctx.gpr[6] << 10u);
    ctx.gpr[7] = (5632u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08ADEDF0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 571u, 0x08AB332Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADEDF0u) goto L_08ADEDF0;
    return;
L_08ADEDF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08ADEE38;
      }
      goto L_08ADEDFC;
    }
L_08ADEDFC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEE38;
      }
      goto L_08ADEE08;
    }
L_08ADEE08:
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20928)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEE24;
      }
      goto L_08ADEE18;
    }
L_08ADEE18:
    ctx.gpr[31] = (0x08ADEE20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 533u, 0x08AFA59Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADEE20u) goto L_08ADEE20;
    return;
L_08ADEE20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20928)));
    goto L_08ADEE24;
L_08ADEE24:
    ctx.gpr[31] = (0x08ADEE2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 424u, 0x0882B958u>(ctx, &aot_mem) && ctx.pc == 0x08ADEE2Cu) goto L_08ADEE2C;
    return;
L_08ADEE2C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEE38;
      }
      goto L_08ADEE34;
    }
L_08ADEE34:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(0u));
    goto L_08ADEE38;
L_08ADEE38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(305)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADEE50;
      }
      goto L_08ADEE48;
    }
L_08ADEE48:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(306), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08ADEE50;
L_08ADEE50:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-25839), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-25838), static_cast<std::uint8_t>(0u));
    goto L_08ADEE58;
L_08ADEE58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADEE88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ADEEC4;
      }
      goto L_08ADEEA4;
    }
L_08ADEEA4:
    ctx.gpr[4] = (17279u << 16u);
    ctx.gpr[31] = (0x08ADEEB0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 231u, 0x08A551BCu>(ctx, &aot_mem) && ctx.pc == 0x08ADEEB0u) goto L_08ADEEB0;
    return;
L_08ADEEB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_08ADEECC;
      }
      goto L_08ADEEBC;
    }
L_08ADEEBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEF2C;
      }
      goto L_08ADEEC4;
    }
L_08ADEEC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF1C4;
      }
      goto L_08ADEECC;
    }
L_08ADEECC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08ADEEF8u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08ADEEF8u) goto L_08ADEEF8;
    return;
L_08ADEEF8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08ADEF14u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08ADEF14u) goto L_08ADEF14;
    return;
L_08ADEF14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ADEF24u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADEF24u) goto L_08ADEF24;
    return;
L_08ADEF24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF1BC;
      }
      goto L_08ADEF2C;
    }
L_08ADEF2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 255 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADF108;
      }
      goto L_08ADEF3C;
    }
L_08ADEF3C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_08ADEFA4;
      }
      goto L_08ADEF44;
    }
L_08ADEF44:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08ADEF70u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08ADEF70u) goto L_08ADEF70;
    return;
L_08ADEF70:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08ADEF8Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08ADEF8Cu) goto L_08ADEF8C;
    return;
L_08ADEF8C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ADEF9Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADEF9Cu) goto L_08ADEF9C;
    return;
L_08ADEF9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEFDC;
      }
      goto L_08ADEFA4;
    }
L_08ADEFA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEFDC;
      }
      goto L_08ADEFB4;
    }
L_08ADEFB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1396)));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(310), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08ADEFD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADF83C;
L_08ADEFD8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), ctx.gpr[17]);
    goto L_08ADEFDC;
L_08ADEFDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_08ADF168;
      }
      goto L_08ADEFEC;
    }
L_08ADEFEC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADF168;
      }
      goto L_08ADEFF4;
    }
L_08ADEFF4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25764)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADF088;
      }
      goto L_08ADF008;
    }
L_08ADF008:
    if (const std::int32_t host_screen = lcs::lcs_menu_tab_screen(ctx.gpr[4]); host_screen >= 0) {  // [lcs-menu-pages] LANGUAGE, GRAPHICS
        aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), static_cast<std::uint32_t>(host_screen));
        goto L_08ADF168;
    }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF168;
      }
      goto L_08ADF018;
    }
L_08ADF018:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7648)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADF030:
    ctx.gpr[4] = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADF168;
      }
      goto L_08ADF03C;
    }
L_08ADF03C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADF168;
      }
      goto L_08ADF048;
    }
L_08ADF048:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADF168;
      }
      goto L_08ADF054;
    }
L_08ADF054:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), 0u);
      if (branch_taken) {
          goto L_08ADF168;
      }
      goto L_08ADF05C;
    }
L_08ADF05C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADF168;
      }
      goto L_08ADF068;
    }
L_08ADF068:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ADF168;
      }
      goto L_08ADF070;
    }
L_08ADF070:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADF168;
      }
      goto L_08ADF07C;
    }
L_08ADF07C:
    ctx.gpr[4] = (0u | 14u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADF168;
      }
      goto L_08ADF088;
    }
L_08ADF088:
    if (const std::int32_t host_screen = lcs::lcs_menu_tab_screen(ctx.gpr[4]); host_screen >= 0) {  // [lcs-menu-pages] LANGUAGE, GRAPHICS
        aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), static_cast<std::uint32_t>(host_screen));
        goto L_08ADF168;
    }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF168;
      }
      goto L_08ADF098;
    }
L_08ADF098:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7616)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADF0B0:
    ctx.gpr[4] = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADF168;
      }
      goto L_08ADF0BC;
    }
L_08ADF0BC:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADF168;
      }
      goto L_08ADF0C8;
    }
L_08ADF0C8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADF168;
      }
      goto L_08ADF0D4;
    }
L_08ADF0D4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), 0u);
      if (branch_taken) {
          goto L_08ADF168;
      }
      goto L_08ADF0DC;
    }
L_08ADF0DC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ADF168;
      }
      goto L_08ADF0E4;
    }
L_08ADF0E4:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADF168;
      }
      goto L_08ADF0F0;
    }
L_08ADF0F0:
    ctx.gpr[4] = (0u | 14u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADF168;
      }
      goto L_08ADF0FC;
    }
L_08ADF0FC:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADF168;
      }
      goto L_08ADF108;
    }
L_08ADF108:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_08ADF168;
      }
      goto L_08ADF110;
    }
L_08ADF110:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08ADF13Cu);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08ADF13Cu) goto L_08ADF13C;
    return;
L_08ADF13C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08ADF158u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08ADF158u) goto L_08ADF158;
    return;
L_08ADF158:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ADF168u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF168u) goto L_08ADF168;
    return;
L_08ADF168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF1AC;
      }
      goto L_08ADF174;
    }
L_08ADF174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADF1AC;
      }
      goto L_08ADF1A8;
    }
L_08ADF1A8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), ctx.gpr[4]);
    goto L_08ADF1AC;
L_08ADF1AC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(310), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08ADF1BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADF83C;
L_08ADF1BC:
    ctx.gpr[31] = (0x08ADF1C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 562u, 0x08AD6A40u>(ctx, &aot_mem) && ctx.pc == 0x08ADF1C4u) goto L_08ADF1C4;
    return;
L_08ADF1C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADF1D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 477u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1364), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 233u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1368), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1372), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1424)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
      if (branch_taken) {
          goto L_08ADF7FC;
      }
      goto L_08ADF214;
    }
L_08ADF214:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(15) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF7BC;
      }
      goto L_08ADF224;
    }
L_08ADF224:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7584)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADF23C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1372), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF250u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 102u, 0x08AD86E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF250u) goto L_08ADF250;
    return;
L_08ADF250:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1372), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF260u);
    ctx.gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 102u, 0x08AD86E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF260u) goto L_08ADF260;
    return;
L_08ADF260:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF26Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 102u, 0x08AD86E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF26Cu) goto L_08ADF26C;
    return;
L_08ADF26C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF278u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 102u, 0x08AD86E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF278u) goto L_08ADF278;
    return;
L_08ADF278:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF284u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 102u, 0x08AD86E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF284u) goto L_08ADF284;
    return;
L_08ADF284:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF820;
      }
      goto L_08ADF28C;
    }
L_08ADF28C:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[19] = (0u | 14u);
      if (branch_taken) {
          goto L_08ADF2A8;
      }
      goto L_08ADF29C;
    }
L_08ADF29C:
    ctx.gpr[31] = (0x08ADF2A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF2A4u) goto L_08ADF2A4;
    return;
L_08ADF2A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    goto L_08ADF2A8;
L_08ADF2A8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADF2D4;
      }
      goto L_08ADF2B4;
    }
L_08ADF2B4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08ADF2D8;
    }
    goto L_08ADF2C0;
L_08ADF2C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (2209u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-26392));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ADF2DC;
      }
      goto L_08ADF2D4;
    }
L_08ADF2D4:
    ctx.gpr[4] = (0u | 1u);
    goto L_08ADF2D8;
L_08ADF2D8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ADF2DC;
L_08ADF2DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF388;
      }
      goto L_08ADF2E4;
    }
L_08ADF2E4:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
        goto L_08ADF2FC;
    }
    goto L_08ADF2EC;
L_08ADF2EC:
    ctx.gpr[31] = (0x08ADF2F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF2F4u) goto L_08ADF2F4;
    return;
L_08ADF2F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    goto L_08ADF2FC;
L_08ADF2FC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF388;
      }
      goto L_08ADF304;
    }
L_08ADF304:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3164)));
        goto L_08ADF31C;
    }
    goto L_08ADF30C;
L_08ADF30C:
    ctx.gpr[31] = (0x08ADF314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF314u) goto L_08ADF314;
    return;
L_08ADF314:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3164)));
    goto L_08ADF31C;
L_08ADF31C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADF378;
      }
      goto L_08ADF324;
    }
L_08ADF324:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF350;
      }
      goto L_08ADF330;
    }
L_08ADF330:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF350;
      }
      goto L_08ADF33C;
    }
L_08ADF33C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (2209u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-25060));
    if (ctx.gpr[8] == ctx.gpr[7]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08ADF37C;
    }
    goto L_08ADF350;
L_08ADF350:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08ADF380;
    }
    goto L_08ADF358;
L_08ADF358:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08ADF380;
    }
    goto L_08ADF364;
L_08ADF364:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (2209u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-25068));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ADF380;
      }
      goto L_08ADF378;
    }
L_08ADF378:
    ctx.gpr[4] = (0u | 1u);
    goto L_08ADF37C;
L_08ADF37C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ADF380;
L_08ADF380:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF3A4;
      }
      goto L_08ADF388;
    }
L_08ADF388:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1372), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF39Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 102u, 0x08AD86E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF39Cu) goto L_08ADF39C;
    return;
L_08ADF39C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1372), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    goto L_08ADF3A4;
L_08ADF3A4:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
        goto L_08ADF3BC;
    }
    goto L_08ADF3AC;
L_08ADF3AC:
    ctx.gpr[31] = (0x08ADF3B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF3B4u) goto L_08ADF3B4;
    return;
L_08ADF3B4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
    goto L_08ADF3BC;
L_08ADF3BC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADF3E4;
      }
      goto L_08ADF3C4;
    }
L_08ADF3C4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08ADF3E8;
    }
    goto L_08ADF3D0;
L_08ADF3D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (2209u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-26392));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ADF3EC;
      }
      goto L_08ADF3E4;
    }
L_08ADF3E4:
    ctx.gpr[4] = (0u | 1u);
    goto L_08ADF3E8;
L_08ADF3E8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ADF3EC;
L_08ADF3EC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF498;
      }
      goto L_08ADF3F4;
    }
L_08ADF3F4:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
        goto L_08ADF40C;
    }
    goto L_08ADF3FC;
L_08ADF3FC:
    ctx.gpr[31] = (0x08ADF404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF404u) goto L_08ADF404;
    return;
L_08ADF404:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    goto L_08ADF40C;
L_08ADF40C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF498;
      }
      goto L_08ADF414;
    }
L_08ADF414:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3164)));
        goto L_08ADF42C;
    }
    goto L_08ADF41C;
L_08ADF41C:
    ctx.gpr[31] = (0x08ADF424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF424u) goto L_08ADF424;
    return;
L_08ADF424:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3164)));
    goto L_08ADF42C;
L_08ADF42C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADF488;
      }
      goto L_08ADF434;
    }
L_08ADF434:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF460;
      }
      goto L_08ADF440;
    }
L_08ADF440:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF460;
      }
      goto L_08ADF44C;
    }
L_08ADF44C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (2209u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-25060));
    if (ctx.gpr[8] == ctx.gpr[7]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08ADF48C;
    }
    goto L_08ADF460;
L_08ADF460:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08ADF490;
    }
    goto L_08ADF468;
L_08ADF468:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08ADF490;
    }
    goto L_08ADF474;
L_08ADF474:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (2209u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-25068));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ADF490;
      }
      goto L_08ADF488;
    }
L_08ADF488:
    ctx.gpr[4] = (0u | 1u);
    goto L_08ADF48C;
L_08ADF48C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ADF490;
L_08ADF490:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF5E8;
      }
      goto L_08ADF498;
    }
L_08ADF498:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
        goto L_08ADF4B0;
    }
    goto L_08ADF4A0;
L_08ADF4A0:
    ctx.gpr[31] = (0x08ADF4A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF4A8u) goto L_08ADF4A8;
    return;
L_08ADF4A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
    goto L_08ADF4B0;
L_08ADF4B0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADF4D8;
      }
      goto L_08ADF4B8;
    }
L_08ADF4B8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08ADF4DC;
    }
    goto L_08ADF4C4;
L_08ADF4C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (2209u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-26392));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ADF4E0;
      }
      goto L_08ADF4D8;
    }
L_08ADF4D8:
    ctx.gpr[4] = (0u | 1u);
    goto L_08ADF4DC;
L_08ADF4DC:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ADF4E0;
L_08ADF4E0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF58C;
      }
      goto L_08ADF4E8;
    }
L_08ADF4E8:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
        goto L_08ADF500;
    }
    goto L_08ADF4F0;
L_08ADF4F0:
    ctx.gpr[31] = (0x08ADF4F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF4F8u) goto L_08ADF4F8;
    return;
L_08ADF4F8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    goto L_08ADF500;
L_08ADF500:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF58C;
      }
      goto L_08ADF508;
    }
L_08ADF508:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3164)));
        goto L_08ADF520;
    }
    goto L_08ADF510;
L_08ADF510:
    ctx.gpr[31] = (0x08ADF518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF518u) goto L_08ADF518;
    return;
L_08ADF518:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3164)));
    goto L_08ADF520;
L_08ADF520:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADF57C;
      }
      goto L_08ADF528;
    }
L_08ADF528:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF554;
      }
      goto L_08ADF534;
    }
L_08ADF534:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF554;
      }
      goto L_08ADF540;
    }
L_08ADF540:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (2209u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-25060));
    if (ctx.gpr[8] == ctx.gpr[7]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08ADF580;
    }
    goto L_08ADF554;
L_08ADF554:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08ADF584;
    }
    goto L_08ADF55C;
L_08ADF55C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08ADF584;
    }
    goto L_08ADF568;
L_08ADF568:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (2209u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-25068));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ADF584;
      }
      goto L_08ADF57C;
    }
L_08ADF57C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08ADF580;
L_08ADF580:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ADF584;
L_08ADF584:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF5E8;
      }
      goto L_08ADF58C;
    }
L_08ADF58C:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
        goto L_08ADF5A4;
    }
    goto L_08ADF594;
L_08ADF594:
    ctx.gpr[31] = (0x08ADF59Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF59Cu) goto L_08ADF59C;
    return;
L_08ADF59C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
    goto L_08ADF5A4;
L_08ADF5A4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADF5CC;
      }
      goto L_08ADF5AC;
    }
L_08ADF5AC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08ADF5D0;
    }
    goto L_08ADF5B8;
L_08ADF5B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (2209u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26392));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ADF5D4;
      }
      goto L_08ADF5CC;
    }
L_08ADF5CC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08ADF5D0;
L_08ADF5D0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ADF5D4;
L_08ADF5D4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF5FC;
      }
      goto L_08ADF5DC;
    }
L_08ADF5DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08ADF5FC;
      }
      goto L_08ADF5E8;
    }
L_08ADF5E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF5F4u);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 102u, 0x08AD86E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF5F4u) goto L_08ADF5F4;
    return;
L_08ADF5F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF614;
      }
      goto L_08ADF5FC;
    }
L_08ADF5FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1368)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1364), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1368), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1372), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08ADF614;
L_08ADF614:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF620u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 102u, 0x08AD86E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF620u) goto L_08ADF620;
    return;
L_08ADF620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08ADF7B4;
      }
      goto L_08ADF62C;
    }
L_08ADF62C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
        goto L_08ADF648;
    }
    goto L_08ADF638;
L_08ADF638:
    ctx.gpr[31] = (0x08ADF640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF640u) goto L_08ADF640;
    return;
L_08ADF640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    goto L_08ADF648;
L_08ADF648:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADF670;
      }
      goto L_08ADF650;
    }
L_08ADF650:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 1u);
        goto L_08ADF674;
    }
    goto L_08ADF65C;
L_08ADF65C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (2209u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-26392));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08ADF678;
      }
      goto L_08ADF670;
    }
L_08ADF670:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ADF674;
L_08ADF674:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08ADF678;
L_08ADF678:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF724;
      }
      goto L_08ADF680;
    }
L_08ADF680:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_08ADF698;
    }
    goto L_08ADF688;
L_08ADF688:
    ctx.gpr[31] = (0x08ADF690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF690u) goto L_08ADF690;
    return;
L_08ADF690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08ADF698;
L_08ADF698:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF724;
      }
      goto L_08ADF6A0;
    }
L_08ADF6A0:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3164)));
        goto L_08ADF6B8;
    }
    goto L_08ADF6A8;
L_08ADF6A8:
    ctx.gpr[31] = (0x08ADF6B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF6B0u) goto L_08ADF6B0;
    return;
L_08ADF6B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3164)));
    goto L_08ADF6B8;
L_08ADF6B8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADF714;
      }
      goto L_08ADF6C0;
    }
L_08ADF6C0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF6EC;
      }
      goto L_08ADF6CC;
    }
L_08ADF6CC:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF6EC;
      }
      goto L_08ADF6D8;
    }
L_08ADF6D8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (2209u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-25060));
    if (ctx.gpr[8] == ctx.gpr[7]) {
    ctx.gpr[5] = (0u | 1u);
        goto L_08ADF718;
    }
    goto L_08ADF6EC;
L_08ADF6EC:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
        goto L_08ADF71C;
    }
    goto L_08ADF6F4;
L_08ADF6F4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
        goto L_08ADF71C;
    }
    goto L_08ADF700;
L_08ADF700:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (2209u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-25068));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08ADF71C;
      }
      goto L_08ADF714;
    }
L_08ADF714:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ADF718;
L_08ADF718:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08ADF71C;
L_08ADF71C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF7A8;
      }
      goto L_08ADF724;
    }
L_08ADF724:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3164)));
        goto L_08ADF73C;
    }
    goto L_08ADF72C;
L_08ADF72C:
    ctx.gpr[31] = (0x08ADF734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF734u) goto L_08ADF734;
    return;
L_08ADF734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3164)));
    goto L_08ADF73C;
L_08ADF73C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADF798;
      }
      goto L_08ADF744;
    }
L_08ADF744:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF770;
      }
      goto L_08ADF750;
    }
L_08ADF750:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF770;
      }
      goto L_08ADF75C;
    }
L_08ADF75C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (2209u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-25060));
    if (ctx.gpr[8] == ctx.gpr[7]) {
    ctx.gpr[6] = (0u | 1u);
        goto L_08ADF79C;
    }
    goto L_08ADF770;
L_08ADF770:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
        goto L_08ADF7A0;
    }
    goto L_08ADF778;
L_08ADF778:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
        goto L_08ADF7A0;
    }
    goto L_08ADF784;
L_08ADF784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25068));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08ADF7A0;
      }
      goto L_08ADF798;
    }
L_08ADF798:
    ctx.gpr[6] = (0u | 1u);
    goto L_08ADF79C;
L_08ADF79C:
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    goto L_08ADF7A0;
L_08ADF7A0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF7B4;
      }
      goto L_08ADF7A8;
    }
L_08ADF7A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF7B4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 102u, 0x08AD86E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF7B4u) goto L_08ADF7B4;
    return;
L_08ADF7B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF820;
      }
      goto L_08ADF7BC;
    }
L_08ADF7BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF7C8u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 102u, 0x08AD86E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF7C8u) goto L_08ADF7C8;
    return;
L_08ADF7C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF7D4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 102u, 0x08AD86E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF7D4u) goto L_08ADF7D4;
    return;
L_08ADF7D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF7E0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 102u, 0x08AD86E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF7E0u) goto L_08ADF7E0;
    return;
L_08ADF7E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF820;
      }
      goto L_08ADF7E8;
    }
L_08ADF7E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF7F4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 102u, 0x08AD86E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF7F4u) goto L_08ADF7F4;
    return;
L_08ADF7F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF820;
      }
      goto L_08ADF7FC;
    }
L_08ADF7FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF808u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 102u, 0x08AD86E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF808u) goto L_08ADF808;
    return;
L_08ADF808:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF814u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 102u, 0x08AD86E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF814u) goto L_08ADF814;
    return;
L_08ADF814:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF820u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 102u, 0x08AD86E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF820u) goto L_08ADF820;
    return;
L_08ADF820:
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
L_08ADF83C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-672));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ADF86Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 878u, 0x08AD37E0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF86Cu) goto L_08ADF86C;
    return;
L_08ADF86C:
    ctx.gpr[31] = (0x08ADF874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 77u, 0x08A54684u>(ctx, &aot_mem) && ctx.pc == 0x08ADF874u) goto L_08ADF874;
    return;
L_08ADF874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1412)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 12u);
      if (branch_taken) {
          goto L_08ADF8A0;
      }
      goto L_08ADF880;
    }
L_08ADF880:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08ADF88Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF88Cu) goto L_08ADF88C;
    return;
L_08ADF88C:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08ADF898u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF898u) goto L_08ADF898;
    return;
L_08ADF898:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFA08;
      }
      goto L_08ADF8A0;
    }
L_08ADF8A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 255u);
      if (branch_taken) {
          goto L_08ADF960;
      }
      goto L_08ADF8B0;
    }
L_08ADF8B0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), ctx.gpr[4]);
    ctx.gpr[19] = (2229u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(1168));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08ADF8F8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08ADF8F8u) goto L_08ADF8F8;
    return;
L_08ADF8F8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08ADF914u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF914u) goto L_08ADF914;
    return;
L_08ADF914:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-48));
    ctx.gpr[31] = (0x08ADF92Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 638u, 0x088B7E4Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF92Cu) goto L_08ADF92C;
    return;
L_08ADF92C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADF944;
      }
      goto L_08ADF93C;
    }
L_08ADF93C:
    ctx.gpr[31] = (0x08ADF944u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 864u, 0x08AE3DD4u>(ctx, &aot_mem) && ctx.pc == 0x08ADF944u) goto L_08ADF944;
    return;
L_08ADF944:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08ADF958u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 638u, 0x088B7E4Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF958u) goto L_08ADF958;
    return;
L_08ADF958:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFA08;
      }
      goto L_08ADF960;
    }
L_08ADF960:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(310)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2229u << 16u);
      if (branch_taken) {
          goto L_08ADFA08;
      }
      goto L_08ADF96C;
    }
L_08ADF96C:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(1168));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08ADF9A8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08ADF9A8u) goto L_08ADF9A8;
    return;
L_08ADF9A8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08ADF9C4u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF9C4u) goto L_08ADF9C4;
    return;
L_08ADF9C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-48));
    ctx.gpr[31] = (0x08ADF9DCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 638u, 0x088B7E4Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF9DCu) goto L_08ADF9DC;
    return;
L_08ADF9DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADF9F4;
      }
      goto L_08ADF9EC;
    }
L_08ADF9EC:
    ctx.gpr[31] = (0x08ADF9F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 864u, 0x08AE3DD4u>(ctx, &aot_mem) && ctx.pc == 0x08ADF9F4u) goto L_08ADF9F4;
    return;
L_08ADF9F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08ADFA08u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 638u, 0x088B7E4Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFA08u) goto L_08ADFA08;
    return;
L_08ADFA08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFA54;
      }
      goto L_08ADFA18;
    }
L_08ADFA18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFA54;
      }
      goto L_08ADFA34;
    }
L_08ADFA34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFA54;
      }
      goto L_08ADFA4C;
    }
L_08ADFA4C:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_08ADFA54;
L_08ADFA54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ADFA74;
      }
      goto L_08ADFA60;
    }
L_08ADFA60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFA74;
      }
      goto L_08ADFA6C;
    }
L_08ADFA6C:
    ctx.gpr[31] = (0x08ADFA74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 228u, 0x08AE5224u>(ctx, &aot_mem) && ctx.pc == 0x08ADFA74u) goto L_08ADFA74;
    return;
L_08ADFA74:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08ADFA80u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADFA80u) goto L_08ADFA80;
    return;
L_08ADFA80:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08ADFA8Cu);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADFA8Cu) goto L_08ADFA8C;
    return;
L_08ADFA8C:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x08ADFA98u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADFA98u) goto L_08ADFA98;
    return;
L_08ADFA98:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x08ADFAA4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADFAA4u) goto L_08ADFAA4;
    return;
L_08ADFAA4:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08ADFAB0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADFAB0u) goto L_08ADFAB0;
    return;
L_08ADFAB0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26464));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(297)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFAE4;
      }
      goto L_08ADFAC4;
    }
L_08ADFAC4:
    ctx.gpr[31] = (0x08ADFACCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADFD58;
L_08ADFACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 7u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1424)));
        goto L_08ADFAEC;
    }
    goto L_08ADFADC;
L_08ADFADC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFD0C;
      }
      goto L_08ADFAE4;
    }
L_08ADFAE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFD2C;
      }
      goto L_08ADFAEC;
    }
L_08ADFAEC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFD0C;
      }
      goto L_08ADFAF4;
    }
L_08ADFAF4:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1148)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x08ADFB70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 786u, 0x08967AC0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFB70u) goto L_08ADFB70;
    return;
L_08ADFB70:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[31] = (0x08ADFB7Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 796u, 0x08967C70u>(ctx, &aot_mem) && ctx.pc == 0x08ADFB7Cu) goto L_08ADFB7C;
    return;
L_08ADFB7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08ADFBBCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 213u, 0x088716A8u>(ctx, &aot_mem) && ctx.pc == 0x08ADFBBCu) goto L_08ADFBBC;
    return;
L_08ADFBBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08ADFBDC;
      }
      goto L_08ADFBC4;
    }
L_08ADFBC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08ADFBD8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 315u, 0x08871DA8u>(ctx, &aot_mem) && ctx.pc == 0x08ADFBD8u) goto L_08ADFBD8;
    return;
L_08ADFBD8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08ADFBDC;
L_08ADFBDC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFC00;
      }
      goto L_08ADFBE4;
    }
L_08ADFBE4:
    ctx.gpr[31] = (0x08ADFBECu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 192u, 0x088714F0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFBECu) goto L_08ADFBEC;
    return;
L_08ADFBEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADFBF8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54364u>(ctx, &aot_mem) && ctx.pc == 0x08ADFBF8u) goto L_08ADFBF8;
    return;
L_08ADFBF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFC54;
      }
      goto L_08ADFC00;
    }
L_08ADFC00:
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08ADFC3C;
      }
      goto L_08ADFC10;
    }
L_08ADFC10:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08ADFC1Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08ADFC1Cu) goto L_08ADFC1C;
    return;
L_08ADFC1C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFC34;
      }
      goto L_08ADFC28;
    }
L_08ADFC28:
    ctx.gpr[31] = (0x08ADFC30u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFC30u) goto L_08ADFC30;
    return;
L_08ADFC30:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08ADFC34;
L_08ADFC34:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08ADFC3C;
L_08ADFC3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08ADFC48u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8652));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08ADFC48u) goto L_08ADFC48;
    return;
L_08ADFC48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADFC54u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54364u>(ctx, &aot_mem) && ctx.pc == 0x08ADFC54u) goto L_08ADFC54;
    return;
L_08ADFC54:
    ctx.gpr[31] = (0x08ADFC5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADFC5Cu) goto L_08ADFC5C;
    return;
L_08ADFC5C:
    ctx.gpr[31] = (0x08ADFC64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x08ADFC64u) goto L_08ADFC64;
    return;
L_08ADFC64:
    ctx.gpr[31] = (0x08ADFC6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x08ADFC6Cu) goto L_08ADFC6C;
    return;
L_08ADFC6C:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x08ADFC88u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08ADFC88u) goto L_08ADFC88;
    return;
L_08ADFC88:
    ctx.gpr[4] = (17392u << 16u);
    ctx.gpr[31] = (0x08ADFC94u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFC94u) goto L_08ADFC94;
    return;
L_08ADFC94:
    ctx.gpr[31] = (0x08ADFC9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55150u>(ctx, &aot_mem) && ctx.pc == 0x08ADFC9Cu) goto L_08ADFC9C;
    return;
L_08ADFC9C:
    ctx.gpr[31] = (0x08ADFCA4u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFCA4u) goto L_08ADFCA4;
    return;
L_08ADFCA4:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08ADFCC0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFCC0u) goto L_08ADFCC0;
    return;
L_08ADFCC0:
    ctx.gpr[31] = (0x08ADFCC8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFCC8u) goto L_08ADFCC8;
    return;
L_08ADFCC8:
    ctx.gpr[31] = (0x08ADFCD0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08ADFCD0u) goto L_08ADFCD0;
    return;
L_08ADFCD0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08ADFCE8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFCE8u) goto L_08ADFCE8;
    return;
L_08ADFCE8:
    ctx.gpr[31] = (0x08ADFCF0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08ADFCF0u) goto L_08ADFCF0;
    return;
L_08ADFCF0:
    ctx.gpr[6] = (16768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (17258u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08ADFD0Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08ADFD0Cu) goto L_08ADFD0C;
    return;
L_08ADFD0C:
    ctx.gpr[31] = (0x08ADFD14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54EFCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFD14u) goto L_08ADFD14;
    return;
L_08ADFD14:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x08ADFD20u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADFD20u) goto L_08ADFD20;
    return;
L_08ADFD20:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x08ADFD2Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADFD2Cu) goto L_08ADFD2C;
    return;
L_08ADFD2C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADFD58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ADFDA8u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x08ADFDA8u) goto L_08ADFDA8;
    return;
L_08ADFDA8:
    ctx.gpr[31] = (0x08ADFDB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x08ADFDB0u) goto L_08ADFDB0;
    return;
L_08ADFDB0:
    ctx.gpr[31] = (0x08ADFDB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A55018u>(ctx, &aot_mem) && ctx.pc == 0x08ADFDB8u) goto L_08ADFDB8;
    return;
L_08ADFDB8:
    ctx.gpr[31] = (0x08ADFDC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 203u, 0x08A54FCCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFDC0u) goto L_08ADFDC0;
    return;
L_08ADFDC0:
    ctx.gpr[31] = (0x08ADFDC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 223u, 0x08A5513Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFDC8u) goto L_08ADFDC8;
    return;
L_08ADFDC8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08ADFDE0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFDE0u) goto L_08ADFDE0;
    return;
L_08ADFDE0:
    ctx.gpr[4] = (16672u << 16u);
    ctx.gpr[31] = (0x08ADFDECu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A5505Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFDECu) goto L_08ADFDEC;
    return;
L_08ADFDEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08ADFE34;
      }
      goto L_08ADFDFC;
    }
L_08ADFDFC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADFE24;
      }
      goto L_08ADFE04;
    }
L_08ADFE04:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADFE60;
      }
      goto L_08ADFE0C;
    }
L_08ADFE0C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFE60;
      }
      goto L_08ADFE14;
    }
L_08ADFE14:
    ctx.gpr[31] = (0x08ADFE1Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 776u, 0x08AE3784u>(ctx, &aot_mem) && ctx.pc == 0x08ADFE1Cu) goto L_08ADFE1C;
    return;
L_08ADFE1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFE60;
      }
      goto L_08ADFE24;
    }
L_08ADFE24:
    ctx.gpr[31] = (0x08ADFE2Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 121u, 0x08AE4A24u>(ctx, &aot_mem) && ctx.pc == 0x08ADFE2Cu) goto L_08ADFE2C;
    return;
L_08ADFE2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFE60;
      }
      goto L_08ADFE34;
    }
L_08ADFE34:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20928)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADFE50;
      }
      goto L_08ADFE44;
    }
L_08ADFE44:
    ctx.gpr[31] = (0x08ADFE4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 533u, 0x08AFA59Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFE4Cu) goto L_08ADFE4C;
    return;
L_08ADFE4C:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08ADFE50;
L_08ADFE50:
    ctx.gpr[31] = (0x08ADFE58u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20928)));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 475u, 0x0882BC2Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFE58u) goto L_08ADFE58;
    return;
L_08ADFE58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFE60;
      }
      goto L_08ADFE60;
    }
L_08ADFE60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 255u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08ADFFCC;
    }
    goto L_08ADFE70;
L_08ADFE70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 255 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08ADFFCC;
    }
    goto L_08ADFE80;
L_08ADFE80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1396)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08ADFFCC;
    }
    goto L_08ADFEB0;
L_08ADFEB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[16] = (0u | 255u);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[8] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADFED8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFED8u) goto L_08ADFED8;
    return;
L_08ADFED8:
    ctx.gpr[31] = (0x08ADFEE0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 236u, 0x08A55248u>(ctx, &aot_mem) && ctx.pc == 0x08ADFEE0u) goto L_08ADFEE0;
    return;
L_08ADFEE0:
    ctx.gpr[31] = (0x08ADFEE8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFEE8u) goto L_08ADFEE8;
    return;
L_08ADFEE8:
    ctx.gpr[31] = (0x08ADFEF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x08ADFEF0u) goto L_08ADFEF0;
    return;
L_08ADFEF0:
    ctx.gpr[31] = (0x08ADFEF8u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08ADFEF8u) goto L_08ADFEF8;
    return;
L_08ADFEF8:
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16332u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x08ADFF14u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08ADFF14u) goto L_08ADFF14;
    return;
L_08ADFF14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] - ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[5] = (0u | 174u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADFF34u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFF34u) goto L_08ADFF34;
    return;
L_08ADFF34:
    ctx.gpr[31] = (0x08ADFF3Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08ADFF3Cu) goto L_08ADFF3C;
    return;
L_08ADFF3C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1396)));
        goto L_08ADFF7C;
    }
    goto L_08ADFF4C;
L_08ADFF4C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08ADFF58u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08ADFF58u) goto L_08ADFF58;
    return;
L_08ADFF58:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFF70;
      }
      goto L_08ADFF64;
    }
L_08ADFF64:
    ctx.gpr[31] = (0x08ADFF6Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFF6Cu) goto L_08ADFF6C;
    return;
L_08ADFF6C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08ADFF70;
L_08ADFF70:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1396)));
    goto L_08ADFF7C;
L_08ADFF7C:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5556));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08ADFFACu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08ADFFACu) goto L_08ADFFAC;
    return;
L_08ADFFAC:
    ctx.gpr[6] = (16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (16544u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08ADFFC8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08ADFFC8u) goto L_08ADFFC8;
    return;
L_08ADFFC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08ADFFCC;
L_08ADFFCC:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 20u, 0x08AE0120u>(ctx, &aot_mem); return;
      }
      goto L_08ADFFF8;
    }
L_08ADFFF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 20u, 0x08AE0120u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 2u, 0x08AE0004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0182(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0182_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_182(Runtime &runtime) {
    runtime.register_generated_unit(182u, 0x08ADC000u, 16384u, &recomp_unit_0182, &recomp_unit_0182_entry);
    runtime.register_function(0x08ADC000u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC014u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC01Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC024u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC038u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC048u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC058u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC060u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC064u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC104u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC118u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC120u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC128u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC130u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC138u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC140u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC148u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC150u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC158u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC160u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC168u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC188u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC1B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC1C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC1D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC208u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC210u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC218u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC228u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC238u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC248u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC250u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC254u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC288u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC290u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC294u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC29Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC2A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC2ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC2B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC2BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC2C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC2C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC2D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC2DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC2ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC300u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC308u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC310u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC318u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC320u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC328u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC330u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC338u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC340u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC348u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC350u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC370u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC398u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC3ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC3B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC3F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC3F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC400u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC414u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC424u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC434u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC43Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC440u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC478u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC480u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC484u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC48Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC494u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC49Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC4A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC4ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC4B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC4B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC4C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC4CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC4DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC4F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC4F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC500u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC508u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC510u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC518u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC520u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC528u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC530u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC538u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC540u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC560u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC588u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC59Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC5A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC5DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC5E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC5ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC5FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC60Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC61Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC624u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC628u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC65Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC664u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC668u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC690u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC704u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC714u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC71Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC74Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC758u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC800u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC80Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC814u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC81Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC824u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC82Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC834u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC83Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC858u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC860u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC868u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC870u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC878u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC880u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC888u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC904u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC90Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC914u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC91Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC924u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC93Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC944u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC94Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC954u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC95Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC964u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC96Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC988u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC990u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC99Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC9ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC9B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC9BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC9C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC9D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC9E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC9E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC9F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA08u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA10u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA2Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA34u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA3Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA48u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA50u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA60u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA68u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA78u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA88u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA94u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA98u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA9Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCAA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCAACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCAB4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCABCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCAD8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCAE4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCAE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCAF8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB10u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB18u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB20u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB4Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB84u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB90u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB9Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCBA8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCBECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC34u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC3Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC4Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC5Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC6Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC74u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC80u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC98u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCCA8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCCB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCCB8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCCC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCCD8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCCE4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD34u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD4Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD54u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD5Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD74u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD7Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD90u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD98u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCDACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCDB4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCDC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCDD0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCDE4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCDECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCDF4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE08u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE10u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE2Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE38u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE40u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE48u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE54u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE5Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE6Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE78u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE80u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE88u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE90u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE9Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCEB4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCEB8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCEC4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCECCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCEDCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCEE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCEECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCEF0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCEF8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF38u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF3Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF48u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF50u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF54u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF5Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF6Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF74u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF78u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF84u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF94u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCFB4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCFB8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD018u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD068u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD070u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD078u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD080u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD08Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD104u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD110u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD118u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD120u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD128u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD134u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD148u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD158u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD164u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD16Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD174u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD17Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD188u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD19Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD1ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD1B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD1C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD1D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD1E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD1F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD1F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD1FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD204u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD210u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD224u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD238u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD250u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD25Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD268u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD274u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD27Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD288u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD294u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD2A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD2ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD2C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD2D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD2E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD2F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD2FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD304u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD310u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD31Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD328u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD330u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD340u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD350u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD358u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD35Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD364u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD36Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD370u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD378u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD380u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD388u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD390u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD398u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD3A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD3A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD3ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD3B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD3FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD408u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD410u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD418u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD42Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD434u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD448u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD450u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD460u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD46Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD470u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD474u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD47Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD48Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD49Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD4ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD4F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD510u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD518u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD520u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD534u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD53Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD544u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD54Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD55Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD570u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD578u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD58Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD594u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD59Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD5F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD604u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD60Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD620u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD630u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD638u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD640u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD650u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD660u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD66Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD708u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD710u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD71Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD764u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD7ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD7C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD7C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD7DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD7ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD7F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD800u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD808u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD810u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD814u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD81Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD824u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD828u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD830u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD838u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD840u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD850u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD858u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD868u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD874u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD888u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD898u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD8A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD8A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD8B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD8BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD8ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD904u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD914u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD92Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD934u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD938u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD948u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD954u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD964u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD978u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD998u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA04u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA08u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA18u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA20u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA28u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA3Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA5Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDAA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDAACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDAB8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDAC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDAC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDACCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDADCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDAE4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDAECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDAF0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDAF8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB04u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB10u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB18u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB34u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB7Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB84u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB90u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB98u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDBA0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDBB4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDBBCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDBC4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDBD8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDBE4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDBF4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC08u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC2Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC7Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC8Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDCD0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD18u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD4Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD54u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD5Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD68u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD78u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD88u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD9Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDDA0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDDD0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDDD8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDDDCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDDECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDDFCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDE0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDE1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDE60u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDE70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDE7Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDE8Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDE9Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDEA8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDEB8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDEC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF54u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF60u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF7Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF84u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF8Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFD4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFE0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFF0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE038u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE050u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE084u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE08Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE09Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE0BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE0C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE0CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE0D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE0E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE0F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE0F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE100u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE11Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE12Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE140u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE14Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE15Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE1A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE1D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE1D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE1E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE228u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE230u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE240u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE248u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE258u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE308u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE310u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE320u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE330u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE33Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE348u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE364u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE36Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE37Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE3A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE3BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE3D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE3E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE3E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE408u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE410u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE418u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE438u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE440u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE448u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE468u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE470u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE478u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE498u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE4A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE4A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE4B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE4C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE4CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE4D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE4DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE504u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE510u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE51Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE564u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE570u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE578u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE598u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE604u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE60Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE618u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE61Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE660u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE668u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE670u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE678u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE688u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE690u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE694u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE6A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE6C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE6D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE6DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE6F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE6F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE710u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE728u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE730u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE738u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE740u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE74Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE750u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE758u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE760u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE770u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE774u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE77Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE780u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE788u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE79Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE7A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE7BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE7C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE7D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE818u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE820u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE824u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE850u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE88Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE894u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE898u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE918u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE920u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE928u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE938u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE940u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE94Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE950u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE958u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE960u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE968u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE974u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE97Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE98Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA04u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA18u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA48u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA7Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA90u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEAA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEAB8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEAC4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEAD0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEADCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEAE4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEAECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEAF4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB08u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB28u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB40u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB50u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB5Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB68u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEBA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEBB8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEBC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEBD0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEBD4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEBDCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEBE0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEBECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEBF4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC08u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC10u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC18u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC3Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC4Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC68u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC78u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC90u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC98u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEDF0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEDFCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE08u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE18u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE20u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE2Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE34u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE38u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE48u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE50u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE88u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEEA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEEB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEEBCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEEC4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEECCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEEF8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF2Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF3Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF8Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF9Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEFA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEFB4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEFD8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEFDCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEFECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEFF4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF008u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF018u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF030u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF03Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF048u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF054u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF05Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF068u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF070u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF07Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF088u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF098u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF0B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF0BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF0C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF0D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF0DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF0E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF0F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF0FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF108u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF110u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF13Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF158u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF168u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF174u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF1A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF1ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF1BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF1C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF1D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF214u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF224u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF23Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF250u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF260u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF26Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF278u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF284u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF28Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF29Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF304u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF30Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF314u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF31Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF324u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF330u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF33Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF350u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF358u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF364u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF378u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF37Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF380u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF388u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF39Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF404u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF40Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF414u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF41Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF424u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF42Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF434u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF440u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF44Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF460u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF468u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF474u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF488u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF48Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF490u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF498u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF500u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF508u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF510u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF518u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF520u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF528u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF534u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF540u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF554u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF55Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF568u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF57Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF580u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF584u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF58Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF594u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF59Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF5A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF5ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF5B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF5CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF5D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF5D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF5DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF5E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF5F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF5FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF614u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF620u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF62Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF638u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF640u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF648u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF650u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF65Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF670u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF674u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF678u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF680u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF688u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF690u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF698u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF700u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF714u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF718u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF71Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF724u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF72Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF734u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF73Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF744u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF750u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF75Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF770u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF778u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF784u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF798u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF79Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF7A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF7A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF7B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF7BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF7C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF7D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF7E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF7E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF7F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF7FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF808u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF814u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF820u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF83Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF86Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF874u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF880u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF88Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF898u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF8A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF8B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF8F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF914u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF92Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF93Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF944u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF958u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF960u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF96Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA08u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA18u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA34u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA4Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA54u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA60u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA6Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA74u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA80u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA8Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA98u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFAA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFAB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFAC4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFACCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFADCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFAE4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFAECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFAF4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB7Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFBBCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFBC4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFBD8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFBDCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFBE4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFBECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFBF8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC10u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC28u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC34u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC3Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC48u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC54u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC5Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC6Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC88u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC94u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC9Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCD0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCF0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD20u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD2Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDA8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDB8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDE0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDFCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE04u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE2Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE34u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE4Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE50u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE60u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE80u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFEB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFED8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFEE0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFEE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFEF0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFEF8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF34u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF3Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF4Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF6Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF7Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFFACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFFC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFFCCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFFF8u, &recomp_unit_0182, "recomp_unit_0182");
}
} // namespace psprecomp
