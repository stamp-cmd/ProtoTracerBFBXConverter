#pragma once

#include "Arduino.h"
#include "..\Math\Rotation.h"
#include "Morph.h"
#include "..\Materials\SimpleMaterial.h"
#include "..\Render\IndexGroup.h"
#include "..\Render\Object3D.h"

class InfraredFace{
public:
    enum Morphs {
        Happy,
        Blush,
        Determination,
        Mad,
        Angry,
        Calm,
        Sad,
        TalkA,
        TalkB,
        Blink,
        HideMouth,
        HideNose,
        HideEye,
        HideEyebrow,
        TalkC,
        EyeBigger,
        EyeBrowThicker,
        Flatten
    };

private:
    Vector3D basisVertices[63] = {Vector3D(-32.9388f,16.5802f,0.0000f),Vector3D(9.8148f,-26.2732f,0.0000f),Vector3D(50.7755f,5.6180f,0.0000f),Vector3D(29.3376f,7.1609f,0.0000f),Vector3D(16.3511f,-9.5996f,0.0000f),Vector3D(16.5824f,8.5393f,0.0000f),Vector3D(-8.9691f,-7.7987f,0.0000f),Vector3D(20.8275f,20.4563f,0.0000f),Vector3D(23.5779f,16.5176f,0.0000f),Vector3D(20.6214f,23.7562f,0.0000f),Vector3D(26.8761f,24.3057f,0.0000f),Vector3D(23.0934f,21.2732f,0.0000f),Vector3D(15.3991f,23.2066f,0.0000f),Vector3D(15.2617f,20.5479f,0.0000f),Vector3D(1.5189f,23.9394f,0.0000f),Vector3D(2.3435f,21.2807f,0.0000f),Vector3D(-21.8438f,24.6721f,0.0000f),Vector3D(-21.2254f,22.3799f,0.0000f),Vector3D(1.8817f,-64.2614f,0.0000f),Vector3D(19.2991f,-72.5394f,0.0000f),Vector3D(-2.2727f,-55.8978f,0.0000f),Vector3D(21.7218f,-67.4356f,0.0000f),Vector3D(34.8672f,-78.2623f,0.0000f),Vector3D(37.8486f,-72.7788f,0.0000f),Vector3D(57.4010f,-85.3047f,0.0000f),Vector3D(60.7431f,-79.4520f,0.0000f),Vector3D(74.9309f,-88.8521f,0.0000f),Vector3D(75.0832f,-82.8410f,0.0000f),Vector3D(108.5586f,-67.6924f,0.0000f),Vector3D(107.7309f,-61.3330f,0.0000f),Vector3D(151.3473f,-89.5894f,0.0000f),Vector3D(151.9268f,-84.0744f,0.0000f),Vector3D(181.7093f,-70.7167f,0.0000f),Vector3D(181.3528f,-65.2437f,0.0000f),Vector3D(-30.6784f,-45.0221f,0.0000f),Vector3D(7.0815f,-49.6229f,0.0000f),Vector3D(-12.2705f,-55.7297f,0.0000f),Vector3D(196.9796f,-85.8154f,0.0000f),Vector3D(217.1758f,-63.1146f,0.0000f),Vector3D(196.6043f,-79.8147f,0.0000f),Vector3D(214.7676f,-59.8159f,0.0000f),Vector3D(230.2308f,-48.3712f,0.0000f),Vector3D(227.0505f,-46.1195f,0.0000f),Vector3D(184.3638f,-25.2459f,0.0000f),Vector3D(195.9301f,-24.9540f,0.0000f),Vector3D(197.1034f,-8.0987f,0.0000f),Vector3D(207.0705f,-7.8983f,0.0000f),Vector3D(5.8308f,-16.4966f,0.0000f),Vector3D(6.1379f,-16.4954f,0.0000f),Vector3D(7.1071f,-16.2115f,0.0000f),Vector3D(7.3629f,-16.2079f,0.0000f),Vector3D(8.0277f,-16.5066f,0.0000f),Vector3D(8.3348f,-16.5054f,0.0000f),Vector3D(9.3039f,-16.2216f,0.0000f),Vector3D(9.5597f,-16.2180f,0.0000f),Vector3D(7.3823f,-16.5092f,0.0000f),Vector3D(7.6894f,-16.5080f,0.0000f),Vector3D(8.6585f,-16.2241f,0.0000f),Vector3D(8.9143f,-16.2205f,0.0000f),Vector3D(6.6003f,-16.5041f,0.0000f),Vector3D(6.9074f,-16.5029f,0.0000f),Vector3D(7.8766f,-16.2191f,0.0000f),Vector3D(8.1324f,-16.2155f,0.0000f)};
    IndexGroup basisIndexes[48] = {IndexGroup(1,4,6),IndexGroup(6,4,5),IndexGroup(0,6,5),IndexGroup(3,1,2),IndexGroup(1,3,4),IndexGroup(7,8,11),IndexGroup(11,8,10),IndexGroup(12,15,13),IndexGroup(7,12,13),IndexGroup(10,9,11),IndexGroup(14,17,15),IndexGroup(9,7,11),IndexGroup(12,14,15),IndexGroup(7,9,12),IndexGroup(14,16,17),IndexGroup(18,21,20),IndexGroup(21,22,23),IndexGroup(23,24,25),IndexGroup(25,26,27),IndexGroup(27,28,29),IndexGroup(28,31,29),IndexGroup(31,32,33),IndexGroup(18,20,36),IndexGroup(32,39,33),IndexGroup(39,38,40),IndexGroup(38,42,40),IndexGroup(35,36,20),IndexGroup(18,19,21),IndexGroup(21,19,22),IndexGroup(23,22,24),IndexGroup(25,24,26),IndexGroup(27,26,28),IndexGroup(28,30,31),IndexGroup(31,30,32),IndexGroup(32,37,39),IndexGroup(39,37,38),IndexGroup(38,41,42),IndexGroup(35,34,36),IndexGroup(44,45,43),IndexGroup(44,46,45),IndexGroup(48,49,47),IndexGroup(52,53,51),IndexGroup(56,57,55),IndexGroup(60,61,59),IndexGroup(48,50,49),IndexGroup(52,54,53),IndexGroup(56,58,57),IndexGroup(60,62,61)};
    TriangleGroup triangleGroup = TriangleGroup(&basisVertices[0], &basisIndexes[0], 63, 48);
    SimpleMaterial simpleMaterial = SimpleMaterial(RGBColor(128, 128, 128));
    Object3D basisObj = Object3D(&triangleGroup, &simpleMaterial);

    static const byte morphCount = 18;
    int HappyIndexes[29] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,34,35,36};
    int BlushIndexes[58] = {0,1,2,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62};
    int DeterminationIndexes[52] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,27,29,31,33,34,35,36,39,40,42,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62};
    int MadIndexes[37] = {4,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42};
    int AngryIndexes[55] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,47,48,49,50,52,54,56,58,59,60,61,62};
    int CalmIndexes[40] = {2,3,4,5,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42};
    int SadIndexes[59] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62};
    int TalkAIndexes[10] = {21,23,25,27,29,31,33,39,40,42};
    int TalkBIndexes[12] = {20,21,23,25,27,29,31,33,34,35,39,40};
    int BlinkIndexes[7] = {0,1,2,3,4,5,6};
    int HideMouthIndexes[25] = {18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42};
    int HideNoseIndexes[4] = {43,44,45,46};
    int HideEyeIndexes[7] = {0,1,2,3,4,5,6};
    int HideEyebrowIndexes[11] = {7,8,9,10,11,12,13,14,15,16,17};
    int TalkCIndexes[19] = {18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36};
    int EyeBiggerIndexes[34] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62};
    int EyeBrowThickerIndexes[11] = {7,8,9,10,11,12,13,14,15,16,17};
    int FlattenIndexes[63] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62};

    Vector3D HappyVectors[29] = {Vector3D(6.8899f,-15.8062f,0.0000f),Vector3D(4.0529f,26.7490f,0.0000f),Vector3D(0.4053f,-14.1851f,0.0000f),Vector3D(-9.9295f,7.9031f,0.0000f),Vector3D(3.2423f,23.9120f,0.0000f),Vector3D(3.0397f,6.0793f,0.0000f),Vector3D(9.9295f,8.9163f,0.0000f),Vector3D(8.9163f,2.0264f,0.0000f),Vector3D(8.9163f,2.0264f,0.0000f),Vector3D(8.9163f,2.0264f,0.0000f),Vector3D(8.9163f,2.0264f,0.0000f),Vector3D(8.9163f,2.0264f,0.0000f),Vector3D(8.9163f,2.0264f,0.0000f),Vector3D(8.9163f,2.0264f,0.0000f),Vector3D(0.2026f,-1.0132f,0.0000f),Vector3D(0.2026f,-1.0132f,0.0000f),Vector3D(0.2026f,-1.0132f,0.0000f),Vector3D(0.2026f,-1.0132f,0.0000f),Vector3D(-6.6872f,2.2291f,0.0000f),Vector3D(-6.6872f,2.2291f,0.0000f),Vector3D(-6.6872f,2.2291f,0.0000f),Vector3D(-6.6872f,2.2291f,0.0000f),Vector3D(-6.6872f,2.2291f,0.0000f),Vector3D(-6.6872f,2.2291f,0.0000f),Vector3D(-6.6872f,2.2291f,0.0000f),Vector3D(-6.6872f,2.2291f,0.0000f),Vector3D(-6.6872f,2.2291f,0.0000f),Vector3D(-6.6872f,2.2291f,0.0000f),Vector3D(-6.6872f,2.2291f,0.0000f)};
    Vector3D BlushVectors[58] = {Vector3D(2.4317f,-23.1014f,0.0000f),Vector3D(4.6608f,26.5463f,0.0000f),Vector3D(1.8238f,-14.5904f,0.0000f),Vector3D(-0.2026f,24.9252f,0.0000f),Vector3D(-7.0925f,4.4582f,0.0000f),Vector3D(12.1586f,8.1058f,0.0000f),Vector3D(-13.3582f,-2.2120f,0.0000f),Vector3D(-11.6141f,1.5949f,0.0000f),Vector3D(-14.9017f,-2.7064f,0.0000f),Vector3D(-15.9145f,0.2002f,0.0000f),Vector3D(-14.0187f,-1.2332f,0.0000f),Vector3D(-14.0130f,-5.1224f,0.0000f),Vector3D(-12.7329f,-4.8682f,0.0000f),Vector3D(-12.6935f,-11.8073f,0.0000f),Vector3D(-11.5290f,-11.0959f,0.0000f),Vector3D(-10.2345f,-22.9989f,0.0000f),Vector3D(-9.2193f,-22.4295f,0.0000f),Vector3D(32.0177f,-6.0793f,0.0000f),Vector3D(31.4098f,-9.9295f,0.0000f),Vector3D(32.0177f,-6.0793f,0.0000f),Vector3D(31.4098f,-9.9295f,0.0000f),Vector3D(19.6564f,-3.0397f,0.0000f),Vector3D(19.6564f,-3.0397f,0.0000f),Vector3D(12.5639f,10.1322f,0.0000f),Vector3D(12.5639f,10.1322f,0.0000f),Vector3D(8.7137f,0.2026f,0.0000f),Vector3D(8.7137f,0.2026f,0.0000f),Vector3D(8.7137f,0.2026f,0.0000f),Vector3D(8.7137f,0.2026f,0.0000f),Vector3D(8.7137f,0.2026f,0.0000f),Vector3D(8.7137f,0.2026f,0.0000f),Vector3D(8.7137f,0.2026f,0.0000f),Vector3D(8.7137f,0.2026f,0.0000f),Vector3D(43.9737f,-18.0353f,0.0000f),Vector3D(9.1190f,-9.1190f,0.0000f),Vector3D(31.4098f,-9.9295f,0.0000f),Vector3D(8.7137f,0.2026f,0.0000f),Vector3D(8.7137f,0.2026f,0.0000f),Vector3D(8.7137f,0.2026f,0.0000f),Vector3D(8.7137f,0.2026f,0.0000f),Vector3D(8.7137f,0.2026f,0.0000f),Vector3D(8.7137f,0.2026f,0.0000f),Vector3D(-48.0968f,-29.1005f,0.0000f),Vector3D(-41.8239f,-28.9887f,0.0000f),Vector3D(-22.0289f,-2.5421f,0.0000f),Vector3D(-16.8037f,-2.2067f,0.0000f),Vector3D(-3.2256f,-30.0401f,0.0000f),Vector3D(3.0473f,-29.9283f,0.0000f),Vector3D(22.8422f,-3.4816f,0.0000f),Vector3D(28.0675f,-3.1463f,0.0000f),Vector3D(-16.4081f,-30.2749f,0.0000f),Vector3D(-10.1352f,-30.1631f,0.0000f),Vector3D(9.6597f,-3.7165f,0.0000f),Vector3D(14.8850f,-3.3811f,0.0000f),Vector3D(-32.3792f,-29.8051f,0.0000f),Vector3D(-26.1063f,-29.6933f,0.0000f),Vector3D(-6.3114f,-3.2468f,0.0000f),Vector3D(-1.0861f,-2.9114f,0.0000f)};
    Vector3D DeterminationVectors[52] = {Vector3D(1.9627f,-16.5395f,0.0000f),Vector3D(2.6370f,21.9003f,0.0000f),Vector3D(-3.8669f,-24.4184f,0.0000f),Vector3D(3.2498f,-10.1785f,0.0000f),Vector3D(4.4679f,18.6244f,0.0000f),Vector3D(-10.5444f,-2.3142f,0.0000f),Vector3D(5.4840f,4.3133f,0.0000f),Vector3D(24.9678f,-25.3474f,0.0000f),Vector3D(26.1369f,-23.5429f,0.0000f),Vector3D(25.3373f,-24.8699f,0.0000f),Vector3D(25.9096f,-26.6491f,0.0000f),Vector3D(24.4712f,-26.2530f,0.0000f),Vector3D(28.1384f,-24.3438f,0.0000f),Vector3D(27.2031f,-23.0731f,0.0000f),Vector3D(33.7301f,-19.6347f,0.0000f),Vector3D(32.4261f,-18.7137f,0.0000f),Vector3D(42.9559f,-11.4787f,0.0000f),Vector3D(41.8670f,-10.6509f,0.0000f),Vector3D(-13.0658f,-2.3783f,0.0000f),Vector3D(-12.3380f,-0.6306f,0.0000f),Vector3D(-13.8658f,-3.8391f,0.0000f),Vector3D(-12.8502f,-1.4309f,0.0000f),Vector3D(-11.8519f,0.9234f,0.0000f),Vector3D(-12.4040f,0.1761f,0.0000f),Vector3D(-11.2700f,3.1667f,0.0000f),Vector3D(-11.8600f,2.4530f,0.0000f),Vector3D(0.0000f,-1.0132f,0.0000f),Vector3D(0.0000f,-1.0132f,0.0000f),Vector3D(0.0000f,-1.0132f,0.0000f),Vector3D(0.0000f,-1.0132f,0.0000f),Vector3D(-14.7953f,-5.6635f,0.0000f),Vector3D(-14.5261f,-2.9522f,0.0000f),Vector3D(-13.8341f,-3.8070f,0.0000f),Vector3D(0.0000f,-1.0132f,0.0000f),Vector3D(0.0000f,-1.0132f,0.0000f),Vector3D(0.0000f,-1.0132f,0.0000f),Vector3D(10.4983f,19.6973f,0.0000f),Vector3D(10.4863f,19.6284f,0.0000f),Vector3D(10.5112f,19.3995f,0.0000f),Vector3D(10.5017f,19.3420f,0.0000f),Vector3D(10.4080f,19.2048f,0.0000f),Vector3D(10.3960f,19.1358f,0.0000f),Vector3D(10.4209f,18.9070f,0.0000f),Vector3D(10.4114f,18.8494f,0.0000f),Vector3D(10.4333f,19.3497f,0.0000f),Vector3D(10.4213f,19.2807f,0.0000f),Vector3D(10.4462f,19.0519f,0.0000f),Vector3D(10.4367f,18.9943f,0.0000f),Vector3D(10.4658f,19.5249f,0.0000f),Vector3D(10.4538f,19.4560f,0.0000f),Vector3D(10.4786f,19.2271f,0.0000f),Vector3D(10.4692f,19.1696f,0.0000f)};
    Vector3D MadVectors[37] = {Vector3D(-5.8767f,-0.6079f,0.0000f),Vector3D(1.6211f,-8.1058f,0.0000f),Vector3D(4.6608f,-5.6740f,0.0000f),Vector3D(2.6344f,-8.7137f,0.0000f),Vector3D(2.0264f,-6.2820f,0.0000f),Vector3D(2.4317f,-7.2952f,0.0000f),Vector3D(2.0264f,-6.2820f,0.0000f),Vector3D(2.0264f,-6.2820f,0.0000f),Vector3D(2.8370f,-4.2555f,0.0000f),Vector3D(2.8370f,-4.2555f,0.0000f),Vector3D(2.4317f,0.8106f,0.0000f),Vector3D(2.4317f,0.8106f,0.0000f),Vector3D(75.1808f,-15.4009f,0.0000f),Vector3D(55.7270f,-7.2952f,0.0000f),Vector3D(82.4760f,-20.6697f,0.0000f),Vector3D(56.1323f,-6.2820f,0.0000f),Vector3D(39.1102f,-2.0264f,0.0000f),Vector3D(39.5155f,-1.0132f,0.0000f),Vector3D(16.4141f,4.4582f,0.0000f),Vector3D(16.8194f,5.4714f,0.0000f),Vector3D(-0.4053f,6.6872f,0.0000f),Vector3D(-9.3216f,2.8370f,0.0000f),Vector3D(0.0000f,7.7005f,0.0000f),Vector3D(0.0000f,7.7005f,0.0000f),Vector3D(0.0000f,7.7005f,0.0000f),Vector3D(0.0000f,7.7005f,0.0000f),Vector3D(0.0000f,7.7005f,0.0000f),Vector3D(0.0000f,7.7005f,0.0000f),Vector3D(112.2646f,-32.6256f,0.0000f),Vector3D(70.5200f,-27.1543f,0.0000f),Vector3D(90.9870f,-23.1014f,0.0000f),Vector3D(0.0000f,7.7005f,0.0000f),Vector3D(0.0000f,7.7005f,0.0000f),Vector3D(0.0000f,7.7005f,0.0000f),Vector3D(0.0000f,7.7005f,0.0000f),Vector3D(0.0000f,7.7005f,0.0000f),Vector3D(0.0000f,7.7005f,0.0000f)};
    Vector3D AngryVectors[55] = {Vector3D(1.5131f,2.1835f,0.0000f),Vector3D(-0.8342f,-0.0366f,0.0000f),Vector3D(0.8090f,-2.2675f,0.0000f),Vector3D(0.9219f,-1.1259f,0.0000f),Vector3D(-5.8546f,-0.7026f,0.0000f),Vector3D(1.0136f,-0.4473f,0.0000f),Vector3D(0.1783f,0.9393f,0.0000f),Vector3D(19.1664f,-11.0436f,0.0000f),Vector3D(22.3638f,-7.7527f,0.0000f),Vector3D(19.7791f,-10.9548f,0.0000f),Vector3D(18.6768f,-8.3405f,0.0000f),Vector3D(19.7072f,-9.8024f,0.0000f),Vector3D(18.9592f,-9.3921f,0.0000f),Vector3D(19.3478f,-9.9917f,0.0000f),Vector3D(23.2797f,-4.9650f,0.0000f),Vector3D(22.8093f,-5.6567f,0.0000f),Vector3D(22.7585f,8.0757f,0.0000f),Vector3D(22.3421f,7.4095f,0.0000f),Vector3D(146.6654f,-17.4479f,0.0000f),Vector3D(128.0762f,-9.3670f,0.0000f),Vector3D(152.4924f,-24.0117f,0.0000f),Vector3D(127.0015f,-11.0894f,0.0000f),Vector3D(111.9221f,-3.9388f,0.0000f),Vector3D(110.5943f,-5.8111f,0.0000f),Vector3D(89.3208f,2.8003f,0.0000f),Vector3D(87.8238f,0.7727f,0.0000f),Vector3D(72.2651f,5.6876f,0.0000f),Vector3D(66.9325f,0.3629f,0.0000f),Vector3D(36.7773f,-15.9180f,0.0000f),Vector3D(36.8234f,-18.9582f,0.0000f),Vector3D(-13.1191f,0.9603f,0.0000f),Vector3D(-12.9234f,0.9362f,0.0000f),Vector3D(3.6026f,7.0028f,0.0000f),Vector3D(4.3608f,11.4530f,0.0000f),Vector3D(181.7507f,-35.3866f,0.0000f),Vector3D(141.6408f,-30.5329f,0.0000f),Vector3D(161.7364f,-25.4541f,0.0000f),Vector3D(20.0251f,-1.0283f,0.0000f),Vector3D(-7.2703f,-16.1721f,0.0000f),Vector3D(20.2386f,-1.0187f,0.0000f),Vector3D(-7.1515f,-16.0885f,0.0000f),Vector3D(-17.3946f,-28.3062f,0.0000f),Vector3D(-18.0015f,-29.6409f,0.0000f),Vector3D(-0.3069f,0.1620f,0.0000f),Vector3D(-0.3073f,0.1456f,0.0000f),Vector3D(-0.2935f,0.0935f,0.0000f),Vector3D(-0.2937f,0.0799f,0.0000f),Vector3D(-0.3109f,0.0285f,0.0000f),Vector3D(-0.2973f,-0.0373f,0.0000f),Vector3D(-0.3102f,0.0629f,0.0000f),Vector3D(-0.2966f,-0.0029f,0.0000f),Vector3D(-0.3084f,0.1210f,0.0000f),Vector3D(-0.3088f,0.1046f,0.0000f),Vector3D(-0.2950f,0.0525f,0.0000f),Vector3D(-0.2952f,0.0388f,0.0000f)};
    Vector3D CalmVectors[40] = {Vector3D(2.4317f,4.0529f,0.0000f),Vector3D(1.0132f,-8.9163f,0.0000f),Vector3D(-5.4714f,-2.2291f,0.0000f),Vector3D(-18.4406f,-11.1454f,0.0000f),Vector3D(14.3877f,-5.2687f,0.0000f),Vector3D(19.2512f,-1.4185f,0.0000f),Vector3D(15.1983f,-5.0661f,0.0000f),Vector3D(14.5904f,-1.4185f,0.0000f),Vector3D(14.5903f,-3.4449f,0.0000f),Vector3D(7.4978f,-3.8502f,0.0000f),Vector3D(7.4978f,-5.2687f,0.0000f),Vector3D(7.4978f,-3.8502f,0.0000f),Vector3D(7.4978f,-5.2687f,0.0000f),Vector3D(-0.4053f,-3.6476f,0.0000f),Vector3D(-0.4053f,-5.0661f,0.0000f),Vector3D(99.1236f,-1.2457f,0.0000f),Vector3D(81.0575f,7.0143f,0.0000f),Vector3D(105.5381f,-9.5947f,0.0000f),Vector3D(81.0575f,3.3618f,0.0000f),Vector3D(66.6698f,12.5504f,0.0000f),Vector3D(61.4011f,9.7269f,0.0000f),Vector3D(42.7578f,19.6070f,0.0000f),Vector3D(37.4891f,16.8194f,0.0000f),Vector3D(23.5067f,21.2776f,0.0000f),Vector3D(23.5067f,21.2776f,0.0000f),Vector3D(-9.7269f,0.4053f,0.0000f),Vector3D(-9.7269f,0.4053f,0.0000f),Vector3D(-22.2908f,9.1190f,0.0000f),Vector3D(-22.2908f,9.1190f,0.0000f),Vector3D(-19.0485f,5.2687f,0.0000f),Vector3D(-19.0485f,5.2687f,0.0000f),Vector3D(131.1071f,-21.6417f,0.0000f),Vector3D(95.9020f,-18.7241f,0.0000f),Vector3D(110.8066f,-9.1598f,0.0000f),Vector3D(-6.6872f,-1.8238f,0.0000f),Vector3D(-6.2819f,-5.0661f,0.0000f),Vector3D(-6.6872f,-1.8238f,0.0000f),Vector3D(-6.2819f,-5.0661f,0.0000f),Vector3D(-6.2819f,-5.0661f,0.0000f),Vector3D(-6.2819f,-5.0661f,0.0000f)};
    Vector3D SadVectors[59] = {Vector3D(0.6755f,1.0132f,0.0000f),Vector3D(0.1955f,-3.2207f,0.0000f),Vector3D(2.2629f,5.4038f,0.0000f),Vector3D(-9.7561f,-18.9195f,0.0000f),Vector3D(-5.4426f,-10.9834f,0.0000f),Vector3D(-12.8909f,-20.7349f,0.0000f),Vector3D(0.0000f,-2.6344f,0.0000f),Vector3D(-9.9240f,-1.2957f,0.0000f),Vector3D(-5.2892f,4.1964f,0.0000f),Vector3D(-9.9943f,-2.2454f,0.0000f),Vector3D(-11.8197f,1.0618f,0.0000f),Vector3D(-10.4517f,0.0848f,0.0000f),Vector3D(-17.4336f,-4.0049f,0.0000f),Vector3D(-16.4268f,-3.9623f,0.0000f),Vector3D(-17.1574f,-7.2069f,0.0000f),Vector3D(-16.1822f,-6.9610f,0.0000f),Vector3D(0.8321f,-9.0593f,0.0000f),Vector3D(0.1637f,-9.2786f,0.0000f),Vector3D(107.0429f,-19.0542f,0.0000f),Vector3D(89.4308f,-10.7790f,0.0000f),Vector3D(111.8757f,-27.4155f,0.0000f),Vector3D(87.7353f,-15.6519f,0.0000f),Vector3D(74.2170f,-5.0859f,0.0000f),Vector3D(70.5490f,-10.1461f,0.0000f),Vector3D(51.2695f,1.9588f,0.0000f),Vector3D(47.3491f,-3.4062f,0.0000f),Vector3D(33.2229f,5.2075f,0.0000f),Vector3D(33.1164f,0.1530f,0.0000f),Vector3D(-0.2864f,-15.9065f,0.0000f),Vector3D(0.2928f,-21.2539f,0.0000f),Vector3D(-48.0266f,1.6211f,0.0000f),Vector3D(-48.0266f,1.6212f,0.0000f),Vector3D(-19.0485f,5.2687f,0.0000f),Vector3D(-19.0485f,5.2687f,0.0000f),Vector3D(139.4299f,-38.4776f,0.0000f),Vector3D(102.4369f,-34.1446f,0.0000f),Vector3D(120.4539f,-27.4877f,0.0000f),Vector3D(-6.6872f,-1.8238f,0.0000f),Vector3D(-6.2819f,-5.0661f,0.0000f),Vector3D(-6.6872f,-1.8238f,0.0000f),Vector3D(-6.2819f,-5.0661f,0.0000f),Vector3D(-4.2555f,-6.4846f,0.0000f),Vector3D(-4.2555f,-6.4846f,0.0000f),Vector3D(-30.3119f,0.0366f,-0.0002f),Vector3D(-27.0068f,2.9277f,-0.0015f),Vector3D(-42.0887f,13.0585f,0.0000f),Vector3D(-38.6063f,15.8294f,0.0000f),Vector3D(-6.8888f,1.3499f,0.0005f),Vector3D(-7.4548f,1.1555f,0.0000f),Vector3D(-9.6759f,1.6303f,0.0000f),Vector3D(-10.2386f,1.6338f,0.0000f),Vector3D(-7.3364f,1.9191f,-0.0002f),Vector3D(-7.9481f,1.8726f,0.0001f),Vector3D(-7.0189f,1.0658f,0.0000f),Vector3D(-7.5816f,1.0693f,0.0000f),Vector3D(-6.0589f,1.7410f,0.0004f),Vector3D(-6.7621f,1.7838f,0.0002f),Vector3D(-7.3329f,1.5942f,0.0000f),Vector3D(-7.8956f,1.5978f,0.0000f)};
    Vector3D TalkAVectors[10] = {Vector3D(0.0000f,7.5992f,0.0000f),Vector3D(0.0000f,10.5177f,0.0000f),Vector3D(0.0000f,15.0576f,0.0000f),Vector3D(0.0000f,19.5976f,0.0000f),Vector3D(0.0000f,19.5976f,0.0000f),Vector3D(0.0000f,19.5976f,0.0000f),Vector3D(0.0000f,19.5976f,0.0000f),Vector3D(0.0000f,19.5976f,0.0000f),Vector3D(0.0000f,19.5976f,0.0000f),Vector3D(0.0000f,19.5976f,0.0000f)};
    Vector3D TalkBVectors[12] = {Vector3D(14.8606f,14.3540f,0.0000f),Vector3D(14.8606f,14.3540f,0.0000f),Vector3D(14.8606f,14.3540f,0.0000f),Vector3D(14.8606f,14.3540f,0.0000f),Vector3D(14.8606f,14.3540f,0.0000f),Vector3D(14.8606f,14.3540f,0.0000f),Vector3D(14.8606f,14.3540f,0.0000f),Vector3D(14.8606f,14.3540f,0.0000f),Vector3D(31.9165f,3.8840f,0.0000f),Vector3D(2.7019f,9.7945f,0.0000f),Vector3D(24.1484f,31.2410f,0.0000f),Vector3D(8.1058f,10.6388f,0.0000f)};
    Vector3D BlinkVectors[7] = {Vector3D(10.7007f,-10.7013f,0.0000f),Vector3D(23.1964f,20.0330f,0.0000f),Vector3D(10.7007f,-10.7013f,0.0000f),Vector3D(10.7007f,-10.7013f,0.0000f),Vector3D(14.4157f,6.6923f,0.0000f),Vector3D(10.7007f,-10.7013f,0.0000f),Vector3D(17.4552f,5.5102f,0.0000f)};
    Vector3D HideMouthVectors[25] = {Vector3D(98.5612f,-4.5266f,0.0000f),Vector3D(81.1437f,3.7514f,0.0000f),Vector3D(102.7155f,-12.8902f,0.0000f),Vector3D(78.7210f,-1.3524f,0.0000f),Vector3D(65.5756f,9.4743f,0.0000f),Vector3D(62.5942f,3.9908f,0.0000f),Vector3D(43.0418f,16.5167f,0.0000f),Vector3D(39.6997f,10.6640f,0.0000f),Vector3D(25.5119f,20.0641f,0.0000f),Vector3D(25.3597f,14.0530f,0.0000f),Vector3D(-8.1157f,-1.0957f,0.0000f),Vector3D(-7.2880f,-7.4550f,0.0000f),Vector3D(-50.9044f,20.8013f,0.0000f),Vector3D(-51.4840f,15.2864f,0.0000f),Vector3D(-81.2665f,1.9287f,0.0000f),Vector3D(-80.9100f,-3.5443f,0.0000f),Vector3D(131.1212f,-23.7659f,0.0000f),Vector3D(93.3614f,-19.1651f,0.0000f),Vector3D(112.7134f,-13.0584f,0.0000f),Vector3D(-96.5368f,17.0273f,0.0000f),Vector3D(-116.7329f,-5.6735f,0.0000f),Vector3D(-96.1614f,11.0267f,0.0000f),Vector3D(-114.3248f,-8.9722f,0.0000f),Vector3D(-129.7880f,-20.4168f,0.0000f),Vector3D(-126.6077f,-22.6686f,0.0000f)};
    Vector3D HideNoseVectors[4] = {Vector3D(11.7532f,8.6967f,0.0000f),Vector3D(0.1868f,8.4048f,0.0000f),Vector3D(-0.9864f,-8.4505f,0.0000f),Vector3D(-10.9535f,-8.6509f,0.0000f)};
    Vector3D HideEyeVectors[7] = {Vector3D(44.5036f,-17.4049f,0.0000f),Vector3D(1.7500f,25.4484f,0.0000f),Vector3D(-39.2107f,-6.4427f,0.0000f),Vector3D(-17.7728f,-7.9856f,0.0000f),Vector3D(-4.7863f,8.7749f,0.0000f),Vector3D(-5.0176f,-9.3640f,0.0000f),Vector3D(20.5339f,6.9740f,0.0000f)};
    Vector3D HideEyebrowVectors[11] = {Vector3D(-11.1502f,1.5742f,0.0000f),Vector3D(-13.9005f,5.5129f,0.0000f),Vector3D(-10.9441f,-1.7256f,0.0000f),Vector3D(-17.1988f,-2.2752f,0.0000f),Vector3D(-13.4161f,0.7573f,0.0000f),Vector3D(-5.7218f,-1.1761f,0.0000f),Vector3D(-5.5844f,1.4826f,0.0000f),Vector3D(8.1584f,-1.9088f,0.0000f),Vector3D(7.3338f,0.7498f,0.0000f),Vector3D(31.5211f,-2.6416f,0.0000f),Vector3D(30.9027f,-0.3493f,0.0000f)};
    Vector3D TalkCVectors[19] = {Vector3D(108.2236f,-3.5463f,0.0000f),Vector3D(98.2469f,-3.5463f,0.0000f),Vector3D(110.6032f,-3.5463f,0.0000f),Vector3D(96.8592f,-3.5463f,0.0000f),Vector3D(89.3295f,-3.5463f,0.0000f),Vector3D(87.6218f,-3.5463f,0.0000f),Vector3D(76.4222f,-3.5463f,0.0000f),Vector3D(74.5079f,-3.5463f,0.0000f),Vector3D(66.3811f,-3.5463f,0.0000f),Vector3D(66.2939f,-3.5463f,0.0000f),Vector3D(47.1192f,-3.5463f,0.0000f),Vector3D(47.5933f,-3.5463f,0.0000f),Vector3D(22.6099f,-3.5463f,0.0000f),Vector3D(22.2779f,-3.5463f,0.0000f),Vector3D(5.2185f,-3.5463f,0.0000f),Vector3D(5.4228f,-3.5463f,0.0000f),Vector3D(126.8740f,-3.5463f,0.0000f),Vector3D(105.2452f,-3.5463f,0.0000f),Vector3D(116.3300f,-3.5463f,0.0000f)};
    Vector3D EyeBiggerVectors[34] = {Vector3D(3.0493f,0.0000f,0.0000f),Vector3D(16.4200f,0.0000f,0.0000f),Vector3D(29.2299f,0.0000f,0.0000f),Vector3D(22.5255f,0.0000f,0.0000f),Vector3D(18.4641f,0.0000f,0.0000f),Vector3D(18.5364f,0.0000f,0.0000f),Vector3D(10.5455f,0.0000f,0.0000f),Vector3D(19.8640f,0.0000f,0.0000f),Vector3D(20.7242f,0.0000f,0.0000f),Vector3D(19.7996f,0.0000f,0.0000f),Vector3D(21.7557f,0.0000f,0.0000f),Vector3D(20.5727f,0.0000f,0.0000f),Vector3D(18.1664f,0.0000f,0.0000f),Vector3D(18.1234f,0.0000f,0.0000f),Vector3D(13.8255f,0.0000f,0.0000f),Vector3D(14.0834f,0.0000f,0.0000f),Vector3D(6.5191f,0.0000f,0.0000f),Vector3D(6.7125f,0.0000f,0.0000f),Vector3D(15.1740f,0.0000f,0.0000f),Vector3D(15.2701f,0.0000f,0.0000f),Vector3D(15.5731f,0.0000f,0.0000f),Vector3D(15.6532f,0.0000f,0.0000f),Vector3D(15.8610f,0.0000f,0.0000f),Vector3D(15.9571f,0.0000f,0.0000f),Vector3D(16.2602f,0.0000f,0.0000f),Vector3D(16.3402f,0.0000f,0.0000f),Vector3D(15.6592f,0.0000f,0.0000f),Vector3D(15.7553f,0.0000f,0.0000f),Vector3D(16.0583f,0.0000f,0.0000f),Vector3D(16.1383f,0.0000f,0.0000f),Vector3D(15.4147f,0.0000f,0.0000f),Vector3D(15.5107f,0.0000f,0.0000f),Vector3D(15.8138f,0.0000f,0.0000f),Vector3D(15.8938f,0.0000f,0.0000f)};
    Vector3D EyeBrowThickerVectors[11] = {Vector3D(0.0000f,-1.3617f,0.0000f),Vector3D(1.6213f,2.6898f,0.0000f),Vector3D(0.0000f,1.4927f,0.0000f),Vector3D(0.0000f,4.2381f,0.0000f),Vector3D(0.0000f,-0.6551f,0.0000f),Vector3D(0.0000f,1.0173f,0.0000f),Vector3D(0.0000f,-1.2825f,0.0000f),Vector3D(0.0000f,1.6512f,0.0000f),Vector3D(0.0000f,-0.6486f,0.0000f),Vector3D(0.0000f,2.2850f,0.0000f),Vector3D(0.0000f,0.3022f,0.0000f)};
    Vector3D FlattenVectors[63] = {Vector3D(0.0000f,-116.3927f,0.0000f),Vector3D(0.0000f,-74.1080f,0.0000f),Vector3D(0.0000f,-105.5760f,0.0000f),Vector3D(0.0000f,-107.0985f,0.0000f),Vector3D(0.0000f,-90.5603f,0.0000f),Vector3D(0.0000f,-108.4586f,0.0000f),Vector3D(0.0000f,-92.3373f,0.0000f),Vector3D(0.0000f,-120.2175f,0.0000f),Vector3D(0.0000f,-116.3310f,0.0000f),Vector3D(0.0000f,-123.4735f,0.0000f),Vector3D(0.0000f,-124.0158f,0.0000f),Vector3D(0.0000f,-121.0235f,0.0000f),Vector3D(0.0000f,-122.9312f,0.0000f),Vector3D(0.0000f,-120.3078f,0.0000f),Vector3D(0.0000f,-123.6543f,0.0000f),Vector3D(0.0000f,-121.0309f,0.0000f),Vector3D(0.0000f,-124.3773f,0.0000f),Vector3D(0.0000f,-122.1155f,0.0000f),Vector3D(0.0000f,-36.6237f,0.0000f),Vector3D(0.0000f,-28.4555f,0.0000f),Vector3D(0.0000f,-44.8763f,0.0000f),Vector3D(0.0000f,-33.4916f,0.0000f),Vector3D(0.0000f,-22.8085f,0.0000f),Vector3D(0.0000f,-28.2193f,0.0000f),Vector3D(0.0000f,-15.8596f,0.0000f),Vector3D(0.0000f,-21.6346f,0.0000f),Vector3D(0.0000f,-12.3592f,0.0000f),Vector3D(0.0000f,-18.2906f,0.0000f),Vector3D(0.0000f,-33.2383f,0.0000f),Vector3D(0.0000f,-39.5132f,0.0000f),Vector3D(0.0000f,-11.6318f,0.0000f),Vector3D(0.0000f,-17.0736f,0.0000f),Vector3D(0.0000f,-30.2540f,0.0000f),Vector3D(0.0000f,-35.6544f,0.0000f),Vector3D(0.0000f,-55.6077f,0.0000f),Vector3D(0.0000f,-51.0680f,0.0000f),Vector3D(0.0000f,-45.0422f,0.0000f),Vector3D(0.0000f,-15.3557f,0.0000f),Vector3D(0.0000f,-37.7553f,0.0000f),Vector3D(0.0000f,-21.2767f,0.0000f),Vector3D(0.0000f,-41.0103f,0.0000f),Vector3D(0.0000f,-52.3031f,0.0000f),Vector3D(0.0000f,-54.5249f,0.0000f),Vector3D(0.0000f,-75.1215f,0.0000f),Vector3D(0.0000f,-75.4096f,0.0000f),Vector3D(0.0000f,-92.0413f,0.0000f),Vector3D(0.0000f,-92.2390f,0.0000f),Vector3D(0.0000f,-83.7548f,0.0000f),Vector3D(0.0000f,-83.7560f,0.0000f),Vector3D(0.0000f,-84.0361f,0.0000f),Vector3D(0.0000f,-84.0397f,0.0000f),Vector3D(0.0000f,-83.7449f,0.0000f),Vector3D(0.0000f,-83.7461f,0.0000f),Vector3D(0.0000f,-84.0262f,0.0000f),Vector3D(0.0000f,-84.0297f,0.0000f),Vector3D(0.0000f,-83.7424f,0.0000f),Vector3D(0.0000f,-83.7436f,0.0000f),Vector3D(0.0000f,-84.0237f,0.0000f),Vector3D(0.0000f,-84.0272f,0.0000f),Vector3D(0.0000f,-83.7474f,0.0000f),Vector3D(0.0000f,-83.7486f,0.0000f),Vector3D(0.0000f,-84.0286f,0.0000f),Vector3D(0.0000f,-84.0322f,0.0000f)};

    Morph morphs[18] = {
        Morph(29, HappyIndexes, HappyVectors),
        Morph(58, BlushIndexes, BlushVectors),
        Morph(52, DeterminationIndexes, DeterminationVectors),
        Morph(37, MadIndexes, MadVectors),
        Morph(55, AngryIndexes, AngryVectors),
        Morph(40, CalmIndexes, CalmVectors),
        Morph(59, SadIndexes, SadVectors),
        Morph(10, TalkAIndexes, TalkAVectors),
        Morph(12, TalkBIndexes, TalkBVectors),
        Morph(7, BlinkIndexes, BlinkVectors),
        Morph(25, HideMouthIndexes, HideMouthVectors),
        Morph(4, HideNoseIndexes, HideNoseVectors),
        Morph(7, HideEyeIndexes, HideEyeVectors),
        Morph(11, HideEyebrowIndexes, HideEyebrowVectors),
        Morph(19, TalkCIndexes, TalkCVectors),
        Morph(34, EyeBiggerIndexes, EyeBiggerVectors),
        Morph(11, EyeBrowThickerIndexes, EyeBrowThickerVectors),
        Morph(63, FlattenIndexes, FlattenVectors)
    };

public:
    InfraredFace(){}

    Object3D* GetObject(){
        return &basisObj;
    }

    void SetMorphWeight(Morphs morph, float weight){
        morphs[morph].Weight = weight;
    }

    float* GetMorphWeightReference(Morphs morph){
        return &morphs[morph].Weight;
    }

    void Reset(){
        for(int i = 0; i < morphCount; i++){
            morphs[i].Weight = 0.0f;
        }
    }

    void Update(){
        basisObj.ResetVertices();

        for(int i = 0; i < morphCount; i++){
            if(morphs[i].Weight > 0.0f){
                morphs[i].MorphObject3D(basisObj.GetTriangleGroup());
            }
        }

    }
};
