#include "figureRGB.h"

void initNeoPixel()
{
    pixels.begin();
    pixels.clear();
    pixels.show();
    pixels.setBrightness(brightness);
}

void showAlien()
{
      pixels.setPixelColor(0, 0, 0, 0); pixels.setPixelColor(1, 0, 0, 0); pixels.setPixelColor(2, 0, 0, 0); pixels.setPixelColor(3, 0, 0, 0); pixels.setPixelColor(4, 0, 0, 0); pixels.setPixelColor(5, 0, 0, 0); pixels.setPixelColor(6, 0, 255, 0); pixels.setPixelColor(7, 0, 255, 0); pixels.setPixelColor(8, 0, 255, 0); pixels.setPixelColor(9, 0, 255, 0); pixels.setPixelColor(10, 0, 0, 0); pixels.setPixelColor(11, 0, 0, 0); pixels.setPixelColor(12, 0, 0, 0); pixels.setPixelColor(13, 0, 0, 0); pixels.setPixelColor(14, 0, 0, 0); pixels.setPixelColor(15, 0, 0, 0); pixels.setPixelColor(16, 0, 0, 0); pixels.setPixelColor(17, 0, 0, 0); pixels.setPixelColor(18, 0, 0, 0); pixels.setPixelColor(19, 0, 0, 0); pixels.setPixelColor(20, 0, 255, 0); pixels.setPixelColor(21, 0, 255, 0); pixels.setPixelColor(22, 0, 255, 0); pixels.setPixelColor(23, 0, 255, 0); pixels.setPixelColor(24, 0, 255, 0); pixels.setPixelColor(25, 0, 255, 0); pixels.setPixelColor(26, 0, 255, 0); pixels.setPixelColor(27, 0, 255, 0); pixels.setPixelColor(28, 0, 0, 0); pixels.setPixelColor(29, 0, 0, 0); pixels.setPixelColor(30, 0, 0, 0); pixels.setPixelColor(31, 0, 0, 0); pixels.setPixelColor(32, 0, 0, 0); pixels.setPixelColor(33, 0, 0, 0); pixels.setPixelColor(34, 0, 0, 0); pixels.setPixelColor(35, 0, 255, 0); pixels.setPixelColor(36, 0, 255, 0); pixels.setPixelColor(37, 0, 255, 0); pixels.setPixelColor(38, 0, 255, 0); pixels.setPixelColor(39, 0, 255, 0); pixels.setPixelColor(40, 0, 255, 0); pixels.setPixelColor(41, 0, 255, 0); pixels.setPixelColor(42, 0, 255, 0); pixels.setPixelColor(43, 0, 255, 0); pixels.setPixelColor(44, 0, 255, 0); pixels.setPixelColor(45, 0, 0, 0); pixels.setPixelColor(46, 0, 0, 0); pixels.setPixelColor(47, 0, 0, 0); pixels.setPixelColor(48, 0, 0, 0); pixels.setPixelColor(49, 0, 0, 0); pixels.setPixelColor(50, 0, 255, 0); pixels.setPixelColor(51, 0, 255, 0); pixels.setPixelColor(52, 0, 255, 0); pixels.setPixelColor(53, 0, 255, 0); pixels.setPixelColor(54, 0, 255, 0); pixels.setPixelColor(55, 0, 255, 0); pixels.setPixelColor(56, 0, 255, 0); pixels.setPixelColor(57, 0, 255, 0); pixels.setPixelColor(58, 0, 255, 0); pixels.setPixelColor(59, 0, 255, 0); pixels.setPixelColor(60, 0, 255, 0); pixels.setPixelColor(61, 0, 255, 0); pixels.setPixelColor(62, 0, 0, 0); pixels.setPixelColor(63, 0, 0, 0); pixels.setPixelColor(64, 0, 0, 0); pixels.setPixelColor(65, 0, 0, 0); pixels.setPixelColor(66, 0, 255, 0); pixels.setPixelColor(67, 0, 255, 0); pixels.setPixelColor(68, 0, 255, 0); pixels.setPixelColor(69, 0, 255, 0); pixels.setPixelColor(70, 0, 255, 0); pixels.setPixelColor(71, 0, 255, 0); pixels.setPixelColor(72, 0, 255, 0); pixels.setPixelColor(73, 0, 255, 0); pixels.setPixelColor(74, 0, 255, 0); pixels.setPixelColor(75, 0, 255, 0); pixels.setPixelColor(76, 0, 255, 0); pixels.setPixelColor(77, 0, 255, 0); pixels.setPixelColor(78, 0, 0, 0); pixels.setPixelColor(79, 0, 0, 0); pixels.setPixelColor(80, 0, 0, 0); pixels.setPixelColor(81, 0, 255, 0); pixels.setPixelColor(82, 0, 0, 0); pixels.setPixelColor(83, 0, 0, 0); pixels.setPixelColor(84, 0, 0, 0); pixels.setPixelColor(85, 0, 255, 0); pixels.setPixelColor(86, 0, 255, 0); pixels.setPixelColor(87, 0, 255, 0); pixels.setPixelColor(88, 0, 255, 0); pixels.setPixelColor(89, 0, 255, 0); pixels.setPixelColor(90, 0, 255, 0); pixels.setPixelColor(91, 0, 0, 0); pixels.setPixelColor(92, 0, 0, 0); pixels.setPixelColor(93, 0, 0, 0); pixels.setPixelColor(94, 0, 255, 0); pixels.setPixelColor(95, 0, 0, 0); pixels.setPixelColor(96, 0, 0, 0); pixels.setPixelColor(97, 0, 255, 0); pixels.setPixelColor(98, 0, 0, 0); pixels.setPixelColor(99, 0, 255, 255); pixels.setPixelColor(100, 0, 255, 255); pixels.setPixelColor(101, 0, 0, 0); pixels.setPixelColor(102, 0, 255, 0); pixels.setPixelColor(103, 0, 255, 0); pixels.setPixelColor(104, 0, 255, 0); pixels.setPixelColor(105, 0, 255, 0); pixels.setPixelColor(106, 0, 0, 0); pixels.setPixelColor(107, 0, 255, 255); pixels.setPixelColor(108, 0, 255, 255); pixels.setPixelColor(109, 0, 0, 0); pixels.setPixelColor(110, 0, 255, 0); pixels.setPixelColor(111, 0, 0, 0); pixels.setPixelColor(112, 0, 0, 0); pixels.setPixelColor(113, 0, 255, 0); pixels.setPixelColor(114, 0, 0, 0); pixels.setPixelColor(115, 0, 255, 255); pixels.setPixelColor(116, 0, 0, 0); pixels.setPixelColor(117, 0, 0, 0); pixels.setPixelColor(118, 0, 0, 0); pixels.setPixelColor(119, 0, 255, 0); pixels.setPixelColor(120, 0, 255, 0); pixels.setPixelColor(121, 0, 0, 0); pixels.setPixelColor(122, 0, 0, 0); pixels.setPixelColor(123, 0, 0, 0); pixels.setPixelColor(124, 0, 255, 255); pixels.setPixelColor(125, 0, 0, 0); pixels.setPixelColor(126, 0, 255, 0); pixels.setPixelColor(127, 0, 0, 0); pixels.setPixelColor(128, 0, 0, 0); pixels.setPixelColor(129, 0, 255, 0); pixels.setPixelColor(130, 0, 0, 0); pixels.setPixelColor(131, 0, 0, 0); pixels.setPixelColor(132, 0, 0, 0); pixels.setPixelColor(133, 0, 255, 255); pixels.setPixelColor(134, 0, 0, 0); pixels.setPixelColor(135, 0, 255, 0); pixels.setPixelColor(136, 0, 255, 0); pixels.setPixelColor(137, 0, 0, 0); pixels.setPixelColor(138, 0, 255, 255); pixels.setPixelColor(139, 0, 0, 0); pixels.setPixelColor(140, 0, 0, 0); pixels.setPixelColor(141, 0, 0, 0); pixels.setPixelColor(142, 0, 255, 0); pixels.setPixelColor(143, 0, 0, 0); pixels.setPixelColor(144, 0, 0, 0); pixels.setPixelColor(145, 0, 255, 0); pixels.setPixelColor(146, 0, 255, 0); pixels.setPixelColor(147, 0, 0, 0); pixels.setPixelColor(148, 0, 0, 0); pixels.setPixelColor(149, 0, 0, 0); pixels.setPixelColor(150, 0, 0, 0); pixels.setPixelColor(151, 0, 255, 0); pixels.setPixelColor(152, 0, 255, 0); pixels.setPixelColor(153, 0, 0, 0); pixels.setPixelColor(154, 0, 0, 0); pixels.setPixelColor(155, 0, 0, 0); pixels.setPixelColor(156, 0, 0, 0); pixels.setPixelColor(157, 0, 0, 0); pixels.setPixelColor(158, 0, 255, 0); pixels.setPixelColor(159, 0, 0, 0); pixels.setPixelColor(160, 0, 0, 0); pixels.setPixelColor(161, 0, 0, 0); pixels.setPixelColor(162, 0, 255, 0); pixels.setPixelColor(163, 0, 255, 0); pixels.setPixelColor(164, 0, 0, 0); pixels.setPixelColor(165, 0, 0, 0); pixels.setPixelColor(166, 0, 0, 0); pixels.setPixelColor(167, 0, 255, 0); pixels.setPixelColor(168, 0, 255, 0); pixels.setPixelColor(169, 0, 0, 0); pixels.setPixelColor(170, 0, 0, 0); pixels.setPixelColor(171, 0, 0, 0); pixels.setPixelColor(172, 0, 255, 0); pixels.setPixelColor(173, 0, 255, 0); pixels.setPixelColor(174, 0, 0, 0); pixels.setPixelColor(175, 0, 0, 0); pixels.setPixelColor(176, 0, 0, 0); pixels.setPixelColor(177, 0, 0, 0); pixels.setPixelColor(178, 0, 255, 0); pixels.setPixelColor(179, 0, 255, 0); pixels.setPixelColor(180, 0, 255, 0); pixels.setPixelColor(181, 0, 255, 0); pixels.setPixelColor(182, 0, 255, 0); pixels.setPixelColor(183, 0, 255, 0); pixels.setPixelColor(184, 0, 255, 0); pixels.setPixelColor(185, 0, 255, 0); pixels.setPixelColor(186, 0, 255, 0); pixels.setPixelColor(187, 0, 255, 0); pixels.setPixelColor(188, 0, 255, 0); pixels.setPixelColor(189, 0, 0, 0); pixels.setPixelColor(190, 0, 0, 0); pixels.setPixelColor(191, 0, 0, 0); pixels.setPixelColor(192, 0, 0, 0); pixels.setPixelColor(193, 0, 0, 0); pixels.setPixelColor(194, 0, 0, 0); pixels.setPixelColor(195, 0, 255, 0); pixels.setPixelColor(196, 0, 255, 0); pixels.setPixelColor(197, 0, 255, 0); pixels.setPixelColor(198, 0, 255, 0); pixels.setPixelColor(199, 0, 0, 0); pixels.setPixelColor(200, 0, 0, 0); pixels.setPixelColor(201, 0, 255, 0); pixels.setPixelColor(202, 0, 255, 0); pixels.setPixelColor(203, 0, 255, 0); pixels.setPixelColor(204, 0, 255, 0); pixels.setPixelColor(205, 0, 0, 0); pixels.setPixelColor(206, 0, 0, 0); pixels.setPixelColor(207, 0, 0, 0); pixels.setPixelColor(208, 0, 0, 0); pixels.setPixelColor(209, 0, 0, 0); pixels.setPixelColor(210, 0, 0, 0); pixels.setPixelColor(211, 0, 0, 0); pixels.setPixelColor(212, 0, 255, 0); pixels.setPixelColor(213, 0, 255, 0); pixels.setPixelColor(214, 0, 255, 0); pixels.setPixelColor(215, 0, 255, 0); pixels.setPixelColor(216, 0, 255, 0); pixels.setPixelColor(217, 0, 255, 0); pixels.setPixelColor(218, 0, 255, 0); pixels.setPixelColor(219, 0, 255, 0); pixels.setPixelColor(220, 0, 0, 0); pixels.setPixelColor(221, 0, 0, 0); pixels.setPixelColor(222, 0, 0, 0); pixels.setPixelColor(223, 0, 0, 0); pixels.setPixelColor(224, 0, 0, 0); pixels.setPixelColor(225, 0, 0, 0); pixels.setPixelColor(226, 0, 0, 0); pixels.setPixelColor(227, 0, 0, 0); pixels.setPixelColor(228, 0, 0, 0); pixels.setPixelColor(229, 0, 255, 0); pixels.setPixelColor(230, 0, 255, 0); pixels.setPixelColor(231, 0, 255, 0); pixels.setPixelColor(232, 0, 255, 0); pixels.setPixelColor(233, 0, 255, 0); pixels.setPixelColor(234, 0, 255, 0); pixels.setPixelColor(235, 0, 0, 0); pixels.setPixelColor(236, 0, 0, 0); pixels.setPixelColor(237, 0, 0, 0); pixels.setPixelColor(238, 0, 0, 0); pixels.setPixelColor(239, 0, 0, 0); pixels.setPixelColor(240, 0, 0, 0); pixels.setPixelColor(241, 0, 0, 0); pixels.setPixelColor(242, 0, 0, 0); pixels.setPixelColor(243, 0, 0, 0); pixels.setPixelColor(244, 0, 0, 0); pixels.setPixelColor(245, 0, 0, 0); pixels.setPixelColor(246, 0, 255, 0); pixels.setPixelColor(247, 0, 255, 0); pixels.setPixelColor(248, 0, 255, 0); pixels.setPixelColor(249, 0, 255, 0); pixels.setPixelColor(250, 0, 0, 0); pixels.setPixelColor(251, 0, 0, 0); pixels.setPixelColor(252, 0, 0, 0); pixels.setPixelColor(253, 0, 0, 0); pixels.setPixelColor(254, 0, 0, 0); pixels.setPixelColor(255, 0, 0, 0);
}

void showSpiderman()
{
    for (int i = 0; i < 10; i++)
  {
    // Spiderman
    pixels.setPixelColor(0, 255, 255, 255); pixels.setPixelColor(1, 255, 255, 255); pixels.setPixelColor(2, 255, 255, 255); pixels.setPixelColor(3, 255, 255, 255); pixels.setPixelColor(4, 255, 255, 255); pixels.setPixelColor(5, 255, 0, 0); pixels.setPixelColor(6, 255, 0, 0); pixels.setPixelColor(7, 255, 0, 0); pixels.setPixelColor(8, 255, 0, 0); pixels.setPixelColor(9, 255, 0, 0); pixels.setPixelColor(10, 255, 255, 255); pixels.setPixelColor(11, 255, 255, 255); pixels.setPixelColor(12, 255, 255, 255); pixels.setPixelColor(13, 255, 255, 255); pixels.setPixelColor(14, 255, 255, 255); pixels.setPixelColor(15, 255, 255, 255); pixels.setPixelColor(16, 255, 255, 255); pixels.setPixelColor(17, 255, 255, 255); pixels.setPixelColor(18, 255, 255, 255); pixels.setPixelColor(19, 255, 255, 255); pixels.setPixelColor(20, 255, 0, 0); pixels.setPixelColor(21, 255, 0, 0); pixels.setPixelColor(22, 255, 0, 0); pixels.setPixelColor(23, 255, 0, 0); pixels.setPixelColor(24, 255, 0, 0); pixels.setPixelColor(25, 255, 0, 0); pixels.setPixelColor(26, 255, 0, 0); pixels.setPixelColor(27, 255, 255, 255); pixels.setPixelColor(28, 255, 255, 255); pixels.setPixelColor(29, 255, 255, 255); pixels.setPixelColor(30, 255, 255, 255); pixels.setPixelColor(31, 255, 255, 255); pixels.setPixelColor(32, 255, 255, 255); pixels.setPixelColor(33, 255, 255, 255); pixels.setPixelColor(34, 255, 255, 255); pixels.setPixelColor(35, 255, 0, 0); pixels.setPixelColor(36, 255, 0, 0); pixels.setPixelColor(37, 0, 0, 0); pixels.setPixelColor(38, 255, 0, 0); pixels.setPixelColor(39, 255, 0, 0); pixels.setPixelColor(40, 255, 0, 0); pixels.setPixelColor(41, 255, 0, 0); pixels.setPixelColor(42, 0, 0, 0); pixels.setPixelColor(43, 255, 0, 0); pixels.setPixelColor(44, 255, 255, 255); pixels.setPixelColor(45, 255, 255, 255); pixels.setPixelColor(46, 255, 255, 255); pixels.setPixelColor(47, 255, 255, 255); pixels.setPixelColor(48, 255, 255, 255); pixels.setPixelColor(49, 255, 255, 255); pixels.setPixelColor(50, 255, 255, 255); pixels.setPixelColor(51, 255, 0, 0); pixels.setPixelColor(52, 0, 0, 0); pixels.setPixelColor(53, 255, 255, 255); pixels.setPixelColor(54, 0, 0, 0); pixels.setPixelColor(55, 255, 0, 0); pixels.setPixelColor(56, 255, 0, 0); pixels.setPixelColor(57, 0, 0, 0); pixels.setPixelColor(58, 255, 255, 255); pixels.setPixelColor(59, 0, 0, 0); pixels.setPixelColor(60, 255, 0, 0); pixels.setPixelColor(61, 255, 255, 255); pixels.setPixelColor(62, 255, 255, 255); pixels.setPixelColor(63, 255, 255, 255); pixels.setPixelColor(64, 255, 255, 255); pixels.setPixelColor(65, 255, 255, 255); pixels.setPixelColor(66, 255, 255, 255); pixels.setPixelColor(67, 255, 0, 0); pixels.setPixelColor(68, 0, 0, 0); pixels.setPixelColor(69, 255, 255, 255); pixels.setPixelColor(70, 255, 255, 255); pixels.setPixelColor(71, 0, 0, 0); pixels.setPixelColor(72, 0, 0, 0); pixels.setPixelColor(73, 255, 255, 255); pixels.setPixelColor(74, 255, 255, 255); pixels.setPixelColor(75, 0, 0, 0); pixels.setPixelColor(76, 255, 0, 0); pixels.setPixelColor(77, 255, 255, 255); pixels.setPixelColor(78, 255, 255, 255); pixels.setPixelColor(79, 255, 255, 255); pixels.setPixelColor(80, 255, 255, 255); pixels.setPixelColor(81, 255, 255, 255); pixels.setPixelColor(82, 255, 255, 255); pixels.setPixelColor(83, 255, 0, 0); pixels.setPixelColor(84, 255, 0, 0); pixels.setPixelColor(85, 0, 0, 0); pixels.setPixelColor(86, 0, 0, 0); pixels.setPixelColor(87, 255, 0, 0); pixels.setPixelColor(88, 255, 0, 0); pixels.setPixelColor(89, 0, 0, 0); pixels.setPixelColor(90, 0, 0, 0); pixels.setPixelColor(91, 255, 0, 0); pixels.setPixelColor(92, 255, 0, 0); pixels.setPixelColor(93, 255, 255, 255); pixels.setPixelColor(94, 255, 255, 255); pixels.setPixelColor(95, 255, 255, 255); pixels.setPixelColor(96, 255, 255, 255); pixels.setPixelColor(97, 255, 255, 255); pixels.setPixelColor(98, 255, 255, 255); pixels.setPixelColor(99, 255, 255, 255); pixels.setPixelColor(100, 255, 0, 0); pixels.setPixelColor(101, 255, 0, 0); pixels.setPixelColor(102, 255, 0, 0); pixels.setPixelColor(103, 255, 0, 0); pixels.setPixelColor(104, 255, 0, 0); pixels.setPixelColor(105, 255, 0, 0); pixels.setPixelColor(106, 255, 0, 0); pixels.setPixelColor(107, 255, 0, 0); pixels.setPixelColor(108, 255, 255, 255); pixels.setPixelColor(109, 255, 255, 255); pixels.setPixelColor(110, 255, 255, 255); pixels.setPixelColor(111, 255, 255, 255); pixels.setPixelColor(112, 255, 255, 255); pixels.setPixelColor(113, 255, 255, 255); pixels.setPixelColor(114, 255, 255, 255); pixels.setPixelColor(115, 255, 255, 255); pixels.setPixelColor(116, 255, 255, 255); pixels.setPixelColor(117, 255, 255, 255); pixels.setPixelColor(118, 255, 0, 0); pixels.setPixelColor(119, 255, 0, 0); pixels.setPixelColor(120, 255, 0, 0); pixels.setPixelColor(121, 255, 255, 255); pixels.setPixelColor(122, 255, 255, 255); pixels.setPixelColor(123, 255, 255, 255); pixels.setPixelColor(124, 255, 255, 255); pixels.setPixelColor(125, 255, 255, 255); pixels.setPixelColor(126, 255, 255, 255); pixels.setPixelColor(127, 255, 255, 255); pixels.setPixelColor(128, 255, 255, 255); pixels.setPixelColor(129, 255, 255, 255); pixels.setPixelColor(130, 255, 255, 255); pixels.setPixelColor(131, 255, 255, 255); pixels.setPixelColor(132, 0, 0, 255); pixels.setPixelColor(133, 255, 0, 0); pixels.setPixelColor(134, 255, 0, 0); pixels.setPixelColor(135, 255, 0, 0); pixels.setPixelColor(136, 255, 0, 0); pixels.setPixelColor(137, 255, 0, 0); pixels.setPixelColor(138, 0, 0, 255); pixels.setPixelColor(139, 255, 255, 255); pixels.setPixelColor(140, 255, 255, 255); pixels.setPixelColor(141, 255, 255, 255); pixels.setPixelColor(142, 255, 255, 255); pixels.setPixelColor(143, 255, 255, 255); pixels.setPixelColor(144, 255, 255, 255); pixels.setPixelColor(145, 255, 255, 255); pixels.setPixelColor(146, 255, 255, 255); pixels.setPixelColor(147, 0, 0, 255); pixels.setPixelColor(148, 255, 0, 0); pixels.setPixelColor(149, 255, 0, 0); pixels.setPixelColor(150, 0, 0, 0); pixels.setPixelColor(151, 255, 0, 0); pixels.setPixelColor(152, 0, 0, 0); pixels.setPixelColor(153, 255, 0, 0); pixels.setPixelColor(154, 255, 0, 0); pixels.setPixelColor(155, 0, 0, 255); pixels.setPixelColor(156, 255, 255, 255); pixels.setPixelColor(157, 255, 255, 255); pixels.setPixelColor(158, 255, 255, 255); pixels.setPixelColor(159, 255, 255, 255); pixels.setPixelColor(160, 255, 255, 255); pixels.setPixelColor(161, 255, 255, 255); pixels.setPixelColor(162, 255, 0, 0); pixels.setPixelColor(163, 0, 0, 255); pixels.setPixelColor(164, 0, 0, 255); pixels.setPixelColor(165, 255, 0, 0); pixels.setPixelColor(166, 255, 0, 0); pixels.setPixelColor(167, 0, 0, 0); pixels.setPixelColor(168, 255, 0, 0); pixels.setPixelColor(169, 255, 0, 0); pixels.setPixelColor(170, 0, 0, 255); pixels.setPixelColor(171, 0, 0, 255); pixels.setPixelColor(172, 255, 0, 0); pixels.setPixelColor(173, 255, 255, 255); pixels.setPixelColor(174, 255, 255, 255); pixels.setPixelColor(175, 255, 255, 255); pixels.setPixelColor(176, 255, 255, 255); pixels.setPixelColor(177, 255, 255, 255); pixels.setPixelColor(178, 255, 0, 0); pixels.setPixelColor(179, 255, 0, 0); pixels.setPixelColor(180, 255, 255, 255); pixels.setPixelColor(181, 0, 0, 255); pixels.setPixelColor(182, 0, 0, 0); pixels.setPixelColor(183, 255, 0, 0); pixels.setPixelColor(184, 0, 0, 0); pixels.setPixelColor(185, 0, 0, 255); pixels.setPixelColor(186, 255, 255, 255); pixels.setPixelColor(187, 255, 0, 0); pixels.setPixelColor(188, 255, 0, 0); pixels.setPixelColor(189, 255, 255, 255); pixels.setPixelColor(190, 255, 255, 255); pixels.setPixelColor(191, 255, 255, 255); pixels.setPixelColor(192, 255, 255, 255); pixels.setPixelColor(193, 255, 255, 255); pixels.setPixelColor(194, 255, 255, 255); pixels.setPixelColor(195, 255, 255, 255); pixels.setPixelColor(196, 255, 255, 255); pixels.setPixelColor(197, 255, 0, 0); pixels.setPixelColor(198, 255, 0, 0); pixels.setPixelColor(199, 255, 0, 0); pixels.setPixelColor(200, 255, 0, 0); pixels.setPixelColor(201, 255, 0, 0); pixels.setPixelColor(202, 255, 255, 255); pixels.setPixelColor(203, 255, 255, 255); pixels.setPixelColor(204, 255, 255, 255); pixels.setPixelColor(205, 255, 255, 255); pixels.setPixelColor(206, 255, 255, 255); pixels.setPixelColor(207, 255, 255, 255); pixels.setPixelColor(208, 255, 255, 255); pixels.setPixelColor(209, 255, 255, 255); pixels.setPixelColor(210, 255, 255, 255); pixels.setPixelColor(211, 255, 255, 255); pixels.setPixelColor(212, 255, 255, 255); pixels.setPixelColor(213, 0, 0, 255); pixels.setPixelColor(214, 0, 0, 255); pixels.setPixelColor(215, 0, 0, 255); pixels.setPixelColor(216, 0, 0, 255); pixels.setPixelColor(217, 0, 0, 255); pixels.setPixelColor(218, 255, 255, 255); pixels.setPixelColor(219, 255, 255, 255); pixels.setPixelColor(220, 255, 255, 255); pixels.setPixelColor(221, 255, 255, 255); pixels.setPixelColor(222, 255, 255, 255); pixels.setPixelColor(223, 255, 255, 255); pixels.setPixelColor(224, 255, 255, 255); pixels.setPixelColor(225, 255, 255, 255); pixels.setPixelColor(226, 255, 255, 255); pixels.setPixelColor(227, 255, 255, 255); pixels.setPixelColor(228, 255, 255, 255); pixels.setPixelColor(229, 0, 0, 255); pixels.setPixelColor(230, 0, 0, 255); pixels.setPixelColor(231, 255, 255, 255); pixels.setPixelColor(232, 0, 0, 255); pixels.setPixelColor(233, 0, 0, 255); pixels.setPixelColor(234, 255, 255, 255); pixels.setPixelColor(235, 255, 255, 255); pixels.setPixelColor(236, 255, 255, 255); pixels.setPixelColor(237, 255, 255, 255); pixels.setPixelColor(238, 255, 255, 255); pixels.setPixelColor(239, 255, 255, 255); pixels.setPixelColor(240, 255, 255, 255); pixels.setPixelColor(241, 255, 255, 255); pixels.setPixelColor(242, 255, 255, 255); pixels.setPixelColor(243, 255, 255, 255); pixels.setPixelColor(244, 255, 0, 0); pixels.setPixelColor(245, 255, 0, 0); pixels.setPixelColor(246, 255, 0, 0); pixels.setPixelColor(247, 255, 255, 255); pixels.setPixelColor(248, 255, 0, 0); pixels.setPixelColor(249, 255, 0, 0); pixels.setPixelColor(250, 255, 0, 0); pixels.setPixelColor(251, 255, 255, 255); pixels.setPixelColor(252, 255, 255, 255); pixels.setPixelColor(253, 255, 255, 255); pixels.setPixelColor(254, 255, 255, 255); pixels.setPixelColor(255, 255, 255, 255);
    pixels.show();
    delay(200);

    // Spiderman2
    pixels.setPixelColor(0, 255, 255, 255); pixels.setPixelColor(1, 0, 0, 0); pixels.setPixelColor(2, 255, 255, 255); pixels.setPixelColor(3, 255, 255, 255); pixels.setPixelColor(4, 255, 255, 255); pixels.setPixelColor(5, 255, 0, 0); pixels.setPixelColor(6, 255, 0, 0); pixels.setPixelColor(7, 255, 0, 0); pixels.setPixelColor(8, 255, 0, 0); pixels.setPixelColor(9, 255, 0, 0); pixels.setPixelColor(10, 255, 255, 255); pixels.setPixelColor(11, 255, 255, 255); pixels.setPixelColor(12, 255, 255, 255); pixels.setPixelColor(13, 255, 255, 255); pixels.setPixelColor(14, 0, 0, 0); pixels.setPixelColor(15, 255, 255, 255); pixels.setPixelColor(16, 0, 0, 0); pixels.setPixelColor(17, 255, 255, 255); pixels.setPixelColor(18, 255, 255, 255); pixels.setPixelColor(19, 255, 255, 255); pixels.setPixelColor(20, 255, 0, 0); pixels.setPixelColor(21, 255, 0, 0); pixels.setPixelColor(22, 255, 0, 0); pixels.setPixelColor(23, 255, 0, 0); pixels.setPixelColor(24, 255, 0, 0); pixels.setPixelColor(25, 255, 0, 0); pixels.setPixelColor(26, 255, 0, 0); pixels.setPixelColor(27, 255, 255, 255); pixels.setPixelColor(28, 255, 255, 255); pixels.setPixelColor(29, 255, 255, 255); pixels.setPixelColor(30, 255, 255, 255); pixels.setPixelColor(31, 0, 0, 0); pixels.setPixelColor(32, 0, 0, 0); pixels.setPixelColor(33, 255, 255, 255); pixels.setPixelColor(34, 255, 255, 255); pixels.setPixelColor(35, 255, 0, 0); pixels.setPixelColor(36, 255, 0, 0); pixels.setPixelColor(37, 0, 0, 0); pixels.setPixelColor(38, 255, 0, 0); pixels.setPixelColor(39, 255, 0, 0); pixels.setPixelColor(40, 255, 0, 0); pixels.setPixelColor(41, 255, 0, 0); pixels.setPixelColor(42, 0, 0, 0); pixels.setPixelColor(43, 255, 0, 0); pixels.setPixelColor(44, 255, 255, 255); pixels.setPixelColor(45, 255, 255, 255); pixels.setPixelColor(46, 255, 255, 255); pixels.setPixelColor(47, 0, 0, 0); pixels.setPixelColor(48, 255, 255, 255); pixels.setPixelColor(49, 0, 0, 0); pixels.setPixelColor(50, 255, 255, 255); pixels.setPixelColor(51, 255, 0, 0); pixels.setPixelColor(52, 0, 0, 0); pixels.setPixelColor(53, 255, 255, 255); pixels.setPixelColor(54, 0, 0, 0); pixels.setPixelColor(55, 255, 0, 0); pixels.setPixelColor(56, 255, 0, 0); pixels.setPixelColor(57, 0, 0, 0); pixels.setPixelColor(58, 255, 255, 255); pixels.setPixelColor(59, 0, 0, 0); pixels.setPixelColor(60, 255, 0, 0); pixels.setPixelColor(61, 255, 255, 255); pixels.setPixelColor(62, 0, 0, 0); pixels.setPixelColor(63, 255, 255, 255); pixels.setPixelColor(64, 255, 255, 255); pixels.setPixelColor(65, 255, 255, 255); pixels.setPixelColor(66, 255, 255, 255); pixels.setPixelColor(67, 255, 0, 0); pixels.setPixelColor(68, 0, 0, 0); pixels.setPixelColor(69, 255, 255, 255); pixels.setPixelColor(70, 255, 255, 255); pixels.setPixelColor(71, 0, 0, 0); pixels.setPixelColor(72, 0, 0, 0); pixels.setPixelColor(73, 255, 255, 255); pixels.setPixelColor(74, 255, 255, 255); pixels.setPixelColor(75, 0, 0, 0); pixels.setPixelColor(76, 255, 0, 0); pixels.setPixelColor(77, 255, 255, 255); pixels.setPixelColor(78, 255, 255, 255); pixels.setPixelColor(79, 255, 255, 255); pixels.setPixelColor(80, 255, 255, 255); pixels.setPixelColor(81, 255, 255, 255); pixels.setPixelColor(82, 255, 255, 255); pixels.setPixelColor(83, 255, 0, 0); pixels.setPixelColor(84, 255, 0, 0); pixels.setPixelColor(85, 0, 0, 0); pixels.setPixelColor(86, 0, 0, 0); pixels.setPixelColor(87, 255, 0, 0); pixels.setPixelColor(88, 255, 0, 0); pixels.setPixelColor(89, 0, 0, 0); pixels.setPixelColor(90, 0, 0, 0); pixels.setPixelColor(91, 255, 0, 0); pixels.setPixelColor(92, 255, 0, 0); pixels.setPixelColor(93, 255, 255, 255); pixels.setPixelColor(94, 255, 255, 255); pixels.setPixelColor(95, 255, 255, 255); pixels.setPixelColor(96, 255, 255, 255); pixels.setPixelColor(97, 255, 255, 255); pixels.setPixelColor(98, 255, 255, 255); pixels.setPixelColor(99, 255, 255, 255); pixels.setPixelColor(100, 255, 0, 0); pixels.setPixelColor(101, 255, 0, 0); pixels.setPixelColor(102, 255, 0, 0); pixels.setPixelColor(103, 255, 0, 0); pixels.setPixelColor(104, 255, 0, 0); pixels.setPixelColor(105, 255, 0, 0); pixels.setPixelColor(106, 255, 0, 0); pixels.setPixelColor(107, 255, 0, 0); pixels.setPixelColor(108, 255, 255, 255); pixels.setPixelColor(109, 255, 255, 255); pixels.setPixelColor(110, 255, 255, 255); pixels.setPixelColor(111, 255, 255, 255); pixels.setPixelColor(112, 255, 255, 255); pixels.setPixelColor(113, 255, 255, 255); pixels.setPixelColor(114, 255, 255, 255); pixels.setPixelColor(115, 255, 255, 255); pixels.setPixelColor(116, 255, 255, 255); pixels.setPixelColor(117, 255, 255, 255); pixels.setPixelColor(118, 255, 0, 0); pixels.setPixelColor(119, 255, 0, 0); pixels.setPixelColor(120, 255, 0, 0); pixels.setPixelColor(121, 255, 255, 255); pixels.setPixelColor(122, 255, 255, 255); pixels.setPixelColor(123, 255, 255, 255); pixels.setPixelColor(124, 255, 255, 255); pixels.setPixelColor(125, 255, 255, 255); pixels.setPixelColor(126, 255, 255, 255); pixels.setPixelColor(127, 255, 255, 255); pixels.setPixelColor(128, 255, 255, 255); pixels.setPixelColor(129, 255, 0, 0); pixels.setPixelColor(130, 255, 0, 0); pixels.setPixelColor(131, 255, 255, 255); pixels.setPixelColor(132, 0, 0, 255); pixels.setPixelColor(133, 255, 0, 0); pixels.setPixelColor(134, 255, 0, 0); pixels.setPixelColor(135, 255, 0, 0); pixels.setPixelColor(136, 255, 0, 0); pixels.setPixelColor(137, 255, 0, 0); pixels.setPixelColor(138, 0, 0, 255); pixels.setPixelColor(139, 255, 255, 255); pixels.setPixelColor(140, 255, 0, 0); pixels.setPixelColor(141, 255, 0, 0); pixels.setPixelColor(142, 255, 255, 255); pixels.setPixelColor(143, 255, 255, 255); pixels.setPixelColor(144, 255, 255, 255); pixels.setPixelColor(145, 255, 255, 255); pixels.setPixelColor(146, 0, 0, 255); pixels.setPixelColor(147, 0, 0, 255); pixels.setPixelColor(148, 255, 0, 0); pixels.setPixelColor(149, 255, 0, 0); pixels.setPixelColor(150, 0, 0, 0); pixels.setPixelColor(151, 255, 0, 0); pixels.setPixelColor(152, 0, 0, 0); pixels.setPixelColor(153, 255, 0, 0); pixels.setPixelColor(154, 255, 0, 0); pixels.setPixelColor(155, 0, 0, 255); pixels.setPixelColor(156, 0, 0, 255); pixels.setPixelColor(157, 255, 255, 255); pixels.setPixelColor(158, 255, 255, 255); pixels.setPixelColor(159, 255, 255, 255); pixels.setPixelColor(160, 255, 255, 255); pixels.setPixelColor(161, 255, 255, 255); pixels.setPixelColor(162, 255, 255, 255); pixels.setPixelColor(163, 0, 0, 255); pixels.setPixelColor(164, 0, 0, 255); pixels.setPixelColor(165, 255, 0, 0); pixels.setPixelColor(166, 255, 0, 0); pixels.setPixelColor(167, 0, 0, 0); pixels.setPixelColor(168, 255, 0, 0); pixels.setPixelColor(169, 255, 0, 0); pixels.setPixelColor(170, 0, 0, 255); pixels.setPixelColor(171, 0, 0, 255); pixels.setPixelColor(172, 255, 255, 255); pixels.setPixelColor(173, 255, 255, 255); pixels.setPixelColor(174, 255, 255, 255); pixels.setPixelColor(175, 255, 255, 255); pixels.setPixelColor(176, 255, 255, 255); pixels.setPixelColor(177, 255, 255, 255); pixels.setPixelColor(178, 255, 255, 255); pixels.setPixelColor(179, 255, 255, 255); pixels.setPixelColor(180, 255, 255, 255); pixels.setPixelColor(181, 0, 0, 255); pixels.setPixelColor(182, 0, 0, 0); pixels.setPixelColor(183, 255, 0, 0); pixels.setPixelColor(184, 0, 0, 0); pixels.setPixelColor(185, 0, 0, 255); pixels.setPixelColor(186, 255, 255, 255); pixels.setPixelColor(187, 255, 255, 255); pixels.setPixelColor(188, 255, 255, 255); pixels.setPixelColor(189, 255, 255, 255); pixels.setPixelColor(190, 255, 255, 255); pixels.setPixelColor(191, 255, 255, 255); pixels.setPixelColor(192, 255, 255, 255); pixels.setPixelColor(193, 255, 255, 255); pixels.setPixelColor(194, 255, 255, 255); pixels.setPixelColor(195, 255, 255, 255); pixels.setPixelColor(196, 255, 255, 255); pixels.setPixelColor(197, 255, 0, 0); pixels.setPixelColor(198, 255, 0, 0); pixels.setPixelColor(199, 255, 0, 0); pixels.setPixelColor(200, 255, 0, 0); pixels.setPixelColor(201, 255, 0, 0); pixels.setPixelColor(202, 255, 255, 255); pixels.setPixelColor(203, 255, 255, 255); pixels.setPixelColor(204, 255, 255, 255); pixels.setPixelColor(205, 255, 255, 255); pixels.setPixelColor(206, 255, 255, 255); pixels.setPixelColor(207, 255, 255, 255); pixels.setPixelColor(208, 255, 255, 255); pixels.setPixelColor(209, 255, 255, 255); pixels.setPixelColor(210, 255, 255, 255); pixels.setPixelColor(211, 255, 255, 255); pixels.setPixelColor(212, 255, 255, 255); pixels.setPixelColor(213, 0, 0, 255); pixels.setPixelColor(214, 0, 0, 255); pixels.setPixelColor(215, 0, 0, 255); pixels.setPixelColor(216, 0, 0, 255); pixels.setPixelColor(217, 0, 0, 255); pixels.setPixelColor(218, 255, 255, 255); pixels.setPixelColor(219, 255, 255, 255); pixels.setPixelColor(220, 255, 255, 255); pixels.setPixelColor(221, 255, 255, 255); pixels.setPixelColor(222, 255, 255, 255); pixels.setPixelColor(223, 255, 255, 255); pixels.setPixelColor(224, 255, 255, 255); pixels.setPixelColor(225, 255, 255, 255); pixels.setPixelColor(226, 255, 255, 255); pixels.setPixelColor(227, 255, 255, 255); pixels.setPixelColor(228, 255, 255, 255); pixels.setPixelColor(229, 0, 0, 255); pixels.setPixelColor(230, 0, 0, 255); pixels.setPixelColor(231, 255, 255, 255); pixels.setPixelColor(232, 0, 0, 255); pixels.setPixelColor(233, 0, 0, 255); pixels.setPixelColor(234, 255, 255, 255); pixels.setPixelColor(235, 255, 255, 255); pixels.setPixelColor(236, 255, 255, 255); pixels.setPixelColor(237, 255, 255, 255); pixels.setPixelColor(238, 255, 255, 255); pixels.setPixelColor(239, 255, 255, 255); pixels.setPixelColor(240, 255, 255, 255); pixels.setPixelColor(241, 255, 255, 255); pixels.setPixelColor(242, 255, 255, 255); pixels.setPixelColor(243, 255, 255, 255); pixels.setPixelColor(244, 255, 0, 0); pixels.setPixelColor(245, 255, 0, 0); pixels.setPixelColor(246, 255, 0, 0); pixels.setPixelColor(247, 255, 255, 255); pixels.setPixelColor(248, 255, 0, 0); pixels.setPixelColor(249, 255, 0, 0); pixels.setPixelColor(250, 255, 0, 0); pixels.setPixelColor(251, 255, 255, 255); pixels.setPixelColor(252, 255, 255, 255); pixels.setPixelColor(253, 255, 255, 255); pixels.setPixelColor(254, 255, 255, 255); pixels.setPixelColor(255, 255, 255, 255);
    pixels.show();
    delay(200);
  }
}