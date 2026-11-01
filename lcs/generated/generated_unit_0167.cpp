#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "lcs_world_detail.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0167[4088] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 5, 0, 0, 6, 7, 0, 0, 0, 8, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0, 17, 0,
    0, 0, 0, 18, 0, 19, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 24, 0, 0, 0, 25,
    0, 0, 26, 0, 0, 27, 0, 0, 28, 29, 0, 30, 31, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 35, 36, 0, 37, 0, 38,
    39, 0, 0, 40, 0, 0, 0, 41, 0, 0, 42, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0, 46, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 0, 57, 0, 0, 58, 0, 59, 0, 60, 0,
    0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0,
    68, 0, 0, 0, 69, 0, 0, 70, 0, 71, 0, 0, 0, 0, 72, 0, 73, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0,
    84, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 91, 0, 0,
    0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 96, 97, 0, 98, 0, 99, 0, 100, 0, 101, 0, 102, 0,
    0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 107, 0, 0, 0, 108, 0, 0, 109, 110, 0, 0,
    0, 0, 111, 0, 0, 0, 0, 112, 113, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0,
    0, 119, 0, 0, 0, 0, 120, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123,
    0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0,
    0, 134, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 139, 0, 140, 0,
    0, 141, 0, 0, 0, 142, 0, 0, 143, 0, 144, 0, 145, 0, 0, 146, 0, 147, 0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 152, 0,
    0, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0, 157, 0, 158, 0, 0, 159, 0, 160, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 164,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 169, 0, 170, 0, 171, 0,
    0, 172, 0, 173, 0, 174, 0, 0, 175, 0, 0, 176, 0, 177, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0,
    0, 0, 180, 0, 181, 0, 0, 0, 182, 0, 183, 0, 184, 0, 0, 185, 0, 186, 0, 187, 0, 0, 188, 0, 0, 189, 0, 190, 191, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 195, 0, 196, 0, 197, 0, 0, 198, 0, 199,
    0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 203, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206,
    0, 207, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 213, 0, 214, 0, 0, 215, 0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 219, 0, 220, 0, 221, 0, 0, 222, 0, 0, 223, 0,
    0, 224, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 229, 0, 230, 0,
    0, 0, 231, 0, 232, 0, 0, 233, 0, 0, 0, 234, 0, 235, 0, 236, 0, 0, 237, 0, 238, 0, 239, 0, 0, 0, 240, 0, 241, 0, 0, 0,
    0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 247, 248, 0, 0, 249, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0,
    254, 0, 0, 0, 255, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 262, 0, 263, 264, 0,
    0, 0, 0, 265, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 272, 0, 273, 0,
    274, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0,
    0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 281, 282, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    284, 0, 285, 0, 0, 0, 286, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 292, 0, 0, 293, 0, 294, 0, 295, 0, 296, 0, 297, 0, 0, 298, 0, 0, 0, 0,
    0, 0, 299, 0, 300, 0, 301, 0, 302, 0, 303, 0, 0, 304, 0, 0, 0, 305, 0, 306, 0, 307, 0, 308, 0, 309, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 313, 0, 0, 314, 315, 0, 316, 0, 0, 0, 0, 0,
    0, 0, 0, 317, 0, 318, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 324,
    0, 0, 0, 0, 325, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 338, 339,
    0, 340, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 344, 345, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0,
    0, 348, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 353, 0, 0, 0, 354, 355, 0, 356, 357, 0, 358, 0, 0, 0,
    0, 0, 359, 360, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 366, 0,
    367, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 370, 0, 0, 0, 371, 372, 0, 373, 374, 0, 375, 0, 0, 0, 0, 0, 376, 377, 378, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0,
    384, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 390,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 393, 0, 0, 394, 0, 395, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397,
    0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 401, 0, 402, 0, 0, 0, 403, 0, 404, 405, 0, 0, 0, 0,
    0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0,
    0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0,
    419, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 422, 0, 423, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0,
    426, 0, 0, 427, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 431, 0, 432, 0, 0, 0, 0, 0,
    0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 434, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 439, 0, 440, 0, 441,
    0, 442, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 446, 0, 0, 0, 0, 447, 0,
    448, 0, 0, 0, 0, 0, 449, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 453, 0, 0, 0, 0, 0, 0, 454,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    455, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 459, 0, 460, 0, 0, 0, 0, 0, 461, 0, 0,
    0, 462, 0, 0, 0, 0, 0, 463, 0, 464, 0, 465, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 469,
    0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 473, 0, 0, 0, 474, 0, 475, 0, 0, 476, 0, 0, 0, 477, 0, 478, 0, 479, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 481, 0, 482, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 484, 485, 0, 486, 0, 487, 0, 488, 0,
    0, 0, 0, 0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 493, 0, 0, 494, 0, 0, 495, 0,
    496, 0, 497, 0, 0, 0, 0, 498, 0, 0, 499, 0, 0, 0, 500, 0, 501, 0, 0, 0, 502, 0, 503, 0, 0, 0, 0, 0, 0, 0, 504, 0,
    0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 0, 0, 508, 0, 509, 0, 510, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 514, 0, 0, 515, 0, 0, 516, 0, 0, 517, 518, 0, 519, 520, 521, 0, 522,
    0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527,
    0, 528, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 0,
    0, 0, 534, 0, 535, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 0, 0, 538, 0, 539, 0, 540, 0, 541, 0, 542, 0,
    543, 0, 0, 0, 0, 544, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 546, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0,
    549, 0, 0, 550, 0, 551, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 554, 0, 555, 0, 556, 0, 557,
    0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 0, 560, 0, 561, 0, 0, 562, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 0, 0,
    0, 565, 0, 566, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 569, 0, 0, 0, 570, 0, 0, 571, 0, 0, 572, 0, 0,
    0, 0, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 575, 0, 576, 0, 577, 0, 0, 0, 0, 0, 0, 578, 0, 579, 0, 580, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 582, 0, 583, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 586, 0,
    0, 587, 0, 0, 588, 0, 0, 0, 0, 589, 0, 0, 590, 0, 0, 0, 591, 0, 592, 0, 0, 0, 593, 0, 594, 0, 0, 0, 595, 0, 0, 596,
    0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 599, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 602, 0, 603, 0, 604,
    0, 605, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 608, 0, 609, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 610, 0, 611, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 613, 0, 0, 0, 0, 614, 0, 615, 0, 616, 0, 617, 618, 0,
    0, 0, 619, 0, 0, 620, 0, 0, 0, 0, 0, 621, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 624, 0, 0, 625, 0,
    626, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 629, 0, 0, 0, 630, 0, 631, 0, 632, 0, 633,
    0, 0, 0, 0, 634, 0, 0, 0, 0, 635, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 638, 0, 639, 0, 640, 0, 0,
    0, 641, 0, 0, 642, 0, 0, 0, 643, 0, 0, 0, 0, 0, 644, 0, 0, 0, 645, 0, 646, 0, 647, 0, 648, 0, 0, 0, 0, 649, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 651, 0, 0, 652, 0, 653, 0, 654, 0, 655, 0, 656, 0, 657, 0,
    658, 0, 0, 0, 659, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 664, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0, 0, 667, 0, 0, 0, 0, 0, 668, 0, 0, 669,
    0, 0, 0, 0, 0, 670, 0, 0, 671, 0, 0, 0, 0, 0, 672, 0, 0, 673, 0, 0, 0, 0, 0, 0, 674, 0, 0, 675, 0, 0, 0, 676,
    0, 0, 0, 0, 677, 0, 0, 0, 0, 678, 0, 0, 679, 0, 0, 0, 0, 0, 680, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0,
    0, 686, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0,
    691, 0, 0, 0, 692, 0, 693, 0, 0, 694, 0, 0, 695, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 698, 0, 0,
    0, 699, 0, 0, 700, 0, 701, 0, 702, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 704, 0, 705, 0, 706, 0, 707, 0, 0, 708, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 711, 0, 712, 0, 713, 0, 714, 0, 0, 715, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 717, 0, 0, 718, 0, 0, 0, 719, 0, 720, 0, 0, 721, 0, 722, 0, 0, 723,
    0, 724, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 728, 0, 0, 0, 729, 0,
    0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 731, 0, 732, 0, 0, 733, 0, 0, 0, 734, 0, 735, 0, 736, 0, 737, 0, 0, 738, 0, 0,
    739, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 742, 0, 0, 0, 743, 0, 744, 0, 745, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0,
    0, 750, 0, 0, 0, 0, 0, 751, 0, 0, 0, 752, 0, 753, 0, 754, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0,
    757, 0, 758, 0, 0, 0, 759, 0, 760, 0, 761, 0, 0, 762, 763, 0, 764, 0, 0, 765, 0, 766, 0, 767, 0, 768, 0, 769, 0, 770, 0, 0,
    771, 0, 0, 0, 0, 772, 0, 773, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 777, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0,
    0, 0, 779, 0, 0, 0, 0, 780, 0, 781, 0, 0, 782, 0, 783, 0, 0, 0, 0, 0, 784, 785, 0, 0, 0, 0, 0, 0, 786, 0, 0, 0,
    787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    789, 0, 790, 0, 0, 791, 0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    793, 0, 0, 0, 0, 794, 0, 0, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 797, 0, 798, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 799, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 800, 0, 0, 801, 0, 0, 0, 0, 0, 802, 0,
    0, 0, 803, 0, 0, 0, 0, 804, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 806, 0, 0, 0, 807, 0, 808, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 809, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 811, 0, 0, 812, 813, 0, 814, 0, 0, 0, 815, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 816, 0, 0, 0, 817, 0, 818, 0, 0, 0, 0, 0, 0, 819, 0, 0, 820, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0,
    822, 0, 0, 0, 0, 0, 823, 0, 0, 0, 824, 0, 825, 0, 826, 0, 0, 0, 827, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0,
    829, 0, 0, 830, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 831, 0, 832, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 833, 0, 834,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 835, 0, 0, 0, 0, 0, 836, 0, 0, 0, 837, 0, 0, 838, 0, 0, 0, 0,
    0, 839, 0, 0, 0, 0, 840, 0, 841, 0, 0, 842, 0, 0, 843, 0, 844, 0, 845, 0, 0, 846, 0, 847,
};
void recomp_unit_0167_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AA0000u;
        entry_id = (entry_delta < 16352u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0167[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AA0000;
    case 2u: goto L_08AA0018;
    case 3u: goto L_08AA0020;
    case 4u: goto L_08AA0028;
    case 5u: goto L_08AA0034;
    case 6u: goto L_08AA0040;
    case 7u: goto L_08AA0044;
    case 8u: goto L_08AA0054;
    case 9u: goto L_08AA005C;
    case 10u: goto L_08AA0064;
    case 11u: goto L_08AA0098;
    case 12u: goto L_08AA00B0;
    case 13u: goto L_08AA00CC;
    case 14u: goto L_08AA00D4;
    case 15u: goto L_08AA00DC;
    case 16u: goto L_08AA00F0;
    case 17u: goto L_08AA00F8;
    case 18u: goto L_08AA010C;
    case 19u: goto L_08AA0114;
    case 20u: goto L_08AA011C;
    case 21u: goto L_08AA0134;
    case 22u: goto L_08AA0158;
    case 23u: goto L_08AA0160;
    case 24u: goto L_08AA016C;
    case 25u: goto L_08AA017C;
    case 26u: goto L_08AA0188;
    case 27u: goto L_08AA0194;
    case 28u: goto L_08AA01A0;
    case 29u: goto L_08AA01A4;
    case 30u: goto L_08AA01AC;
    case 31u: goto L_08AA01B0;
    case 32u: goto L_08AA01C4;
    case 33u: goto L_08AA01D0;
    case 34u: goto L_08AA01DC;
    case 35u: goto L_08AA01E8;
    case 36u: goto L_08AA01EC;
    case 37u: goto L_08AA01F4;
    case 38u: goto L_08AA01FC;
    case 39u: goto L_08AA0200;
    case 40u: goto L_08AA020C;
    case 41u: goto L_08AA021C;
    case 42u: goto L_08AA0228;
    case 43u: goto L_08AA0230;
    case 44u: goto L_08AA0238;
    case 45u: goto L_08AA0240;
    case 46u: goto L_08AA0254;
    case 47u: goto L_08AA0258;
    case 48u: goto L_08AA02A0;
    case 49u: goto L_08AA02EC;
    case 50u: goto L_08AA0314;
    case 51u: goto L_08AA0324;
    case 52u: goto L_08AA0330;
    case 53u: goto L_08AA0338;
    case 54u: goto L_08AA0340;
    case 55u: goto L_08AA0348;
    case 56u: goto L_08AA0350;
    case 57u: goto L_08AA035C;
    case 58u: goto L_08AA0368;
    case 59u: goto L_08AA0370;
    case 60u: goto L_08AA0378;
    case 61u: goto L_08AA0388;
    case 62u: goto L_08AA03A0;
    case 63u: goto L_08AA03B0;
    case 64u: goto L_08AA03C0;
    case 65u: goto L_08AA03D0;
    case 66u: goto L_08AA03E0;
    case 67u: goto L_08AA03F0;
    case 68u: goto L_08AA0400;
    case 69u: goto L_08AA0410;
    case 70u: goto L_08AA041C;
    case 71u: goto L_08AA0424;
    case 72u: goto L_08AA0438;
    case 73u: goto L_08AA0440;
    case 74u: goto L_08AA0448;
    case 75u: goto L_08AA0458;
    case 76u: goto L_08AA046C;
    case 77u: goto L_08AA0494;
    case 78u: goto L_08AA04A0;
    case 79u: goto L_08AA04B0;
    case 80u: goto L_08AA04C0;
    case 81u: goto L_08AA04CC;
    case 82u: goto L_08AA04D4;
    case 83u: goto L_08AA04EC;
    case 84u: goto L_08AA0500;
    case 85u: goto L_08AA0508;
    case 86u: goto L_08AA0518;
    case 87u: goto L_08AA052C;
    case 88u: goto L_08AA0540;
    case 89u: goto L_08AA0558;
    case 90u: goto L_08AA0560;
    case 91u: goto L_08AA0574;
    case 92u: goto L_08AA0584;
    case 93u: goto L_08AA0594;
    case 94u: goto L_08AA05A8;
    case 95u: goto L_08AA05BC;
    case 96u: goto L_08AA05CC;
    case 97u: goto L_08AA05D0;
    case 98u: goto L_08AA05D8;
    case 99u: goto L_08AA05E0;
    case 100u: goto L_08AA05E8;
    case 101u: goto L_08AA05F0;
    case 102u: goto L_08AA05F8;
    case 103u: goto L_08AA060C;
    case 104u: goto L_08AA0620;
    case 105u: goto L_08AA0644;
    case 106u: goto L_08AA064C;
    case 107u: goto L_08AA0654;
    case 108u: goto L_08AA0664;
    case 109u: goto L_08AA0670;
    case 110u: goto L_08AA0674;
    case 111u: goto L_08AA0688;
    case 112u: goto L_08AA069C;
    case 113u: goto L_08AA06A0;
    case 114u: goto L_08AA06A8;
    case 115u: goto L_08AA06B8;
    case 116u: goto L_08AA06CC;
    case 117u: goto L_08AA06E4;
    case 118u: goto L_08AA06EC;
    case 119u: goto L_08AA0704;
    case 120u: goto L_08AA0718;
    case 121u: goto L_08AA071C;
    case 122u: goto L_08AA0734;
    case 123u: goto L_08AA077C;
    case 124u: goto L_08AA079C;
    case 125u: goto L_08AA07A8;
    case 126u: goto L_08AA07B8;
    case 127u: goto L_08AA07C0;
    case 128u: goto L_08AA07D0;
    case 129u: goto L_08AA0804;
    case 130u: goto L_08AA0844;
    case 131u: goto L_08AA0860;
    case 132u: goto L_08AA086C;
    case 133u: goto L_08AA0878;
    case 134u: goto L_08AA0884;
    case 135u: goto L_08AA0888;
    case 136u: goto L_08AA08C4;
    case 137u: goto L_08AA08D8;
    case 138u: goto L_08AA08E0;
    case 139u: goto L_08AA08F0;
    case 140u: goto L_08AA08F8;
    case 141u: goto L_08AA0904;
    case 142u: goto L_08AA0914;
    case 143u: goto L_08AA0920;
    case 144u: goto L_08AA0928;
    case 145u: goto L_08AA0930;
    case 146u: goto L_08AA093C;
    case 147u: goto L_08AA0944;
    case 148u: goto L_08AA094C;
    case 149u: goto L_08AA0958;
    case 150u: goto L_08AA0964;
    case 151u: goto L_08AA0970;
    case 152u: goto L_08AA0978;
    case 153u: goto L_08AA0988;
    case 154u: goto L_08AA0990;
    case 155u: goto L_08AA099C;
    case 156u: goto L_08AA09AC;
    case 157u: goto L_08AA09B4;
    case 158u: goto L_08AA09BC;
    case 159u: goto L_08AA09C8;
    case 160u: goto L_08AA09D0;
    case 161u: goto L_08AA09D8;
    case 162u: goto L_08AA09E4;
    case 163u: goto L_08AA09F0;
    case 164u: goto L_08AA09FC;
    case 165u: goto L_08AA0A00;
    case 166u: goto L_08AA0A3C;
    case 167u: goto L_08AA0A50;
    case 168u: goto L_08AA0A58;
    case 169u: goto L_08AA0A68;
    case 170u: goto L_08AA0A70;
    case 171u: goto L_08AA0A78;
    case 172u: goto L_08AA0A84;
    case 173u: goto L_08AA0A8C;
    case 174u: goto L_08AA0A94;
    case 175u: goto L_08AA0AA0;
    case 176u: goto L_08AA0AAC;
    case 177u: goto L_08AA0AB4;
    case 178u: goto L_08AA0AB8;
    case 179u: goto L_08AA0AF4;
    case 180u: goto L_08AA0B08;
    case 181u: goto L_08AA0B10;
    case 182u: goto L_08AA0B20;
    case 183u: goto L_08AA0B28;
    case 184u: goto L_08AA0B30;
    case 185u: goto L_08AA0B3C;
    case 186u: goto L_08AA0B44;
    case 187u: goto L_08AA0B4C;
    case 188u: goto L_08AA0B58;
    case 189u: goto L_08AA0B64;
    case 190u: goto L_08AA0B6C;
    case 191u: goto L_08AA0B70;
    case 192u: goto L_08AA0BAC;
    case 193u: goto L_08AA0BC0;
    case 194u: goto L_08AA0BC8;
    case 195u: goto L_08AA0BD8;
    case 196u: goto L_08AA0BE0;
    case 197u: goto L_08AA0BE8;
    case 198u: goto L_08AA0BF4;
    case 199u: goto L_08AA0BFC;
    case 200u: goto L_08AA0C04;
    case 201u: goto L_08AA0C10;
    case 202u: goto L_08AA0C1C;
    case 203u: goto L_08AA0C28;
    case 204u: goto L_08AA0C2C;
    case 205u: goto L_08AA0C68;
    case 206u: goto L_08AA0C7C;
    case 207u: goto L_08AA0C84;
    case 208u: goto L_08AA0C8C;
    case 209u: goto L_08AA0CA4;
    case 210u: goto L_08AA0CC4;
    case 211u: goto L_08AA0CE4;
    case 212u: goto L_08AA0D00;
    case 213u: goto L_08AA0D10;
    case 214u: goto L_08AA0D18;
    case 215u: goto L_08AA0D24;
    case 216u: goto L_08AA0D34;
    case 217u: goto L_08AA0D3C;
    case 218u: goto L_08AA0D44;
    case 219u: goto L_08AA0D50;
    case 220u: goto L_08AA0D58;
    case 221u: goto L_08AA0D60;
    case 222u: goto L_08AA0D6C;
    case 223u: goto L_08AA0D78;
    case 224u: goto L_08AA0D84;
    case 225u: goto L_08AA0D88;
    case 226u: goto L_08AA0DC4;
    case 227u: goto L_08AA0DD8;
    case 228u: goto L_08AA0DE0;
    case 229u: goto L_08AA0DF0;
    case 230u: goto L_08AA0DF8;
    case 231u: goto L_08AA0E08;
    case 232u: goto L_08AA0E10;
    case 233u: goto L_08AA0E1C;
    case 234u: goto L_08AA0E2C;
    case 235u: goto L_08AA0E34;
    case 236u: goto L_08AA0E3C;
    case 237u: goto L_08AA0E48;
    case 238u: goto L_08AA0E50;
    case 239u: goto L_08AA0E58;
    case 240u: goto L_08AA0E68;
    case 241u: goto L_08AA0E70;
    case 242u: goto L_08AA0E94;
    case 243u: goto L_08AA0F14;
    case 244u: goto L_08AA0F68;
    case 245u: goto L_08AA0FA4;
    case 246u: goto L_08AA0FBC;
    case 247u: goto L_08AA0FC4;
    case 248u: goto L_08AA0FC8;
    case 249u: goto L_08AA0FD4;
    case 250u: goto L_08AA0FDC;
    case 251u: goto L_08AA0FE4;
    case 252u: goto L_08AA1058;
    case 253u: goto L_08AA106C;
    case 254u: goto L_08AA1080;
    case 255u: goto L_08AA1090;
    case 256u: goto L_08AA1098;
    case 257u: goto L_08AA10A0;
    case 258u: goto L_08AA10BC;
    case 259u: goto L_08AA10C4;
    case 260u: goto L_08AA10D4;
    case 261u: goto L_08AA10E4;
    case 262u: goto L_08AA10EC;
    case 263u: goto L_08AA10F4;
    case 264u: goto L_08AA10F8;
    case 265u: goto L_08AA110C;
    case 266u: goto L_08AA1114;
    case 267u: goto L_08AA111C;
    case 268u: goto L_08AA1138;
    case 269u: goto L_08AA1140;
    case 270u: goto L_08AA1150;
    case 271u: goto L_08AA1160;
    case 272u: goto L_08AA1170;
    case 273u: goto L_08AA1178;
    case 274u: goto L_08AA1180;
    case 275u: goto L_08AA1188;
    case 276u: goto L_08AA119C;
    case 277u: goto L_08AA11AC;
    case 278u: goto L_08AA11F8;
    case 279u: goto L_08AA1214;
    case 280u: goto L_08AA122C;
    case 281u: goto L_08AA1234;
    case 282u: goto L_08AA1238;
    case 283u: goto L_08AA1240;
    case 284u: goto L_08AA1280;
    case 285u: goto L_08AA1288;
    case 286u: goto L_08AA1298;
    case 287u: goto L_08AA129C;
    case 288u: goto L_08AA12AC;
    case 289u: goto L_08AA1300;
    case 290u: goto L_08AA1320;
    case 291u: goto L_08AA1328;
    case 292u: goto L_08AA1334;
    case 293u: goto L_08AA1340;
    case 294u: goto L_08AA1348;
    case 295u: goto L_08AA1350;
    case 296u: goto L_08AA1358;
    case 297u: goto L_08AA1360;
    case 298u: goto L_08AA136C;
    case 299u: goto L_08AA1388;
    case 300u: goto L_08AA1390;
    case 301u: goto L_08AA1398;
    case 302u: goto L_08AA13A0;
    case 303u: goto L_08AA13A8;
    case 304u: goto L_08AA13B4;
    case 305u: goto L_08AA13C4;
    case 306u: goto L_08AA13CC;
    case 307u: goto L_08AA13D4;
    case 308u: goto L_08AA13DC;
    case 309u: goto L_08AA13E4;
    case 310u: goto L_08AA1424;
    case 311u: goto L_08AA1434;
    case 312u: goto L_08AA1440;
    case 313u: goto L_08AA1450;
    case 314u: goto L_08AA145C;
    case 315u: goto L_08AA1460;
    case 316u: goto L_08AA1468;
    case 317u: goto L_08AA148C;
    case 318u: goto L_08AA1494;
    case 319u: goto L_08AA14A4;
    case 320u: goto L_08AA14AC;
    case 321u: goto L_08AA14D0;
    case 322u: goto L_08AA14D8;
    case 323u: goto L_08AA14E0;
    case 324u: goto L_08AA14FC;
    case 325u: goto L_08AA1510;
    case 326u: goto L_08AA1518;
    case 327u: goto L_08AA1520;
    case 328u: goto L_08AA1550;
    case 329u: goto L_08AA1580;
    case 330u: goto L_08AA15B0;
    case 331u: goto L_08AA15DC;
    case 332u: goto L_08AA1608;
    case 333u: goto L_08AA1634;
    case 334u: goto L_08AA163C;
    case 335u: goto L_08AA164C;
    case 336u: goto L_08AA165C;
    case 337u: goto L_08AA1668;
    case 338u: goto L_08AA1678;
    case 339u: goto L_08AA167C;
    case 340u: goto L_08AA1684;
    case 341u: goto L_08AA1690;
    case 342u: goto L_08AA169C;
    case 343u: goto L_08AA16B8;
    case 344u: goto L_08AA16BC;
    case 345u: goto L_08AA16C0;
    case 346u: goto L_08AA16C8;
    case 347u: goto L_08AA16F4;
    case 348u: goto L_08AA1704;
    case 349u: goto L_08AA1710;
    case 350u: goto L_08AA171C;
    case 351u: goto L_08AA1730;
    case 352u: goto L_08AA1738;
    case 353u: goto L_08AA1748;
    case 354u: goto L_08AA1758;
    case 355u: goto L_08AA175C;
    case 356u: goto L_08AA1764;
    case 357u: goto L_08AA1768;
    case 358u: goto L_08AA1770;
    case 359u: goto L_08AA1788;
    case 360u: goto L_08AA178C;
    case 361u: goto L_08AA1790;
    case 362u: goto L_08AA17C4;
    case 363u: goto L_08AA17CC;
    case 364u: goto L_08AA17E4;
    case 365u: goto L_08AA17EC;
    case 366u: goto L_08AA17F8;
    case 367u: goto L_08AA1800;
    case 368u: goto L_08AA1814;
    case 369u: goto L_08AA181C;
    case 370u: goto L_08AA182C;
    case 371u: goto L_08AA183C;
    case 372u: goto L_08AA1840;
    case 373u: goto L_08AA1848;
    case 374u: goto L_08AA184C;
    case 375u: goto L_08AA1854;
    case 376u: goto L_08AA186C;
    case 377u: goto L_08AA1870;
    case 378u: goto L_08AA1874;
    case 379u: goto L_08AA18A8;
    case 380u: goto L_08AA18B0;
    case 381u: goto L_08AA18C0;
    case 382u: goto L_08AA18CC;
    case 383u: goto L_08AA18F8;
    case 384u: goto L_08AA1900;
    case 385u: goto L_08AA1910;
    case 386u: goto L_08AA1920;
    case 387u: goto L_08AA1934;
    case 388u: goto L_08AA195C;
    case 389u: goto L_08AA1974;
    case 390u: goto L_08AA197C;
    case 391u: goto L_08AA1A28;
    case 392u: goto L_08AA1A30;
    case 393u: goto L_08AA1A38;
    case 394u: goto L_08AA1A44;
    case 395u: goto L_08AA1A4C;
    case 396u: goto L_08AA1A50;
    case 397u: goto L_08AA1AFC;
    case 398u: goto L_08AA1B04;
    case 399u: goto L_08AA1BB0;
    case 400u: goto L_08AA1BC0;
    case 401u: goto L_08AA1BC8;
    case 402u: goto L_08AA1BD0;
    case 403u: goto L_08AA1BE0;
    case 404u: goto L_08AA1BE8;
    case 405u: goto L_08AA1BEC;
    case 406u: goto L_08AA1C0C;
    case 407u: goto L_08AA1C54;
    case 408u: goto L_08AA1CEC;
    case 409u: goto L_08AA1D1C;
    case 410u: goto L_08AA1D4C;
    case 411u: goto L_08AA1D7C;
    case 412u: goto L_08AA1DD4;
    case 413u: goto L_08AA1DEC;
    case 414u: goto L_08AA1E10;
    case 415u: goto L_08AA1E24;
    case 416u: goto L_08AA1E40;
    case 417u: goto L_08AA1E5C;
    case 418u: goto L_08AA1E74;
    case 419u: goto L_08AA1E80;
    case 420u: goto L_08AA1E88;
    case 421u: goto L_08AA1EC4;
    case 422u: goto L_08AA1ECC;
    case 423u: goto L_08AA1ED4;
    case 424u: goto L_08AA1EDC;
    case 425u: goto L_08AA1EE8;
    case 426u: goto L_08AA1F00;
    case 427u: goto L_08AA1F0C;
    case 428u: goto L_08AA1F14;
    case 429u: goto L_08AA1F50;
    case 430u: goto L_08AA1F58;
    case 431u: goto L_08AA1F60;
    case 432u: goto L_08AA1F68;
    case 433u: goto L_08AA1F8C;
    case 434u: goto L_08AA1FB0;
    case 435u: goto L_08AA1FB4;
    case 436u: goto L_08AA1FE8;
    case 437u: goto L_08AA2040;
    case 438u: goto L_08AA20E4;
    case 439u: goto L_08AA20EC;
    case 440u: goto L_08AA20F4;
    case 441u: goto L_08AA20FC;
    case 442u: goto L_08AA2104;
    case 443u: goto L_08AA210C;
    case 444u: goto L_08AA2140;
    case 445u: goto L_08AA215C;
    case 446u: goto L_08AA2164;
    case 447u: goto L_08AA2178;
    case 448u: goto L_08AA2180;
    case 449u: goto L_08AA2198;
    case 450u: goto L_08AA21A0;
    case 451u: goto L_08AA21A8;
    case 452u: goto L_08AA21D8;
    case 453u: goto L_08AA21E0;
    case 454u: goto L_08AA21FC;
    case 455u: goto L_08AA2280;
    case 456u: goto L_08AA2290;
    case 457u: goto L_08AA22A4;
    case 458u: goto L_08AA22C8;
    case 459u: goto L_08AA22D4;
    case 460u: goto L_08AA22DC;
    case 461u: goto L_08AA22F4;
    case 462u: goto L_08AA2304;
    case 463u: goto L_08AA231C;
    case 464u: goto L_08AA2324;
    case 465u: goto L_08AA232C;
    case 466u: goto L_08AA2334;
    case 467u: goto L_08AA2348;
    case 468u: goto L_08AA2370;
    case 469u: goto L_08AA237C;
    case 470u: goto L_08AA2388;
    case 471u: goto L_08AA239C;
    case 472u: goto L_08AA23A8;
    case 473u: goto L_08AA23B4;
    case 474u: goto L_08AA23C4;
    case 475u: goto L_08AA23CC;
    case 476u: goto L_08AA23D8;
    case 477u: goto L_08AA23E8;
    case 478u: goto L_08AA23F0;
    case 479u: goto L_08AA23F8;
    case 480u: goto L_08AA2424;
    case 481u: goto L_08AA2428;
    case 482u: goto L_08AA2430;
    case 483u: goto L_08AA2438;
    case 484u: goto L_08AA245C;
    case 485u: goto L_08AA2460;
    case 486u: goto L_08AA2468;
    case 487u: goto L_08AA2470;
    case 488u: goto L_08AA2478;
    case 489u: goto L_08AA2494;
    case 490u: goto L_08AA24A0;
    case 491u: goto L_08AA24C8;
    case 492u: goto L_08AA24D8;
    case 493u: goto L_08AA24E0;
    case 494u: goto L_08AA24EC;
    case 495u: goto L_08AA24F8;
    case 496u: goto L_08AA2500;
    case 497u: goto L_08AA2508;
    case 498u: goto L_08AA251C;
    case 499u: goto L_08AA2528;
    case 500u: goto L_08AA2538;
    case 501u: goto L_08AA2540;
    case 502u: goto L_08AA2550;
    case 503u: goto L_08AA2558;
    case 504u: goto L_08AA2578;
    case 505u: goto L_08AA2588;
    case 506u: goto L_08AA2598;
    case 507u: goto L_08AA25A8;
    case 508u: goto L_08AA25BC;
    case 509u: goto L_08AA25C4;
    case 510u: goto L_08AA25CC;
    case 511u: goto L_08AA25D4;
    case 512u: goto L_08AA2620;
    case 513u: goto L_08AA262C;
    case 514u: goto L_08AA263C;
    case 515u: goto L_08AA2648;
    case 516u: goto L_08AA2654;
    case 517u: goto L_08AA2660;
    case 518u: goto L_08AA2664;
    case 519u: goto L_08AA266C;
    case 520u: goto L_08AA2670;
    case 521u: goto L_08AA2674;
    case 522u: goto L_08AA267C;
    case 523u: goto L_08AA269C;
    case 524u: goto L_08AA26A8;
    case 525u: goto L_08AA26B8;
    case 526u: goto L_08AA2700;
    case 527u: goto L_08AA277C;
    case 528u: goto L_08AA2784;
    case 529u: goto L_08AA2794;
    case 530u: goto L_08AA279C;
    case 531u: goto L_08AA27D0;
    case 532u: goto L_08AA27EC;
    case 533u: goto L_08AA27F4;
    case 534u: goto L_08AA2808;
    case 535u: goto L_08AA2810;
    case 536u: goto L_08AA2830;
    case 537u: goto L_08AA2840;
    case 538u: goto L_08AA2858;
    case 539u: goto L_08AA2860;
    case 540u: goto L_08AA2868;
    case 541u: goto L_08AA2870;
    case 542u: goto L_08AA2878;
    case 543u: goto L_08AA2880;
    case 544u: goto L_08AA2894;
    case 545u: goto L_08AA28A8;
    case 546u: goto L_08AA28C0;
    case 547u: goto L_08AA28C8;
    case 548u: goto L_08AA28F4;
    case 549u: goto L_08AA2900;
    case 550u: goto L_08AA290C;
    case 551u: goto L_08AA2914;
    case 552u: goto L_08AA292C;
    case 553u: goto L_08AA2950;
    case 554u: goto L_08AA2964;
    case 555u: goto L_08AA296C;
    case 556u: goto L_08AA2974;
    case 557u: goto L_08AA297C;
    case 558u: goto L_08AA2984;
    case 559u: goto L_08AA2994;
    case 560u: goto L_08AA29AC;
    case 561u: goto L_08AA29B4;
    case 562u: goto L_08AA29C0;
    case 563u: goto L_08AA29D8;
    case 564u: goto L_08AA29EC;
    case 565u: goto L_08AA2A04;
    case 566u: goto L_08AA2A0C;
    case 567u: goto L_08AA2A14;
    case 568u: goto L_08AA2A40;
    case 569u: goto L_08AA2A4C;
    case 570u: goto L_08AA2A5C;
    case 571u: goto L_08AA2A68;
    case 572u: goto L_08AA2A74;
    case 573u: goto L_08AA2A8C;
    case 574u: goto L_08AA2AA4;
    case 575u: goto L_08AA2AB4;
    case 576u: goto L_08AA2ABC;
    case 577u: goto L_08AA2AC4;
    case 578u: goto L_08AA2AE0;
    case 579u: goto L_08AA2AE8;
    case 580u: goto L_08AA2AF0;
    case 581u: goto L_08AA2B30;
    case 582u: goto L_08AA2B38;
    case 583u: goto L_08AA2B40;
    case 584u: goto L_08AA2B48;
    case 585u: goto L_08AA2B70;
    case 586u: goto L_08AA2B78;
    case 587u: goto L_08AA2B84;
    case 588u: goto L_08AA2B90;
    case 589u: goto L_08AA2BA4;
    case 590u: goto L_08AA2BB0;
    case 591u: goto L_08AA2BC0;
    case 592u: goto L_08AA2BC8;
    case 593u: goto L_08AA2BD8;
    case 594u: goto L_08AA2BE0;
    case 595u: goto L_08AA2BF0;
    case 596u: goto L_08AA2BFC;
    case 597u: goto L_08AA2C0C;
    case 598u: goto L_08AA2C48;
    case 599u: goto L_08AA2C94;
    case 600u: goto L_08AA2CA0;
    case 601u: goto L_08AA2CE4;
    case 602u: goto L_08AA2CEC;
    case 603u: goto L_08AA2CF4;
    case 604u: goto L_08AA2CFC;
    case 605u: goto L_08AA2D04;
    case 606u: goto L_08AA2D0C;
    case 607u: goto L_08AA2D40;
    case 608u: goto L_08AA2D5C;
    case 609u: goto L_08AA2D64;
    case 610u: goto L_08AA2D90;
    case 611u: goto L_08AA2D98;
    case 612u: goto L_08AA2DB8;
    case 613u: goto L_08AA2DC8;
    case 614u: goto L_08AA2DDC;
    case 615u: goto L_08AA2DE4;
    case 616u: goto L_08AA2DEC;
    case 617u: goto L_08AA2DF4;
    case 618u: goto L_08AA2DF8;
    case 619u: goto L_08AA2E08;
    case 620u: goto L_08AA2E14;
    case 621u: goto L_08AA2E2C;
    case 622u: goto L_08AA2E34;
    case 623u: goto L_08AA2E60;
    case 624u: goto L_08AA2E6C;
    case 625u: goto L_08AA2E78;
    case 626u: goto L_08AA2E80;
    case 627u: goto L_08AA2E98;
    case 628u: goto L_08AA2EBC;
    case 629u: goto L_08AA2ED4;
    case 630u: goto L_08AA2EE4;
    case 631u: goto L_08AA2EEC;
    case 632u: goto L_08AA2EF4;
    case 633u: goto L_08AA2EFC;
    case 634u: goto L_08AA2F10;
    case 635u: goto L_08AA2F24;
    case 636u: goto L_08AA2F2C;
    case 637u: goto L_08AA2F58;
    case 638u: goto L_08AA2F64;
    case 639u: goto L_08AA2F6C;
    case 640u: goto L_08AA2F74;
    case 641u: goto L_08AA2F84;
    case 642u: goto L_08AA2F90;
    case 643u: goto L_08AA2FA0;
    case 644u: goto L_08AA2FB8;
    case 645u: goto L_08AA2FC8;
    case 646u: goto L_08AA2FD0;
    case 647u: goto L_08AA2FD8;
    case 648u: goto L_08AA2FE0;
    case 649u: goto L_08AA2FF4;
    case 650u: goto L_08AA303C;
    case 651u: goto L_08AA3044;
    case 652u: goto L_08AA3050;
    case 653u: goto L_08AA3058;
    case 654u: goto L_08AA3060;
    case 655u: goto L_08AA3068;
    case 656u: goto L_08AA3070;
    case 657u: goto L_08AA3078;
    case 658u: goto L_08AA3080;
    case 659u: goto L_08AA3090;
    case 660u: goto L_08AA309C;
    case 661u: goto L_08AA30D0;
    case 662u: goto L_08AA3164;
    case 663u: goto L_08AA3190;
    case 664u: goto L_08AA31A8;
    case 665u: goto L_08AA31B4;
    case 666u: goto L_08AA31CC;
    case 667u: goto L_08AA31D8;
    case 668u: goto L_08AA31F0;
    case 669u: goto L_08AA31FC;
    case 670u: goto L_08AA3214;
    case 671u: goto L_08AA3220;
    case 672u: goto L_08AA3238;
    case 673u: goto L_08AA3244;
    case 674u: goto L_08AA3260;
    case 675u: goto L_08AA326C;
    case 676u: goto L_08AA327C;
    case 677u: goto L_08AA3290;
    case 678u: goto L_08AA32A4;
    case 679u: goto L_08AA32B0;
    case 680u: goto L_08AA32C8;
    case 681u: goto L_08AA32D4;
    case 682u: goto L_08AA32FC;
    case 683u: goto L_08AA3328;
    case 684u: goto L_08AA3354;
    case 685u: goto L_08AA3364;
    case 686u: goto L_08AA3384;
    case 687u: goto L_08AA3394;
    case 688u: goto L_08AA33B4;
    case 689u: goto L_08AA33C0;
    case 690u: goto L_08AA33E4;
    case 691u: goto L_08AA3400;
    case 692u: goto L_08AA3410;
    case 693u: goto L_08AA3418;
    case 694u: goto L_08AA3424;
    case 695u: goto L_08AA3430;
    case 696u: goto L_08AA3444;
    case 697u: goto L_08AA345C;
    case 698u: goto L_08AA3474;
    case 699u: goto L_08AA3484;
    case 700u: goto L_08AA3490;
    case 701u: goto L_08AA3498;
    case 702u: goto L_08AA34A0;
    case 703u: goto L_08AA34C0;
    case 704u: goto L_08AA34D4;
    case 705u: goto L_08AA34DC;
    case 706u: goto L_08AA34E4;
    case 707u: goto L_08AA34EC;
    case 708u: goto L_08AA34F8;
    case 709u: goto L_08AA3520;
    case 710u: goto L_08AA3544;
    case 711u: goto L_08AA3554;
    case 712u: goto L_08AA355C;
    case 713u: goto L_08AA3564;
    case 714u: goto L_08AA356C;
    case 715u: goto L_08AA3578;
    case 716u: goto L_08AA35B0;
    case 717u: goto L_08AA35B8;
    case 718u: goto L_08AA35C4;
    case 719u: goto L_08AA35D4;
    case 720u: goto L_08AA35DC;
    case 721u: goto L_08AA35E8;
    case 722u: goto L_08AA35F0;
    case 723u: goto L_08AA35FC;
    case 724u: goto L_08AA3604;
    case 725u: goto L_08AA3620;
    case 726u: goto L_08AA363C;
    case 727u: goto L_08AA3654;
    case 728u: goto L_08AA3668;
    case 729u: goto L_08AA3678;
    case 730u: goto L_08AA3694;
    case 731u: goto L_08AA36AC;
    case 732u: goto L_08AA36B4;
    case 733u: goto L_08AA36C0;
    case 734u: goto L_08AA36D0;
    case 735u: goto L_08AA36D8;
    case 736u: goto L_08AA36E0;
    case 737u: goto L_08AA36E8;
    case 738u: goto L_08AA36F4;
    case 739u: goto L_08AA3700;
    case 740u: goto L_08AA3704;
    case 741u: goto L_08AA372C;
    case 742u: goto L_08AA3744;
    case 743u: goto L_08AA3754;
    case 744u: goto L_08AA375C;
    case 745u: goto L_08AA3764;
    case 746u: goto L_08AA3790;
    case 747u: goto L_08AA37B4;
    case 748u: goto L_08AA37C0;
    case 749u: goto L_08AA37F8;
    case 750u: goto L_08AA3804;
    case 751u: goto L_08AA381C;
    case 752u: goto L_08AA382C;
    case 753u: goto L_08AA3834;
    case 754u: goto L_08AA383C;
    case 755u: goto L_08AA3854;
    case 756u: goto L_08AA386C;
    case 757u: goto L_08AA3880;
    case 758u: goto L_08AA3888;
    case 759u: goto L_08AA3898;
    case 760u: goto L_08AA38A0;
    case 761u: goto L_08AA38A8;
    case 762u: goto L_08AA38B4;
    case 763u: goto L_08AA38B8;
    case 764u: goto L_08AA38C0;
    case 765u: goto L_08AA38CC;
    case 766u: goto L_08AA38D4;
    case 767u: goto L_08AA38DC;
    case 768u: goto L_08AA38E4;
    case 769u: goto L_08AA38EC;
    case 770u: goto L_08AA38F4;
    case 771u: goto L_08AA3900;
    case 772u: goto L_08AA3914;
    case 773u: goto L_08AA391C;
    case 774u: goto L_08AA3930;
    case 775u: goto L_08AA3948;
    case 776u: goto L_08AA39C8;
    case 777u: goto L_08AA39D0;
    case 778u: goto L_08AA39EC;
    case 779u: goto L_08AA3A08;
    case 780u: goto L_08AA3A1C;
    case 781u: goto L_08AA3A24;
    case 782u: goto L_08AA3A30;
    case 783u: goto L_08AA3A38;
    case 784u: goto L_08AA3A50;
    case 785u: goto L_08AA3A54;
    case 786u: goto L_08AA3A70;
    case 787u: goto L_08AA3A80;
    case 788u: goto L_08AA3AD0;
    case 789u: goto L_08AA3B00;
    case 790u: goto L_08AA3B08;
    case 791u: goto L_08AA3B14;
    case 792u: goto L_08AA3B38;
    case 793u: goto L_08AA3B80;
    case 794u: goto L_08AA3B94;
    case 795u: goto L_08AA3BB8;
    case 796u: goto L_08AA3BD8;
    case 797u: goto L_08AA3BEC;
    case 798u: goto L_08AA3BF4;
    case 799u: goto L_08AA3C24;
    case 800u: goto L_08AA3C54;
    case 801u: goto L_08AA3C60;
    case 802u: goto L_08AA3C78;
    case 803u: goto L_08AA3C88;
    case 804u: goto L_08AA3C9C;
    case 805u: goto L_08AA3CB8;
    case 806u: goto L_08AA3CCC;
    case 807u: goto L_08AA3CDC;
    case 808u: goto L_08AA3CE4;
    case 809u: goto L_08AA3D0C;
    case 810u: goto L_08AA3D28;
    case 811u: goto L_08AA3D3C;
    case 812u: goto L_08AA3D48;
    case 813u: goto L_08AA3D4C;
    case 814u: goto L_08AA3D54;
    case 815u: goto L_08AA3D64;
    case 816u: goto L_08AA3D8C;
    case 817u: goto L_08AA3D9C;
    case 818u: goto L_08AA3DA4;
    case 819u: goto L_08AA3DC0;
    case 820u: goto L_08AA3DCC;
    case 821u: goto L_08AA3DE4;
    case 822u: goto L_08AA3E00;
    case 823u: goto L_08AA3E18;
    case 824u: goto L_08AA3E28;
    case 825u: goto L_08AA3E30;
    case 826u: goto L_08AA3E38;
    case 827u: goto L_08AA3E48;
    case 828u: goto L_08AA3E5C;
    case 829u: goto L_08AA3E80;
    case 830u: goto L_08AA3E8C;
    case 831u: goto L_08AA3EB8;
    case 832u: goto L_08AA3EC0;
    case 833u: goto L_08AA3EF4;
    case 834u: goto L_08AA3EFC;
    case 835u: goto L_08AA3F38;
    case 836u: goto L_08AA3F50;
    case 837u: goto L_08AA3F60;
    case 838u: goto L_08AA3F6C;
    case 839u: goto L_08AA3F84;
    case 840u: goto L_08AA3F98;
    case 841u: goto L_08AA3FA0;
    case 842u: goto L_08AA3FAC;
    case 843u: goto L_08AA3FB8;
    case 844u: goto L_08AA3FC0;
    case 845u: goto L_08AA3FC8;
    case 846u: goto L_08AA3FD4;
    case 847u: goto L_08AA3FDC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AA0000:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), 0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA0018u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(340));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 422u, 0x088A6CD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA0018u) goto L_08AA0018;
    return;
L_08AA0018:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0054;
      }
      goto L_08AA0020;
    }
L_08AA0020:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_08AA0028;
L_08AA0028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(340)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0044;
      }
      goto L_08AA0034;
    }
L_08AA0034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(340)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AA0044;
      }
      goto L_08AA0040;
    }
L_08AA0040:
    ctx.gpr[16] = (0u | 0u);
    goto L_08AA0044;
L_08AA0044:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA0028;
      }
      goto L_08AA0054;
    }
L_08AA0054:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0114;
      }
      goto L_08AA005C;
    }
L_08AA005C:
    ctx.gpr[31] = (0x08AA0064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08AA0064u) goto L_08AA0064;
    return;
L_08AA0064:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AA0098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08AA0098u) goto L_08AA0098;
    return;
L_08AA0098:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25860)));
    ctx.gpr[31] = (0x08AA00B0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25856)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08AA00B0u) goto L_08AA00B0;
    return;
L_08AA00B0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA00D4;
      }
      goto L_08AA00CC;
    }
L_08AA00CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA00D4;
      }
      goto L_08AA00D4;
    }
L_08AA00D4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA00F8;
      }
      goto L_08AA00DC;
    }
L_08AA00DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 28u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AA00F0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 549u, 0x089BA410u>(ctx, &aot_mem) && ctx.pc == 0x08AA00F0u) goto L_08AA00F0;
    return;
L_08AA00F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA010C;
      }
      goto L_08AA00F8;
    }
L_08AA00F8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 28u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AA010Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 549u, 0x089BA410u>(ctx, &aot_mem) && ctx.pc == 0x08AA010Cu) goto L_08AA010C;
    return;
L_08AA010C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0158;
      }
      goto L_08AA0114;
    }
L_08AA0114:
    ctx.gpr[31] = (0x08AA011Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08AA011Cu) goto L_08AA011C;
    return;
L_08AA011C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25884)));
    ctx.gpr[31] = (0x08AA0134u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25880)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0134u) goto L_08AA0134;
    return;
L_08AA0134:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08AA0158u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x08AA0158u) goto L_08AA0158;
    return;
L_08AA0158:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA01FC;
      }
      goto L_08AA0160;
    }
L_08AA0160:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA016Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 67u, 0x089A43B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA016Cu) goto L_08AA016C;
    return;
L_08AA016C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[16] = (0u | 37u);
      if (branch_taken) {
          goto L_08AA01B0;
      }
      goto L_08AA017C;
    }
L_08AA017C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA01A4;
      }
      goto L_08AA0188;
    }
L_08AA0188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
        goto L_08AA01A4;
    }
    goto L_08AA0194;
L_08AA0194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08AA01A0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08AA01A0u) goto L_08AA01A0;
    return;
L_08AA01A0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
    goto L_08AA01A4;
L_08AA01A4:
    ctx.gpr[31] = (0x08AA01ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x08AA01ACu) goto L_08AA01AC;
    return;
L_08AA01AC:
    ctx.gpr[16] = (0u | 37u);
    goto L_08AA01B0;
L_08AA01B0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(844), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA01F4;
      }
      goto L_08AA01C4;
    }
L_08AA01C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA01EC;
      }
      goto L_08AA01D0;
    }
L_08AA01D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(912), 0u);
        goto L_08AA01EC;
    }
    goto L_08AA01DC;
L_08AA01DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08AA01E8u);
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08AA01E8u) goto L_08AA01E8;
    return;
L_08AA01E8:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(912), 0u);
    goto L_08AA01EC;
L_08AA01EC:
    ctx.gpr[31] = (0x08AA01F4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x08AA01F4u) goto L_08AA01F4;
    return;
L_08AA01F4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(844), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AA0200;
      }
      goto L_08AA01FC;
    }
L_08AA01FC:
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    goto L_08AA0200;
L_08AA0200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08AA020Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 313u, 0x08925FB4u>(ctx, &aot_mem) && ctx.pc == 0x08AA020Cu) goto L_08AA020C;
    return;
L_08AA020C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0228;
      }
      goto L_08AA021C;
    }
L_08AA021C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0230;
      }
      goto L_08AA0228;
    }
L_08AA0228:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA0258;
      }
      goto L_08AA0230;
    }
L_08AA0230:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0240;
      }
      goto L_08AA0238;
    }
L_08AA0238:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA0258;
      }
      goto L_08AA0240;
    }
L_08AA0240:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[21] = (ctx.gpr[23] | 0u);
    ctx.gpr[16] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 803u, 0x08A9FA78u>(ctx, &aot_mem); return;
      }
      goto L_08AA0254;
    }
L_08AA0254:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AA0258;
L_08AA0258:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA02A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[19] = (0u | 7u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x08AA02ECu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08AA02ECu) goto L_08AA02EC;
    return;
L_08AA02EC:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08AA0314u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 391u, 0x088724E0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0314u) goto L_08AA0314;
    return;
L_08AA0314:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 147 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 182 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA0348;
      }
      goto L_08AA0324;
    }
L_08AA0324:
    ctx.gpr[5] = (0u | 138u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-954));
      if (branch_taken) {
          goto L_08AA03E0;
      }
      goto L_08AA0330;
    }
L_08AA0330:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-967));
      if (branch_taken) {
          goto L_08AA03F0;
      }
      goto L_08AA0338;
    }
L_08AA0338:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA0440;
      }
      goto L_08AA0340;
    }
L_08AA0340:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0458;
      }
      goto L_08AA0348;
    }
L_08AA0348:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 196u);
      if (branch_taken) {
          goto L_08AA0370;
      }
      goto L_08AA0350;
    }
L_08AA0350:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 167 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-147));
        goto L_08AA0388;
    }
    goto L_08AA035C;
L_08AA035C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 181 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0458;
      }
      goto L_08AA0368;
    }
L_08AA0368:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0440;
      }
      goto L_08AA0370;
    }
L_08AA0370:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA0458;
      }
      goto L_08AA0378;
    }
L_08AA0378:
    ctx.gpr[22] = (0u | 6u);
    ctx.gpr[23] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA06A0;
      }
      goto L_08AA0388;
    }
L_08AA0388:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-19760)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA03A0:
    ctx.gpr[22] = (0u | 6u);
    ctx.gpr[23] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA06A0;
      }
      goto L_08AA03B0;
    }
L_08AA03B0:
    ctx.gpr[22] = (0u | 6u);
    ctx.gpr[23] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA06A0;
      }
      goto L_08AA03C0;
    }
L_08AA03C0:
    ctx.gpr[22] = (0u | 6u);
    ctx.gpr[23] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA06A0;
      }
      goto L_08AA03D0;
    }
L_08AA03D0:
    ctx.gpr[22] = (0u | 16u);
    ctx.gpr[23] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA06A0;
      }
      goto L_08AA03E0;
    }
L_08AA03E0:
    ctx.gpr[22] = (0u | 17u);
    ctx.gpr[23] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA06A0;
      }
      goto L_08AA03F0;
    }
L_08AA03F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0438;
      }
      goto L_08AA0400;
    }
L_08AA0400:
    ctx.gpr[22] = (0u | 6u);
    ctx.gpr[23] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0424;
      }
      goto L_08AA0410;
    }
L_08AA0410:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17400)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[20]);
    goto L_08AA041C;
L_08AA041C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA06A0;
      }
      goto L_08AA0424;
    }
L_08AA0424:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17400)));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA041C;
      }
      goto L_08AA0438;
    }
L_08AA0438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0458;
      }
      goto L_08AA0440;
    }
L_08AA0440:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0458;
      }
      goto L_08AA0448;
    }
L_08AA0448:
    ctx.gpr[23] = (0u | 9u);
    ctx.gpr[22] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA06A0;
      }
      goto L_08AA0458;
    }
L_08AA0458:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA04C0;
      }
      goto L_08AA046C;
    }
L_08AA046C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[30] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5960));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA04B0;
      }
      goto L_08AA0494;
    }
L_08AA0494:
    ctx.gpr[22] = (ctx.gpr[30] + static_cast<std::uint32_t>(7));
    ctx.gpr[31] = (0x08AA04A0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 437u, 0x08A9E374u>(ctx, &aot_mem) && ctx.pc == 0x08AA04A0u) goto L_08AA04A0;
    return;
L_08AA04A0:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[21] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA04C0;
      }
      goto L_08AA04B0;
    }
L_08AA04B0:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA046C;
      }
      goto L_08AA04C0;
    }
L_08AA04C0:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA04D4;
      }
      goto L_08AA04CC;
    }
L_08AA04CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA06A0;
      }
      goto L_08AA04D4;
    }
L_08AA04D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA0500;
      }
      goto L_08AA04EC;
    }
L_08AA04EC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA0500;
L_08AA0500:
    ctx.gpr[31] = (0x08AA0508u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(114)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 398u, 0x08A9E020u>(ctx, &aot_mem) && ctx.pc == 0x08AA0508u) goto L_08AA0508;
    return;
L_08AA0508:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA0664;
      }
      goto L_08AA0518;
    }
L_08AA0518:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA0540;
      }
      goto L_08AA052C;
    }
L_08AA052C:
    ctx.gpr[4] = (ctx.gpr[23] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA0540;
L_08AA0540:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AA0558u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA0558u) goto L_08AA0558;
    return;
L_08AA0558:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA064C;
      }
      goto L_08AA0560;
    }
L_08AA0560:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (0u | 202u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AA0594;
      }
      goto L_08AA0574;
    }
L_08AA0574:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (0u | 208u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AA0594;
      }
      goto L_08AA0584;
    }
L_08AA0584:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (0u | 207u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AA05D0;
      }
      goto L_08AA0594;
    }
L_08AA0594:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA05BC;
      }
      goto L_08AA05A8;
    }
L_08AA05A8:
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08AA05BC;
L_08AA05BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AA05D0;
      }
      goto L_08AA05CC;
    }
L_08AA05CC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08AA05D0;
L_08AA05D0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AA064C;
      }
      goto L_08AA05D8;
    }
L_08AA05D8:
    ctx.gpr[31] = (0x08AA05E0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 780u, 0x0889FB00u>(ctx, &aot_mem) && ctx.pc == 0x08AA05E0u) goto L_08AA05E0;
    return;
L_08AA05E0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AA064C;
      }
      goto L_08AA05E8;
    }
L_08AA05E8:
    ctx.gpr[31] = (0x08AA05F0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 793u, 0x0889FB70u>(ctx, &aot_mem) && ctx.pc == 0x08AA05F0u) goto L_08AA05F0;
    return;
L_08AA05F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA064C;
      }
      goto L_08AA05F8;
    }
L_08AA05F8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA0620;
      }
      goto L_08AA060C;
    }
L_08AA060C:
    ctx.gpr[4] = (ctx.gpr[23] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA0620;
L_08AA0620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(69))))));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA064C;
      }
      goto L_08AA0644;
    }
L_08AA0644:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0664;
      }
      goto L_08AA064C;
    }
L_08AA064C:
    ctx.gpr[31] = (0x08AA0654u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(114)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 416u, 0x08A9E1A0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0654u) goto L_08AA0654;
    return;
L_08AA0654:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA0518;
      }
      goto L_08AA0664;
    }
L_08AA0664:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA0674;
      }
      goto L_08AA0670;
    }
L_08AA0670:
    ctx.gpr[23] = (ctx.gpr[19] | 0u);
    goto L_08AA0674;
L_08AA0674:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA069C;
      }
      goto L_08AA0688;
    }
L_08AA0688:
    ctx.gpr[4] = (ctx.gpr[23] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA069C;
L_08AA069C:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(48)));
    goto L_08AA06A0;
L_08AA06A0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AA071C;
      }
      goto L_08AA06A8;
    }
L_08AA06A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA06CC;
      }
      goto L_08AA06B8;
    }
L_08AA06B8:
    ctx.gpr[4] = (ctx.gpr[23] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA06CC;
L_08AA06CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AA06E4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA06E4u) goto L_08AA06E4;
    return;
L_08AA06E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA071C;
      }
      goto L_08AA06EC;
    }
L_08AA06EC:
    ctx.gpr[23] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA0718;
      }
      goto L_08AA0704;
    }
L_08AA0704:
    ctx.gpr[4] = (ctx.gpr[23] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA0718;
L_08AA0718:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    goto L_08AA071C;
L_08AA071C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AA0734u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08AA0804;
L_08AA0734:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 9u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA07A8;
      }
      goto L_08AA077C;
    }
L_08AA077C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08AA079Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA079Cu) goto L_08AA079C;
    return;
L_08AA079C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x08AA07A8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 576u, 0x0899F198u>(ctx, &aot_mem) && ctx.pc == 0x08AA07A8u) goto L_08AA07A8;
    return;
L_08AA07A8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA07B8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 728u, 0x08887A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA07B8u) goto L_08AA07B8;
    return;
L_08AA07B8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA07D0;
      }
      goto L_08AA07C0;
    }
L_08AA07C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_08AA07D0;
L_08AA07D0:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA0804:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    ctx.gpr[19] = (ctx.gpr[8] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[8] = (ctx.gpr[8] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AA0E58;
      }
      goto L_08AA0844;
    }
L_08AA0844:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-19680)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA0860:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AA086Cu);
    ctx.gpr[4] = (0u | 2160u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 251u, 0x0899DA4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA086Cu) goto L_08AA086C;
    return;
L_08AA086C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08AA0888;
      }
      goto L_08AA0878;
    }
L_08AA0878:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AA0884u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 147u, 0x089FD534u>(ctx, &aot_mem) && ctx.pc == 0x08AA0884u) goto L_08AA0884;
    return;
L_08AA0884:
    ctx.gpr[18] = (ctx.gpr[21] | 0u);
    goto L_08AA0888;
L_08AA0888:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AA08C4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA08C4u) goto L_08AA08C4;
    return;
L_08AA08C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08AA08D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08AA08D8u) goto L_08AA08D8;
    return;
L_08AA08D8:
    ctx.gpr[31] = (0x08AA08E0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA08E0u) goto L_08AA08E0;
    return;
L_08AA08E0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25816)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA099C;
      }
      goto L_08AA08F0;
    }
L_08AA08F0:
    ctx.gpr[31] = (0x08AA08F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08AA08F8u) goto L_08AA08F8;
    return;
L_08AA08F8:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
        goto L_08AA0914;
    }
    goto L_08AA0904;
L_08AA0904:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA0914;
      }
      goto L_08AA0914;
    }
L_08AA0914:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA093C;
      }
      goto L_08AA0920;
    }
L_08AA0920:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AA0970;
      }
      goto L_08AA0928;
    }
L_08AA0928:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08AA0958;
      }
      goto L_08AA0930;
    }
L_08AA0930:
    ctx.gpr[16] = (0u | 17u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0970;
      }
      goto L_08AA093C;
    }
L_08AA093C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA0964;
      }
      goto L_08AA0944;
    }
L_08AA0944:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0970;
      }
      goto L_08AA094C;
    }
L_08AA094C:
    ctx.gpr[16] = (0u | 22u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0970;
      }
      goto L_08AA0958;
    }
L_08AA0958:
    ctx.gpr[16] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0970;
      }
      goto L_08AA0964;
    }
L_08AA0964:
    ctx.gpr[16] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0970;
      }
      goto L_08AA0970;
    }
L_08AA0970:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA099C;
      }
      goto L_08AA0978;
    }
L_08AA0978:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA0988u);
    ctx.gpr[6] = (0u | 25001u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 645u, 0x0899F5C0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0988u) goto L_08AA0988;
    return;
L_08AA0988:
    ctx.gpr[31] = (0x08AA0990u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0990u) goto L_08AA0990;
    return;
L_08AA0990:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08AA099Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 596u, 0x0899F290u>(ctx, &aot_mem) && ctx.pc == 0x08AA099Cu) goto L_08AA099C;
    return;
L_08AA099C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA09D0;
      }
      goto L_08AA09AC;
    }
L_08AA09AC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA09D0;
      }
      goto L_08AA09B4;
    }
L_08AA09B4:
    ctx.gpr[31] = (0x08AA09BCu);
    ctx.gpr[4] = (0u | 224u);
    goto L_08AA3190;
L_08AA09BC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA09D0;
      }
      goto L_08AA09C8;
    }
L_08AA09C8:
    ctx.gpr[31] = (0x08AA09D0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 8u, 0x0898006Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA09D0u) goto L_08AA09D0;
    return;
L_08AA09D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AA0E70;
      }
      goto L_08AA09D8;
    }
L_08AA09D8:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08AA09E4u);
    ctx.gpr[4] = (0u | 2128u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 251u, 0x0899DA4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA09E4u) goto L_08AA09E4;
    return;
L_08AA09E4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08AA0A00;
      }
      goto L_08AA09F0;
    }
L_08AA09F0:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA09FCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 738u, 0x08A8F7E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA09FCu) goto L_08AA09FC;
    return;
L_08AA09FC:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_08AA0A00;
L_08AA0A00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AA0A3Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA0A3Cu) goto L_08AA0A3C;
    return;
L_08AA0A3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08AA0A50u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08AA0A50u) goto L_08AA0A50;
    return;
L_08AA0A50:
    ctx.gpr[31] = (0x08AA0A58u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0A58u) goto L_08AA0A58;
    return;
L_08AA0A58:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0A8C;
      }
      goto L_08AA0A68;
    }
L_08AA0A68:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0A8C;
      }
      goto L_08AA0A70;
    }
L_08AA0A70:
    ctx.gpr[31] = (0x08AA0A78u);
    ctx.gpr[4] = (0u | 224u);
    goto L_08AA3190;
L_08AA0A78:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0A8C;
      }
      goto L_08AA0A84;
    }
L_08AA0A84:
    ctx.gpr[31] = (0x08AA0A8Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 8u, 0x0898006Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0A8Cu) goto L_08AA0A8C;
    return;
L_08AA0A8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AA0E70;
      }
      goto L_08AA0A94;
    }
L_08AA0A94:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AA0AA0u);
    ctx.gpr[4] = (0u | 2096u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 251u, 0x0899DA4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0AA0u) goto L_08AA0AA0;
    return;
L_08AA0AA0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AA0AB8;
      }
      goto L_08AA0AAC;
    }
L_08AA0AAC:
    ctx.gpr[31] = (0x08AA0AB4u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 442u, 0x0894E898u>(ctx, &aot_mem) && ctx.pc == 0x08AA0AB4u) goto L_08AA0AB4;
    return;
L_08AA0AB4:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_08AA0AB8;
L_08AA0AB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AA0AF4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA0AF4u) goto L_08AA0AF4;
    return;
L_08AA0AF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x08AA0B08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08AA0B08u) goto L_08AA0B08;
    return;
L_08AA0B08:
    ctx.gpr[31] = (0x08AA0B10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0B10u) goto L_08AA0B10;
    return;
L_08AA0B10:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0B44;
      }
      goto L_08AA0B20;
    }
L_08AA0B20:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0B44;
      }
      goto L_08AA0B28;
    }
L_08AA0B28:
    ctx.gpr[31] = (0x08AA0B30u);
    ctx.gpr[4] = (0u | 224u);
    goto L_08AA3190;
L_08AA0B30:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0B44;
      }
      goto L_08AA0B3C;
    }
L_08AA0B3C:
    ctx.gpr[31] = (0x08AA0B44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 8u, 0x0898006Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0B44u) goto L_08AA0B44;
    return;
L_08AA0B44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AA0E70;
      }
      goto L_08AA0B4C;
    }
L_08AA0B4C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AA0B58u);
    ctx.gpr[4] = (0u | 2096u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 251u, 0x0899DA4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0B58u) goto L_08AA0B58;
    return;
L_08AA0B58:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AA0B70;
      }
      goto L_08AA0B64;
    }
L_08AA0B64:
    ctx.gpr[31] = (0x08AA0B6Cu);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 442u, 0x0894E898u>(ctx, &aot_mem) && ctx.pc == 0x08AA0B6Cu) goto L_08AA0B6C;
    return;
L_08AA0B6C:
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    goto L_08AA0B70;
L_08AA0B70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
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
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AA0BACu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA0BACu) goto L_08AA0BAC;
    return;
L_08AA0BAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x08AA0BC0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08AA0BC0u) goto L_08AA0BC0;
    return;
L_08AA0BC0:
    ctx.gpr[31] = (0x08AA0BC8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0BC8u) goto L_08AA0BC8;
    return;
L_08AA0BC8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0BFC;
      }
      goto L_08AA0BD8;
    }
L_08AA0BD8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0BFC;
      }
      goto L_08AA0BE0;
    }
L_08AA0BE0:
    ctx.gpr[31] = (0x08AA0BE8u);
    ctx.gpr[4] = (0u | 224u);
    goto L_08AA3190;
L_08AA0BE8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0BFC;
      }
      goto L_08AA0BF4;
    }
L_08AA0BF4:
    ctx.gpr[31] = (0x08AA0BFCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 8u, 0x0898006Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0BFCu) goto L_08AA0BFC;
    return;
L_08AA0BFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AA0E70;
      }
      goto L_08AA0C04;
    }
L_08AA0C04:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AA0C10u);
    ctx.gpr[4] = (0u | 2160u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 251u, 0x0899DA4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0C10u) goto L_08AA0C10;
    return;
L_08AA0C10:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08AA0C2C;
      }
      goto L_08AA0C1C;
    }
L_08AA0C1C:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AA0C28u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 147u, 0x089FD534u>(ctx, &aot_mem) && ctx.pc == 0x08AA0C28u) goto L_08AA0C28;
    return;
L_08AA0C28:
    ctx.gpr[18] = (ctx.gpr[21] | 0u);
    goto L_08AA0C2C;
L_08AA0C2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AA0C68u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA0C68u) goto L_08AA0C68;
    return;
L_08AA0C68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08AA0C7Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08AA0C7Cu) goto L_08AA0C7C;
    return;
L_08AA0C7C:
    ctx.gpr[31] = (0x08AA0C84u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0C84u) goto L_08AA0C84;
    return;
L_08AA0C84:
    ctx.gpr[31] = (0x08AA0C8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08AA0C8Cu) goto L_08AA0C8C;
    return;
L_08AA0C8C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25892)));
    ctx.gpr[31] = (0x08AA0CA4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25888)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0CA4u) goto L_08AA0CA4;
    return;
L_08AA0CA4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0CE4;
      }
      goto L_08AA0CC4;
    }
L_08AA0CC4:
    ctx.gpr[4] = (ctx.gpr[20] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5960));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-152)));
      if (branch_taken) {
          goto L_08AA0D00;
      }
      goto L_08AA0CE4;
    }
L_08AA0CE4:
    ctx.gpr[4] = (ctx.gpr[20] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5960));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-148)));
    goto L_08AA0D00;
L_08AA0D00:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AA0D10u);
    ctx.gpr[6] = (0u | 25001u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 645u, 0x0899F5C0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0D10u) goto L_08AA0D10;
    return;
L_08AA0D10:
    ctx.gpr[31] = (0x08AA0D18u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0D18u) goto L_08AA0D18;
    return;
L_08AA0D18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08AA0D24u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 596u, 0x0899F290u>(ctx, &aot_mem) && ctx.pc == 0x08AA0D24u) goto L_08AA0D24;
    return;
L_08AA0D24:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0D58;
      }
      goto L_08AA0D34;
    }
L_08AA0D34:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0D58;
      }
      goto L_08AA0D3C;
    }
L_08AA0D3C:
    ctx.gpr[31] = (0x08AA0D44u);
    ctx.gpr[4] = (0u | 224u);
    goto L_08AA3190;
L_08AA0D44:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0D58;
      }
      goto L_08AA0D50;
    }
L_08AA0D50:
    ctx.gpr[31] = (0x08AA0D58u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 8u, 0x0898006Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0D58u) goto L_08AA0D58;
    return;
L_08AA0D58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AA0E70;
      }
      goto L_08AA0D60;
    }
L_08AA0D60:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08AA0D6Cu);
    ctx.gpr[4] = (0u | 2160u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 251u, 0x0899DA4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0D6Cu) goto L_08AA0D6C;
    return;
L_08AA0D6C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AA0D88;
      }
      goto L_08AA0D78;
    }
L_08AA0D78:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AA0D84u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 147u, 0x089FD534u>(ctx, &aot_mem) && ctx.pc == 0x08AA0D84u) goto L_08AA0D84;
    return;
L_08AA0D84:
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    goto L_08AA0D88;
L_08AA0D88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AA0DC4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA0DC4u) goto L_08AA0DC4;
    return;
L_08AA0DC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08AA0DD8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08AA0DD8u) goto L_08AA0DD8;
    return;
L_08AA0DD8:
    ctx.gpr[31] = (0x08AA0DE0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0DE0u) goto L_08AA0DE0;
    return;
L_08AA0DE0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25816)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 20u);
      if (branch_taken) {
          goto L_08AA0E1C;
      }
      goto L_08AA0DF0;
    }
L_08AA0DF0:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA0E1C;
      }
      goto L_08AA0DF8;
    }
L_08AA0DF8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[31] = (0x08AA0E08u);
    ctx.gpr[6] = (0u | 25001u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 645u, 0x0899F5C0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0E08u) goto L_08AA0E08;
    return;
L_08AA0E08:
    ctx.gpr[31] = (0x08AA0E10u);
    ctx.gpr[4] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0E10u) goto L_08AA0E10;
    return;
L_08AA0E10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08AA0E1Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 596u, 0x0899F290u>(ctx, &aot_mem) && ctx.pc == 0x08AA0E1Cu) goto L_08AA0E1C;
    return;
L_08AA0E1C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0E50;
      }
      goto L_08AA0E2C;
    }
L_08AA0E2C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0E50;
      }
      goto L_08AA0E34;
    }
L_08AA0E34:
    ctx.gpr[31] = (0x08AA0E3Cu);
    ctx.gpr[4] = (0u | 224u);
    goto L_08AA3190;
L_08AA0E3C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0E50;
      }
      goto L_08AA0E48;
    }
L_08AA0E48:
    ctx.gpr[31] = (0x08AA0E50u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 8u, 0x0898006Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0E50u) goto L_08AA0E50;
    return;
L_08AA0E50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08AA0E70;
      }
      goto L_08AA0E58;
    }
L_08AA0E58:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20000));
    ctx.gpr[31] = (0x08AA0E68u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 541u, 0x08AFA638u>(ctx, &aot_mem) && ctx.pc == 0x08AA0E68u) goto L_08AA0E68;
    return;
L_08AA0E68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA0E70;
      }
      goto L_08AA0E70;
    }
L_08AA0E70:
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
L_08AA0E94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-400));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[31]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15296)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[16] = (ctx.gpr[4] & 31u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[16]);
    ctx.gpr[31] = (0x08AA0F14u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 199u, 0x089D599Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0F14u) goto L_08AA0F14;
    return;
L_08AA0F14:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 5u));
    ctx.gpr[6] = (ctx.gpr[6] >> 27u);
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 5u));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 5u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] >> 27u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 5u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA119C;
      }
      goto L_08AA0F68;
    }
L_08AA0F68:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[23] = (2228u << 16u);
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16972u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    ctx.gpr[20] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    goto L_08AA0FA4;
L_08AA0FA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_08AA0FC4;
    }
    goto L_08AA0FBC;
L_08AA0FBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA0FC8;
      }
      goto L_08AA0FC4;
    }
L_08AA0FC4:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[20]);
    goto L_08AA0FC8;
L_08AA0FC8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1188;
      }
      goto L_08AA0FD4;
    }
L_08AA0FD4:
    ctx.gpr[31] = (0x08AA0FDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 244u, 0x0883D410u>(ctx, &aot_mem) && ctx.pc == 0x08AA0FDCu) goto L_08AA0FDC;
    return;
L_08AA0FDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1188;
      }
      goto L_08AA0FE4;
    }
L_08AA0FE4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(384));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA1140;
      }
      goto L_08AA1058;
    }
L_08AA1058:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(98)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA1080;
      }
      goto L_08AA106C;
    }
L_08AA106C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA10C4;
      }
      goto L_08AA1080;
    }
L_08AA1080:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA1188;
      }
      goto L_08AA1090;
    }
L_08AA1090:
    ctx.gpr[31] = (0x08AA1098u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1098u) goto L_08AA1098;
    return;
L_08AA1098:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA10BC;
      }
      goto L_08AA10A0;
    }
L_08AA10A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AA10BCu);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA10BCu) goto L_08AA10BC;
    return;
L_08AA10BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1188;
      }
      goto L_08AA10C4;
    }
L_08AA10C4:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA110C;
      }
      goto L_08AA10D4;
    }
L_08AA10D4:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AA10F8;
      }
      goto L_08AA10E4;
    }
L_08AA10E4:
    ctx.gpr[31] = (0x08AA10ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F7ACu>(ctx, &aot_mem) && ctx.pc == 0x08AA10ECu) goto L_08AA10EC;
    return;
L_08AA10EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA110C;
      }
      goto L_08AA10F4;
    }
L_08AA10F4:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08AA10F8;
L_08AA10F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1188;
      }
      goto L_08AA110C;
    }
L_08AA110C:
    ctx.gpr[31] = (0x08AA1114u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1114u) goto L_08AA1114;
    return;
L_08AA1114:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1188;
      }
      goto L_08AA111C;
    }
L_08AA111C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AA1138u);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA1138u) goto L_08AA1138;
    return;
L_08AA1138:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1188;
      }
      goto L_08AA1140;
    }
L_08AA1140:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA1188;
      }
      goto L_08AA1150;
    }
L_08AA1150:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA1188;
      }
      goto L_08AA1160;
    }
L_08AA1160:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA1188;
      }
      goto L_08AA1170;
    }
L_08AA1170:
    ctx.gpr[31] = (0x08AA1178u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 391u, 0x08A9DF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1178u) goto L_08AA1178;
    return;
L_08AA1178:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1188;
      }
      goto L_08AA1180;
    }
L_08AA1180:
    ctx.gpr[31] = (0x08AA1188u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 365u, 0x08A9DE04u>(ctx, &aot_mem) && ctx.pc == 0x08AA1188u) goto L_08AA1188;
    return;
L_08AA1188:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(544));
      if (branch_taken) {
          goto L_08AA0FA4;
      }
      goto L_08AA119C;
    }
L_08AA119C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
        goto L_08AA129C;
    }
    goto L_08AA11AC;
L_08AA11AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 5u));
    ctx.gpr[6] = (ctx.gpr[6] >> 27u);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 5u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 5u));
    ctx.gpr[5] = (ctx.gpr[5] >> 27u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 5u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_08AA1298;
      }
      goto L_08AA11F8;
    }
L_08AA11F8:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    goto L_08AA1214;
L_08AA1214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_08AA1234;
    }
    goto L_08AA122C;
L_08AA122C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA1238;
      }
      goto L_08AA1234;
    }
L_08AA1234:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_08AA1238;
L_08AA1238:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1288;
      }
      goto L_08AA1240;
    }
L_08AA1240:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA1288;
      }
      goto L_08AA1280;
    }
L_08AA1280:
    ctx.gpr[31] = (0x08AA1288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 336u, 0x08A9DC18u>(ctx, &aot_mem) && ctx.pc == 0x08AA1288u) goto L_08AA1288;
    return;
L_08AA1288:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08AA1214;
      }
      goto L_08AA1298;
    }
L_08AA1298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    goto L_08AA129C;
L_08AA129C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA1C0C;
      }
      goto L_08AA12AC;
    }
L_08AA12AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[4]);
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5736));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[30] = (128u << 16u);
    ctx.gpr[22] = (2232u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (16230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (48998u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(3248));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[4]);
    goto L_08AA1300;
L_08AA1300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AA1328;
      }
      goto L_08AA1320;
    }
L_08AA1320:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA1334;
      }
      goto L_08AA1328;
    }
L_08AA1328:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_08AA1334;
L_08AA1334:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
        goto L_08AA1BEC;
    }
    goto L_08AA1340;
L_08AA1340:
    ctx.gpr[31] = (0x08AA1348u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1348u) goto L_08AA1348;
    return;
L_08AA1348:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
        goto L_08AA1BEC;
    }
    goto L_08AA1350;
L_08AA1350:
    ctx.gpr[31] = (0x08AA1358u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 697u, 0x089A2E7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1358u) goto L_08AA1358;
    return;
L_08AA1358:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
        goto L_08AA1BEC;
    }
    goto L_08AA1360;
L_08AA1360:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(1336)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
        goto L_08AA1BEC;
    }
    goto L_08AA136C;
L_08AA136C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 30001 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA13B4;
      }
      goto L_08AA1388;
    }
L_08AA1388:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA13A8;
      }
      goto L_08AA1390;
    }
L_08AA1390:
    ctx.gpr[31] = (0x08AA1398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 83u, 0x0891857Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1398u) goto L_08AA1398;
    return;
L_08AA1398:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 15001 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA13B4;
      }
      goto L_08AA13A0;
    }
L_08AA13A0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA13B4;
      }
      goto L_08AA13A8;
    }
L_08AA13A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_08AA13B4;
L_08AA13B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA13E4;
      }
      goto L_08AA13C4;
    }
L_08AA13C4:
    ctx.gpr[31] = (0x08AA13CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 314u, 0x08925FC8u>(ctx, &aot_mem) && ctx.pc == 0x08AA13CCu) goto L_08AA13CC;
    return;
L_08AA13CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA13E4;
      }
      goto L_08AA13D4;
    }
L_08AA13D4:
    ctx.gpr[31] = (0x08AA13DCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 296u, 0x08A9D7E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA13DCu) goto L_08AA13DC;
    return;
L_08AA13DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1BE8;
      }
      goto L_08AA13E4;
    }
L_08AA13E4:
    ctx.gpr[23] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1440;
      }
      goto L_08AA1424;
    }
L_08AA1424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16880u << 16u);
      if (branch_taken) {
          goto L_08AA1440;
      }
      goto L_08AA1434;
    }
L_08AA1434:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
      if (branch_taken) {
          goto L_08AA1460;
      }
      goto L_08AA1440;
    }
L_08AA1440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1460;
      }
      goto L_08AA1450;
    }
L_08AA1450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1348)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1460;
      }
      goto L_08AA145C;
    }
L_08AA145C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08AA1460;
L_08AA1460:
    ctx.gpr[31] = (0x08AA1468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 646u, 0x08A9F03Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1468u) goto L_08AA1468;
    return;
L_08AA1468:
    ctx.gpr[4] = (17026u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(228)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (1024u << 16u);
      if (branch_taken) {
          goto L_08AA1494;
      }
      goto L_08AA148C;
    }
L_08AA148C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA1668;
      }
      goto L_08AA1494;
    }
L_08AA1494:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA14D8;
      }
      goto L_08AA14A4;
    }
L_08AA14A4:
    ctx.gpr[31] = (0x08AA14ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 646u, 0x08A9F03Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA14ACu) goto L_08AA14AC;
    return;
L_08AA14AC:
    ctx.gpr[4] = (16972u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(228)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA14D8;
      }
      goto L_08AA14D0;
    }
L_08AA14D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA1668;
      }
      goto L_08AA14D8;
    }
L_08AA14D8:
    ctx.gpr[31] = (0x08AA14E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 646u, 0x08A9F03Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA14E0u) goto L_08AA14E0;
    return;
L_08AA14E0:
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA163C;
      }
      goto L_08AA14FC;
    }
L_08AA14FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1216)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1668;
      }
      goto L_08AA1510;
    }
L_08AA1510:
    ctx.gpr[31] = (0x08AA1518u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F7ACu>(ctx, &aot_mem) && ctx.pc == 0x08AA1518u) goto L_08AA1518;
    return;
L_08AA1518:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1668;
      }
      goto L_08AA1520;
    }
L_08AA1520:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA1668;
      }
      goto L_08AA1550;
    }
L_08AA1550:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA1668;
      }
      goto L_08AA1580;
    }
L_08AA1580:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA1668;
      }
      goto L_08AA15B0;
    }
L_08AA15B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(424)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1668;
      }
      goto L_08AA15DC;
    }
L_08AA15DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(425)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1668;
      }
      goto L_08AA1608;
    }
L_08AA1608:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(423)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1668;
      }
      goto L_08AA1634;
    }
L_08AA1634:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA1668;
      }
      goto L_08AA163C;
    }
L_08AA163C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA165C;
      }
      goto L_08AA164C;
    }
L_08AA164C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1216), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA1668;
      }
      goto L_08AA165C;
    }
L_08AA165C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4000));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1216), ctx.gpr[4]);
    goto L_08AA1668;
L_08AA1668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA167C;
      }
      goto L_08AA1678;
    }
L_08AA1678:
    ctx.gpr[21] = (0u | 0u);
    goto L_08AA167C;
L_08AA167C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08AA18F8;
      }
      goto L_08AA1684;
    }
L_08AA1684:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA18F8;
      }
      goto L_08AA1690;
    }
L_08AA1690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA16BC;
      }
      goto L_08AA169C;
    }
L_08AA169C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08AA16C0;
      }
      goto L_08AA16B8;
    }
L_08AA16B8:
    ctx.gpr[6] = (0u | 1u);
    goto L_08AA16BC;
L_08AA16BC:
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    goto L_08AA16C0;
L_08AA16C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA18F8;
      }
      goto L_08AA16C8;
    }
L_08AA16C8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA18F8;
      }
      goto L_08AA16F4;
    }
L_08AA16F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AA18CC;
      }
      goto L_08AA1704;
    }
L_08AA1704:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA1710u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A7DE0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1710u) goto L_08AA1710;
    return;
L_08AA1710:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA18CC;
      }
      goto L_08AA171C;
    }
L_08AA171C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
        goto L_08AA1768;
    }
    goto L_08AA1730;
L_08AA1730:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(236), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08AA1738;
L_08AA1738:
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AA1758;
      }
      goto L_08AA1748;
    }
L_08AA1748:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA175C;
      }
      goto L_08AA1758;
    }
L_08AA1758:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA175C;
L_08AA175C:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_08AA1738;
    }
    goto L_08AA1764;
L_08AA1764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    goto L_08AA1768;
L_08AA1768:
    if (ctx.gpr[7] == ctx.gpr[4]) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
        goto L_08AA178C;
    }
    goto L_08AA1770;
L_08AA1770:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(237), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[7]);
        goto L_08AA1790;
    }
    goto L_08AA1788;
L_08AA1788:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    goto L_08AA178C;
L_08AA178C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[7]);
    goto L_08AA1790;
L_08AA1790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (ctx.gpr[7] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
        goto L_08AA17CC;
    }
    goto L_08AA17C4;
L_08AA17C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA17CC;
      }
      goto L_08AA17CC;
    }
L_08AA17CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AA17E4u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA17E4u) goto L_08AA17E4;
    return;
L_08AA17E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AA18CC;
      }
      goto L_08AA17EC;
    }
L_08AA17EC:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AA17F8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 163u, 0x08A34F70u>(ctx, &aot_mem) && ctx.pc == 0x08AA17F8u) goto L_08AA17F8;
    return;
L_08AA17F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA18CC;
      }
      goto L_08AA1800;
    }
L_08AA1800:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
        goto L_08AA184C;
    }
    goto L_08AA1814;
L_08AA1814:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(272), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08AA181C;
L_08AA181C:
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AA183C;
      }
      goto L_08AA182C;
    }
L_08AA182C:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA1840;
      }
      goto L_08AA183C;
    }
L_08AA183C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA1840;
L_08AA1840:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_08AA181C;
    }
    goto L_08AA1848;
L_08AA1848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    goto L_08AA184C;
L_08AA184C:
    if (ctx.gpr[7] == ctx.gpr[4]) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
        goto L_08AA1870;
    }
    goto L_08AA1854;
L_08AA1854:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(273), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[7]);
        goto L_08AA1874;
    }
    goto L_08AA186C;
L_08AA186C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    goto L_08AA1870;
L_08AA1870:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[7]);
    goto L_08AA1874;
L_08AA1874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[4] = (ctx.gpr[7] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
        goto L_08AA18B0;
    }
    goto L_08AA18A8;
L_08AA18A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA18B0;
      }
      goto L_08AA18B0;
    }
L_08AA18B0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08AA18C0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 217u, 0x088A8E58u>(ctx, &aot_mem) && ctx.pc == 0x08AA18C0u) goto L_08AA18C0;
    return;
L_08AA18C0:
    ctx.gpr[21] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA18F8;
      }
      goto L_08AA18CC;
    }
L_08AA18CC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA16F4;
      }
      goto L_08AA18F8;
    }
L_08AA18F8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[17] = (0u | 40000u);
      if (branch_taken) {
          goto L_08AA1BE8;
      }
      goto L_08AA1900;
    }
L_08AA1900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA1BB0;
      }
      goto L_08AA1910;
    }
L_08AA1910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1BB0;
      }
      goto L_08AA1920;
    }
L_08AA1920:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08AA1934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08AA1934u) goto L_08AA1934;
    return;
L_08AA1934:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (15560u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 62915u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[31] = (0x08AA195Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08AA195Cu) goto L_08AA195C;
    return;
L_08AA195C:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (ctx.gpr[2] & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA1A30;
      }
      goto L_08AA1974;
    }
L_08AA1974:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AA1BB0;
      }
      goto L_08AA197C;
    }
L_08AA197C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27676)));
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
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
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
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (0u | 255u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA1A28u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 147u, 0x089292F8u>(ctx, &aot_mem) && ctx.pc == 0x08AA1A28u) goto L_08AA1A28;
    return;
L_08AA1A28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1BB0;
      }
      goto L_08AA1A30;
    }
L_08AA1A30:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AA1A50;
      }
      goto L_08AA1A38;
    }
L_08AA1A38:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AA1B04;
      }
      goto L_08AA1A44;
    }
L_08AA1A44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1BB0;
      }
      goto L_08AA1A4C;
    }
L_08AA1A4C:
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AA1A50;
L_08AA1A50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27680)));
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
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
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
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (0u | 255u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA1AFCu);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 147u, 0x089292F8u>(ctx, &aot_mem) && ctx.pc == 0x08AA1AFCu) goto L_08AA1AFC;
    return;
L_08AA1AFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1BB0;
      }
      goto L_08AA1B04;
    }
L_08AA1B04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27684)));
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
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
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
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (0u | 255u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA1BB0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 147u, 0x089292F8u>(ctx, &aot_mem) && ctx.pc == 0x08AA1BB0u) goto L_08AA1BB0;
    return;
L_08AA1BB0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA1BE0;
      }
      goto L_08AA1BC0;
    }
L_08AA1BC0:
    ctx.gpr[31] = (0x08AA1BC8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F7ACu>(ctx, &aot_mem) && ctx.pc == 0x08AA1BC8u) goto L_08AA1BC8;
    return;
L_08AA1BC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1BE0;
      }
      goto L_08AA1BD0;
    }
L_08AA1BD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[30]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA1BE8;
      }
      goto L_08AA1BE0;
    }
L_08AA1BE0:
    ctx.gpr[31] = (0x08AA1BE8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 296u, 0x08A9D7E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA1BE8u) goto L_08AA1BE8;
    return;
L_08AA1BE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    goto L_08AA1BEC;
L_08AA1BEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3248));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AA1300;
      }
      goto L_08AA1C0C;
    }
L_08AA1C0C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA1C54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[22] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
        goto L_08AA1CEC;
    }
    goto L_08AA1CEC;
L_08AA1CEC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
        goto L_08AA1D1C;
    }
    goto L_08AA1D1C;
L_08AA1D1C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 100 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[6]);
    if (ctx.gpr[7] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
        goto L_08AA1D4C;
    }
    goto L_08AA1D4C;
L_08AA1D4C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 100u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
        goto L_08AA1D7C;
    }
    goto L_08AA1D7C;
L_08AA1D7C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA1DD4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 227u, 0x08A9D12Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1DD4u) goto L_08AA1DD4;
    return;
L_08AA1DD4:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AA1FB0;
      }
      goto L_08AA1DEC;
    }
L_08AA1DEC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    goto L_08AA1E10;
L_08AA1E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA1F8C;
      }
      goto L_08AA1E24;
    }
L_08AA1E24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    goto L_08AA1E40;
L_08AA1E40:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[30] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1EDC;
      }
      goto L_08AA1E5C;
    }
L_08AA1E5C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20720)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AA1ED4;
      }
      goto L_08AA1E74;
    }
L_08AA1E74:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AA1E80u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 741u, 0x08A2F6B8u>(ctx, &aot_mem) && ctx.pc == 0x08AA1E80u) goto L_08AA1E80;
    return;
L_08AA1E80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1ED4;
      }
      goto L_08AA1E88;
    }
L_08AA1E88:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20720)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08AA1EC4u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 331u, 0x088CE988u>(ctx, &aot_mem) && ctx.pc == 0x08AA1EC4u) goto L_08AA1EC4;
    return;
L_08AA1EC4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AA1ED4;
      }
      goto L_08AA1ECC;
    }
L_08AA1ECC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA1FB4;
      }
      goto L_08AA1ED4;
    }
L_08AA1ED4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1E5C;
      }
      goto L_08AA1EDC;
    }
L_08AA1EDC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1F68;
      }
      goto L_08AA1EE8;
    }
L_08AA1EE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20720)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AA1F60;
      }
      goto L_08AA1F00;
    }
L_08AA1F00:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AA1F0Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 741u, 0x08A2F6B8u>(ctx, &aot_mem) && ctx.pc == 0x08AA1F0Cu) goto L_08AA1F0C;
    return;
L_08AA1F0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1F60;
      }
      goto L_08AA1F14;
    }
L_08AA1F14:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20720)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08AA1F50u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 331u, 0x088CE988u>(ctx, &aot_mem) && ctx.pc == 0x08AA1F50u) goto L_08AA1F50;
    return;
L_08AA1F50:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AA1F60;
      }
      goto L_08AA1F58;
    }
L_08AA1F58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA1FB4;
      }
      goto L_08AA1F60;
    }
L_08AA1F60:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1EE8;
      }
      goto L_08AA1F68;
    }
L_08AA1F68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(44));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AA1E40;
      }
      goto L_08AA1F8C;
    }
L_08AA1F8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AA1E10;
      }
      goto L_08AA1FB0;
    }
L_08AA1FB0:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AA1FB4;
L_08AA1FB4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA1FE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[31]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AA20FC;
      }
      goto L_08AA2040;
    }
L_08AA2040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
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
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[13];
    ctx.fpr[30] = ctx.fpr[14] / ctx.fpr[12];
    ctx.fpr[30] = std::sqrt(ctx.fpr[30]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-720));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08AA20EC;
      }
      goto L_08AA20E4;
    }
L_08AA20E4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AA20EC;
L_08AA20EC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2104;
      }
      goto L_08AA20F4;
    }
L_08AA20F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2164;
      }
      goto L_08AA20FC;
    }
L_08AA20FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA26B8;
      }
      goto L_08AA2104;
    }
L_08AA2104:
    ctx.gpr[31] = (0x08AA210Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA210Cu) goto L_08AA210C;
    return;
L_08AA210C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AA2140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 646u, 0x08A9F03Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2140u) goto L_08AA2140;
    return;
L_08AA2140:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA2164;
      }
      goto L_08AA215C;
    }
L_08AA215C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA26B8;
      }
      goto L_08AA2164;
    }
L_08AA2164:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AA2178u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 422u, 0x088A6CD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2178u) goto L_08AA2178;
    return;
L_08AA2178:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA21A0;
      }
      goto L_08AA2180;
    }
L_08AA2180:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[23]);
        goto L_08AA21A8;
    }
    goto L_08AA2198;
L_08AA2198:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA251C;
      }
      goto L_08AA21A0;
    }
L_08AA21A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA26B8;
      }
      goto L_08AA21A8;
    }
L_08AA21A8:
    ctx.gpr[4] = (48716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(-7));
    ctx.gpr[23] = (2229u << 16u);
    ctx.gpr[22] = (ctx.gpr[29] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    goto L_08AA21D8;
L_08AA21D8:
    ctx.gpr[31] = (0x08AA21E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08AA21E0u) goto L_08AA21E0;
    return;
L_08AA21E0:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[24];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[31] = (0x08AA21FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08AA21FCu) goto L_08AA21FC;
    return;
L_08AA21FC:
    ctx.fpr[13] = ctx.fpr[28] - ctx.fpr[24];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[24] + ctx.fpr[13];
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
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
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[30] + ctx.fpr[13];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
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
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[26];
    ctx.gpr[31] = (0x08AA2280u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2F78u>(ctx, &aot_mem) && ctx.pc == 0x08AA2280u) goto L_08AA2280;
    return;
L_08AA2280:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[26];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2508;
      }
      goto L_08AA2290;
    }
L_08AA2290:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
        goto L_08AA22A4;
    }
    goto L_08AA22A4;
L_08AA22A4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (ctx.gpr[19] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
        goto L_08AA22D4;
    }
    goto L_08AA22C8;
L_08AA22C8:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    goto L_08AA22D4;
L_08AA22D4:
    ctx.gpr[31] = (0x08AA22DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 437u, 0x08A9E374u>(ctx, &aot_mem) && ctx.pc == 0x08AA22DCu) goto L_08AA22DC;
    return;
L_08AA22DC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA2304;
      }
      goto L_08AA22F4;
    }
L_08AA22F4:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA2304;
L_08AA2304:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AA231Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA231Cu) goto L_08AA231C;
    return;
L_08AA231C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA232C;
      }
      goto L_08AA2324;
    }
L_08AA2324:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2508;
      }
      goto L_08AA232C;
    }
L_08AA232C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AA2334;
L_08AA2334:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA2334;
      }
      goto L_08AA2348;
    }
L_08AA2348:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x08AA2370u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 422u, 0x088A6CD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2370u) goto L_08AA2370;
    return;
L_08AA2370:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    goto L_08AA237C;
L_08AA237C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA23D8;
      }
      goto L_08AA2388;
    }
L_08AA2388:
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_08AA23C4;
      }
      goto L_08AA239C;
    }
L_08AA239C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08AA23B4;
      }
      goto L_08AA23A8;
    }
L_08AA23A8:
    ctx.gpr[9] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA23C4;
      }
      goto L_08AA23B4;
    }
L_08AA23B4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA239C;
      }
      goto L_08AA23C4;
    }
L_08AA23C4:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA23D8;
      }
      goto L_08AA23CC;
    }
L_08AA23CC:
    ctx.gpr[20] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA23E8;
      }
      goto L_08AA23D8;
    }
L_08AA23D8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA237C;
      }
      goto L_08AA23E8;
    }
L_08AA23E8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA23F8;
      }
      goto L_08AA23F0;
    }
L_08AA23F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA2428;
      }
      goto L_08AA23F8;
    }
L_08AA23F8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08AA2424u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 339u, 0x088C5B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2424u) goto L_08AA2424;
    return;
L_08AA2424:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AA2428;
L_08AA2428:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2438;
      }
      goto L_08AA2430;
    }
L_08AA2430:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA2460;
      }
      goto L_08AA2438;
    }
L_08AA2438:
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[5] = (0u | 1u);
        goto L_08AA245C;
    }
    goto L_08AA245C;
L_08AA245C:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08AA2460;
L_08AA2460:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2508;
      }
      goto L_08AA2468;
    }
L_08AA2468:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2508;
      }
      goto L_08AA2470;
    }
L_08AA2470:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2508;
      }
      goto L_08AA2478;
    }
L_08AA2478:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AA2494u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08AA0804;
L_08AA2494:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2500;
      }
      goto L_08AA24A0;
    }
L_08AA24A0:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x08AA24C8u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08AA24C8u) goto L_08AA24C8;
    return;
L_08AA24C8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08AA24D8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 656u, 0x08AC3E10u>(ctx, &aot_mem) && ctx.pc == 0x08AA24D8u) goto L_08AA24D8;
    return;
L_08AA24D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA24EC;
      }
      goto L_08AA24E0;
    }
L_08AA24E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    goto L_08AA24EC;
L_08AA24EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08AA24F8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 313u, 0x08925FB4u>(ctx, &aot_mem) && ctx.pc == 0x08AA24F8u) goto L_08AA24F8;
    return;
L_08AA24F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2508;
      }
      goto L_08AA2500;
    }
L_08AA2500:
    ctx.gpr[31] = (0x08AA2508u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 296u, 0x08A9D7E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2508u) goto L_08AA2508;
    return;
L_08AA2508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA21D8;
      }
      goto L_08AA251C;
    }
L_08AA251C:
    ctx.gpr[16] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2558;
      }
      goto L_08AA2528;
    }
L_08AA2528:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_08AA2550;
      }
      goto L_08AA2538;
    }
L_08AA2538:
    ctx.gpr[31] = (0x08AA2540u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 296u, 0x08A9D7E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2540u) goto L_08AA2540;
    return;
L_08AA2540:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA2538;
      }
      goto L_08AA2550;
    }
L_08AA2550:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA26B8;
      }
      goto L_08AA2558;
    }
L_08AA2558:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 1u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (2u << 16u);
      if (branch_taken) {
          goto L_08AA25BC;
      }
      goto L_08AA2578;
    }
L_08AA2578:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-31072));
    ctx.gpr[21] = (ctx.gpr[29] | 0u);
    ctx.gpr[19] = (ctx.gpr[17] << 2u);
    ctx.gpr[19] = (ctx.gpr[29] + ctx.gpr[19]);
    goto L_08AA2588;
L_08AA2588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08AA2598u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 633u, 0x089A2B30u>(ctx, &aot_mem) && ctx.pc == 0x08AA2598u) goto L_08AA2598;
    return;
L_08AA2598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08AA25A8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 633u, 0x089A2B30u>(ctx, &aot_mem) && ctx.pc == 0x08AA25A8u) goto L_08AA25A8;
    return;
L_08AA25A8:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08AA2588;
      }
      goto L_08AA25BC;
    }
L_08AA25BC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08AA25CC;
      }
      goto L_08AA25C4;
    }
L_08AA25C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA25CC;
      }
      goto L_08AA25CC;
    }
L_08AA25CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2674;
      }
      goto L_08AA25D4;
    }
L_08AA25D4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x08AA2620u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08AA2620u) goto L_08AA2620;
    return;
L_08AA2620:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA262Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A288A8u>(ctx, &aot_mem) && ctx.pc == 0x08AA262Cu) goto L_08AA262C;
    return;
L_08AA262C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 37u);
      if (branch_taken) {
          goto L_08AA2670;
      }
      goto L_08AA263C;
    }
L_08AA263C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2664;
      }
      goto L_08AA2648;
    }
L_08AA2648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
        goto L_08AA2664;
    }
    goto L_08AA2654;
L_08AA2654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08AA2660u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08AA2660u) goto L_08AA2660;
    return;
L_08AA2660:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
    goto L_08AA2664;
L_08AA2664:
    ctx.gpr[31] = (0x08AA266Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x08AA266Cu) goto L_08AA266C;
    return;
L_08AA266C:
    ctx.gpr[4] = (0u | 37u);
    goto L_08AA2670;
L_08AA2670:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    goto L_08AA2674;
L_08AA2674:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA26B8;
      }
      goto L_08AA267C;
    }
L_08AA267C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[5] | 512u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(408), ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA26B8;
      }
      goto L_08AA269C;
    }
L_08AA269C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08AA26A8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 67u, 0x089A43B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA26A8u) goto L_08AA26A8;
    return;
L_08AA26A8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA269C;
      }
      goto L_08AA26B8;
    }
L_08AA26B8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA2700:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[31]);
    ctx.gpr[7] = (16448u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-720));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[7]);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08AA2784;
      }
      goto L_08AA277C;
    }
L_08AA277C:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    goto L_08AA2784;
L_08AA2784:
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[21] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AA27F4;
      }
      goto L_08AA2794;
    }
L_08AA2794:
    ctx.gpr[31] = (0x08AA279Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA279Cu) goto L_08AA279C;
    return;
L_08AA279C:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AA27D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 646u, 0x08A9F03Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA27D0u) goto L_08AA27D0;
    return;
L_08AA27D0:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA27F4;
      }
      goto L_08AA27EC;
    }
L_08AA27EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2C0C;
      }
      goto L_08AA27F4;
    }
L_08AA27F4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AA2808u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 422u, 0x088A6CD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2808u) goto L_08AA2808;
    return;
L_08AA2808:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2868;
      }
      goto L_08AA2810;
    }
L_08AA2810:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[31] = (0x08AA2830u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2F78u>(ctx, &aot_mem) && ctx.pc == 0x08AA2830u) goto L_08AA2830;
    return;
L_08AA2830:
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2860;
      }
      goto L_08AA2840;
    }
L_08AA2840:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(-7));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AA2870;
      }
      goto L_08AA2858;
    }
L_08AA2858:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AA2878;
      }
      goto L_08AA2860;
    }
L_08AA2860:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2C0C;
      }
      goto L_08AA2868;
    }
L_08AA2868:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2C0C;
      }
      goto L_08AA2870;
    }
L_08AA2870:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
    goto L_08AA2878;
L_08AA2878:
    ctx.gpr[31] = (0x08AA2880u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 437u, 0x08A9E374u>(ctx, &aot_mem) && ctx.pc == 0x08AA2880u) goto L_08AA2880;
    return;
L_08AA2880:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA28A8;
      }
      goto L_08AA2894;
    }
L_08AA2894:
    ctx.gpr[4] = (ctx.gpr[22] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA28A8;
L_08AA28A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AA28C0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA28C0u) goto L_08AA28C0;
    return;
L_08AA28C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA297C;
      }
      goto L_08AA28C8;
    }
L_08AA28C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AA28F4u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08AA0804;
L_08AA28F4:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2974;
      }
      goto L_08AA2900;
    }
L_08AA2900:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AA290Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x08AA290Cu) goto L_08AA290C;
    return;
L_08AA290C:
    ctx.gpr[31] = (0x08AA2914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08AA2914u) goto L_08AA2914;
    return;
L_08AA2914:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25884)));
    ctx.gpr[31] = (0x08AA292Cu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25880)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08AA292Cu) goto L_08AA292C;
    return;
L_08AA292C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08AA2950u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x08AA2950u) goto L_08AA2950;
    return;
L_08AA2950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AA2964u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 656u, 0x08AC3E10u>(ctx, &aot_mem) && ctx.pc == 0x08AA2964u) goto L_08AA2964;
    return;
L_08AA2964:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2984;
      }
      goto L_08AA296C;
    }
L_08AA296C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AA2994;
      }
      goto L_08AA2974;
    }
L_08AA2974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2C0C;
      }
      goto L_08AA297C;
    }
L_08AA297C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2C0C;
      }
      goto L_08AA2984;
    }
L_08AA2984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[19]);
    goto L_08AA2994;
L_08AA2994:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AA2BA4;
      }
      goto L_08AA29AC;
    }
L_08AA29AC:
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    goto L_08AA29B4;
L_08AA29B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[31] = (0x08AA29C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 437u, 0x08A9E374u>(ctx, &aot_mem) && ctx.pc == 0x08AA29C0u) goto L_08AA29C0;
    return;
L_08AA29C0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA29EC;
      }
      goto L_08AA29D8;
    }
L_08AA29D8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA29EC;
L_08AA29EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AA2A04u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA2A04u) goto L_08AA2A04;
    return;
L_08AA2A04:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2A14;
      }
      goto L_08AA2A0C;
    }
L_08AA2A0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2B90;
      }
      goto L_08AA2A14;
    }
L_08AA2A14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AA2A40u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08AA0804;
L_08AA2A40:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2B90;
      }
      goto L_08AA2A4C;
    }
L_08AA2A4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[31] = (0x08AA2A5Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08AA2A5Cu) goto L_08AA2A5C;
    return;
L_08AA2A5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA2A68u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 630u, 0x08887498u>(ctx, &aot_mem) && ctx.pc == 0x08AA2A68u) goto L_08AA2A68;
    return;
L_08AA2A68:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x08AA2A74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 609u, 0x088871B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA2A74u) goto L_08AA2A74;
    return;
L_08AA2A74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[31] = (0x08AA2A8Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2F78u>(ctx, &aot_mem) && ctx.pc == 0x08AA2A8Cu) goto L_08AA2A8C;
    return;
L_08AA2A8C:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
        goto L_08AA2AA4;
    }
    goto L_08AA2AA4;
L_08AA2AA4:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2AC4;
      }
      goto L_08AA2AB4;
    }
L_08AA2AB4:
    ctx.gpr[31] = (0x08AA2ABCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 296u, 0x08A9D7E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2ABCu) goto L_08AA2ABC;
    return;
L_08AA2ABC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2B90;
      }
      goto L_08AA2AC4;
    }
L_08AA2AC4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA2AF0;
      }
      goto L_08AA2AE0;
    }
L_08AA2AE0:
    ctx.gpr[31] = (0x08AA2AE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 296u, 0x08A9D7E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2AE8u) goto L_08AA2AE8;
    return;
L_08AA2AE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2B90;
      }
      goto L_08AA2AF0;
    }
L_08AA2AF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08AA2B30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 339u, 0x088C5B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2B30u) goto L_08AA2B30;
    return;
L_08AA2B30:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2B48;
      }
      goto L_08AA2B38;
    }
L_08AA2B38:
    ctx.gpr[31] = (0x08AA2B40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 296u, 0x08A9D7E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2B40u) goto L_08AA2B40;
    return;
L_08AA2B40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2B90;
      }
      goto L_08AA2B48;
    }
L_08AA2B48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08AA2B70u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 656u, 0x08AC3E10u>(ctx, &aot_mem) && ctx.pc == 0x08AA2B70u) goto L_08AA2B70;
    return;
L_08AA2B70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2B84;
      }
      goto L_08AA2B78;
    }
L_08AA2B78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    goto L_08AA2B84;
L_08AA2B84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08AA2B90u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 313u, 0x08925FB4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2B90u) goto L_08AA2B90;
    return;
L_08AA2B90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA29B4;
      }
      goto L_08AA2BA4;
    }
L_08AA2BA4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2BE0;
      }
      goto L_08AA2BB0;
    }
L_08AA2BB0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_08AA2C0C;
      }
      goto L_08AA2BC0;
    }
L_08AA2BC0:
    ctx.gpr[31] = (0x08AA2BC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 296u, 0x08A9D7E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2BC8u) goto L_08AA2BC8;
    return;
L_08AA2BC8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA2BC0;
      }
      goto L_08AA2BD8;
    }
L_08AA2BD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2C0C;
      }
      goto L_08AA2BE0;
    }
L_08AA2BE0:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA2C0C;
      }
      goto L_08AA2BF0;
    }
L_08AA2BF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x08AA2BFCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 67u, 0x089A43B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2BFCu) goto L_08AA2BFC;
    return;
L_08AA2BFC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA2BF0;
      }
      goto L_08AA2C0C;
    }
L_08AA2C0C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
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
L_08AA2C48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (0u | 4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[8];
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AA2CFC;
      }
      goto L_08AA2C94;
    }
L_08AA2C94:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA2CFC;
      }
      goto L_08AA2CA0;
    }
L_08AA2CA0:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-720));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08AA2CEC;
      }
      goto L_08AA2CE4;
    }
L_08AA2CE4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AA2CEC;
L_08AA2CEC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2D04;
      }
      goto L_08AA2CF4;
    }
L_08AA2CF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2D64;
      }
      goto L_08AA2CFC;
    }
L_08AA2CFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA309C;
      }
      goto L_08AA2D04;
    }
L_08AA2D04:
    ctx.gpr[31] = (0x08AA2D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2D0Cu) goto L_08AA2D0C;
    return;
L_08AA2D0C:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AA2D40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 646u, 0x08A9F03Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2D40u) goto L_08AA2D40;
    return;
L_08AA2D40:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA2D64;
      }
      goto L_08AA2D5C;
    }
L_08AA2D5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA309C;
      }
      goto L_08AA2D64;
    }
L_08AA2D64:
    ctx.gpr[23] = (ctx.gpr[17] << 2u);
    ctx.gpr[21] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AA2D90u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 422u, 0x088A6CD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2D90u) goto L_08AA2D90;
    return;
L_08AA2D90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2DEC;
      }
      goto L_08AA2D98;
    }
L_08AA2D98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[31] = (0x08AA2DB8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2F78u>(ctx, &aot_mem) && ctx.pc == 0x08AA2DB8u) goto L_08AA2DB8;
    return;
L_08AA2DB8:
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2DE4;
      }
      goto L_08AA2DC8;
    }
L_08AA2DC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[22] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AA2DF4;
      }
      goto L_08AA2DDC;
    }
L_08AA2DDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2DF8;
      }
      goto L_08AA2DE4;
    }
L_08AA2DE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA309C;
      }
      goto L_08AA2DEC;
    }
L_08AA2DEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA309C;
      }
      goto L_08AA2DF4;
    }
L_08AA2DF4:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_08AA2DF8;
L_08AA2DF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA2E14;
      }
      goto L_08AA2E08;
    }
L_08AA2E08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA2E14;
L_08AA2E14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AA2E2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA2E2Cu) goto L_08AA2E2C;
    return;
L_08AA2E2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AA2EF4;
      }
      goto L_08AA2E34;
    }
L_08AA2E34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AA2E60u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08AA0804;
L_08AA2E60:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2EEC;
      }
      goto L_08AA2E6C;
    }
L_08AA2E6C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA2E78u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x08AA2E78u) goto L_08AA2E78;
    return;
L_08AA2E78:
    ctx.gpr[31] = (0x08AA2E80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08AA2E80u) goto L_08AA2E80;
    return;
L_08AA2E80:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25884)));
    ctx.gpr[31] = (0x08AA2E98u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25880)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08AA2E98u) goto L_08AA2E98;
    return;
L_08AA2E98:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08AA2EBCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x08AA2EBCu) goto L_08AA2EBC;
    return;
L_08AA2EBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08AA2ED4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 313u, 0x08925FB4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2ED4u) goto L_08AA2ED4;
    return;
L_08AA2ED4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA2EFC;
      }
      goto L_08AA2EE4;
    }
L_08AA2EE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AA2F10;
      }
      goto L_08AA2EEC;
    }
L_08AA2EEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA309C;
      }
      goto L_08AA2EF4;
    }
L_08AA2EF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA309C;
      }
      goto L_08AA2EFC;
    }
L_08AA2EFC:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    goto L_08AA2F10;
L_08AA2F10:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AA2F24u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA2F24u) goto L_08AA2F24;
    return;
L_08AA2F24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2F6C;
      }
      goto L_08AA2F2C;
    }
L_08AA2F2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AA2F58u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08AA0804;
L_08AA2F58:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2F74;
      }
      goto L_08AA2F64;
    }
L_08AA2F64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA309C;
      }
      goto L_08AA2F6C;
    }
L_08AA2F6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA309C;
      }
      goto L_08AA2F74;
    }
L_08AA2F74:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[31] = (0x08AA2F84u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08AA2F84u) goto L_08AA2F84;
    return;
L_08AA2F84:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA2F90u);
    ctx.gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 630u, 0x08887498u>(ctx, &aot_mem) && ctx.pc == 0x08AA2F90u) goto L_08AA2F90;
    return;
L_08AA2F90:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA2FA0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 609u, 0x088871B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA2FA0u) goto L_08AA2FA0;
    return;
L_08AA2FA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[31] = (0x08AA2FB8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2F78u>(ctx, &aot_mem) && ctx.pc == 0x08AA2FB8u) goto L_08AA2FB8;
    return;
L_08AA2FB8:
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2FE0;
      }
      goto L_08AA2FC8;
    }
L_08AA2FC8:
    ctx.gpr[31] = (0x08AA2FD0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 296u, 0x08A9D7E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2FD0u) goto L_08AA2FD0;
    return;
L_08AA2FD0:
    ctx.gpr[31] = (0x08AA2FD8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 296u, 0x08A9D7E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2FD8u) goto L_08AA2FD8;
    return;
L_08AA2FD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA309C;
      }
      goto L_08AA2FE0;
    }
L_08AA2FE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
        goto L_08AA2FF4;
    }
    goto L_08AA2FF4;
L_08AA2FF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA303Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 422u, 0x088A6CD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA303Cu) goto L_08AA303C;
    return;
L_08AA303C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AA3044;
L_08AA3044:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3080;
      }
      goto L_08AA3050;
    }
L_08AA3050:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3080;
      }
      goto L_08AA3058;
    }
L_08AA3058:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AA3080;
      }
      goto L_08AA3060;
    }
L_08AA3060:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AA3080;
      }
      goto L_08AA3068;
    }
L_08AA3068:
    ctx.gpr[31] = (0x08AA3070u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 296u, 0x08A9D7E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3070u) goto L_08AA3070;
    return;
L_08AA3070:
    ctx.gpr[31] = (0x08AA3078u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 296u, 0x08A9D7E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3078u) goto L_08AA3078;
    return;
L_08AA3078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA309C;
      }
      goto L_08AA3080;
    }
L_08AA3080:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA3044;
      }
      goto L_08AA3090;
    }
L_08AA3090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08AA309Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 313u, 0x08925FB4u>(ctx, &aot_mem) && ctx.pc == 0x08AA309Cu) goto L_08AA309C;
    return;
L_08AA309C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA30D0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25772)));
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(25776), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25768)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(25780), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(25784), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(25788), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14571u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(25792), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25796)));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2229u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(25800), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3164:
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
L_08AA3190:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA31A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    goto L_08AA3474;
L_08AA31A8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA31B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA31CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    goto L_08AA3474;
L_08AA31CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA31D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA31F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    goto L_08AA372C;
L_08AA31F0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA31FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA3214u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    goto L_08AA372C;
L_08AA3214:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3220:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA3238u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    goto L_08AA3474;
L_08AA3238:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3244:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[31] = (0x08AA3260u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_08AA3220;
L_08AA3260:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08AA327C;
      }
      goto L_08AA326C;
    }
L_08AA326C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA327Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AA327Cu) goto L_08AA327C;
    return;
L_08AA327C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3290:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA32A4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08AA3244;
L_08AA32A4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA32B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA32C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    goto L_08AA372C;
L_08AA32C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA32D4:
    ctx.gpr[5] = (2218u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA32FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA3328u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 35u, 0x08AA42B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3328u) goto L_08AA3328;
    return;
L_08AA3328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[5] = (ctx.gpr[16] >> 10u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(288), ctx.gpr[16]);
    ctx.gpr[31] = (0x08AA3354u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    goto L_08AA3E8C;
L_08AA3354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 264u);
    ctx.gpr[31] = (0x08AA3364u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(292), ctx.gpr[2]);
    goto L_08AA3E8C;
L_08AA3364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[11] = (ctx.gpr[2] | 0u);
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-8));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16));
    goto L_08AA3384;
L_08AA3384:
    ctx.gpr[3] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AA33B4;
      }
      goto L_08AA3394;
    }
L_08AA3394:
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[7]);
    ctx.gpr[2] = (ctx.gpr[8] >> 2u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[12]);
    ctx.gpr[2] = (ctx.gpr[2] << 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA3400;
      }
      goto L_08AA33B4;
    }
L_08AA33B4:
    ctx.gpr[8] = (ctx.gpr[9] < static_cast<std::uint32_t>(65) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(15));
      if (branch_taken) {
          goto L_08AA33E4;
      }
      goto L_08AA33C0;
    }
L_08AA33C0:
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(7));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[8] >> 3u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[12]);
    ctx.gpr[2] = (ctx.gpr[2] << 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA3400;
      }
      goto L_08AA33E4;
    }
L_08AA33E4:
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[8] >> 4u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(5));
    ctx.gpr[12] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[12]);
    ctx.gpr[2] = (ctx.gpr[2] << 2u);
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[2]);
    goto L_08AA3400;
L_08AA3400:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[3];
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA3424;
      }
      goto L_08AA3410;
    }
L_08AA3410:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3424;
      }
      goto L_08AA3418;
    }
L_08AA3418:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    goto L_08AA3424;
L_08AA3424:
    ctx.gpr[2] = (ctx.gpr[9] < static_cast<std::uint32_t>(257) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3384;
      }
      goto L_08AA3430;
    }
L_08AA3430:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08AA3444u);
    ctx.gpr[5] = (ctx.gpr[5] & 1023u);
    goto L_08AA3E8C;
L_08AA3444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA345C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3474:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3498;
      }
      goto L_08AA3484;
    }
L_08AA3484:
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(257) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
        goto L_08AA34A0;
    }
    goto L_08AA3490;
L_08AA3490:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA34E4;
      }
      goto L_08AA3498;
    }
L_08AA3498:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA34EC;
      }
      goto L_08AA34A0;
    }
L_08AA34A0:
    ctx.gpr[5] = (ctx.gpr[5] >> 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AA34D4;
      }
      goto L_08AA34C0;
    }
L_08AA34C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AA34DC;
      }
      goto L_08AA34D4;
    }
L_08AA34D4:
    ctx.gpr[31] = (0x08AA34DCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 273u, 0x08A258FCu>(ctx, &aot_mem) && ctx.pc == 0x08AA34DCu) goto L_08AA34DC;
    return;
L_08AA34DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA34EC;
      }
      goto L_08AA34E4;
    }
L_08AA34E4:
    ctx.gpr[31] = (0x08AA34ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 17u, 0x08AA4120u>(ctx, &aot_mem) && ctx.pc == 0x08AA34ECu) goto L_08AA34EC;
    return;
L_08AA34EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA34F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (~(ctx.gpr[8] | 0u));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[7] < static_cast<std::uint32_t>(257) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3564;
      }
      goto L_08AA3520;
    }
L_08AA3520:
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(3));
    ctx.gpr[5] = (ctx.gpr[5] >> 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AA3554;
      }
      goto L_08AA3544;
    }
L_08AA3544:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA355C;
      }
      goto L_08AA3554;
    }
L_08AA3554:
    ctx.gpr[31] = (0x08AA355Cu);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 273u, 0x08A258FCu>(ctx, &aot_mem) && ctx.pc == 0x08AA355Cu) goto L_08AA355C;
    return;
L_08AA355C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA356C;
      }
      goto L_08AA3564;
    }
L_08AA3564:
    ctx.gpr[31] = (0x08AA356Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 24u, 0x08AA41A4u>(ctx, &aot_mem) && ctx.pc == 0x08AA356Cu) goto L_08AA356C;
    return;
L_08AA356C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3578:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[7] & 255u);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA35F0;
      }
      goto L_08AA35B0;
    }
L_08AA35B0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA35DC;
      }
      goto L_08AA35B8;
    }
L_08AA35B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA35C4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AA3D54;
L_08AA35C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AA3604;
      }
      goto L_08AA35D4;
    }
L_08AA35D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA36AC;
      }
      goto L_08AA35DC;
    }
L_08AA35DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA35E8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AA372C;
L_08AA35E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA3704;
      }
      goto L_08AA35F0;
    }
L_08AA35F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA35FCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08AA3474;
L_08AA35FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3704;
      }
      goto L_08AA3604;
    }
L_08AA3604:
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[22] = (ctx.gpr[17] - ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3668;
      }
      goto L_08AA3620;
    }
L_08AA3620:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3668;
      }
      goto L_08AA363C;
    }
L_08AA363C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AA3654u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 107u, 0x08AA4930u>(ctx, &aot_mem) && ctx.pc == 0x08AA3654u) goto L_08AA3654;
    return;
L_08AA3654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    goto L_08AA3668;
L_08AA3668:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA36AC;
      }
      goto L_08AA3678;
    }
L_08AA3678:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AA3694u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 88u, 0x08AA477Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3694u) goto L_08AA3694;
    return;
L_08AA3694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA3704;
      }
      goto L_08AA36AC;
    }
L_08AA36AC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA36D8;
      }
      goto L_08AA36B4;
    }
L_08AA36B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA36C0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08AA3474;
L_08AA36C0:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AA36E0;
      }
      goto L_08AA36D0;
    }
L_08AA36D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA36E8;
      }
      goto L_08AA36D8;
    }
L_08AA36D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AA3704;
      }
      goto L_08AA36E0;
    }
L_08AA36E0:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_08AA36E8;
L_08AA36E8:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AA36F4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AA36F4u) goto L_08AA36F4;
    return;
L_08AA36F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA3700u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AA372C;
L_08AA3700:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08AA3704;
L_08AA3704:
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
L_08AA372C:
    if (lcs::is_world_buffer(psprecomp::GuestMemory::canonical(ctx.gpr[5]))) { ctx.pc = ctx.gpr[31]; return; }
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AA375C;
      }
      goto L_08AA3744;
    }
L_08AA3744:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
        goto L_08AA3764;
    }
    goto L_08AA3754;
L_08AA3754:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3790;
      }
      goto L_08AA375C;
    }
L_08AA375C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA37B4;
      }
      goto L_08AA3764;
    }
L_08AA3764:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(292)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] >> 10u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA37B4;
      }
      goto L_08AA3790;
    }
L_08AA3790:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[31] = (0x08AA37B4u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 74u, 0x08AA4600u>(ctx, &aot_mem) && ctx.pc == 0x08AA37B4u) goto L_08AA37B4;
    return;
L_08AA37B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA37C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-8184), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA38E4;
      }
      goto L_08AA37F8;
    }
L_08AA37F8:
    ctx.gpr[12] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (32768u << 16u);
    ctx.gpr[13] = (4096u << 16u);
    goto L_08AA3804;
L_08AA3804:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[9] & ctx.gpr[8]);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA38D4;
      }
      goto L_08AA381C;
    }
L_08AA381C:
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[6] | 0u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    goto L_08AA382C;
L_08AA382C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA38A0;
      }
      goto L_08AA3834;
    }
L_08AA3834:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AA38A0;
      }
      goto L_08AA383C;
    }
L_08AA383C:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[14] = (ctx.gpr[3] & ctx.gpr[8]);
    ctx.gpr[14] = (0u < ctx.gpr[14] ? 1u : 0u);
    ctx.gpr[14] = (ctx.gpr[14] & 255u);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA386C;
      }
      goto L_08AA3854;
    }
L_08AA3854:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] - ctx.gpr[12]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[2]);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AA3898;
      }
      goto L_08AA386C;
    }
L_08AA386C:
    ctx.gpr[3] = (ctx.gpr[3] & ctx.gpr[13]);
    ctx.gpr[3] = (0u < ctx.gpr[3] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[3] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3888;
      }
      goto L_08AA3880;
    }
L_08AA3880:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA38A0;
      }
      goto L_08AA3888;
    }
L_08AA3888:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[3] - ctx.gpr[12]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[3]);
    goto L_08AA3898;
L_08AA3898:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA382C;
      }
      goto L_08AA38A0;
    }
L_08AA38A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA38C0;
      }
      goto L_08AA38A8;
    }
L_08AA38A8:
    ctx.gpr[6] = (ctx.gpr[18] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA38B8;
      }
      goto L_08AA38B4;
    }
L_08AA38B4:
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    goto L_08AA38B8;
L_08AA38B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[11] | 0u);
      if (branch_taken) {
          goto L_08AA38DC;
      }
      goto L_08AA38C0;
    }
L_08AA38C0:
    ctx.gpr[9] = (ctx.gpr[10] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA38D4;
      }
      goto L_08AA38CC;
    }
L_08AA38CC:
    ctx.gpr[17] = (ctx.gpr[10] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08AA38D4;
L_08AA38D4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[9]);
    goto L_08AA38DC;
L_08AA38DC:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AA3804;
      }
      goto L_08AA38E4;
    }
L_08AA38E4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA391C;
      }
      goto L_08AA38EC;
    }
L_08AA38EC:
    ctx.gpr[31] = (0x08AA38F4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08AA3948;
L_08AA38F4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA391C;
      }
      goto L_08AA3900;
    }
L_08AA3900:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA3914u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19608));
    goto L_08AA3164;
L_08AA3914:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3930;
      }
      goto L_08AA391C;
    }
L_08AA391C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA3930u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19556));
    goto L_08AA3164;
L_08AA3930:
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
L_08AA3948:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2368));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[22] = (57344u << 16u);
    ctx.gpr[21] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (16384u << 16u);
    ctx.gpr[30] = (4096u << 16u);
    ctx.gpr[23] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    goto L_08AA39C8;
L_08AA39C8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3BEC;
      }
      goto L_08AA39D0;
    }
L_08AA39D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3BEC;
      }
      goto L_08AA39EC;
    }
L_08AA39EC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (ctx.gpr[17] - ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[19] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3A24;
      }
      goto L_08AA3A08;
    }
L_08AA3A08:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3A30;
      }
      goto L_08AA3A1C;
    }
L_08AA3A1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3A54;
      }
      goto L_08AA3A24;
    }
L_08AA3A24:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AA3BF4;
      }
      goto L_08AA3A30;
    }
L_08AA3A30:
    ctx.gpr[31] = (0x08AA3A38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 107u, 0x08AA4930u>(ctx, &aot_mem) && ctx.pc == 0x08AA3A38u) goto L_08AA3A38;
    return;
L_08AA3A38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3A30;
      }
      goto L_08AA3A50;
    }
L_08AA3A50:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AA3A54;
L_08AA3A54:
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3B08;
      }
      goto L_08AA3A70;
    }
L_08AA3A70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-8184)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AA3B08;
      }
      goto L_08AA3A80;
    }
L_08AA3A80:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[5] - ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-8184), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    ctx.gpr[31] = (0x08AA3AD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 126u, 0x08AA4A90u>(ctx, &aot_mem) && ctx.pc == 0x08AA3AD0u) goto L_08AA3AD0;
    return;
L_08AA3AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (28672u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AA3B14;
    }
    goto L_08AA3B00;
L_08AA3B00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA3B38;
      }
      goto L_08AA3B08;
    }
L_08AA3B08:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AA3BF4;
      }
      goto L_08AA3B14;
    }
L_08AA3B14:
    ctx.gpr[5] = (49152u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AA3B38;
L_08AA3B38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AA3B94;
      }
      goto L_08AA3B80;
    }
L_08AA3B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[17]);
    goto L_08AA3B94;
L_08AA3B94:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08AA3BB8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AA3BB8u) goto L_08AA3BB8;
    return;
L_08AA3BB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA3BD8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 88u, 0x08AA477Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3BD8u) goto L_08AA3BD8;
    return;
L_08AA3BD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA39C8;
      }
      goto L_08AA3BEC;
    }
L_08AA3BEC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.gpr[2] = (0u | 0u);
    goto L_08AA3BF4;
L_08AA3BF4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3C24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-8184), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AA3C9C;
      }
      goto L_08AA3C54;
    }
L_08AA3C54:
    ctx.gpr[17] = (32768u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (32768u << 16u);
    goto L_08AA3C60;
L_08AA3C60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3C88;
      }
      goto L_08AA3C78;
    }
L_08AA3C78:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA3C88u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08AA3948;
L_08AA3C88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA3C60;
      }
      goto L_08AA3C9C;
    }
L_08AA3C9C:
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
L_08AA3CB8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3CDC;
      }
      goto L_08AA3CCC;
    }
L_08AA3CCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3CE4;
      }
      goto L_08AA3CDC;
    }
L_08AA3CDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA3D4C;
      }
      goto L_08AA3CE4;
    }
L_08AA3CE4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8184)));
    ctx.gpr[9] = (2232u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2368));
    ctx.gpr[8] = (ctx.gpr[4] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08AA3D48;
      }
      goto L_08AA3D0C;
    }
L_08AA3D0C:
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[10] = (ctx.gpr[10] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3D3C;
      }
      goto L_08AA3D28;
    }
L_08AA3D28:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA3D4C;
      }
      goto L_08AA3D3C;
    }
L_08AA3D3C:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08AA3D0C;
      }
      goto L_08AA3D48;
    }
L_08AA3D48:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AA3D4C;
L_08AA3D4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3D54:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3D8C;
      }
      goto L_08AA3D64;
    }
L_08AA3D64:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(292)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] >> 10u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA3D9C;
      }
      goto L_08AA3D8C;
    }
L_08AA3D8C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[2]);
    goto L_08AA3D9C;
L_08AA3D9C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3DA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1023));
    ctx.gpr[5] = (ctx.gpr[5] >> 10u);
    ctx.gpr[8] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AA3DE4;
      }
      goto L_08AA3DC0;
    }
L_08AA3DC0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3DE4;
      }
      goto L_08AA3DCC;
    }
L_08AA3DCC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] >> 10u);
      if (branch_taken) {
          goto L_08AA3E48;
      }
      goto L_08AA3DE4;
    }
L_08AA3DE4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(288)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3E30;
      }
      goto L_08AA3E00;
    }
L_08AA3E00:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[31] = (0x08AA3E18u);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    goto L_08AA3E8C;
L_08AA3E18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AA3E38;
      }
      goto L_08AA3E28;
    }
L_08AA3E28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA3E80;
      }
      goto L_08AA3E30;
    }
L_08AA3E30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA3E80;
      }
      goto L_08AA3E38;
    }
L_08AA3E38:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[7] >> 10u);
    goto L_08AA3E48;
L_08AA3E48:
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AA3E80;
      }
      goto L_08AA3E5C;
    }
L_08AA3E5C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(292)));
    ctx.gpr[10] = (ctx.gpr[5] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AA3E5C;
      }
      goto L_08AA3E80;
    }
L_08AA3E80:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3E8C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (4096u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[8] & ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[8] ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_08AA3EC0;
    }
    goto L_08AA3EB8;
L_08AA3EB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA3EF4;
      }
      goto L_08AA3EC0;
    }
L_08AA3EC0:
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (8192u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    goto L_08AA3EF4;
L_08AA3EF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3EFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.gpr[5] = (ctx.gpr[5] >> 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1024));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1023));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3F60;
      }
      goto L_08AA3F38;
    }
L_08AA3F38:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08AA3F50u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08AA3DA4;
L_08AA3F50:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08AA3F60u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 270u, 0x08A258A0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3F60u) goto L_08AA3F60;
    return;
L_08AA3F60:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3F6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3F84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA3FAC;
      }
      goto L_08AA3F98;
    }
L_08AA3F98:
    ctx.gpr[31] = (0x08AA3FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 55u, 0x08AA443Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3FA0u) goto L_08AA3FA0;
    return;
L_08AA3FA0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[4]);
    goto L_08AA3FAC;
L_08AA3FAC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3FB8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3FC8;
      }
      goto L_08AA3FC0;
    }
L_08AA3FC0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AA3FD4;
      }
      goto L_08AA3FC8;
    }
L_08AA3FC8:
    ctx.gpr[5] = (2218u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08AA3FD4;
L_08AA3FD4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3FDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-19484));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.pc = 0x08AA4000u; return;
}

void recomp_unit_0167(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0167_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_167(Runtime &runtime) {
    runtime.register_generated_unit(167u, 0x08AA0000u, 16384u, &recomp_unit_0167, &recomp_unit_0167_entry);
    runtime.register_function(0x08AA0000u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0018u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0020u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0028u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0034u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0040u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0044u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0054u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA005Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0064u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0098u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA00B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA00CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA00D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA00DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA00F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA00F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA010Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0114u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA011Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0134u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0158u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0160u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA016Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA017Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0188u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0194u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0200u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA020Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA021Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0228u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0230u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0238u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0240u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0254u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0258u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA02A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA02ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0314u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0324u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0330u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0338u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0340u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0348u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0350u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA035Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0368u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0370u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0378u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0388u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA03A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA03B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA03C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA03D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA03E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA03F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0400u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0410u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA041Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0424u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0438u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0440u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0448u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0458u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA046Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0494u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0500u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0508u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0518u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA052Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0540u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0558u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0560u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0574u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0584u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0594u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA060Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0620u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0644u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA064Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0654u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0664u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0670u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0674u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0688u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA069Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA06A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA06A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA06B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA06CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA06E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA06ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0704u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0718u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA071Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0734u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA077Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA079Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0804u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0844u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0860u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA086Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0878u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0884u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0888u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0904u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0914u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0920u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0928u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0930u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA093Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0944u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA094Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0958u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0964u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0970u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0978u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0988u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0990u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA099Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A70u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A84u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A94u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0AA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0AACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0AB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0AB8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0AF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B20u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B64u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B6Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B70u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BD8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BFCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C04u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C7Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C84u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D6Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D84u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D88u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DD8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DF0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DF8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E70u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E94u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0FA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0FBCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0FC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0FC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0FD4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0FDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0FE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1058u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA106Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1080u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1090u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1098u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA110Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1114u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA111Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1138u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1140u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1150u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1160u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1170u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1178u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1180u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1188u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA119Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1214u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA122Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1234u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1238u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1240u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1280u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1288u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1298u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA129Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1300u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1320u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1328u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1334u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1340u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1348u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1350u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1358u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1360u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA136Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1388u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1390u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1398u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1424u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1434u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1440u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1450u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA145Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1460u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1468u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA148Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1494u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1510u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1518u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1520u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1550u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1580u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1608u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1634u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA163Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA164Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA165Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1668u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1678u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA167Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1684u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1690u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA169Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1704u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1710u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA171Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1730u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1738u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1748u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1758u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA175Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1764u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1768u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1770u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1788u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA178Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1790u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1800u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1814u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA181Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA182Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA183Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1840u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1848u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA184Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1854u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA186Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1870u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1874u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1900u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1910u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1920u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1934u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA195Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1974u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA197Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A38u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1AFCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B04u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BB0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BD0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C54u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1CECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D7Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1DD4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1DECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E40u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E5Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E74u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E88u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1EC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1ECCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1ED4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1EDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1EE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1FB0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1FB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1FE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2040u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA20E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA20ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA20F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA20FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2104u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA210Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2140u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA215Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2164u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2178u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2180u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2198u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2280u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2290u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA22A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA22C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA22D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA22DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA22F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2304u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA231Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2324u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA232Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2334u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2348u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2370u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA237Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2388u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA239Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2424u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2428u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2430u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2438u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA245Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2460u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2468u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2470u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2478u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2494u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA24A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA24C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA24D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA24E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA24ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA24F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2500u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2508u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA251Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2528u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2538u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2540u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2550u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2558u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2578u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2588u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2598u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2620u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA262Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA263Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2648u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2654u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2660u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2664u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA266Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2670u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2674u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA267Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA269Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA26A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA26B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2700u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA277Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2784u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2794u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA279Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2808u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2810u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2830u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2840u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2858u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2860u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2868u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2870u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2878u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2880u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2894u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2900u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA290Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2914u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA292Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2950u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2964u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA296Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2974u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA297Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2984u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2994u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A04u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A40u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A5Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A74u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2ABCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AF0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B38u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B40u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B70u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B84u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BB0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BD8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BF0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BFCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C94u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2CA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2CE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2CECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2CF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2CFCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D04u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D40u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D5Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D64u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DB8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DF8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E6Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2EBCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2ED4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2EE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2EECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2EF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2EFCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F64u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F6Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F74u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F84u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FB8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FD0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FD8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA303Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3044u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3050u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3058u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3060u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3068u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3070u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3078u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3080u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3090u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA309Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3164u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3190u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA31A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA31B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA31CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA31D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA31F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA31FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3214u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3220u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3238u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3244u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3260u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA326Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA327Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3290u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA32A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA32B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA32C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA32D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA32FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3328u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3354u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3364u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3384u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3394u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA33B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA33C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA33E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3400u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3410u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3418u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3424u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3430u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3444u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA345Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3474u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3484u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3490u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3498u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3520u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3544u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3554u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA355Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3564u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA356Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3578u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3604u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3620u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA363Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3654u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3668u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3678u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3694u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3700u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3704u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA372Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3744u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3754u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA375Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3764u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3790u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA37B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA37C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA37F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3804u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA381Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA382Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3834u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA383Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3854u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA386Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3880u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3888u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3898u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3900u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3914u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA391Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3930u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3948u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA39C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA39D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA39ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A38u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A54u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A70u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3AD0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B38u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B94u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BB8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BD8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C54u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C88u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C9Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CB8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CCCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D54u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D64u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D9Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3DA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3DC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3DCCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3DE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E38u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E5Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3EB8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3EC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3EF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3EFCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F38u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F6Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F84u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FB8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FD4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FDCu, &recomp_unit_0167, "recomp_unit_0167");
}
} // namespace psprecomp
