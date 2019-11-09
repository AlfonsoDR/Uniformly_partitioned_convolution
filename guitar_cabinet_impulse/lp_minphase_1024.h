
// lowpass minimum phase filter 1024 taps
// built with Filterbuilder in MATLAB
// F6dB = 2700Hz
// Fs = 44100Hz

const float32_t guitar_cabinet_impulse [1024 * 2] = 
{
2.31842566202364e-05,0,
6.92600713557719e-05,0,
0.000167376179263423,0,
0.000349587980496891,0,
0.000661440583702931,0,
0.00116233990846841,0,
0.00192599965808437,0,
0.00303949916978929,0,
0.00460058361424922,0,
0.00671289428416482,0,
0.00947900683776532,0,
0.0129913319318547,0,
0.0173212019548081,0,
0.0225068045647915,0,
0.0285408029380963,0,
0.0353588155453863,0,
0.0428300715002676,0,
0.0507516602545729,0,
0.0588476247701225,0,
0.0667741074552554,0,
0.0741311566065947,0,
0.0804815042981584,0,
0.0853757613870642,0,
0.0883829188323630,0,
0.0891243393908634,0,
0.0873086582421476,0,
0.0827647025526285,0,
0.0754692677554942,0,
0.0655664737963998,0,
0.0533760670041410,0,
0.0393884728759023,0,
0.0242455264620747,0,
0.00870703442128361,0,
-0.00639545977583329,0,
-0.0202148224512203,0,
-0.0319504659718515,0,
-0.0409114126941687,0,
-0.0465749177705223,0,
-0.0486350190536791,0,
-0.0470359636631408,0,
-0.0419865455839374,0,
-0.0339527665921013,0,
-0.0236282489024947,0,
-0.0118837490454886,0,
0.000300624410741486,0,
0.0119152146550527,0,
0.0220057717360399,0,
0.0297559059904688,0,
0.0345592785837783,0,
0.0360743128603873,0,
0.0342557828098299,0,
0.0293594686919720,0,
0.0219188236590820,0,
0.0126950845089174,0,
0.00260517922426376,0,
-0.00736597856261618,0,
-0.0162604704129290,0,
-0.0232402148919855,0,
-0.0276684528901733,0,
-0.0291713589015140,0,
-0.0276734623326577,0,
-0.0234028082425107,0,
-0.0168652149387043,0,
-0.00878989881590303,0,
-5.21135545921122e-05,0,
0.00841931689764258,0,
0.0157398376896771,0,
0.0211619394304800,0,
0.0241530184703522,0,
0.0244498617504799,0,
0.0220838500312762,0,
0.0173741065131752,0,
0.0108893546834545,0,
0.00338266572682985,0,
-0.00429361882495055,0,
-0.0112833891860658,0,
-0.0168219547624328,0,
-0.0203203030221812,0,
-0.0214289456106610,0,
-0.0200742631631638,0,
-0.0164632503107225,0,
-0.0110563295595891,0,
-0.00451141202020366,0,
0.00239414801019791,0,
0.00885467662034555,0,
0.0141297298710481,0,
0.0176291398990357,0,
0.0189798028482980,0,
0.0180663937967147,0,
0.0150414762383793,0,
0.0103039466471006,0,
0.00444866533077690,0,
-0.00180670728079151,0,
-0.00770860967084534,0,
-0.0125579475077848,0,
-0.0157929915458797,0,
-0.0170549049375323,0,
-0.0162282329845315,0,
-0.0134515827515353,0,
-0.00909750412716526,0,
-0.00372417669800774,0,
0.00199488429005240,0,
0.00735450594237152,0,
0.0117044235303353,0,
0.0145282380527698,0,
0.0155050914584366,0,
0.0145465759906087,0,
0.0118046438676917,0,
0.00764965348148927,0,
0.00262166997469515,0,
-0.00263881620991850,0,
-0.00747187612593604,0,
-0.0112807002023747,0,
-0.0136053476217097,0,
-0.0141785721508628,0,
-0.0129569035459834,0,
-0.0101232461124743,0,
-0.00606100802924836,0,
-0.00130316866030427,0,
0.00353691360753373,0,
0.00784417723149262,0,
0.0110798427521806,0,
0.0128489168227067,0,
0.0129486268494899,0,
0.0113919091847185,0,
0.00840306991116836,0,
0.00438653715323774,0,
-0.000127141114620768,0,
-0.00455087301905568,0,
-0.00831706133557272,0,
-0.0109503942826969,0,
-0.0121279149051270,0,
-0.0117188482851829,0,
-0.00979917431544071,0,
-0.00663932571878794,0,
-0.00266685967992299,0,
0.00159084507997504,0,
0.00557622558291195,0,
0.00877440248397700,0,
0.0107796319842688,0,
0.0113469463237614,0,
0.0104222161117245,0,
0.00814699691065025,0,
0.00483776083134899,0,
0.000942426391540922,0,
-0.00301984279414409,0,
-0.00652760515809071,0,
-0.00912564061815519,0,
-0.0104840849942577,0,
-0.0104404003195248,0,
-0.00901891645991954,0,
-0.00642552471942186,0,
-0.00301842359796432,0,
0.000740920954810111,0,
0.00434999620351449,0,
0.00733224037019518,0,
0.00929994736497820,0,
0.0100047267932083,0,
0.00936895407593112,0,
0.00749421502627611,0,
0.00464583328093988,0,
0.00121574594331993,0,
-0.00233113833503673,0,
-0.00551972079111257,0,
-0.00792828625718649,0,
-0.00924428205864971,0,
-0.00930494268688191,0,
-0.00811746467149005,0,
-0.00585626251346075,0,
-0.00283775562714392,0,
0.000523555513392655,0,
0.00377180585567976,0,
0.00647146764488173,0,
0.00826570214123048,0,
0.00892356149316041,0,
0.00836978977040308,0,
0.00669332378284411,0,
0.00413361179651850,0,
0.00104672206354511,0,
-0.00214395472507766,0,
-0.00500563208705885,0,
-0.00715475243303109,0,
-0.00830840763417442,0,
-0.00832161676669507,0,
-0.00720558785930404,0,
-0.00512458470229659,0,
-0.00237210396972701,0,
0.000670273373756800,0,
0.00358565395239376,0,
0.00597883065617106,0,
0.00752983901577049,0,
0.00803677763391928,0,
0.00744210363539299,0,
0.00583905560645064,0,
0.00345744417733086,0,
0.000630924830129034,0,
-0.00224953858270354,0,
-0.00478968657764780,0,
-0.00664583409718546,0,
-0.00757142079060560,0,
-0.00744974475280083,0,
-0.00630871607686486,0,
-0.00431560653172277,0,
-0.00175277198023558,0,
0.00102216463439330,0,
0.00362609455514198,0,
0.00570326747440532,0,
0.00697385889616280,0,
0.00727168785373053,0,
0.00656599063973265,0,
0.00496432310600460,0,
0.00269647846835159,0,
8.16817113944433e-05,0,
-0.00251623140082176,0,
-0.00473934342185595,0,
-0.00628493819411095,0,
-0.00694673442290431,0,
-0.00664243894225323,0,
-0.00542391531505189,0,
-0.00346880333541810,0,
-0.00105477167278702,0,
0.00147976738542185,0,
0.00378302972382077,0,
0.00553863805752272,0,
0.00650905587979041,0,
0.00656776226660953,0,
0.00571573014467941,0,
0.00408013060199829,0,
0.00189552578744849,0,
-0.000529615563563697,0,
-0.00285640493085519,0,
-0.00476283239445714,0,
-0.00598829909741999,0,
-0.00636926619916918,0,
-0.00586106515754082,0,
-0.00454304482150421,0,
-0.00260640482896343,0,
-0.000326581892595799,0,
0.00197580639719166,0,
0.00398001890228493,0,
0.00540982534505352,0,
0.00607158652425850,0,
0.00588047301945260,0,
0.00487133469291073,0,
0.00319274644745153,0,
0.00108527446768075,0,
-0.00115289164516496,0,
-0.00320808669625143,0,
-0.00479507791879791,0,
-0.00569664726517270,0,
-0.00579332240544832,0,
-0.00507921636889439,0,
-0.00366183015463347,0,
-0.00174601232280379,0,
0.000395521726327094,0,
0.00246098455749240,0,
0.00416196586418593,0,
0.00526371948541676,0,
0.00561753218142430,0,
0.00518082332514269,0,
0.00402215849297417,0,
0.00231067901516380,0,
0.000291497588393606,0,
-0.00174932278292326,0,
-0.00352526924663295,0,
-0.00478956459774298,0,
-0.00536946025306027,0,
-0.00518984816285904,0,
-0.00428294420371112,0,
-0.00278284592500591,0,
-0.000905784786935715,0,
0.00108094030490909,0,
0.00289701538490349,0,
0.00428860897149783,0,
0.00506385307859451,0,
0.00511929616587878,0,
0.00445369271527344,0,
0.00316730038553448,0,
0.00144687686872804,0,
-0.000461340108909742,0,
-0.00228683937215401,0,
-0.00377316154279748,0,
-0.00471389569328340,0,
-0.00498136246308399,0,
-0.00454392856169491,0,
-0.00346963504465336,0,
-0.00191576834043238,0,
-0.000105872328140595,0,
0.00170232192472342,0,
0.00325359934485146,0,
0.00433124316525256,0,
0.00478731693416418,0,
0.00456296777292234,0,
0.00369597557509153,0,
0.00231459691747540,0,
0.000618665253770866,0,
-0.00114927298551966,0,
-0.00273859888949499,0,
-0.00392613769737126,0,
-0.00454748982015981,0,
-0.00451978202783315,0,
-0.00385270304987035,0,
-0.00264634327783607,0,
-0.00107627023860139,0,
0.000631993826844836,0,
0.00223530272881799,0,
0.00350749194722432,0,
0.00427126428230621,0,
0.00442289383656035,0,
0.00394630386077830,0,
0.00291459644103883,0,
0.00147894898655186,0,
-0.000153508578017054,0,
-0.00174951427965741,0,
-0.00308300359838188,0,
-0.00396709987106396,0,
-0.00428031652780261,0,
-0.00398322355508400,0,
-0.00312336847209541,0,
-0.00182776909570755,0,
-0.000284231638365806,0,
0.00128586215316077,0,
0.00265925251176049,0,
0.00364256443585591,0,
0.00409950999825182,0,
0.00396976799773292,0,
0.00327693672734225,0,
0.00212444080565854,0,
0.000680174753370914,0,
-0.000847932851636909,0,
-0.00224181388518170,0,
-0.00330438198904739,0,
-0.00388736689651506,0,
-0.00391203050237518,0,
-0.00337974552969311,0,
-0.00237116160817667,0,
-0.00103401860831284,0,
0.000438439088786430,0,
0.00183536098372666,0,
0.00295847463976077,0,
0.00365021175427623,0,
0.00381581277603951,0,
0.00343629314609289,0,
0.00257050292820180,0,
0.00134608471964618,0,
-5.93033811519398e-05,0,
-0.00144374261661332,0,
-0.00261004147992239,0,
-0.00339380916501581,0,
-0.00368663188856228,0,
-0.00345104996035826,0,
-0.00272529227849692,0,
-0.00161719774252424,0,
-0.000288212718636138,0,
0.00107007840323727,0,
0.00226357939504140,0,
0.00312337877164711,0,
0.00352966652184957,0,
0.00342842365991471,0,
0.00283855540948357,0,
0.00184858942771317,0,
0.000603420216909254,0,
-0.000716854776115463,0,
-0.00192296860493538,0,
-0.00284361095114087,0,
-0.00334974651373220,0,
-0.00337269074976022,0,
-0.00291341905491825,0,
-0.00204181828450683,0,
-0.000886116175218968,0,
0.000385959270947943,0,
0.00159150055509725,0,
0.00255870656976558,0,
0.00315135154268039,0,
0.00328798006536230,0,
0.00295307105262977,0,
0.00219870471774290,0,
0.00113651421822157,0,
-7.87926594306875e-05,0,
-0.00127194517794220,0,
-0.00227238078135647,0,
-0.00293861119206112,0,
-0.00317823107365536,0,
-0.00296071469081767,0,
-0.00232125952618856,0,
-0.00135517630270053,0,
-0.000203706769407223,0,
0.000966587381975668,0,
0.00198792170634189,0,
0.00271531410198690,0,
0.00304718812889432,0,
0.00293951165744210,0,
0.00241163613113097,0,
0.00154294654936106,0,
0.000460985847684728,0,
-0.000677274909639046,0,
-0.00170817944741454,0,
-0.00248490714632269,0,
-0.00289838110890669,0,
-0.00289257380565122,0,
-0.00247208293066133,0,
-0.00170092097309645,0,
-0.000692835669378747,0,
0.000405461567149511,0,
0.00143563075306805,0,
0.00225050168717280,0,
0.00273511611705560,0,
0.00282292929289199,0,
0.00250491612978776,0,
0.00183038339568815,0,
0.000899345358341188,0,
-0.000152248930440367,0,
-0.00117237994376454,0,
-0.00201490301135731,0,
-0.00256048142706258,0,
-0.00273349031621485,0,
-0.00251247987028683,0,
-0.00193276726933928,0,
-0.00108086242740517,0,
-8.15855934324258e-05,0,
0.000920203464276901,0,
0.00178060589855662,0,
0.00237732585289323,0,
0.00262706095507064,0,
0.00249711248695229,0,
0.00200963617093638,0,
0.00123795270804358,0,
0.000295553650111175,0,
-0.000680566581147783,0,
-0.00154982512373239,0,
-0.00218827813846077,0,
-0.00250630015441791,0,
-0.00246113525278378,0,
-0.00206263878870589,0,
-0.00137136801508288,0,
-0.000489418462847372,0,
0.000454642303477894,0,
0.00132449240996121,0,
0.00199574929169557,0,
0.00237373288073491,0,
0.00240682633736113,0,
0.00209348525609974,0,
0.00148201555696731,0,
0.000663164414494716,0,
-0.000243344845164680,0,
-0.00110628149433310,0,
-0.00180191549764713,0,
-0.00223173446245856,0,
-0.00233640497239212,0,
-0.00210392968230173,0,
-0.00157094054529753,0,
-0.000816982681201172,0,
4.73537526311403e-05,0,
0.000896628416183204,0,
0.00160874964425924,0,
0.00208252417458731,0,
0.00225201925840202,0,
0.00209573785403738,0,
0.00163928452188144,0,
0.000951238256426447,0,
0.000132871648635155,0,
-0.000696730559237049,0,
-0.00141801825335266,0,
-0.00192816383251378,0,
-0.00215573545407569,0,
-0.00207068305101949,0,
-0.00168826819533445,0,
-0.00106644210293613,0,
-0.000297074274492429,0,
0.000507580225640286,0,
0.00123127915120100,0,
0.00177055833868071,0,
0.00204952096501008,0,
0.00203051702413206,0,
0.00171918468101525,0,
0.00116324030201166,0,
0.000445172966180032,0,
-0.000329958522465102,0,
-0.00104990618422130,0,
-0.00161145719133165,0,
-0.00193525196147642,0,
-0.00197696406490781,0,
-0.00173336774739707,0,
-0.00124238861757933,0,
-0.000577241485618903,0,
0.000164471921054408,0,
0.000875080858891463,0,
0.00145245665606542,0,
0.00181469058640444,0,
0.00191171116411833,0,
0.00173217355762438,0,
0.00130473357692693,0,
0.000693500414357773,0,
-1.15536190896866e-05,0,
-0.000707819942979198,0,
-0.00129498962342279,0,
-0.00168949188158487,0,
-0.00183638119118809,0,
-0.00171697715142895,0,
-0.00135119778689293,0,
-0.000794293315234117,0,
-0.000128528461140006,0,
0.000548964374408589,0,
0.00114034852788874,0,
0.00156119318722216,0,
0.00175254750638977,0,
0.00168915013243726,0,
0.00138276119239864,0,
0.000880079888120504,0,
0.000255643385270385,0,
-0.000399202819370988,0,
-0.000989668428510194,0,
-0.00143122667976847,0,
-0.00166170825455243,0,
-0.00165005232350275,0,
-0.00140045440971968,0,
-0.000951409539941709,0,
-0.000369793678655370,0,
0.000259078187901682,0,
0.000843951608581734,0,
0.00130089160870555,0,
0.00156529347055298,0,
0.00160102237729732,0,
0.00140533503588258,0,
0.00100891314826819,0,
0.000471098324825543,0,
-0.000128984981887823,0,
-0.000704060875631604,0,
-0.00117138367659104,0,
-0.00146464443553775,0,
-0.00154336984334878,0,
-0.00139848092064123,0,
-0.00105329475025445,0,
-0.000559786909231681,0,
9.20586882340665e-06,0,
0.000570720707520547,0,
0.00104377730614743,0,
0.00136102907600143,0,
0.00147835592760422,0,
0.00138098833194851,0,
0.00108531066815362,0,
0.000636175869919092,0,
0.000100105840179705,0,
-0.000444545019674160,0,
-0.000919033920564169,0,
-0.00125561979971687,0,
-0.00140720350975426,0,
-0.00135393481236519,0,
-0.00110575971344320,0,
-0.000700669979582369,0,
-0.000198900346379967,0,
0.000326013414099386,0,
0.000798006510433166,0,
0.00114950071789464,0,
0.00133107273102550,0,
0.00131839902448392,0,
0.00111547377362283,0,
0.000753743418419765,0,
0.000287231689408423,0,
-0.000215496536781531,0,
-0.000681427191270396,0,
-0.00104367098831862,0,
-0.00125107355970313,0,
-0.00127543803694711,0,
-0.00111531460647219,0,
-0.000795933238573427,0,
-0.000365243927579001,0,
0.000113268587810900,0,
0.000569934627630692,0,
0.000939033782171239,0,
0.00116825099037799,0,
0.00122608209861511,0,
0.00110614642977785,0,
0.000827826562427233,0,
0.000433156059587646,0,
-1.94947695959195e-05,0,
-0.000464058198364029,0,
-0.000836403999448427,0,
-0.00108357826805195,0,
-0.00117133083982625,0,
-0.00108884785380010,0,
-0.000850048194173160,0,
-0.000491264591353956,0,
-6.57470710824851e-05,0,
0.000364234412048955,0,
0.000736506055619903,0,
0.000997959576140350,0,
0.00111213925211609,0,
0.00106429084169936,0,
0.000863264148073990,0,
0.000539928557822146,0,
0.000142466894918840,0,
-0.000270804736616663,0,
-0.000639976270214178,0,
-0.000912240916948505,0,
-0.00104942354037222,0,
-0.00103333623717631,0,
-0.000868154144905488,0,
-0.000579556447889788,0,
-0.000210744345053181,0,
0.000184016533534218,0,
0.000547364488826142,0,
0.000827182143377356,0,
0.000984052946201738,0,
0.000996825804310251,0,
0.000865424075313823,0,
0.000610609937090463,0,
0.000270730428237948,0,
-0.000104047210792593,0,
-0.000459136011172735,0,
-0.000743471210431026,0,
-0.000916843451734235,0,
-0.000955582445128099,0,
-0.000855779969774411,0,
-0.000633583881672936,0,
-0.000322646566800644,0,
3.09900761023527e-05,0,
0.000375679688614139,0,
0.000661731528176854,0,
0.000848554138841409,0,
0.000910400616988909,0,
0.000839928409440788,0,
0.000649005859544601,0,
0.000366755566404892,0,
3.51365315379523e-05,0,
-0.000297302272531392,0,
-0.000582511590525966,0,
-0.000779885879374395,0,
-0.000862035173711162,0,
-0.000818578944893726,0,
-0.000657425012437972,0,
-0.000403382236035939,0,
-9.43724454406453e-05,0,
0.000224240253363513,0,
0.000506282412333044,0,
0.000711490426574860,0,
0.000811210595108650,0,
0.000792425252209862,0,
0.000659405438336733,0,
0.000432882527525658,0,
0.000146823227321083,0,
-0.000156653476385079,0,
-0.000433458763971546,0,
-0.000643955371366010,0,
-0.000758610360088441,0,
-0.000762141926653123,0,
-0.000655525889144877,0,
-0.000455646016663801,0,
-0.000192638198797590,0,
9.46461355074831e-05,0,
0.000364370118780115,0,
0.000577803989267838,0,
0.000704870979412612,0,
0.000728386399276024,0,
0.000646365713327780,0,
0.000472099913755590,0,
0.000232028840396866,0,
-3.82590638924077e-05,0,
-0.000299300197990017,0,
-0.000513508115746501,0,
-0.000650581651951762,0,
-0.000691788608424663,0,
-0.000632502178550583,0,
-0.000482684104579359,0,
-0.000265241577011010,0,
-1.25260180759518e-05,0,
0.000238455391088079,0,
0.000451475978936429,0,
0.000596296055919817,0,
0.000652951112077471,0,
0.000614509307120295,0,
0.000487859849193849,0,
0.000292554858179963,0,
5.77747603844275e-05,0,
-0.000181998252962131,0,
-0.000392062212318623,0,
-0.000542503788283931,0,
-0.000612443970955418,0,
-0.000592938927516412,0,
-0.000488094672152508,0,
-0.000314283722276622,0,
-9.76060123755052e-05,0,
0.000130020984655388,0,
0.000335563552129288,0,
0.000489659076213173,0,
0.000570801980276336,0,
0.000568343715101076,0,
0.000483860319656717,0,
0.000330761711141916,0,
0.000132169620511734,0,
-8.25758867035655e-05,0,
-0.000282216292777547,0,
-0.000438156936753476,0,
-0.000528521163468110,0,
-0.000541242402183342,0,
-0.000475639065900319,0,
-0.000342356757482748,0,
-0.000161654254389028,0,
3.96628035322811e-05,0,
0.000232222662004103,0,
0.000388351002636537,0,
0.000486059391673463,0,
0.000512134949271513,0,
0.000463891320016509,0,
0.000349434636797636,0,
0.000186289502547627,0,
-1.23885488484292e-06,0,
-0.000185711996257344,0,
-0.000340542959115894,0,
-0.000443844471551586,0,
-0.000481496626793849,0,
-0.000449086285866642,0,
-0.000352372448653416,0,
-0.000206323394038205,0,
-3.27772305495796e-05,0,
0.000142783240581214,0,
0.000294991619445700,0,
0.000402245519344909,0,
0.000449775453285231,0,
0.000431667081391838,0,
0.000351566879815925,0,
0.000222022497352224,0,
6.25056052823298e-05,0,
-0.000103487670228556,0,
-0.000251901420063931,0,
-0.000361603159691474,0,
-0.000417387344086621,0,
-0.000412072009702114,0,
-0.000347404862009395,0,
-0.000233679767496047,0,
-8.80931611607542e-05,0,
6.78336752233321e-05,0,
0.000211442838147025,0,
0.000322217841721930,0,
0.000384716426974000,0,
0.000390712542409379,0,
0.000340273847340497,0,
0.000241596939948753,0,
0.000109718816364172,0,
-3.58005431493095e-05,0,
-0.000173741386350173,0,
-0.000284343177793937,0,
-0.000352110161378117,0,
-0.000367984360756165,0,
-0.000330549947833784,0,
-0.000246094022671307,0,
-0.000127581674619189,0,
7.32028605164886e-06,0,
0.000138885584165327,0,
0.000248203727312109,0,
0.000319895241689376,0,
0.000344262284434288,0,
0.000318601235979581,0,
0.000247471325700262,0,
0.000141897464230453,0,
1.76955653972885e-05,0,
-0.000106917801790338,0,
-0.000213971804986838,0,
-0.000288346595118070,0,
-0.000319888801531104,0,
-0.000304794872643019,0,
-0.000246061622545466,0,
-0.000152906309066246,0,
-3.93613490610375e-05,0,
7.78593770321617e-05,0,
0.000181799227127072,0,
0.000257721987204272,0,
0.000295182233435149,0,
0.000289470897504440,0,
0.000242171817509444,0,
0.000160851350949098,0,
5.78165015665407e-05,0,
-5.16914616910742e-05,0,
-0.000151789076879414,0,
-0.000228233759466700,0,
-0.000270439894728259,0,
-0.000272951152067317,0,
-0.000236123684052475,0,
-0.000165981966110712,0,
-7.32252068446920e-05,0,
2.83725476591457e-05,0,
0.000124021218063928,0,
0.000200069064102153,0,
0.000245922647801780,0,
0.000255542565549431,0,
0.000228213365003542,0,
0.000168559592339302,0,
8.57609390429066e-05,0,
-7.82693707547917e-06,0,
-9.85390914859125e-05,0,
-0.000173376514098641,0,
-0.000221865890888493,0,
-0.000237533311450105,0,
-0.000218738593882757,0,
-0.000168844586532573,0,
-9.56192453092977e-05,0,
-1.00351706421735e-05,0,
7.53557221596580e-05,0,
0.000148280409403390,0,
0.000198484498237167,0,
0.000219191417448419,0,
0.000207983699700766,0,
0.000167097215023428,0,
0.000102987466075956,0,
2.53210238013366e-05,0,
-5.44669605714043e-05,0,
-0.000124873568743549,0,
-0.000175950394024371,0,
-0.000200744510781846,0,
-0.000196210769718550,0,
-0.000163573790293778,0,
-0.000108081502437781,0,
-3.81697172933283e-05,0,
3.58340508723894e-05,0,
0.000103217472933078,0,
0.000154422675036073,0,
0.000182428981299385,0,
0.000183672305994325,0,
0.000158515968280651,0,
0.000111112736955807,0,
4.87159876813076e-05,0,
-1.94052688883346e-05,0,
-8.33499157643449e-05,0,
-0.000134023196768804,0,
-0.000164427658253328,0,
-0.000170604070656867,0,
-0.000152176507554833,0,
-0.000112289734931095,0,
-5.71217409744715e-05,0,
5.10127111323520e-06,0,
6.52929173677558e-05,0,
0.000114862305626925,0,
0.000146918697415155,0,
0.000157226437055105,0,
0.000144775163388904,0,
0.000111823419895887,0,
6.35344132761316e-05,0,
7.16577730205960e-06,0,
-4.90337768625557e-05,0,
-9.70073744059257e-05,0,
-0.000130044612114509,0,
-0.000143736954522329,0,
-0.000136533770424748,0,
-0.000109923268623194,0,
-6.81341272350327e-05,0,
-1.74933870130042e-05,0,
3.45522525184124e-05,0,
8.05104510014682e-05,0,
0.000113935876464648,0,
0.000130306639060512,0,
0.000127658508710174,0,
0.000106787370487168,0,
7.10873288923024e-05,0,
2.60057154005510e-05,0,
-2.17955187222463e-05,0,
-6.54145438358438e-05,0,
-9.86867532610490e-05,0,
-0.000117099575975108,0,
-0.000118337553002678,0,
-0.000102615086753138,0,
-7.25700075772519e-05,0,
-3.28276609439960e-05,0,
1.07099653444594e-05,0,
5.17186331561330e-05,0,
8.43935123337871e-05,0,
0.000104252450891337,0,
0.000108749667872534,0,
9.75949705621561e-05,0,
7.27503412653159e-05,0,
3.80873178142081e-05,0,
-1.21560855642456e-06,0,
-3.94271406537191e-05,0,
-7.11103209619679e-05,0,
-9.18877874656292e-05,0,
-9.90553992829306e-05,0,
-9.19074672537153e-05,0,
-7.17982648305309e-05,0,
-4.19192246122811e-05,0,
-6.76408306092795e-06,0,
2.85136293606610e-05,0,
5.88787601112373e-05,0,
8.01106795759029e-05,0,
8.94006498850275e-05,0,
8.57083523314350e-05,0,
6.98797596806915e-05,0,
4.44693218510581e-05,0,
1.33273291627178e-05,0,
-1.89463808107399e-05,0,
-4.77288253193488e-05,0,
-6.90001821808819e-05,0,
-7.99134291570745e-05,0,
-7.91633555844557e-05,0,
-6.71498078029940e-05,0,
-4.58666925255517e-05,0,
-1.85784357406634e-05,0,
1.06707845601455e-05,0,
3.76735810842275e-05,0,
5.86265255618038e-05,0,
7.07008392042938e-05,0,
7.24071137022208e-05,0,
6.37599403655924e-05,0,
4.62617729817529e-05,0,
2.26219037921474e-05,0,
-3.62879449161565e-06,0,
-2.86933054206113e-05,0,
-4.90306069937277e-05,0,
-6.18736037415470e-05,0,
-6.55789212065207e-05,0,
-5.98663368449444e-05,0,
-4.57888209612833e-05,0,
-2.55731093710838e-05,0,
-2.24861881374095e-06,0,
2.07853318806032e-05,0,
4.02586193997173e-05,0,
5.35028369924935e-05,0,
5.87956088764003e-05,0,
5.56005207225534e-05,0,
4.45894602618836e-05,0,
2.75459590934095e-05,0,
7.04091641387463e-06,0,
-1.39126159537120e-05,0,
-3.23317986059288e-05,0,
-4.56716346359202e-05,0,
-5.21657505496149e-05,0,
-5.10905476088947e-05,0,
-4.27935520430586e-05,0,
-2.86551025369574e-05,0,
-1.08359462392797e-05,0,
8.03484488238891e-06,0,
2.52570909374180e-05,0,
3.84253585611134e-05,0,
4.57885204864946e-05,0,
4.64689103566040e-05,0,
4.05379565698289e-05,0,
2.90321289418762e-05,0,
1.37262626045672e-05,0,
-3.10220890926970e-06,0,
-1.90298276194142e-05,0,
-3.18232358298297e-05,0,
-3.97637484830347e-05,0,
-4.18516060488279e-05,0,
-3.79563282785123e-05,0,
-2.87993070801898e-05,0,
-1.58139683717326e-05,0,
-9.49976743450120e-07,0,
1.36420863656710e-05,0,
2.59009901824291e-05,0,
3.41633299457073e-05,0,
3.73658473589123e-05,0,
3.51931877615797e-05,0,
2.80977547774820e-05,0,
1.72224483917101e-05,0,
4.20046742233465e-06,0,
-9.06408701887606e-06,0,
-2.06923649002246e-05,0,
-2.90828347368486e-05,0,
-3.31359451164427e-05,0,
-3.23966268250675e-05,0,
-2.70959221933561e-05,0,
-1.80943136398858e-05,0,
-6.76214677523226e-06,0,
5.24023022421269e-06,0,
1.62095490763017e-05,0,
2.46109170009976e-05,0,
2.93264889052457e-05,0,
2.97738420309323e-05,0,
2.60022088381569e-05,0,
1.86305737010963e-05,0,
8.78796217550592e-06,0,
-2.09129646236498e-06,0,
-1.24474451338344e-05,0,
-2.08353515284968e-05,0,
-2.61129036063964e-05,0,
-2.75876222559125e-05,0,
-2.51340039190790e-05,0,
-1.91592260649624e-05,0,
-1.05674206232698e-05,0,
-5.93865450196149e-07,0,
9.33933293497023e-06,0,
1.78449069602784e-05,0,
2.37476864859526e-05,0,
2.62473759160689e-05,0,
2.50284818973631e-05,0,
2.02829311087336e-05,0,
1.26892020522258e-05,0,
3.30449389441610e-06,0,
-6.57522770725124e-06,0,
-1.56027678730614e-05,0,
-2.25401229688466e-05,0,
-2.64238293497054e-05,0,
-2.67099789664478e-05,0,
-2.33111331225445e-05,0,
-1.66326914627914e-05,0,
-7.49080585833224e-06,0,
2.96092814648445e-06,0,
1.34134468828814e-05,0,
2.25301966809899e-05,0,
2.91164328181606e-05,0,
3.22725033077632e-05,0,
3.14540422667223e-05,0,
2.65650987338838e-05,0,
1.79455580872860e-05,0,
6.30274030121089e-06,0,
-7.34658261655330e-06,0,
-2.18205863935090e-05,0,
-3.59001355610192e-05,0,
-4.84435613288980e-05,0,
-5.85151496627780e-05,0,
-6.54476705559472e-05,0,
-6.89103016163934e-05,0,
-6.88998918103158e-05,0,
-6.57109279522171e-05,0,
-5.98905225573303e-05,0,
-5.21524051674395e-05,0,
-4.32828770366173e-05,0,
-3.40572920044323e-05,0,
-2.51778607277206e-05,0,
-1.72026991323456e-05,0,
-1.05200964520107e-05,0,
-5.32615990675781e-06,0,
-1.65475331869630e-06,0,
5.98232788168548e-07,0,
1.65008437757307e-06,0,
5.95702306405225e-06,0};
