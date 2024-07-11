;;
;;  Copyright 2023 Autodesk, Inc.  All rights reserved.
;;
;;  Use of this software is subject to the terms of the Autodesk license 
;;  agreement provided at the time of installation or download, or which 
;;  otherwise accompanies this software in either electronic or hard copy form.
;;
;;  Version 2.0
;;  AutoCAD Hatch Patterns
;;
;;
;;  Note: in order to ease migration of this file when upgrading 
;;  to a future version of AutoCAD, it is recommended that you add
;;  your customizations to the User Defined Hatch Patterns section at the
;;  end of this file.
;;


;; Note: Dummy pattern description used for 'Solid fill'.
*SOLID, Solid fill
45, 0,0, 0,.125
*ANGLE, Angle steel
0, 0,0, 0,.275, .2,-.075
90, 0,0, 0,.275, .2,-.075
*ANSI31, ANSI Iron, Brick, Stone masonry
45, 0,0, 0,.125
*ANSI32, ANSI Steel
45, 0,0, 0,.375
45, .176776695,0, 0,.375
*ANSI33, ANSI Bronze, Brass, Copper
45, 0,0, 0,.25
45, .176776695,0, 0,.25, .125,-.0625
*ANSI34, ANSI Plastic, Rubber
45, 0,0, 0,.75
45, .176776695,0, 0,.75
45, .353553391,0, 0,.75
45, .530330086,0, 0,.75
*ANSI35, ANSI Fire brick, Refractory material
45, 0,0, 0,.25
45, .176776695,0, 0,.25, .3125,-.0625,0,-.0625
*ANSI36, ANSI Marble, Slate, Glass
45, 0,0, .21875,.125, .3125,-.0625,0,-.0625
*ANSI37, ANSI Lead, Zinc, Magnesium, Sound/Heat/Elec Insulation
45, 0,0, 0,.125
135, 0,0, 0,.125
*ANSI38, ANSI Aluminum
45, 0,0, 0,.125
135, 0,0, .25,.125, .3125,-.1875
;;
;;  The following hatch patterns AR-xxxxx
;;  come from AEC/Architectural
;;
*AR-B816, 8x16 Block elevation stretcher bond
0,       0,0,      0,8
90,      0,0,      8,8,                          8,-8
*AR-B816C, 8x16 Block elevation stretcher bond with mortar joints
0,       0,0,      8,8,                         15.625,-.375
0,      -8,.375,   8,8,                         15.625,-.375
90,      0,0,      8,8,                        -8.375,7.625
90,     -0.375,0,  8,8,                        -8.375,7.625
*AR-B88, 8x8 Block elevation stretcher bond
0,       0,0,      0,8
90,      0,0,      8,4,                          8,-8
*AR-BRELM, Standard brick elevation english bond with mortar joints
0,      0,0,       0,5.334,                      7.625,-.375
0,      0,2.25,    0,5.334,                      7.625,-.375
0,      2,2.667,   0,5.334,                      3.625,-.375
0,      2,4.917,   0,5.334,                      3.625,-.375
90,     0,0,       0,8,                          2.25,-3.084
90,    -0.375,0,   0,8,                          2.25,-3.084
90,     2,2.667,   0,4,                          2.25,-3.084
90,     1.625,2.667,  0,4,                       2.25,-3.084
*AR-BRSTD, Standard brick elevation stretcher bond
0,       0,0,      0,2.667
90,      0,0,      2.667,4,                      2.667,-2.667
*AR-CONC, Random dot and stone pattern
50,      0,0,      4.12975034,-5.89789472,       0.75,-8.25
355,     0,0,     -2.03781207,7.37236840,        0.60,-6.6
100.45144446,0.59771681,-0.05229344,5.7305871,-6.9397673,0.63740192,-7.01142112
46.1842, 0,2,      6.19462554,-8.84684596,       1.125,-12.375
96.63563549,.88936745,1.86206693,8.59588239,-10.40964966,0.95610342,-10.5171376
351.18416399,0,2,  7.74327494,11.05855746,       0.9,-9.90000001
21,      1,1.5,    4.12975034,-5.89789472,       0.75,-8.25
326,     1,1.5,   -2.03781207,7.37236840,        0.60,-6.6
71.45144474, 1.49742254,1.16448426, 5.7305871,-6.9397673, 0.6374019,-7.01142112
37.5,    0,0,      2.123,2.567,                  0,-6.52,0,-6.7,0,-6.625
7.5,     0,0,      3.123,3.567,                  0,-3.82,0,-6.37,0,-2.525
-32.5,  -2.23,0,   4.6234,2.678,                 0,-2.5,0,-7.8,0,-10.35
-42.5,  -3.23,0,   3.6234,4.678,                 0,-3.25,0,-5.18,0,-7.35
*AR-HBONE, Standard brick herringbone pattern @ 45 degrees
45,      0,0,      4,4,                          12,-4
135,     2.828427125,2.828427125,  4,-4,         12,-4
*AR-PARQ1, 2x12 Parquet flooring: pattern of 12x12
90,      0,0,      12,12,                        12,-12
90,      2,0,      12,12,                        12,-12
90,      4,0,      12,12,                        12,-12
90,      6,0,      12,12,                        12,-12
90,      8,0,      12,12,                        12,-12
90,     10,0,      12,12,                        12,-12
90,     12,0,      12,12,                        12,-12
0,      0,12,      12,-12,                       12,-12
0,      0,14,      12,-12,                       12,-12
0,      0,16,      12,-12,                       12,-12
0,      0,18,      12,-12,                       12,-12
0,      0,20,      12,-12,                       12,-12
0,      0,22,      12,-12,                       12,-12
0,      0,24,      12,-12,                       12,-12
*AR-RROOF, Roof shingle texture
0, 0,0, 2.2,1, 15,-2,5,-1
0, 1.33,0.5, -1,1.33, 3,-0.33,6,-0.75
0, 0.5,0.85, 5.2,0.67, 8,-1.4,4,-1
*AR-RSHKE, Roof wood shake texture
0,       0,0,      25.5,12,                        6,-5,7,-3,9,-4
0,       6,.5,     25.5,12,                        5,-19,4,-6
0,       18,-.75,  25.5,12,                        3,-31
90,      0,0,      12,8.5,                       11.5,-36.5
90,      6,0,      12,8.5,                       11.25,-36.75
90,      11,0,     12,8.5,                       10.5,-37.5
90,      18,-0.75, 12,8.5,                       11.5,-36.5
90,      21,-0.75, 12,8.5,                       11.5,-36.5
90,      30,0,     12,8.5,                       11,-37
*AR-SAND, Random dot pattern
37.5,   0,0,       1.123,1.567,                  0,-1.52,0,-1.7,0,-1.625
7.5,    0,0,       2.123,2.567,                  0,-.82,0,-1.37,0,-.525
-32.5, -1.23,0,    2.6234,1.678,                 0,-.5,0,-1.8,0,-2.35
-42.5, -1.23,0,    1.6234,2.678,                 0,-.25,0,-1.18,0,-1.35
*BOX, Box steel
90, 0,0, 0,1
90, .25,0, 0,1
0, 0,0, 0,1, -.25,.25
0, 0,.25, 0,1, -.25,.25
0, 0,.5, 0,1, .25,-.25
0, 0,.75, 0,1, .25,-.25
90, .5,0, 0,1, .25,-.25
90, .75,0, 0,1, .25,-.25
*BRASS, Brass material
0, 0,0, 0,.25
0, 0,.125, 0,.25, .125,-.0625
*BRICK, Brick or masonry-type surface
0, 0,0, 0,.25
90, 0,0, 0,.5, .25,-.25
90, .25,0, 0,.5, -.25,.25
*BRSTONE, Brick and stone
0, 0,0, 0,.33
90, .9,0,  .33,.5,    .33,-.33
90, .8,0,  .33,.5,    .33,-.33  
0, .9,.055,  .5,.33,  -.9, .1
0, .9,.11,  .5,.33,  -.9, .1
0, .9,.165,  .5,.33,  -.9, .1
0, .9,.22,  .5,.33,  -.9, .1
0, .9,.275,  .5,.33,  -.9, .1
*CLAY, Clay material
0, 0,0, 0,.1875
0, 0,.03125, 0,.1875
0, 0,.0625, 0,.1875
0, 0,.125, 0,.1875, .1875,-.125
*CORK, Cork material
0, 0,0, 0,.125
135, .0625,-.0625, 0,.35355339, .176776696,-.176776696
135, .09375,-.0625, 0,.35355339, .176776696,-.176776696
135, .125,-.0625, 0,.35355339, .176776696,-.176776696
*CROSS, A series of crosses
0, 0,0, .25,.25, .125,-.375
90, .0625,-.0625, .25,.25, .125,-.375
*DASH, Dashed lines
0, 0,0, .125,.125, .125,-.125
*DOLMIT, Geological rock layering
0, 0,0, 0,.25
45, 0,0, 0,.70710678,.353553390593273762200422181,-.707106781186547524400844362
*DOTS, A series of dots
0, 0,0, .03125,.0625, 0,-.0625
*EARTH, Earth or ground (subterranean)
0, 0,0, .25,.25, .25,-.25
0, 0,.09375, .25,.25, .25,-.25
0, 0,.1875, .25,.25, .25,-.25
90, .03125,.21875, .25,.25, .25,-.25
90, .125,.21875, .25,.25, .25,-.25
90, .21875,.21875, .25,.25, .25,-.25
*ESCHER, Escher pattern
60, 0,0, -.6,1.039230484, 1.1,-.1
180, 0,0, -.6,1.039230484, 1.1,-.1
300, 0,0, .6,1.039230484, 1.1,-.1
60, .1,0, -.6,1.039230484, .2,-1
300, .1,0, .6,1.039230484, .2,-1
60, -.05,.08660254, -.6,1.039230484, .2,-1
180, -.05,.08660254, -.6,1.039230484, .2,-1
300, -.05,-.08660254, .6,1.039230484, .2,-1
180, -.05,-.08660254, -.6,1.039230484, .2,-1
60, -.4,0, -.6,1.039230484, .2,-1
300, -.4,0, .6,1.039230484, .2,-1
60, .2,-.346410161, -.6,1.039230484, .2,-1
180, .2,-.346410161, -.6,1.039230484, .2,-1
300, .2,.346410161, .6,1.039230484, .2,-1
180, .2,.346410161, -.6,1.039230484, .2,-1
0, .2,.173205081, -.6,1.039230484, .7,-.5
0, .2,-.173205081, -.6,1.039230484, .7,-.5
120, .05,.259807621, .6,1.039230484, .7,-.5
120, -.25,.08660254, .6,1.039230484, .7,-.5
240, -.25,-.08660254, .6,1.039230484, .7,-.5
240, .05,-.259807621, .6,1.039230484, .7,-.5
*FLEX, Flexible material
0, 0,0, 0,.25, .25,-.25
45, .25,0, .176776695296,.176776695296, .0625,-.2285533906,.0625,-.353553390593
*GOST_GLASS,glass material
45, 0, 0, 6, -6, 5, -7
45, 2.121320, 0, 6, -6, 2, -10
45, 0, 2.121320, 6, -6, 2, -10
*GOST_WOOD,wood material
90, 0, 0, 0, -6, 10, -2
90, 2, -2, 0, -6, 6, -1.5, 3, -1.5
90, 4, -5, 0, -6, 10, -2
*GOST_GROUND,ground
45, 0, 0, 10, -10, 20
45, 3, 0, 10, -10, 20
45, 6, 0, 10, -10, 20
*GRASS, Grass area
90, 0,0, .707106781,.707106781, .1875,-1.226713563
45, 0,0, 0,1, .1875,-.8125
135, 0,0, 0,1, .1875,-.8125
*GRATE, Grated area
0, 0,0, 0,.03125
90, 0,0, 0,.125
*GRAVEL,Gravel pattern
228.012787504,.72,1.0,12.0413651692039,.0743294146632,.134536,-13.3190880470737
184.969740728,.63,.90,-12.0415166747131,.0433148081592,.230868,-22.85592476123
132.510447078,.40,.88,-14.8659418273816,.061429511683,.162788,-16.1160325960997
267.273689006,.01,.63,-20.0249279039043,.0475651493827,.210238,-20.813558041629
292.833654178,0.0,.42,-12.9999095019474,.048507125026,.206155,-20.4093731280883
357.273689006,.08,.23,-20.0249279039043,.0475651493827,.210238,-20.813558041629
37.6942404667,.29,.22,-16.4011800288558,.0359675000664,.278029,-27.524848548916
72.2553283749,.51,.39,23.0867613281116,.0380969659053,.262488,-25.9863214968134
121.429565615,.59,.64,15.2642639131074,.047404546271,.210950,-20.884073109729
175.236358309,.48,.82,-11.0450488205478,.083045479801,.240832,-11.8007625787923
222.397437798,.24,.84,16.2787889313724,.0321080648114,.311448,-30.8333750047949
138.814074834,1.0,.62,9.2190645101588,.0940720868851,.106301,-10.5238448127347
171.469234390,.92,.69,-13.1528534931484,.0494468176315,.202237,-20.021511416157
225.000000000,.72,.72,0.7071067811865,.7071067811865,.141421,-1.2727925623731
203.198590514,.65,.84,-5.3835637472478,.1313064328928,.076158,-7.5396151058639
291.801409486,.58,.81,-3.156820749011,.185695338158,.107703,-5.2774618071345
30.9637565321,.62,.71,3.6014702879928,.1714985851408,.174929,-5.6560228948453
161.565051177,.77,.80,-2.2135943621183,.3162277660138,.126491,-3.0357866601684
16.3895403340,0.0,.81,10.4401539876873,.0564332648047,.177200,-17.5428451466694
70.3461759419,.17,.86,-11.7045066155395,.0672672793901,.148661,-14.717407747319
293.198590514,.77,1.0,-5.3835637472478,.1313064328928,.152315,-7.4634581058639
343.610459666,.83,.86,-10.4401539876873,.0564332648047,.177200,-17.542845146669
339.443954780,0.0,.19,-5.3838927710229,.117041147157,.170880,-8.3731237453175
294.775140569,.16,.13,-12.0828441168135,.0698430296124,.143178,-14.174643063276
66.8014094864,.78,0.0,5.3835637472487,.1313064328552,.152315,-7.4634581058639
17.3540246363,.84,.14,-13.6013396869991,.0596549986364,.167631,-16.59542361424
69.4439547804,.29,0.0, -5.383892771022,.1170411471946,.085440,-8.4585637453175
101.309932474,.72,0.0,4.1184388379018,.1961161351396,.050990,-5.0480295135928
165.963756532,.71,.05,-3.1529631254726,.2425356250323,.206155,-3.9169506256177
186.009005957,.51,.10,-10.0497393137326,.0523423921723,.191050,-18.9139231745428
303.690067526,.62,.62,-2.2188007849008,.2773500981134,.144222,-3.4613292754640
353.157226587,.7,.5,17.1171966955143,.0397150736497,.251794,-24.9275626240283
60.9453959009,.95,.47,-8.0616726575653,.0971285862325,.102956,-10.192674140987
90, 1,.56, 1.000,1.000, .06,-.940
120.256437164,.49,.13,-8.0619364083848,.0719815751411,.138924,-13.7535199894498
48.0127875042,.42,.25,12.0413651692041,.0743294146212,.269072,-13.1845520470737
0, .60, .45, 1, 1, .26,-.74
325.304846469,.86,.45,12.2063917682497,-.063245553253,.158114,-15.653274300842
254.054604099,.99,.36,4.1208169184605,.1373605639542,.145602,-7.1345078892805
207.645975364,.95,.22,21.4708691170287,.0421824539631,.237065,-23.4694741822594
175.426078740,.74,.11,13.0383438432524,.039872611164,.250799,-24.8290734079689
*HEX, Hexagons
0, 0,0, 0,0.21650635094610966169093079268823, .125,-.25
120, 0,0, 0,0.21650635094610966169093079268823, .125,-.25
60, .125,0, 0,0.21650635094610966169093079268823, .125,-.25
*HONEY, Honeycomb pattern
0, 0,0, .1875,0.10825317547305483084546539634412, .125,-.25
120, 0,0, .1875,0.10825317547305483084546539634412, .125,-.25
60, 0,0, .1875,0.10825317547305483084546539634412, -.25,.125
*HOUND, Houndstooth check
0, 0,0, .25,.0625, 1,-.5
90, 0,0, -.25,.0625, 1,-.5
*INSUL, Insulation material
0, 0,0, 0,.375
0, 0,.125, 0,.375, .125,-.125
0, 0,.25, 0,.375, .125,-.125
;;
;;  Hatch Pattern Definition related to ISO/DIS 12011 line types
;;
;;  (Width * 5 = Distance between lines)
;;
;;  The size of the line segments related to the ISO/DIS 12011 linetypes
;;  define the following hatch pattern. 
;;  The pen width of 1 mm is the base of the definition. To use them with
;;  the other ISO/DIS 12011 predefined pen widths, the line has to be scaled
;;  with the appropriate value (e.g. pen width 0,5 mm -> ltscale 0.5).
;;
*ACAD_ISO02W100, dashed line
0, 0,0, 0,5, 12,-3
*ACAD_ISO03W100, dashed space line
0, 0,0, 0,5, 12,-18
*ACAD_ISO04W100, long dashed dotted line
0, 0,0, 0,5, 24,-3,.5,-3
*ACAD_ISO05W100, long dashed double dotted line
0, 0,0, 0,5, 24,-3,.5,-3,.5,-3
*ACAD_ISO06W100, long dashed triplicate dotted line
0, 0,0, 0,5, 24,-3,.5,-3,.5,-6.5
0, 0,0, 0,5, -34,.5,-3
*ACAD_ISO07W100, dotted line
0, 0,0, 0,5, .5,-3
*ACAD_ISO08W100, long dashed short dashed line
0, 0,0, 0,5, 24,-3,6,-3
*ACAD_ISO09W100, long dashed double-short-dashed line
0, 0,0, 0,5, 24,-3,6,-3,6,-3
*ACAD_ISO10W100, dashed dotted line
0, 0,0, 0,5, 12,-3,.5,-3
*ACAD_ISO11W100, double-dashed dotted line
0, 0,0, 0,5, 12,-3,12,-3,.5,-3
*ACAD_ISO12W100, dashed double-dotted line
0, 0,0, 0,5, 12,-3,.5,-3,.5,-3
*ACAD_ISO13W100, double-dashed double-dotted line
0, 0,0, 0,5, 12,-3,12,-3,.5,-6.5
0, 0,0, 0,5, -33.5,.5,-3
*ACAD_ISO14W100, dashed triplicate-dotted line
0, 0,0, 0,5, 12,-3,.5,-3,.5,-6.5
0, 0,0, 0,5, -22,.5,-3
*ACAD_ISO15W100, double-dashed triplicate-dotted line
0, 0,0, 0,5, 12,-3,12,-3,.5,-10
0, 0,0, 0,5, -33.5,.5,-3,.5,-3
;;
;; end of ACAD_ISO hatch pattern definition
;;
*LINE, Parallel horizontal lines
0, 0,0, 0,.125
*MUDST, Mud and sand
0, 0,0, .5,.25, .25,-.25,0,-.25,0,-.25
*NET, Horizontal / vertical grid
0, 0,0, 0,.125
90, 0,0, 0,.125
*NET3, Network pattern 0-60-120
0, 0,0, 0,.125
60, 0,0, 0,.125
120, 0,0, 0,.125
*PLAST, Plastic material
0, 0,0, 0,.25
0, 0,.03125, 0,.25
0, 0,.0625, 0,.25
*PLASTI, Plastic material
0, 0,0, 0,.25
0, 0,.03125, 0,.25
0, 0,.0625, 0,.25
0, 0,.15625, 0,.25
*SACNCR, Concrete
45, 0,0, 0,.09375
45, .066291261,0, 0,.09375, 0,-.09375
*SQUARE,Small aligned squares
0, 0,0, 0,.125, .125,-.125
90, 0,0, 0,.125, .125,-.125
*STARS, Star of David
0, 0,0, 0,.216506351, .125,-.125
60, 0,0, 0,.216506351, .125,-.125
120, .0625,.108253176, 0,.216506351, .125,-.125
*STEEL, Steel material
45, 0,0, 0,.125
45, 0,.0625, 0,.125
*SWAMP, Swampy area
0, 0,0, .5,.866025403, .125,-.875
90, .0625,0, .866025403,.5, .0625,-1.669550806
90, .078125,0, .866025403,.5, .05,-1.682050806
90, .046875,0, .866025403,.5, .05,-1.682050806
60, .09375,0, .5,.866025403, .04,-.96
120, .03125,0, .5,.866025403, .04,-.96
*TRANS, Heat transfer material
0, 0,0, 0,.25
0, 0,.125, 0,.25, .125,-.125
*TRIANG, Equilateral triangles
60, 0,0, .1875,.324759526, .1875,-.1875
120, 0,0, .1875,.324759526, .1875,-.1875
0, -.09375,.162379763, .1875,.324759526, .1875,-.1875
*ZIGZAG, Staircase effect
0, 0,0, .125,.125, .125,-.125
90, .125,0, .125,.125, .125,-.125

;;  
;;  User Defined Hatch Patterns
;;  Add any hatch patterns that you define to this section of
;;  the file to ensure that they migrate properly when
;;  upgrading to a future AutoCAD version.  If duplicate hatch
;;  patterns are found in this file, items in the User Defined
;;  Hatch Patterns section take precedence over patterns that
;;  appear earlier in the file.
;;

