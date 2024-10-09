#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<LetterboxCamera.CameraRatio>
struct List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B;
// LetterboxCamera.CameraRatio[]
struct CameraRatioU5BU5D_tF1EEE7FC4683355E5BB8F0C8A0C8C7800EC6A6F9;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// MusicSave[]
struct MusicSaveU5BU5D_tF73AE434E132084E9CD5AA93B223F08F1BC4F33F;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// AdsBanner
struct AdsBanner_t9083D326C6351C1DF4A070A178324B3F9E564ECB;
// AdsRewarded
struct AdsRewarded_tCA8FE966F6EFA029910E5FD5ABE107F513E68253;
// AdsSkippable
struct AdsSkippable_t2841D5C15D45543C5061965315FD02D165595E29;
// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// LetterboxCamera.CameraRatio
struct CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92;
// CannonPowerup
struct CannonPowerup_t76EA9F458C9182C1795FF20B3BF1079D62E7D88C;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// ChangeLevelColor
struct ChangeLevelColor_t55E3419E1C39C9DA8992394D350DC79DDA0605A4;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// EnemySpawner
struct EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177;
// LetterboxCamera.ForceCameraRatio
struct ForceCameraRatio_t070B8D83C7FF341491F7D9A9D18A8B5C5B6A75CE;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GameOverScore
struct GameOverScore_tC8098886EA2641C0526D5E516E093738E1AFC26A;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// HighScore
struct HighScore_tAB53E25EE211F5AF017E511C8EC1B10EDC12DC7A;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.Advertisements.IUnityAdsListener
struct IUnityAdsListener_t5F539BD30864A79A3CF8AED5367DBB29BAF3837F;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// Lock
struct Lock_t04AFB2C23B31465C429828A7BCF4A124B371569A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MusicSave
struct MusicSave_t524FD94197D14F9A6F13A38A6364D918265113C5;
// MusicSelect
struct MusicSelect_t5CB44DBB60C89A75B9714568317167967A6626D5;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Obstacle
struct Obstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90;
// PauseMenu
struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985;
// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74;
// PlayerLives
struct PlayerLives_t110F5504A62028EFBC83787DE7D36A734C7585FC;
// PowerUps
struct PowerUps_t343A24FE99514FA23E3590B1574384BF233BBB72;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// ReportBug
struct ReportBug_tC860FF1D3E1DCB6402C8ACDF7EFE9C77505014A1;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// Rocket
struct Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SceneLoader
struct SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF;
// Score
struct Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// Settings
struct Settings_t238E6F7D65D376985A1E92357A35537B90034B36;
// ShakeCam
struct ShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// Spring
struct Spring_t66B84F1EFF0152352244B5A860119966ABDD3F2B;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.TargetJoint2D
struct TargetJoint2D_t6FC5B0F537E9374C199A6349B4E9E7510DED1C42;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// WallCollider
struct WallCollider_t915559F08FD9A2D9B00F7DF2CED37D0575477984;
// WallObstacle
struct WallObstacle_t94019BCFE843775755B87EC9C901EF89079FD3B6;
// bullet
struct bullet_t25376445B28AFDAE4CB15EC04BC43DEEC190A88F;
// cannonAnimationControl
struct cannonAnimationControl_t47678BD1EF709C105899299294158EE5D4D66FC5;
// fallingwall
struct fallingwall_t68B2AE0591728AE46536832B4F1F237A2A86F453;
// AdsBanner/<ShowBannerWhenInitialized>d__4
struct U3CShowBannerWhenInitializedU3Ed__4_t535B8EA309160E7FF59746490797F9D47ED41B84;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* AdsSkippable_t2841D5C15D45543C5061965315FD02D165595E29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MusicSelect_t5CB44DBB60C89A75B9714568317167967A6626D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerLives_t110F5504A62028EFBC83787DE7D36A734C7585FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShowBannerWhenInitializedU3Ed__4_t535B8EA309160E7FF59746490797F9D47ED41B84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WallCollider_t915559F08FD9A2D9B00F7DF2CED37D0575477984_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03E1088D1694962C15D09B8BEAF32508CDB88164;
IL2CPP_EXTERN_C String_t* _stringLiteral0831766FFAEF7124549CBCB2D566CED86A367B8C;
IL2CPP_EXTERN_C String_t* _stringLiteral0F7E8F4ED1DE66C730B1EB68E9B69A7AE2062435;
IL2CPP_EXTERN_C String_t* _stringLiteral136F1F2DB86FE0992DB1DD86F076221A3F8B21D1;
IL2CPP_EXTERN_C String_t* _stringLiteral148D8D24289182BF55A70881E9A4E943DC9596C0;
IL2CPP_EXTERN_C String_t* _stringLiteral18CA46361F03E90558C9FB7AF510C8173C532D49;
IL2CPP_EXTERN_C String_t* _stringLiteral1AF3FC229D49A5B428146FF7674959E9BF977D82;
IL2CPP_EXTERN_C String_t* _stringLiteral234F0BCEF52F66203C8DD0D2DF1F499A6F8E8D4F;
IL2CPP_EXTERN_C String_t* _stringLiteral2764B0F0877AAA6775AEF4F5E1B3A5823BA9933A;
IL2CPP_EXTERN_C String_t* _stringLiteral29041421D14BF1EF8397F2E12649E19C5EF6042A;
IL2CPP_EXTERN_C String_t* _stringLiteral298AE4749A608609CBA4D926D9C4637BD0049CA8;
IL2CPP_EXTERN_C String_t* _stringLiteral2BB68348B59801B4A19F983C3AC0422CC5364594;
IL2CPP_EXTERN_C String_t* _stringLiteral2BFD7BDAD789BF9DFCF160F179CE998FABB91367;
IL2CPP_EXTERN_C String_t* _stringLiteral2C1835984DDB35BA058A542067AA7353AC061DBE;
IL2CPP_EXTERN_C String_t* _stringLiteral2E74742F98F3C64CA64622D285E0E4A1C1A9496D;
IL2CPP_EXTERN_C String_t* _stringLiteral3613237CCE29B9C4965731C5B0EB8926CED2A786;
IL2CPP_EXTERN_C String_t* _stringLiteral368FC457C71737D8452AD3CC822CBF67FB451F99;
IL2CPP_EXTERN_C String_t* _stringLiteral36B2209BC5423BEAFF422540E6ECC500FB9C5A74;
IL2CPP_EXTERN_C String_t* _stringLiteral384449F73BA26C6C185736A224F401D6FB717258;
IL2CPP_EXTERN_C String_t* _stringLiteral3915BCEE1104CEC85AA6966E6C98DA6ED321B9DB;
IL2CPP_EXTERN_C String_t* _stringLiteral40378CD26FF02B97EE50D91E394B18AB7C493195;
IL2CPP_EXTERN_C String_t* _stringLiteral4243C7295E57FC142C3F0861DE44D7BF16E98CEE;
IL2CPP_EXTERN_C String_t* _stringLiteral4555F3FD77D5313369C9BD9D84CB0DB8B3CBC58F;
IL2CPP_EXTERN_C String_t* _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C;
IL2CPP_EXTERN_C String_t* _stringLiteral4CEA8A0063213A8412FA6B1C943CA05E38FD880E;
IL2CPP_EXTERN_C String_t* _stringLiteral4CEF19192AE55840466B0745CC680797B36C3FF1;
IL2CPP_EXTERN_C String_t* _stringLiteral52FB3608DA9FF0DA1E23537AC545BFA3D8148520;
IL2CPP_EXTERN_C String_t* _stringLiteral5A03F59B3506B5B5C857FD4A82D272532090F40A;
IL2CPP_EXTERN_C String_t* _stringLiteral6658378453C1E3DB296C049578379DE211A7AEE1;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteral72A67AE51B601BA1C44966B732E673CDA13F89B1;
IL2CPP_EXTERN_C String_t* _stringLiteral7448DA4EC902B839EDD3A227224DAD14507F22B5;
IL2CPP_EXTERN_C String_t* _stringLiteral7661EAE973262DADB9C7080D1DC39D6583468665;
IL2CPP_EXTERN_C String_t* _stringLiteral77F7E1618BA181EA462408248C8209AD26B38F6E;
IL2CPP_EXTERN_C String_t* _stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B;
IL2CPP_EXTERN_C String_t* _stringLiteral7DA74D1569F67F188CFB8486F9627D427B5A2946;
IL2CPP_EXTERN_C String_t* _stringLiteral81184A1B9FE59E20CFF879B7F5F01BF56D0537E8;
IL2CPP_EXTERN_C String_t* _stringLiteral87E8EF18D57063B7BCFB3B506BBC443D3A09E815;
IL2CPP_EXTERN_C String_t* _stringLiteral8BF67A02C467BC33D28ED3795C720DC563A77D0F;
IL2CPP_EXTERN_C String_t* _stringLiteral8CA03637704BFC570C9C0F82EAEC1986D2107FF8;
IL2CPP_EXTERN_C String_t* _stringLiteral924675148D5AE560E246AD9D7B8916A3DE3F6B30;
IL2CPP_EXTERN_C String_t* _stringLiteral9A323557E2A51BD2ED1A6B3E0F46F56147C3F27B;
IL2CPP_EXTERN_C String_t* _stringLiteral9CE7BC91D52699636D16A6A74E22611197836E68;
IL2CPP_EXTERN_C String_t* _stringLiteral9CEB4D81FE1382FF120AEE05E403D6F7BCE690D2;
IL2CPP_EXTERN_C String_t* _stringLiteral9EA00F14D937DCE01A7229E5DECB29FCAD96DD5D;
IL2CPP_EXTERN_C String_t* _stringLiteralA3D91FE274F947C68CC9F45E1C056E4FECFF5137;
IL2CPP_EXTERN_C String_t* _stringLiteralA578D2E9F8E278D4CC2C8AD83D644BB48F4118C4;
IL2CPP_EXTERN_C String_t* _stringLiteralB63B9CDE4143F0AF8ADE9E94CF6652AAF59FA026;
IL2CPP_EXTERN_C String_t* _stringLiteralB9DAD303C7A46DA1C0BFCAD200370C73E61542DD;
IL2CPP_EXTERN_C String_t* _stringLiteralBE8D90E7BE7E1D29A83A20EE1DCDA82C06EC6D52;
IL2CPP_EXTERN_C String_t* _stringLiteralC055573659775BB0D32F25E24AE34CB9D6171FC8;
IL2CPP_EXTERN_C String_t* _stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD01C78F578F0C89B9C96DB7A36A8FE8C0EA2C8AA;
IL2CPP_EXTERN_C String_t* _stringLiteralD11B4EB8AA949F9CA7F74E0E4114726DAA98A4C9;
IL2CPP_EXTERN_C String_t* _stringLiteralD5815EEA7C55C374C0C12678A09BA44738855EC5;
IL2CPP_EXTERN_C String_t* _stringLiteralD9F8173324BAA5E36B7458EC45ED19E3922D0CC8;
IL2CPP_EXTERN_C String_t* _stringLiteralDFC096353AA07572BB01163C70B6B66EFC4FB412;
IL2CPP_EXTERN_C String_t* _stringLiteralED35FF3F063D29A026AE09F18392D9C7537823F2;
IL2CPP_EXTERN_C String_t* _stringLiteralF8B717C4435F4BA0C4B3D3DFD8FDAC4536701A92;
IL2CPP_EXTERN_C String_t* _stringLiteralFB7CDD44EBE64CAED60D4E61080F2C28082BB4C7;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTargetJoint2D_t6FC5B0F537E9374C199A6349B4E9E7510DED1C42_mA9016EB114E003C226E59999450251E92815E2C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC6AE1576E51C068544893E904EE01F7E9121FEF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mC6C744881DAE323F77F4EBE036571AF7DE255F88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mC718531F37E170515D9959EE450D39E18E4D0F16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF244F62294D24B1672E6843C0914602F5B969FD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m70DC0D14F9E2CE143686FFE1482CFEC9F39E46C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m4C5A5DE350E20C48F9EF9A2A633A3FEC96A5DCA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisObstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90_m22249EBDF13D24364779EC36DDBC4D390804AC7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9_mFC5A41B6AC5D139809E59B725C4C68F6046725FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mE5AD3DBF2688F03D7BDBFD66FAF03B0CD77D2117_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisMusicSave_t524FD94197D14F9A6F13A38A6364D918265113C5_m6E9769CC967ABD5A589517A02CAE9AF5F58E36E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowBannerWhenInitializedU3Ed__4_System_Collections_IEnumerator_Reset_mFA1F71207ECB82C831AB03653543E9B43690431C_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B;
struct CameraRatioU5BU5D_tF1EEE7FC4683355E5BB8F0C8A0C8C7800EC6A6F9;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MusicSaveU5BU5D_tF73AE434E132084E9CD5AA93B223F08F1BC4F33F;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<LetterboxCamera.CameraRatio>
struct List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CameraRatioU5BU5D_tF1EEE7FC4683355E5BB8F0C8A0C8C7800EC6A6F9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CameraRatioU5BU5D_tF1EEE7FC4683355E5BB8F0C8A0C8C7800EC6A6F9* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// AdsBanner/<ShowBannerWhenInitialized>d__4
struct U3CShowBannerWhenInitializedU3Ed__4_t535B8EA309160E7FF59746490797F9D47ED41B84  : public RuntimeObject
{
	// System.Int32 AdsBanner/<ShowBannerWhenInitialized>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AdsBanner/<ShowBannerWhenInitialized>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// AdsBanner AdsBanner/<ShowBannerWhenInitialized>d__4::<>4__this
	AdsBanner_t9083D326C6351C1DF4A070A178324B3F9E564ECB* ___U3CU3E4__this_2;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Advertisements.BannerPosition
struct BannerPosition_t846E133F4901E2921000660CA6E16706690F6DC1 
{
	// System.Int32 UnityEngine.Advertisements.BannerPosition::value__
	int32_t ___value___2;
};

// UnityEngine.CameraClearFlags
struct CameraClearFlags_t91B921013F611457A09B92EF9C6B218CECF67202 
{
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___2;
};

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// TMPro.ColorMode
struct ColorMode_tA7A815AAB9F175EFBA0AE0814E55728432A880BF 
{
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.FontStyles
struct FontStyles_t9E611EE6BBE6E192A73EAFF7872596517C527FF5 
{
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;
};

// TMPro.FontWeight
struct FontWeight_tA2585C0A73B70D31CE71E7843149098A5E16BC80 
{
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// TMPro.HorizontalAlignmentOptions
struct HorizontalAlignmentOptions_tCC21260E9FBEC656BA7783643ED5F44AFF7955A1 
{
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;
};

// UnityEngine.KeyCode
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Advertisements.ShowResult
struct ShowResult_tBD5B612C9805B548F6BD180E7558B8409B8F4D7D 
{
	// System.Int32 UnityEngine.Advertisements.ShowResult::value__
	int32_t ___value___2;
};

// TMPro.TMP_TextElementType
struct TMP_TextElementType_t51EE6662436732F22C6B599F5757B7F35F706342 
{
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;
};

// TMPro.TextAlignmentOptions
struct TextAlignmentOptions_tF3FA9020F7E2AF1A48660044540254009A22EF01 
{
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;
};

// TMPro.TextOverflowModes
struct TextOverflowModes_t7DCCD00C16E3223CE50CDDCC53F785C0405BE203 
{
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;
};

// TMPro.TextRenderFlags
struct TextRenderFlags_tE023FF398ECFE57A1DBC6FD2A1AF4AE9620F6E1C 
{
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;
};

// TMPro.TextureMappingOptions
struct TextureMappingOptions_t0E1A47C529DEB45A875486256E7026E97C940DAE 
{
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;
};

// UnityEngine.TouchPhase
struct TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E 
{
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;
};

// UnityEngine.TouchType
struct TouchType_t84F82C73BC1A6012141735AD84DA67AA7F7AB43F 
{
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.VertexSortingOrder
struct VertexSortingOrder_t95B7AEDBDCAACC3459B6476E5CCC594A6422FFA8 
{
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;
};

// TMPro.VerticalAlignmentOptions
struct VerticalAlignmentOptions_tCEF70AF60282B71AEEE14D51253CE6A61E72D855 
{
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;
};

// LetterboxCamera.CameraRatio/CameraAnchor
struct CameraAnchor_t7CF0B5273BC8112D40065C6591AF44CAE8580A22 
{
	// System.Int32 LetterboxCamera.CameraRatio/CameraAnchor::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Navigation/Mode
struct Mode_t2D49D0E10E2FDA0026278C2400C16033888D0542 
{
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Selectable/Transition
struct Transition_tF856A77C9FAC6D26EA3CA158CF68B739D35397B3 
{
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Slider/Direction
struct Direction_t4C81D17BB6C089A0EC1C4934525B86E75E693EFA 
{
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;
};

// TMPro.TMP_Text/TextInputSources
struct TextInputSources_t41387D6C9CB16E60390F47A15AEB8185BE966D26 
{
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// LetterboxCamera.CameraRatio
struct CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92  : public RuntimeObject
{
	// UnityEngine.Camera LetterboxCamera.CameraRatio::camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera_0;
	// LetterboxCamera.CameraRatio/CameraAnchor LetterboxCamera.CameraRatio::anchor
	int32_t ___anchor_1;
	// UnityEngine.Vector2 LetterboxCamera.CameraRatio::vectorAnchor
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vectorAnchor_2;
	// UnityEngine.Rect LetterboxCamera.CameraRatio::originViewPort
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___originViewPort_3;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Joint2D
struct Joint2D_tFA088656425446CDA98555EC8A0E5FE25945F843  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// AdsBanner
struct AdsBanner_t9083D326C6351C1DF4A070A178324B3F9E564ECB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String AdsBanner::gameId
	String_t* ___gameId_4;
	// System.String AdsBanner::mySurfacingId
	String_t* ___mySurfacingId_5;
	// System.Boolean AdsBanner::testMode
	bool ___testMode_6;
};

// AdsRewarded
struct AdsRewarded_tCA8FE966F6EFA029910E5FD5ABE107F513E68253  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String AdsRewarded::gameId
	String_t* ___gameId_4;
	// System.String AdsRewarded::mySurfacingId
	String_t* ___mySurfacingId_5;
	// System.Boolean AdsRewarded::testMode
	bool ___testMode_6;
};

// AdsSkippable
struct AdsSkippable_t2841D5C15D45543C5061965315FD02D165595E29  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String AdsSkippable::gameId
	String_t* ___gameId_5;
	// System.String AdsSkippable::mySurfacingId
	String_t* ___mySurfacingId_6;
	// System.Boolean AdsSkippable::testMode
	bool ___testMode_7;
};

struct AdsSkippable_t2841D5C15D45543C5061965315FD02D165595E29_StaticFields
{
	// System.Boolean AdsSkippable::isAdReady
	bool ___isAdReady_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// CannonPowerup
struct CannonPowerup_t76EA9F458C9182C1795FF20B3BF1079D62E7D88C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CannonPowerup::bullet
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bullet_4;
	// System.Single CannonPowerup::objectRotation
	float ___objectRotation_5;
	// System.Single CannonPowerup::cannonRotation
	float ___cannonRotation_6;
	// System.Single CannonPowerup::rotationZ
	float ___rotationZ_7;
	// UnityEngine.Vector3 CannonPowerup::pos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos_8;
	// System.Single CannonPowerup::nextShot
	float ___nextShot_9;
	// System.Single CannonPowerup::fireRate
	float ___fireRate_10;
};

// ChangeLevelColor
struct ChangeLevelColor_t55E3419E1C39C9DA8992394D350DC79DDA0605A4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Color ChangeLevelColor::grey
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___grey_4;
	// UnityEngine.Color ChangeLevelColor::greycheck
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___greycheck_5;
	// UnityEngine.Color ChangeLevelColor::black
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___black_6;
	// UnityEngine.Color ChangeLevelColor::white
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___white_7;
	// UnityEngine.Color ChangeLevelColor::clear
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___clear_8;
	// System.Single ChangeLevelColor::fadeTime
	float ___fadeTime_9;
	// System.Single ChangeLevelColor::fadeStart
	float ___fadeStart_10;
	// System.Single ChangeLevelColor::nextColorUpdate
	float ___nextColorUpdate_11;
	// System.Single ChangeLevelColor::updateSpeed
	float ___updateSpeed_12;
	// UnityEngine.Camera ChangeLevelColor::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_13;
	// System.Boolean ChangeLevelColor::isBlack
	bool ___isBlack_14;
};

// EnemySpawner
struct EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject EnemySpawner::triangeObstacle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___triangeObstacle_4;
	// UnityEngine.GameObject EnemySpawner::wallObstacleLeft
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___wallObstacleLeft_5;
	// UnityEngine.GameObject EnemySpawner::wallObstacleCenter
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___wallObstacleCenter_6;
	// UnityEngine.GameObject EnemySpawner::wallObstacleRight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___wallObstacleRight_7;
	// UnityEngine.GameObject EnemySpawner::triangle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___triangle_8;
	// UnityEngine.Animation EnemySpawner::leftWall
	Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* ___leftWall_9;
	// UnityEngine.Animation EnemySpawner::rightWall
	Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* ___rightWall_10;
	// System.Single EnemySpawner::nextSpawn
	float ___nextSpawn_11;
	// System.Single EnemySpawner::spawnRate
	float ___spawnRate_12;
	// System.Single EnemySpawner::minScreenWidth
	float ___minScreenWidth_13;
	// System.Single EnemySpawner::maxScreenWidth
	float ___maxScreenWidth_14;
	// System.Single EnemySpawner::maxScreenHight
	float ___maxScreenHight_15;
	// UnityEngine.Vector2 EnemySpawner::randomObjectVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___randomObjectVector_16;
	// UnityEngine.Animation EnemySpawner::animation
	Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* ___animation_17;
	// System.Single EnemySpawner::randomScale
	float ___randomScale_18;
};

// LetterboxCamera.ForceCameraRatio
struct ForceCameraRatio_t070B8D83C7FF341491F7D9A9D18A8B5C5B6A75CE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2 LetterboxCamera.ForceCameraRatio::ratio
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___ratio_4;
	// System.Boolean LetterboxCamera.ForceCameraRatio::forceRatioOnAwake
	bool ___forceRatioOnAwake_5;
	// System.Boolean LetterboxCamera.ForceCameraRatio::listenForWindowChanges
	bool ___listenForWindowChanges_6;
	// System.Boolean LetterboxCamera.ForceCameraRatio::createCameraForLetterBoxRendering
	bool ___createCameraForLetterBoxRendering_7;
	// System.Boolean LetterboxCamera.ForceCameraRatio::findCamerasAutomatically
	bool ___findCamerasAutomatically_8;
	// UnityEngine.Color LetterboxCamera.ForceCameraRatio::letterBoxCameraColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___letterBoxCameraColor_9;
	// System.Collections.Generic.List`1<LetterboxCamera.CameraRatio> LetterboxCamera.ForceCameraRatio::cameras
	List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* ___cameras_10;
	// UnityEngine.Camera LetterboxCamera.ForceCameraRatio::letterBoxCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___letterBoxCamera_11;
};

// GameOverScore
struct GameOverScore_tC8098886EA2641C0526D5E516E093738E1AFC26A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI GameOverScore::gameOverScore
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___gameOverScore_4;
};

// HighScore
struct HighScore_tAB53E25EE211F5AF017E511C8EC1B10EDC12DC7A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI HighScore::currentHighScore
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___currentHighScore_4;
};

// Lock
struct Lock_t04AFB2C23B31465C429828A7BCF4A124B371569A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Lock::lockImage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lockImage_4;
	// UnityEngine.UI.Button Lock::expertButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___expertButton_5;
	// UnityEngine.GameObject Lock::lockButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lockButton_6;
	// UnityEngine.Color Lock::InfoClearColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___InfoClearColor_7;
	// System.Boolean Lock::lockInfoStart
	bool ___lockInfoStart_8;
};

// MusicSave
struct MusicSave_t524FD94197D14F9A6F13A38A6364D918265113C5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MusicSave::backroundMusic
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___backroundMusic_4;
	// MusicSave MusicSave::musicSave
	MusicSave_t524FD94197D14F9A6F13A38A6364D918265113C5* ___musicSave_5;
	// UnityEngine.AudioSource MusicSave::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_6;
};

// MusicSelect
struct MusicSelect_t5CB44DBB60C89A75B9714568317167967A6626D5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip MusicSelect::normalMusic
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___normalMusic_4;
	// UnityEngine.AudioClip MusicSelect::gameOverStartMusic
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___gameOverStartMusic_5;
	// UnityEngine.AudioClip MusicSelect::gameOverMusic
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___gameOverMusic_6;
	// UnityEngine.AudioSource MusicSelect::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_7;
	// System.Int32 MusicSelect::audioIndex
	int32_t ___audioIndex_8;
};

struct MusicSelect_t5CB44DBB60C89A75B9714568317167967A6626D5_StaticFields
{
	// System.Int32 MusicSelect::startGameOverAudioIndex
	int32_t ___startGameOverAudioIndex_9;
};

// Obstacle
struct Obstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Obstacle::obstacleSpeed
	float ___obstacleSpeed_4;
	// UnityEngine.GameObject Obstacle::particle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___particle_5;
	// UnityEngine.AudioSource Obstacle::source
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___source_6;
	// UnityEngine.AudioClip Obstacle::triangleExplosion
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___triangleExplosion_7;
	// System.Boolean Obstacle::myCollision
	bool ___myCollision_8;
	// System.Int32 Obstacle::index
	int32_t ___index_9;
	// UnityEngine.Vector2 Obstacle::randomObjectVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___randomObjectVector_10;
	// UnityEngine.Vector2 Obstacle::sparkpos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___sparkpos_11;
	// System.Single Obstacle::randomScale
	float ___randomScale_12;
	// System.Single Obstacle::horizontalVelocity
	float ___horizontalVelocity_13;
	// ShakeCam Obstacle::shakeCam
	ShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9* ___shakeCam_14;
	// UnityEngine.Collider2D Obstacle::collider2D
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D_15;
	// UnityEngine.SpriteRenderer Obstacle::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_16;
};

// PauseMenu
struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PauseMenu::pauseMenuUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pauseMenuUI_4;
	// System.Boolean PauseMenu::isPaused
	bool ___isPaused_5;
	// UnityEngine.UI.Image PauseMenu::settingImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___settingImage_6;
	// UnityEngine.UI.Image PauseMenu::restartImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___restartImage_7;
};

// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Player::minScreenWidth
	float ___minScreenWidth_4;
	// System.Single Player::maxScreenWidth
	float ___maxScreenWidth_5;
	// System.Single Player::blockMoveSpeed
	float ___blockMoveSpeed_6;
	// UnityEngine.GameObject Player::rocketfolder
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rocketfolder_7;
	// UnityEngine.GameObject Player::cannon
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cannon_8;
	// UnityEngine.GameObject Player::rocket
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rocket_9;
	// UnityEngine.GameObject Player::smoke
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___smoke_10;
	// TMPro.TextMeshProUGUI Player::tapToStartText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___tapToStartText_11;
	// UnityEngine.AudioClip Player::powerUpSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___powerUpSound_12;
	// UnityEngine.AudioClip Player::rocketSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___rocketSound_13;
	// UnityEngine.AudioClip Player::hitSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___hitSound_14;
	// System.Int32[] Player::smokeZchoices
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___smokeZchoices_21;
	// UnityEngine.GameObject Player::smokeVFX
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___smokeVFX_22;
	// UnityEngine.Animator Player::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_23;
	// ShakeCam Player::shakeCam
	ShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9* ___shakeCam_24;
	// UnityEngine.Renderer Player::renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderer_25;
	// UnityEngine.Renderer Player::rocketRend
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___rocketRend_26;
	// UnityEngine.SpriteRenderer Player::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_27;
	// UnityEngine.Collider2D Player::collider2D
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D_28;
	// UnityEngine.AudioSource Player::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_29;
	// UnityEngine.Vector2 Player::touchPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___touchPos_30;
	// UnityEngine.Vector2 Player::targetPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___targetPos_31;
};

struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields
{
	// System.Int32 Player::collisionIndex
	int32_t ___collisionIndex_15;
	// System.Boolean Player::gameStart
	bool ___gameStart_16;
	// System.Boolean Player::springCollision
	bool ___springCollision_17;
	// System.Boolean Player::rocketCollision
	bool ___rocketCollision_18;
	// System.Boolean Player::playSpringFlash
	bool ___playSpringFlash_19;
	// System.Boolean Player::playRocketFlash
	bool ___playRocketFlash_20;
};

// PlayerLives
struct PlayerLives_t110F5504A62028EFBC83787DE7D36A734C7585FC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] PlayerLives::heartGameObjects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___heartGameObjects_4;
	// UnityEngine.Animator PlayerLives::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_5;
};

struct PlayerLives_t110F5504A62028EFBC83787DE7D36A734C7585FC_StaticFields
{
	// System.Int32 PlayerLives::addCount
	int32_t ___addCount_6;
};

// PowerUps
struct PowerUps_t343A24FE99514FA23E3590B1574384BF233BBB72  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PowerUps::springPowerUp
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___springPowerUp_4;
	// UnityEngine.GameObject PowerUps::rocketPowerUp
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rocketPowerUp_5;
	// System.Single PowerUps::minScreenWidth
	float ___minScreenWidth_6;
	// System.Single PowerUps::maxScreenWidth
	float ___maxScreenWidth_7;
	// System.Single PowerUps::maxScreenHight
	float ___maxScreenHight_8;
	// System.Boolean PowerUps::startSpawn
	bool ___startSpawn_9;
	// System.Int32 PowerUps::randomTiming
	int32_t ___randomTiming_10;
	// UnityEngine.Vector2 PowerUps::randomObjectVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___randomObjectVector_11;
	// UnityEngine.GameObject PowerUps::spring
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spring_12;
	// UnityEngine.GameObject PowerUps::rocket
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rocket_13;
};

// ReportBug
struct ReportBug_tC860FF1D3E1DCB6402C8ACDF7EFE9C77505014A1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Rocket
struct Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Rocket::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_4;
	// UnityEngine.GameObject Rocket::rocketBooster
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rocketBooster_5;
	// UnityEngine.Rigidbody2D Rocket::rigidbody2D
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rigidbody2D_6;
	// UnityEngine.Animator Rocket::rocketAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___rocketAnimator_7;
	// UnityEngine.GameObject Rocket::smokeVFX
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___smokeVFX_8;
	// UnityEngine.Vector2 Rocket::rocketVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rocketVector_9;
};

// SceneLoader
struct SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Score
struct Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI Score::scoreText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___scoreText_4;
	// TMPro.TextMeshProUGUI Score::gameOverscoreText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___gameOverscoreText_5;
	// UnityEngine.GameObject Score::newHighScore
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___newHighScore_6;
	// UnityEngine.UI.Button Score::MainMenuButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___MainMenuButton_7;
	// UnityEngine.UI.Button Score::RetryButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___RetryButton_8;
	// Obstacle Score::obstacle
	Obstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90* ___obstacle_13;
};

struct Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields
{
	// System.Int32 Score::currentScore
	int32_t ___currentScore_9;
	// System.Boolean Score::AddHighScoreText
	bool ___AddHighScoreText_10;
	// System.Boolean Score::springScoreCollision
	bool ___springScoreCollision_11;
	// System.Boolean Score::rocketScoreCollision
	bool ___rocketScoreCollision_12;
};

// Settings
struct Settings_t238E6F7D65D376985A1E92357A35537B90034B36  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI Settings::musicText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___musicText_4;
	// TMPro.TextMeshProUGUI Settings::sfxText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___sfxText_5;
	// UnityEngine.UI.Slider Settings::musicSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___musicSlider_6;
	// UnityEngine.UI.Slider Settings::sfxSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sfxSlider_7;
};

// ShakeCam
struct ShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator ShakeCam::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_4;
};

// Spring
struct Spring_t66B84F1EFF0152352244B5A860119966ABDD3F2B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Spring::player1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player1_4;
	// UnityEngine.GameObject Spring::springMetal
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___springMetal_5;
	// UnityEngine.TargetJoint2D Spring::targetJoint
	TargetJoint2D_t6FC5B0F537E9374C199A6349B4E9E7510DED1C42* ___targetJoint_6;
	// UnityEngine.Rigidbody2D Spring::rigidbody2D
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rigidbody2D_7;
	// UnityEngine.Animator Spring::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_8;
	// UnityEngine.Vector2 Spring::springVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___springVector_9;
	// System.Single Spring::jointHight
	float ___jointHight_10;
};

// UnityEngine.TargetJoint2D
struct TargetJoint2D_t6FC5B0F537E9374C199A6349B4E9E7510DED1C42  : public Joint2D_tFA088656425446CDA98555EC8A0E5FE25945F843
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// WallCollider
struct WallCollider_t915559F08FD9A2D9B00F7DF2CED37D0575477984  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct WallCollider_t915559F08FD9A2D9B00F7DF2CED37D0575477984_StaticFields
{
	// System.Boolean WallCollider::detectedTriangle
	bool ___detectedTriangle_4;
};

// WallObstacle
struct WallObstacle_t94019BCFE843775755B87EC9C901EF89079FD3B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// bullet
struct bullet_t25376445B28AFDAE4CB15EC04BC43DEEC190A88F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single bullet::speed
	float ___speed_4;
	// UnityEngine.Rigidbody2D bullet::rigidbody2D
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rigidbody2D_5;
};

// cannonAnimationControl
struct cannonAnimationControl_t47678BD1EF709C105899299294158EE5D4D66FC5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator cannonAnimationControl::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_4;
};

// fallingwall
struct fallingwall_t68B2AE0591728AE46536832B4F1F237A2A86F453  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// MusicSave[]
struct MusicSaveU5BU5D_tF73AE434E132084E9CD5AA93B223F08F1BC4F33F  : public RuntimeArray
{
	ALIGN_FIELD (8) MusicSave_t524FD94197D14F9A6F13A38A6364D918265113C5* m_Items[1];

	inline MusicSave_t524FD94197D14F9A6F13A38A6364D918265113C5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MusicSave_t524FD94197D14F9A6F13A38A6364D918265113C5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MusicSave_t524FD94197D14F9A6F13A38A6364D918265113C5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MusicSave_t524FD94197D14F9A6F13A38A6364D918265113C5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MusicSave_t524FD94197D14F9A6F13A38A6364D918265113C5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MusicSave_t524FD94197D14F9A6F13A38A6364D918265113C5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3  : public RuntimeArray
{
	ALIGN_FIELD (8) Touch_t03E51455ED508492B3F278903A0114FA0E87B417 m_Items[1];

	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Camera[]
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B  : public RuntimeArray
{
	ALIGN_FIELD (8) Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* m_Items[1];

	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// LetterboxCamera.CameraRatio[]
struct CameraRatioU5BU5D_tF1EEE7FC4683355E5BB8F0C8A0C8C7800EC6A6F9  : public RuntimeArray
{
	ALIGN_FIELD (8) CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* m_Items[1];

	inline CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_mD5D6BA4B022CEF973971F556F28A0F33675269C7 (String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator AdsBanner::ShowBannerWhenInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AdsBanner_ShowBannerWhenInitialized_mC5AAF8D9978B12F6A06E9204DFD9FAE21AA6F1F7 (AdsBanner_t9083D326C6351C1DF4A070A178324B3F9E564ECB* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement/Banner::SetPosition(UnityEngine.Advertisements.BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_SetPosition_m6233902AF561E8F5897A8496DCC04991D4D2BA92 (int32_t ___position0, const RuntimeMethod* method) ;
// System.Void AdsBanner/<ShowBannerWhenInitialized>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowBannerWhenInitializedU3Ed__4__ctor_m0EC989E9E583542C05BB67F95ED5BBD85B9B56EB (U3CShowBannerWhenInitializedU3Ed__4_t535B8EA309160E7FF59746490797F9D47ED41B84* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_get_isInitialized_m724C65B12673E38497C52342D563D7CAAA4DB2CA (const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement/Banner::Show(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Show_mCD00FA2F769633A180BC52D8C982A4A79B4452A6 (String_t* ___placementId0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement/Banner::Hide(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Hide_mAB3CD60C18B7E8070716C42BA694DBD402C1B2F4 (bool ___destroy0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::AddListener(UnityEngine.Advertisements.IUnityAdsListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_AddListener_m7E98FB2C85D0D95A81D9F2CB6664D6D4D33D3836 (RuntimeObject* ___listener0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_IsReady_mA3A5566ECE7B42198BF05E281E2E6D49A16B1B1D (String_t* ___placementId0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_m083DB7A2C2DF0DF1EBCA5D8A6D52358AE4247C50 (String_t* ___placementId0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isShowing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_get_isShowing_mC0DBC421989DFDEE0C779023E62AB51E93BA6AE9 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_IsReady_m3875E34990FADD7C1EDF393184ECD35B14D07A58 (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::RotateTowards(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_RotateTowards_mD7C332050D876CB28A704B9005476BE06823F85F_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___from0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___to1, float ___maxDegreesDelta2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void CannonPowerup::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CannonPowerup_Shoot_m573266649D92DD04B008BFB6DF1BE3E167621F80 (CannonPowerup_t76EA9F458C9182C1795FF20B3BF1079D62E7D88C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Camera::get_backgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Camera_get_backgroundColor_m1577A81D1E6A91D7934CECB8A284AA2D4704D96F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animation>()
inline Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void EnemySpawner::SpawnTriangle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_SpawnTriangle_m5377B2F207679558EDED6C0F66677587F3D55AF8 (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 EnemySpawner::RandomVector2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 EnemySpawner_RandomVector2_m53A59EAC6111DF3ECA3C7DB90F46FEC911B7296B (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody2D::set_angularVelocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_angularVelocity_mFC06FB14E69DD4847F27E614900D22317AA5A390 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Collider2D>()
inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Rigidbody2D::get_gravityScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rigidbody2D_get_gravityScale_mCFA8E159F51B876E16EEF634A63415F7051AFF44 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_gravityScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C (float ___value0, const RuntimeMethod* method) ;
// System.Void Lock::ExpertUnlocker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lock_ExpertUnlocker_m2B0DAEC47D6B22026B1ECFB29F335D48F7A45DD2 (Lock_t04AFB2C23B31465C429828A7BCF4A124B371569A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<MusicSave>()
inline MusicSaveU5BU5D_tF73AE434E132084E9CD5AA93B223F08F1BC4F33F* Object_FindObjectsOfType_TisMusicSave_t524FD94197D14F9A6F13A38A6364D918265113C5_m6E9769CC967ABD5A589517A02CAE9AF5F58E36E9 (const RuntimeMethod* method)
{
	return ((  MusicSaveU5BU5D_tF73AE434E132084E9CD5AA93B223F08F1BC4F33F* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared)(method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293 (String_t* ___key0, float ___defaultValue1, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetSceneByName_m112B7AAE231E82C8800F04640A692272C9522806 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SceneManagement.Scene::op_Equality(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_op_Equality_m299018477251CD19CF480FB98EE3C79F9DBE3482 (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___lhs0, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___volumeScale1, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<ShakeCam>()
inline ShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9* Object_FindObjectOfType_TisShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9_mFC5A41B6AC5D139809E59B725C4C68F6046725FD (const RuntimeMethod* method)
{
	return ((  ShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ShakeCam::CameraShake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeCam_CameraShake_m48BDB5DA15CF69EFC5D85D96DEDFB8C838604C4B (ShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_mEEF6FE993B8F7A61829F0E9538858711D06945F7 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, float ___volume2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void PauseMenu::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Resume_mA45D6E4F27172EF775FC2D3F694BE90882DBE831 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) ;
// System.Void PauseMenu::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_PauseGame_m5F9F76E8D0822B61CEE60DD44562CA95076BAEEF (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) ;
// System.Void Player::ResetValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_ResetValues_m9D1C1AD77F6EE2F796B564A088DBDEC2FCB6047B (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void Player::GetComponentsAndObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_GetComponentsAndObjects_m3C8F8FC1A3E72C90D13958F3D9A88FD838385723 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Player::PlayerMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_PlayerMovement_mA1FFC4A9E1D6AF7AAB3D23F2EFA107D48757C2D2 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Player::StartGameOnSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_StartGameOnSpace_mD7B089C1F0F101D881C87C5B63FEFE8BE3E81984 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF (const RuntimeMethod* method) ;
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* Input_get_touches_m884B92DD9A389F7985AB275A9717AC629C258B6B (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::MoveTowards(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_MoveTowards_mB3BF0AFF0BE0D3E6264CD1564AE14DE94A909878_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___current0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// UnityEngine.Collider2D UnityEngine.Collision2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37 (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// System.Void Player::SpringOnCollision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SpringOnCollision_mEC93B7C0252208EDD9ED76BE75809E19A9BA3FE5 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void Player::RocketOnCollision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_RocketOnCollision_mF0E43D100C805DCDC7A38A2BE7BF255BA4471ABB (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void Player::HitActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_HitActions_m67C8C95BB97DEF777D3115E3CC4C43B3E4B30D33 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m99F3D47F45286D6DA73ADB2662B63451A632D413 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_fixedDeltaTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_fixedDeltaTime_mB9CCA021570BB2E27F6FF47C36D46C6D5A246D1B (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Void PlayerLives::PlayerHearts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLives_PlayerHearts_mDF0031EFB5F423FA1A30EC1548B952EE3C188721 (PlayerLives_t110F5504A62028EFBC83787DE7D36A734C7585FC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method) ;
// UnityEngine.Vector2 PowerUps::RandomVector2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PowerUps_RandomVector2_mA4452A0747DB57C10038AE1180758EAEE32FB553 (PowerUps_t343A24FE99514FA23E3590B1574384BF233BBB72* __this, const RuntimeMethod* method) ;
// System.Void PowerUps::SpringDestoyOnCollision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUps_SpringDestoyOnCollision_m3CBC515066AE35EDDC4ABC02F40C9EB656DA12AA (PowerUps_t343A24FE99514FA23E3590B1574384BF233BBB72* __this, const RuntimeMethod* method) ;
// System.Void PowerUps::RocketDestoyOnCollision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUps_RocketDestoyOnCollision_m7E3307EA9A4E798829BA074A8143113B35061241 (PowerUps_t343A24FE99514FA23E3590B1574384BF233BBB72* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564 (String_t* ___url0, const RuntimeMethod* method) ;
// System.Void Rocket::StartScript()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rocket_StartScript_m90AA9C04B7531FE48C3CE2E9098EF9B726E775FF (Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* __this, const RuntimeMethod* method) ;
// System.Void Rocket::GrabVector2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rocket_GrabVector2_m2D4E860F0B069588028EDC599D1DAB9C55F4F93C (Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void Score::VariableDef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_VariableDef_m84B2617D6FAD8C07B1C6DDB25BDCA0DF363D52C7 (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Obstacle>()
inline Obstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90* Object_FindObjectOfType_TisObstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90_m22249EBDF13D24364779EC36DDBC4D390804AC7E (const RuntimeMethod* method)
{
	return ((  Obstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void Score::HighScoreSetUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_HighScoreSetUp_m1A4513F27E78A8897C0D0616CFE6B7A0F222E35F (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) ;
// System.Void Score::FontChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_FontChange_m3508EC0A74EBD5C13F692BCEEB2DBD763E88A0FE (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_fontSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF (String_t* ___key0, float ___value1, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Spring::InitializeScript()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spring_InitializeScript_mFBC6F3D4D04D10C7BC12964A9F44B1B5B6C24FA5 (Spring_t66B84F1EFF0152352244B5A860119966ABDD3F2B* __this, const RuntimeMethod* method) ;
// System.Void Spring::GetVector2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spring_GetVector2_mC74B06AB978C64C332423BA7909B9E9A3C01F865 (Spring_t66B84F1EFF0152352244B5A860119966ABDD3F2B* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.TargetJoint2D>()
inline TargetJoint2D_t6FC5B0F537E9374C199A6349B4E9E7510DED1C42* GameObject_GetComponent_TisTargetJoint2D_t6FC5B0F537E9374C199A6349B4E9E7510DED1C42_mA9016EB114E003C226E59999450251E92815E2C6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TargetJoint2D_t6FC5B0F537E9374C199A6349B4E9E7510DED1C42* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.TargetJoint2D::set_target(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetJoint2D_set_target_m1E3C256EA0BC2E7F84DF06D78B27CEC47427ED37 (TargetJoint2D_t6FC5B0F537E9374C199A6349B4E9E7510DED1C42* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Camera::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Camera_get_rect_m848C23B32814D1351E43F0A0110DB8ECA19C6772 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void LetterboxCamera.CameraRatio::SetAnchorBasedOnEnum(LetterboxCamera.CameraRatio/CameraAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRatio_SetAnchorBasedOnEnum_mEE047CA5F68639AC68873DBC5BC357D245AE2A60 (CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* __this, int32_t ____anchor0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method) ;
// System.Void LetterboxCamera.ForceCameraRatio::FindAllCamerasInScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForceCameraRatio_FindAllCamerasInScene_m5058D0138186E0EAAF4A6A707AD244D33B7805C9 (ForceCameraRatio_t070B8D83C7FF341491F7D9A9D18A8B5C5B6A75CE* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<LetterboxCamera.CameraRatio>::get_Count()
inline int32_t List_1_get_Count_m70DC0D14F9E2CE143686FFE1482CFEC9F39E46C8_inline (List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<LetterboxCamera.CameraRatio>::.ctor()
inline void List_1__ctor_mF244F62294D24B1672E6843C0914602F5B969FD4 (List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void LetterboxCamera.ForceCameraRatio::ValidateCameraArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForceCameraRatio_ValidateCameraArray_m72E5BF4EB12E6D051F811BD9730C08C9C018EE13 (ForceCameraRatio_t070B8D83C7FF341491F7D9A9D18A8B5C5B6A75CE* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<LetterboxCamera.CameraRatio>::get_Item(System.Int32)
inline CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* List_1_get_Item_m4C5A5DE350E20C48F9EF9A2A633A3FEC96A5DCA2 (List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* (*) (List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void LetterboxCamera.CameraRatio::ResetOriginViewport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRatio_ResetOriginViewport_m564D7574913E50287A43B03FF57AF1EC41471C09 (CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_depth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_depth_m595FA2A4FEBC90E730810BBFB55E4A2C2134066F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_useOcclusionCulling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_useOcclusionCulling_mD3036B0CBB5E6A1BF33810AB8FDEE3CD1A4D7C04 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_allowHDR(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_allowHDR_m44211153DAF6DF9A51142EC7760A53777C1F3315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_depth_mDF67FFF8ED61750467DFC4C6D8F236850AD1BB1D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void LetterboxCamera.ForceCameraRatio::CalculateAndSetAllCameraRatios()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForceCameraRatio_CalculateAndSetAllCameraRatios_mD7874122B82829E764DCC9569D6EC48FE53FCA9B (ForceCameraRatio_t070B8D83C7FF341491F7D9A9D18A8B5C5B6A75CE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<LetterboxCamera.CameraRatio>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mC6C744881DAE323F77F4EBE036571AF7DE255F88 (List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// T[] UnityEngine.Object::FindObjectsOfType<UnityEngine.Camera>()
inline CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* Object_FindObjectsOfType_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mE5AD3DBF2688F03D7BDBFD66FAF03B0CD77D2117 (const RuntimeMethod* method)
{
	return ((  CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared)(method);
}
// System.Void LetterboxCamera.CameraRatio::.ctor(UnityEngine.Camera,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRatio__ctor_m29959CB959C3C45866E8753A41185FA7DCDEBB6F (CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____anchor1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<LetterboxCamera.CameraRatio>::Add(T)
inline void List_1_Add_mC6AE1576E51C068544893E904EE01F7E9121FEF0_inline (List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* __this, CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C*, CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Void LetterboxCamera.CameraRatio::CalculateAndSetCameraRatio(System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRatio_CalculateAndSetCameraRatio_m33C07FD7E2FC9616B210E2389A5183C9F67B749F (CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* __this, float ____width0, float ____height1, bool ____horizontalLetterbox2, const RuntimeMethod* method) ;
// LetterboxCamera.CameraRatio LetterboxCamera.ForceCameraRatio::GetCameraRatioByCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* ForceCameraRatio_GetCameraRatioByCamera_mFE6F6D45D5D19C01FECCEB623F7113C9378DD3E0 (ForceCameraRatio_t070B8D83C7FF341491F7D9A9D18A8B5C5B6A75CE* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<LetterboxCamera.CameraRatio>::ToArray()
inline CameraRatioU5BU5D_tF1EEE7FC4683355E5BB8F0C8A0C8C7800EC6A6F9* List_1_ToArray_mC718531F37E170515D9959EE450D39E18E4D0F16 (List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* __this, const RuntimeMethod* method)
{
	return ((  CameraRatioU5BU5D_tF1EEE7FC4683355E5BB8F0C8A0C8C7800EC6A6F9* (*) (List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_m445E005E6F9211283EEA3F0BD4FF2DC20FE3640A_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::SlerpUnclamped(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_SlerpUnclamped_mB38920352A1B11369D782F78E183568CAFA82C0F (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline (float ___dot0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AdsBanner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsBanner_Start_m2D4E89C2019044169C85A6244FB79B1479ED1020 (AdsBanner_t9083D326C6351C1DF4A070A178324B3F9E564ECB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Advertisement.Initialize(gameId, testMode);
		String_t* L_0 = __this->___gameId_4;
		bool L_1 = __this->___testMode_6;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Initialize_mD5D6BA4B022CEF973971F556F28A0F33675269C7(L_0, L_1, NULL);
		// StartCoroutine(ShowBannerWhenInitialized());
		RuntimeObject* L_2;
		L_2 = AdsBanner_ShowBannerWhenInitialized_mC5AAF8D9978B12F6A06E9204DFD9FAE21AA6F1F7(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// Advertisement.Banner.SetPosition(BannerPosition.BOTTOM_CENTER); //Positions Banner where you want -
		Banner_SetPosition_m6233902AF561E8F5897A8496DCC04991D4D2BA92(4, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator AdsBanner::ShowBannerWhenInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AdsBanner_ShowBannerWhenInitialized_mC5AAF8D9978B12F6A06E9204DFD9FAE21AA6F1F7 (AdsBanner_t9083D326C6351C1DF4A070A178324B3F9E564ECB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShowBannerWhenInitializedU3Ed__4_t535B8EA309160E7FF59746490797F9D47ED41B84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShowBannerWhenInitializedU3Ed__4_t535B8EA309160E7FF59746490797F9D47ED41B84* L_0 = (U3CShowBannerWhenInitializedU3Ed__4_t535B8EA309160E7FF59746490797F9D47ED41B84*)il2cpp_codegen_object_new(U3CShowBannerWhenInitializedU3Ed__4_t535B8EA309160E7FF59746490797F9D47ED41B84_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CShowBannerWhenInitializedU3Ed__4__ctor_m0EC989E9E583542C05BB67F95ED5BBD85B9B56EB(L_0, 0, NULL);
		U3CShowBannerWhenInitializedU3Ed__4_t535B8EA309160E7FF59746490797F9D47ED41B84* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void AdsBanner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsBanner__ctor_m8D7A4E1714DFA55B9B71659671A96788DF338C39 (AdsBanner_t9083D326C6351C1DF4A070A178324B3F9E564ECB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18CA46361F03E90558C9FB7AF510C8173C532D49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3613237CCE29B9C4965731C5B0EB8926CED2A786);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string gameId = "Your-Apple-ID";
		__this->___gameId_4 = _stringLiteral3613237CCE29B9C4965731C5B0EB8926CED2A786;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameId_4), (void*)_stringLiteral3613237CCE29B9C4965731C5B0EB8926CED2A786);
		// public string mySurfacingId = "Banner_iOS";
		__this->___mySurfacingId_5 = _stringLiteral18CA46361F03E90558C9FB7AF510C8173C532D49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mySurfacingId_5), (void*)_stringLiteral18CA46361F03E90558C9FB7AF510C8173C532D49);
		// public bool testMode = true; //Leave this as True UNTIL you release your game!!!
		__this->___testMode_6 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AdsBanner/<ShowBannerWhenInitialized>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowBannerWhenInitializedU3Ed__4__ctor_m0EC989E9E583542C05BB67F95ED5BBD85B9B56EB (U3CShowBannerWhenInitializedU3Ed__4_t535B8EA309160E7FF59746490797F9D47ED41B84* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void AdsBanner/<ShowBannerWhenInitialized>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowBannerWhenInitializedU3Ed__4_System_IDisposable_Dispose_m63285E3C03C45380663C485E76D1BF7BC6DFD7DA (U3CShowBannerWhenInitializedU3Ed__4_t535B8EA309160E7FF59746490797F9D47ED41B84* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean AdsBanner/<ShowBannerWhenInitialized>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShowBannerWhenInitializedU3Ed__4_MoveNext_m363362BDB79892E5BBC6FB9CFA4A1BE28E4A3311 (U3CShowBannerWhenInitializedU3Ed__4_t535B8EA309160E7FF59746490797F9D47ED41B84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AdsBanner_t9083D326C6351C1DF4A070A178324B3F9E564ECB* V_1 = NULL;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AdsBanner_t9083D326C6351C1DF4A070A178324B3F9E564ECB* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0040;
	}

IL_0020:
	{
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0039:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0040:
	{
		// while (!Advertisement.isInitialized)
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Advertisement_get_isInitialized_m724C65B12673E38497C52342D563D7CAAA4DB2CA(NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// int currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_6;
		L_6 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_2 = L_6;
		int32_t L_7;
		L_7 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_2), NULL);
		// if (currentSceneIndex == 1)
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0064;
		}
	}
	{
		// Advertisement.Banner.Show(mySurfacingId);
		AdsBanner_t9083D326C6351C1DF4A070A178324B3F9E564ECB* L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9 = L_8->___mySurfacingId_5;
		Banner_Show_mCD00FA2F769633A180BC52D8C982A4A79B4452A6(L_9, NULL);
		goto IL_006a;
	}

IL_0064:
	{
		// Advertisement.Banner.Hide();
		Banner_Hide_mAB3CD60C18B7E8070716C42BA694DBD402C1B2F4((bool)0, NULL);
	}

IL_006a:
	{
		// }
		return (bool)0;
	}
}
// System.Object AdsBanner/<ShowBannerWhenInitialized>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShowBannerWhenInitializedU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m396FDEF0E6BF86EB1A9B7426E14183CFD4D15666 (U3CShowBannerWhenInitializedU3Ed__4_t535B8EA309160E7FF59746490797F9D47ED41B84* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void AdsBanner/<ShowBannerWhenInitialized>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowBannerWhenInitializedU3Ed__4_System_Collections_IEnumerator_Reset_mFA1F71207ECB82C831AB03653543E9B43690431C (U3CShowBannerWhenInitializedU3Ed__4_t535B8EA309160E7FF59746490797F9D47ED41B84* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShowBannerWhenInitializedU3Ed__4_System_Collections_IEnumerator_Reset_mFA1F71207ECB82C831AB03653543E9B43690431C_RuntimeMethod_var)));
	}
}
// System.Object AdsBanner/<ShowBannerWhenInitialized>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShowBannerWhenInitializedU3Ed__4_System_Collections_IEnumerator_get_Current_m1ADF8D9BB55E97D6B23557987BEBA0813E89DF5A (U3CShowBannerWhenInitializedU3Ed__4_t535B8EA309160E7FF59746490797F9D47ED41B84* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AdsRewarded::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsRewarded_Start_m2A615E57558A5025703D249D16D6F3E6552D76EE (AdsRewarded_tCA8FE966F6EFA029910E5FD5ABE107F513E68253* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Advertisement.AddListener(this);    //Used to check if Player COMPLETED the ad
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_AddListener_m7E98FB2C85D0D95A81D9F2CB6664D6D4D33D3836(__this, NULL);
		// Advertisement.Initialize(gameId, testMode);     // Initialize the Ads listener and service:
		String_t* L_0 = __this->___gameId_4;
		bool L_1 = __this->___testMode_6;
		Advertisement_Initialize_mD5D6BA4B022CEF973971F556F28A0F33675269C7(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void AdsRewarded::ShowRewardedVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsRewarded_ShowRewardedVideo_m429434B8F2B3462ED4C95E23886416E1397CDBBE (AdsRewarded_tCA8FE966F6EFA029910E5FD5ABE107F513E68253* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral924675148D5AE560E246AD9D7B8916A3DE3F6B30);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Advertisement.IsReady(mySurfacingId)) Advertisement.Show(mySurfacingId);
		String_t* L_0 = __this->___mySurfacingId_5;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Advertisement_IsReady_mA3A5566ECE7B42198BF05E281E2E6D49A16B1B1D(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (Advertisement.IsReady(mySurfacingId)) Advertisement.Show(mySurfacingId);
		String_t* L_2 = __this->___mySurfacingId_5;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Show_m083DB7A2C2DF0DF1EBCA5D8A6D52358AE4247C50(L_2, NULL);
		return;
	}

IL_0019:
	{
		// else Debug.Log("Rewarded video is not ready at the moment! Please try again later!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral924675148D5AE560E246AD9D7B8916A3DE3F6B30, NULL);
		// }
		return;
	}
}
// System.Void AdsRewarded::OnUnityAdsDidFinish(System.String,UnityEngine.Advertisements.ShowResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsRewarded_OnUnityAdsDidFinish_mF7DF4ADB5A465442B995B3278FD2987A69063231 (AdsRewarded_tCA8FE966F6EFA029910E5FD5ABE107F513E68253* __this, String_t* ___surfacingId0, int32_t ___showResult1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AF3FC229D49A5B428146FF7674959E9BF977D82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral368FC457C71737D8452AD3CC822CBF67FB451F99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77F7E1618BA181EA462408248C8209AD26B38F6E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (showResult == ShowResult.Finished)
		int32_t L_0 = ___showResult1;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000f;
		}
	}
	{
		// print("The Ad finished!!!");
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(_stringLiteral368FC457C71737D8452AD3CC822CBF67FB451F99, NULL);
		return;
	}

IL_000f:
	{
		// else if (showResult == ShowResult.Skipped)
		int32_t L_1 = ___showResult1;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}
	{
		// print("The Ad was SKIPPED you Cheater...");
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(_stringLiteral1AF3FC229D49A5B428146FF7674959E9BF977D82, NULL);
		return;
	}

IL_001e:
	{
		// else if (showResult == ShowResult.Failed) print("The Ad was interrupted or Failed.");
		int32_t L_2 = ___showResult1;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		// else if (showResult == ShowResult.Failed) print("The Ad was interrupted or Failed.");
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(_stringLiteral77F7E1618BA181EA462408248C8209AD26B38F6E, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void AdsRewarded::OnUnityAdsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsRewarded_OnUnityAdsReady_mCC0DD50F398B2E3000C811BAC4B6A68E9E3EC016 (AdsRewarded_tCA8FE966F6EFA029910E5FD5ABE107F513E68253* __this, String_t* ___surfacingId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BF67A02C467BC33D28ED3795C720DC563A77D0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (surfacingId == mySurfacingId)
		String_t* L_0 = ___surfacingId0;
		String_t* L_1 = __this->___mySurfacingId_5;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// print("The Ad is ready - Lord Vader");
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(_stringLiteral8BF67A02C467BC33D28ED3795C720DC563A77D0F, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void AdsRewarded::OnUnityAdsDidError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsRewarded_OnUnityAdsDidError_m0A04DE1BCAB3675720306DB7224B76DB28A8E77B (AdsRewarded_tCA8FE966F6EFA029910E5FD5ABE107F513E68253* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E74742F98F3C64CA64622D285E0E4A1C1A9496D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("Something's wrong, it's... the Ad's not working!!!");
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(_stringLiteral2E74742F98F3C64CA64622D285E0E4A1C1A9496D, NULL);
		// }
		return;
	}
}
// System.Void AdsRewarded::OnUnityAdsDidStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsRewarded_OnUnityAdsDidStart_mECD08F766D85C128622976BF4EA21ED79F6F944F (AdsRewarded_tCA8FE966F6EFA029910E5FD5ABE107F513E68253* __this, String_t* ___surfacingId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81184A1B9FE59E20CFF879B7F5F01BF56D0537E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("this is extra");
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(_stringLiteral81184A1B9FE59E20CFF879B7F5F01BF56D0537E8, NULL);
		// }
		return;
	}
}
// System.Void AdsRewarded::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsRewarded__ctor_m932D8AAED8F83DF5082686E7C4394B557B5D0D4A (AdsRewarded_tCA8FE966F6EFA029910E5FD5ABE107F513E68253* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3613237CCE29B9C4965731C5B0EB8926CED2A786);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7448DA4EC902B839EDD3A227224DAD14507F22B5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string gameId = "Your-Apple-ID";
		__this->___gameId_4 = _stringLiteral3613237CCE29B9C4965731C5B0EB8926CED2A786;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameId_4), (void*)_stringLiteral3613237CCE29B9C4965731C5B0EB8926CED2A786);
		// public string mySurfacingId = "Rewarded_iOS";
		__this->___mySurfacingId_5 = _stringLiteral7448DA4EC902B839EDD3A227224DAD14507F22B5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mySurfacingId_5), (void*)_stringLiteral7448DA4EC902B839EDD3A227224DAD14507F22B5);
		// public bool testMode = true; //Leave this as True UNTIL you release your game!!!
		__this->___testMode_6 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AdsSkippable::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsSkippable_Start_m35C2E22BEFCB21CDEA0EAE4A012B3C0A6EBC17F0 (AdsSkippable_t2841D5C15D45543C5061965315FD02D165595E29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdsSkippable_t2841D5C15D45543C5061965315FD02D165595E29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CEA8A0063213A8412FA6B1C943CA05E38FD880E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isAdReady = false;
		((AdsSkippable_t2841D5C15D45543C5061965315FD02D165595E29_StaticFields*)il2cpp_codegen_static_fields_for(AdsSkippable_t2841D5C15D45543C5061965315FD02D165595E29_il2cpp_TypeInfo_var))->___isAdReady_4 = (bool)0;
		// Advertisement.Initialize(gameId, testMode); //Prepares Everything Immediately
		String_t* L_0 = __this->___gameId_5;
		bool L_1 = __this->___testMode_7;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Initialize_mD5D6BA4B022CEF973971F556F28A0F33675269C7(L_0, L_1, NULL);
		// Invoke("ShowInterstitialAd", 0.25f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral4CEA8A0063213A8412FA6B1C943CA05E38FD880E, (0.25f), NULL);
		// }
		return;
	}
}
// System.Void AdsSkippable::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsSkippable_Update_m28271D657ED3FA649511E1A92A54A7B47C2BEBFD (AdsSkippable_t2841D5C15D45543C5061965315FD02D165595E29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdsSkippable_t2841D5C15D45543C5061965315FD02D165595E29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral298AE4749A608609CBA4D926D9C4637BD0049CA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E8EF18D57063B7BCFB3B506BBC443D3A09E815);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Advertisement.isShowing)
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Advertisement_get_isShowing_mC0DBC421989DFDEE0C779023E62AB51E93BA6AE9(NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		// isAdReady = false;
		((AdsSkippable_t2841D5C15D45543C5061965315FD02D165595E29_StaticFields*)il2cpp_codegen_static_fields_for(AdsSkippable_t2841D5C15D45543C5061965315FD02D165595E29_il2cpp_TypeInfo_var))->___isAdReady_4 = (bool)0;
		// Debug.Log("not showing");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral298AE4749A608609CBA4D926D9C4637BD0049CA8, NULL);
		return;
	}

IL_0018:
	{
		// isAdReady = true;
		((AdsSkippable_t2841D5C15D45543C5061965315FD02D165595E29_StaticFields*)il2cpp_codegen_static_fields_for(AdsSkippable_t2841D5C15D45543C5061965315FD02D165595E29_il2cpp_TypeInfo_var))->___isAdReady_4 = (bool)1;
		// Debug.Log("showing");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral87E8EF18D57063B7BCFB3B506BBC443D3A09E815, NULL);
		// }
		return;
	}
}
// System.Void AdsSkippable::ShowInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsSkippable_ShowInterstitialAd_m6AE5AA14FC6563AAC3DD7FD66D6CB2291F7F0569 (AdsSkippable_t2841D5C15D45543C5061965315FD02D165595E29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE8D90E7BE7E1D29A83A20EE1DCDA82C06EC6D52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFC096353AA07572BB01163C70B6B66EFC4FB412);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Advertisement.IsReady()) // Check if UnityAds ready before calling Show method:
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Advertisement_IsReady_m3875E34990FADD7C1EDF393184ECD35B14D07A58(NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// Advertisement.Show(mySurfacingId);
		String_t* L_1 = __this->___mySurfacingId_6;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Show_m083DB7A2C2DF0DF1EBCA5D8A6D52358AE4247C50(L_1, NULL);
		// print("You're watching an AD!!!");
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(_stringLiteralBE8D90E7BE7E1D29A83A20EE1DCDA82C06EC6D52, NULL);
		return;
	}

IL_001d:
	{
		// else print("Interstitial ad not ready at the moment! Please try again later!");
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(_stringLiteralDFC096353AA07572BB01163C70B6B66EFC4FB412, NULL);
		// }
		return;
	}
}
// System.Void AdsSkippable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsSkippable__ctor_m1DE1C2685E2144753DD970654B144824C303F707 (AdsSkippable_t2841D5C15D45543C5061965315FD02D165595E29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3613237CCE29B9C4965731C5B0EB8926CED2A786);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3915BCEE1104CEC85AA6966E6C98DA6ED321B9DB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string gameId = "Your-Apple-ID";
		__this->___gameId_5 = _stringLiteral3613237CCE29B9C4965731C5B0EB8926CED2A786;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameId_5), (void*)_stringLiteral3613237CCE29B9C4965731C5B0EB8926CED2A786);
		// public string mySurfacingId = "Interstitial_iOS";
		__this->___mySurfacingId_6 = _stringLiteral3915BCEE1104CEC85AA6966E6C98DA6ED321B9DB;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mySurfacingId_6), (void*)_stringLiteral3915BCEE1104CEC85AA6966E6C98DA6ED321B9DB);
		// public bool testMode = true; //Leave this as True UNTIL you publicly release your game!!!
		__this->___testMode_7 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void bullet::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bullet_Start_mDFF237EB6386D4A39A3E13AE14365216E37A2413 (bullet_t25376445B28AFDAE4CB15EC04BC43DEEC190A88F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigidbody2D.velocity = transform.up * speed;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->___rigidbody2D_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_1, NULL);
		float L_3 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_4, NULL);
		NullCheck(L_0);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_0, L_5, NULL);
		// Destroy(gameObject, 3f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_6, (3.0f), NULL);
		// }
		return;
	}
}
// System.Void bullet::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bullet_OnTriggerEnter2D_mA43EE92B9E84DEDB60B5CB314BF719B97FC85119 (bullet_t25376445B28AFDAE4CB15EC04BC43DEEC190A88F* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9DAD303C7A46DA1C0BFCAD200370C73E61542DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.tag == "Triangle")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralB9DAD303C7A46DA1C0BFCAD200370C73E61542DD, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void bullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bullet__ctor_m4683104AD91FBA2778DE96D67C62A3FDF4E2BEC4 (bullet_t25376445B28AFDAE4CB15EC04BC43DEEC190A88F* __this, const RuntimeMethod* method) 
{
	{
		// float speed = 8f;
		__this->___speed_4 = (8.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void cannonAnimationControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cannonAnimationControl_Start_m21E7AE85E3F13B0B5D322CFF300DACC263A0FD79 (cannonAnimationControl_t47678BD1EF709C105899299294158EE5D4D66FC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void cannonAnimationControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cannonAnimationControl_Update_mA200262B47D832E250D85117509C4BE588DF7CA4 (cannonAnimationControl_t47678BD1EF709C105899299294158EE5D4D66FC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB7CDD44EBE64CAED60D4E61080F2C28082BB4C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Player.playSpringFlash == true)
		bool L_0 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___playSpringFlash_19;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// animator.SetTrigger("cannonAnim");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___animator_4;
		NullCheck(L_1);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_1, _stringLiteralFB7CDD44EBE64CAED60D4E61080F2C28082BB4C7, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void cannonAnimationControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cannonAnimationControl__ctor_mA925F864A8914A5206B4A5C2E1334C6071A8B981 (cannonAnimationControl_t47678BD1EF709C105899299294158EE5D4D66FC5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CannonPowerup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CannonPowerup_Start_mB90A905E93FC94DA88A3E118D29AB7D65CA8BC5D (CannonPowerup_t76EA9F458C9182C1795FF20B3BF1079D62E7D88C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CannonPowerup::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CannonPowerup_Update_m8EC4CA8315C4C36F196D77D4C5BEBB969FC3D4BC (CannonPowerup_t76EA9F458C9182C1795FF20B3BF1079D62E7D88C* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float step = 500f * Time.deltaTime;
		float L_0;
		L_0 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = ((float)il2cpp_codegen_multiply((500.0f), L_0));
		// UnityEngine.Vector3 difference = pos - transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___pos_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_1, L_3, NULL);
		V_1 = L_4;
		// rotationZ = Mathf.Atan2(difference.y, difference.x) * Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_1;
		float L_6 = L_5.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		float L_8 = L_7.___x_2;
		float L_9;
		L_9 = atan2f(L_6, L_8);
		__this->___rotationZ_7 = ((float)il2cpp_codegen_multiply(L_9, (57.2957802f)));
		// transform.rotation = UnityEngine.Quaternion.RotateTowards(transform.rotation, UnityEngine.Quaternion.Euler(0.0f, 0.0f, rotationZ - 90f), step);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_11, NULL);
		float L_13 = __this->___rotationZ_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), ((float)il2cpp_codegen_subtract(L_13, (90.0f))), NULL);
		float L_15 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_RotateTowards_mD7C332050D876CB28A704B9005476BE06823F85F_inline(L_12, L_14, L_15, NULL);
		NullCheck(L_10);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_10, L_16, NULL);
		// }
		return;
	}
}
// System.Void CannonPowerup::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CannonPowerup_OnTriggerStay2D_m301E01F22509AA25E5F2F7CEB85284CADF262563 (CannonPowerup_t76EA9F458C9182C1795FF20B3BF1079D62E7D88C* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03E1088D1694962C15D09B8BEAF32508CDB88164);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.name == "TriangleObstacle(Clone)" && collision.transform.position.y > 3f)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteral03E1088D1694962C15D09B8BEAF32508CDB88164, NULL);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_3 = ___collision0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___y_3;
		if ((!(((float)L_6) > ((float)(3.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		// pos = collision.transform.position;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_7 = ___collision0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		__this->___pos_8 = L_9;
		// Shoot();
		CannonPowerup_Shoot_m573266649D92DD04B008BFB6DF1BE3E167621F80(__this, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void CannonPowerup::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CannonPowerup_Shoot_m573266649D92DD04B008BFB6DF1BE3E167621F80 (CannonPowerup_t76EA9F458C9182C1795FF20B3BF1079D62E7D88C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Time.time > nextShot)
		float L_0;
		L_0 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_1 = __this->___nextShot_9;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0060;
		}
	}
	{
		// nextShot = Time.time + fireRate;
		float L_2;
		L_2 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_3 = __this->___fireRate_10;
		__this->___nextShot_9 = ((float)il2cpp_codegen_add(L_2, L_3));
		// GameObject newBullet = Instantiate(bullet, bullet.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___bullet_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___bullet_4;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_4, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		// newBullet.transform.position = transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_11, NULL);
		// newBullet.transform.rotation = transform.rotation;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		NullCheck(L_12);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_12, L_14, NULL);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void CannonPowerup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CannonPowerup__ctor_m6167089EB8113F7FEBFD6D75C2A66AB084F60097 (CannonPowerup_t76EA9F458C9182C1795FF20B3BF1079D62E7D88C* __this, const RuntimeMethod* method) 
{
	{
		// float fireRate = 0.1f;
		__this->___fireRate_10 = (0.100000001f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ChangeLevelColor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeLevelColor_Update_mEB864D98119BEA6FA3EB658E054C3296B729F4AC (ChangeLevelColor_t55E3419E1C39C9DA8992394D350DC79DDA0605A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (cam.backgroundColor == black)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___cam_13;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Camera_get_backgroundColor_m1577A81D1E6A91D7934CECB8A284AA2D4704D96F(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___black_6;
		bool L_3;
		L_3 = Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0072;
		}
	}
	{
		// Debug.Log("b");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C, NULL);
		// if (fadeStart < fadeTime)
		float L_4 = __this->___fadeStart_10;
		float L_5 = __this->___fadeTime_9;
		if ((!(((float)L_4) < ((float)L_5))))
		{
			goto IL_0072;
		}
	}
	{
		// fadeStart += Time.deltaTime / fadeTime;
		float L_6 = __this->___fadeStart_10;
		float L_7;
		L_7 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_8 = __this->___fadeTime_9;
		__this->___fadeStart_10 = ((float)il2cpp_codegen_add(L_6, ((float)(L_7/L_8))));
		// cam.backgroundColor = Color.Lerp(black, grey, fadeStart);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = __this->___cam_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = __this->___black_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = __this->___grey_4;
		float L_12 = __this->___fadeStart_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline(L_10, L_11, L_12, NULL);
		NullCheck(L_9);
		Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138(L_9, L_13, NULL);
		// isBlack = false;
		__this->___isBlack_14 = (bool)0;
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void ChangeLevelColor::BlackToWhite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeLevelColor_BlackToWhite_m37FA2E22A665BAAF6041A09DCE8AF2FC3F0BE9DB (ChangeLevelColor_t55E3419E1C39C9DA8992394D350DC79DDA0605A4* __this, const RuntimeMethod* method) 
{
	{
		// if (fadeStart < fadeTime)
		float L_0 = __this->___fadeStart_10;
		float L_1 = __this->___fadeTime_9;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0050;
		}
	}
	{
		// fadeStart += Time.deltaTime / fadeTime;
		float L_2 = __this->___fadeStart_10;
		float L_3;
		L_3 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_4 = __this->___fadeTime_9;
		__this->___fadeStart_10 = ((float)il2cpp_codegen_add(L_2, ((float)(L_3/L_4))));
		// cam.backgroundColor = Color.Lerp(black, grey, fadeStart);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___cam_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___black_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = __this->___grey_4;
		float L_8 = __this->___fadeStart_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline(L_6, L_7, L_8, NULL);
		NullCheck(L_5);
		Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138(L_5, L_9, NULL);
		// isBlack = false;
		__this->___isBlack_14 = (bool)0;
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void ChangeLevelColor::WhiteToBlack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeLevelColor_WhiteToBlack_m9DE20F2B2464DBE48C2543497792C33277A21F53 (ChangeLevelColor_t55E3419E1C39C9DA8992394D350DC79DDA0605A4* __this, const RuntimeMethod* method) 
{
	{
		// if (fadeStart < fadeTime)
		float L_0 = __this->___fadeStart_10;
		float L_1 = __this->___fadeTime_9;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0050;
		}
	}
	{
		// fadeStart += Time.deltaTime / fadeTime;
		float L_2 = __this->___fadeStart_10;
		float L_3;
		L_3 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_4 = __this->___fadeTime_9;
		__this->___fadeStart_10 = ((float)il2cpp_codegen_add(L_2, ((float)(L_3/L_4))));
		// cam.backgroundColor = Color.Lerp(grey, black, fadeStart);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___cam_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___grey_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = __this->___black_6;
		float L_8 = __this->___fadeStart_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline(L_6, L_7, L_8, NULL);
		NullCheck(L_5);
		Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138(L_5, L_9, NULL);
		// isBlack = true;
		__this->___isBlack_14 = (bool)1;
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void ChangeLevelColor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeLevelColor__ctor_m55D56F97E6787340346B9636FD08119D22D91DCF (ChangeLevelColor_t55E3419E1C39C9DA8992394D350DC79DDA0605A4* __this, const RuntimeMethod* method) 
{
	{
		// Color grey = new Color(0.20f, 0.20f, 0.20f, 1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.200000003f), (0.200000003f), (0.200000003f), (1.0f), /*hidden argument*/NULL);
		__this->___grey_4 = L_0;
		// Color greycheck = new Color(0.21f, 0.21f, 0.21f, 1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_1), (0.209999993f), (0.209999993f), (0.209999993f), (1.0f), /*hidden argument*/NULL);
		__this->___greycheck_5 = L_1;
		// Color black = new Color(0f, 0f, 0f, 1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_2), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___black_6 = L_2;
		// Color white = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___white_7 = L_3;
		// Color clear = Color.clear;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		__this->___clear_8 = L_4;
		// float fadeTime = 1f;
		__this->___fadeTime_9 = (1.0f);
		// float updateSpeed = 5f;
		__this->___updateSpeed_12 = (5.0f);
		// bool isBlack = true;
		__this->___isBlack_14 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EnemySpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_Start_m5302D69E915FF1027CFB0C1198CBCAA9430819A4 (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animation = GetComponent<Animation>();
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_0;
		L_0 = Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290(__this, Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		__this->___animation_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animation_17), (void*)L_0);
		// }
		return;
	}
}
// System.Void EnemySpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_Update_m85D72B9CF6D0D9D7BE8A6816CE556BF5E9D7FFC5 (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral136F1F2DB86FE0992DB1DD86F076221A3F8B21D1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Score.currentScore >= 3250)
		int32_t L_0 = ((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___currentScore_9;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)3250))))
		{
			goto IL_0026;
		}
	}
	{
		// spawnRate = Random.Range(0.1f, 0.25f);
		float L_1;
		L_1 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.100000001f), (0.25f), NULL);
		__this->___spawnRate_12 = L_1;
		goto IL_0113;
	}

IL_0026:
	{
		// else if (Score.currentScore >= 3000)
		int32_t L_2 = ((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___currentScore_9;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)3000))))
		{
			goto IL_004c;
		}
	}
	{
		// spawnRate = Random.Range(0.5f, 0.7f);
		float L_3;
		L_3 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.5f), (0.699999988f), NULL);
		__this->___spawnRate_12 = L_3;
		goto IL_0113;
	}

IL_004c:
	{
		// else if (Score.currentScore >= 2250)
		int32_t L_4 = ((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___currentScore_9;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)2250))))
		{
			goto IL_0072;
		}
	}
	{
		// spawnRate = Random.Range(0.1f, 0.3f);
		float L_5;
		L_5 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.100000001f), (0.300000012f), NULL);
		__this->___spawnRate_12 = L_5;
		goto IL_0113;
	}

IL_0072:
	{
		// else if (Score.currentScore >= 2000)
		int32_t L_6 = ((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___currentScore_9;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)2000))))
		{
			goto IL_0095;
		}
	}
	{
		// spawnRate = Random.Range(0.5f, 0.7f);
		float L_7;
		L_7 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.5f), (0.699999988f), NULL);
		__this->___spawnRate_12 = L_7;
		goto IL_0113;
	}

IL_0095:
	{
		// else if (Score.currentScore >= 1250)
		int32_t L_8 = ((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___currentScore_9;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)1250))))
		{
			goto IL_00b8;
		}
	}
	{
		// spawnRate = Random.Range(0.1f, 0.3f);
		float L_9;
		L_9 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.100000001f), (0.300000012f), NULL);
		__this->___spawnRate_12 = L_9;
		goto IL_0113;
	}

IL_00b8:
	{
		// else if (Score.currentScore >= 1000)
		int32_t L_10 = ((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___currentScore_9;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)1000))))
		{
			goto IL_00db;
		}
	}
	{
		// spawnRate = Random.Range(0.5f, 0.7f);
		float L_11;
		L_11 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.5f), (0.699999988f), NULL);
		__this->___spawnRate_12 = L_11;
		goto IL_0113;
	}

IL_00db:
	{
		// else if (Score.currentScore >= 200)
		int32_t L_12 = ((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___currentScore_9;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)200))))
		{
			goto IL_00fe;
		}
	}
	{
		// spawnRate = Random.Range(0.2f, 0.5f);
		float L_13;
		L_13 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.200000003f), (0.5f), NULL);
		__this->___spawnRate_12 = L_13;
		goto IL_0113;
	}

IL_00fe:
	{
		// spawnRate = Random.Range(0.5f, 0.7f);
		float L_14;
		L_14 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.5f), (0.699999988f), NULL);
		__this->___spawnRate_12 = L_14;
	}

IL_0113:
	{
		// if (Player.gameStart == true)
		bool L_15 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___gameStart_16;
		if (!L_15)
		{
			goto IL_01ef;
		}
	}
	{
		// if (Time.time > nextSpawn)
		float L_16;
		L_16 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_17 = __this->___nextSpawn_11;
		if ((!(((float)L_16) > ((float)L_17))))
		{
			goto IL_01ef;
		}
	}
	{
		// nextSpawn = Time.time + spawnRate;
		float L_18;
		L_18 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_19 = __this->___spawnRate_12;
		__this->___nextSpawn_11 = ((float)il2cpp_codegen_add(L_18, L_19));
		// if (Score.currentScore > 2500)
		int32_t L_20 = ((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___currentScore_9;
		if ((((int32_t)L_20) <= ((int32_t)((int32_t)2500))))
		{
			goto IL_0183;
		}
	}
	{
		// randomScale = Random.Range(2f, 3.25f);
		float L_21;
		L_21 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((2.0f), (3.25f), NULL);
		__this->___randomScale_18 = L_21;
		// SpawnTriangle();
		EnemySpawner_SpawnTriangle_m5377B2F207679558EDED6C0F66677587F3D55AF8(__this, NULL);
		// if (Random.Range(1, 11) == 10)
		int32_t L_22;
		L_22 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, ((int32_t)11), NULL);
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_01ef;
		}
	}
	{
		// Invoke("SpawnWall", 0.4f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral136F1F2DB86FE0992DB1DD86F076221A3F8B21D1, (0.400000006f), NULL);
		return;
	}

IL_0183:
	{
		// else if (Score.currentScore > 1000 && Random.Range(1, 11) == 10)
		int32_t L_23 = ((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___currentScore_9;
		if ((((int32_t)L_23) <= ((int32_t)((int32_t)1000))))
		{
			goto IL_01ac;
		}
	}
	{
		int32_t L_24;
		L_24 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, ((int32_t)11), NULL);
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_01ac;
		}
	}
	{
		// Invoke("SpawnWall", 0.4f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral136F1F2DB86FE0992DB1DD86F076221A3F8B21D1, (0.400000006f), NULL);
		return;
	}

IL_01ac:
	{
		// else if (Score.currentScore > 500)
		int32_t L_25 = ((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___currentScore_9;
		if ((((int32_t)L_25) <= ((int32_t)((int32_t)500))))
		{
			goto IL_01d4;
		}
	}
	{
		// randomScale = Random.Range(1.5f, 3f);
		float L_26;
		L_26 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((1.5f), (3.0f), NULL);
		__this->___randomScale_18 = L_26;
		// SpawnTriangle();
		EnemySpawner_SpawnTriangle_m5377B2F207679558EDED6C0F66677587F3D55AF8(__this, NULL);
		return;
	}

IL_01d4:
	{
		// randomScale = Random.Range(1.5f, 2f);
		float L_27;
		L_27 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((1.5f), (2.0f), NULL);
		__this->___randomScale_18 = L_27;
		// SpawnTriangle();
		EnemySpawner_SpawnTriangle_m5377B2F207679558EDED6C0F66677587F3D55AF8(__this, NULL);
	}

IL_01ef:
	{
		// }
		return;
	}
}
// System.Void EnemySpawner::SpawnTriangle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_SpawnTriangle_m5377B2F207679558EDED6C0F66677587F3D55AF8 (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// randomObjectVector = RandomVector2();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = EnemySpawner_RandomVector2_m53A59EAC6111DF3ECA3C7DB90F46FEC911B7296B(__this, NULL);
		__this->___randomObjectVector_16 = L_0;
		// GameObject triangle = Instantiate(triangeObstacle);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___triangeObstacle_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_1, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		// triangle.transform.position = randomObjectVector;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___randomObjectVector_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_5, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_6, NULL);
		// Vector3 randomSpawnRotation = new Vector3(0, 0, Random.Range(0, 360));
		int32_t L_7;
		L_7 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)360), NULL);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), (0.0f), (0.0f), ((float)L_7), NULL);
		// triangle.transform.rotation = Quaternion.Euler(randomSpawnRotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_3;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_10, NULL);
		NullCheck(L_9);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_9, L_11, NULL);
		// triangle.transform.localScale = new Vector3(randomScale, randomScale, randomScale);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_8;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		float L_14 = __this->___randomScale_18;
		float L_15 = __this->___randomScale_18;
		float L_16 = __this->___randomScale_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), L_14, L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_13, L_17, NULL);
		// triangle.GetComponent<Rigidbody2D>().angularVelocity = Random.Range(-100f, 100f);
		NullCheck(L_12);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_18;
		L_18 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_12, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		float L_19;
		L_19 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-100.0f), (100.0f), NULL);
		NullCheck(L_18);
		Rigidbody2D_set_angularVelocity_mFC06FB14E69DD4847F27E614900D22317AA5A390(L_18, L_19, NULL);
		// }
		return;
	}
}
// System.Void EnemySpawner::SpawnWall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_SpawnWall_m88B1FB1E6899D5E0384CFB06738540430C733023 (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int index = Random.Range(1, 4);
		int32_t L_0;
		L_0 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, 4, NULL);
		V_0 = L_0;
		// if (index == 1)
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0036;
		}
	}
	{
		// GameObject wall = Instantiate(wallObstacleLeft);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___wallObstacleLeft_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		// wall.transform.position = new Vector3(0.5f, 10f, 0);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (0.5f), (10.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_5, NULL);
		return;
	}

IL_0036:
	{
		// else if (index == 2)
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0064;
		}
	}
	{
		// GameObject wall = Instantiate(wallObstacleCenter);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___wallObstacleCenter_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		// wall.transform.position = new Vector3(0.5f, 10f, 0);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (0.5f), (10.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_10, NULL);
		return;
	}

IL_0064:
	{
		// else if (index == 3)
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)3))))
		{
			goto IL_0091;
		}
	}
	{
		// GameObject wall = Instantiate(wallObstacleRight);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___wallObstacleRight_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_12, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		// wall.transform.position = new Vector3(0.5f, 10f, 0);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), (0.5f), (10.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_15, NULL);
	}

IL_0091:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 EnemySpawner::RandomVector2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 EnemySpawner_RandomVector2_m53A59EAC6111DF3ECA3C7DB90F46FEC911B7296B (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float randomX = Random.Range(minScreenWidth, maxScreenWidth);
		float L_0 = __this->___minScreenWidth_13;
		float L_1 = __this->___maxScreenWidth_14;
		float L_2;
		L_2 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_0, L_1, NULL);
		V_0 = L_2;
		// Vector2 randomVector2 = new Vector2(randomX, maxScreenHight);
		float L_3 = V_0;
		float L_4 = __this->___maxScreenHight_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), L_3, L_4, /*hidden argument*/NULL);
		// return randomVector2;
		return L_5;
	}
}
// System.Void EnemySpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner__ctor_m619CE38261A8A67AB91D66ED5BE44E56C1897E74 (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	{
		// float spawnRate = 0.6f;
		__this->___spawnRate_12 = (0.600000024f);
		// float minScreenWidth = 0.5f;
		__this->___minScreenWidth_13 = (0.5f);
		// float maxScreenWidth = 5.2f;
		__this->___maxScreenWidth_14 = (5.19999981f);
		// float maxScreenHight = 10.5f;
		__this->___maxScreenHight_15 = (10.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void fallingwall::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fallingwall_OnTriggerEnter2D_m2E694829B1BFB3A2F63D7C175751B85CA58D8DE3 (fallingwall_t68B2AE0591728AE46536832B4F1F237A2A86F453* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collisionInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2764B0F0877AAA6775AEF4F5E1B3A5823BA9933A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collisionInfo.GetComponent<Collider2D>().name == "Score Counter")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collisionInfo0;
		NullCheck(L_0);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_1;
		L_1 = Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16(L_0, Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral2764B0F0877AAA6775AEF4F5E1B3A5823BA9933A, NULL);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		// gameObject.GetComponent<Rigidbody2D>().gravityScale += 0.004f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_5;
		L_5 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_4, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_6 = L_5;
		NullCheck(L_6);
		float L_7;
		L_7 = Rigidbody2D_get_gravityScale_mCFA8E159F51B876E16EEF634A63415F7051AFF44(L_6, NULL);
		NullCheck(L_6);
		Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD(L_6, ((float)il2cpp_codegen_add(L_7, (0.00400000019f))), NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_8, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void fallingwall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fallingwall__ctor_m30C20AD733A641C5432AFBC2C6D98EF69AAB4964 (fallingwall_t68B2AE0591728AE46536832B4F1F237A2A86F453* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameOverScore::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverScore_Start_mAC7F7756FAD96C09DF1843CC36AC6457658DD36E (GameOverScore_tC8098886EA2641C0526D5E516E093738E1AFC26A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A03F59B3506B5B5C857FD4A82D272532090F40A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED35FF3F063D29A026AE09F18392D9C7537823F2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// gameOverScore.text = ("SCORE: " + PlayerPrefs.GetInt("endScore", 0).ToString());
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___gameOverScore_4;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral5A03F59B3506B5B5C857FD4A82D272532090F40A, 0, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralED35FF3F063D29A026AE09F18392D9C7537823F2, L_2, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void GameOverScore::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverScore_Update_m4098984638E13BB8B0C0FE67DE20032AFD41D02A (GameOverScore_tC8098886EA2641C0526D5E516E093738E1AFC26A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GameOverScore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverScore__ctor_m0C4FD962544BB595F2399DE217C05CEC2BBD529F (GameOverScore_tC8098886EA2641C0526D5E516E093738E1AFC26A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HighScore::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighScore_Start_m03530F5F5B51B080EF6A9BADD171DD6278A43950 (HighScore_tAB53E25EE211F5AF017E511C8EC1B10EDC12DC7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB63B9CDE4143F0AF8ADE9E94CF6652AAF59FA026);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// currentHighScore.text = ("HIGH SCORE: " + PlayerPrefs.GetInt("HighScore", 0).ToString());
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___currentHighScore_4;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, 0, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralB63B9CDE4143F0AF8ADE9E94CF6652AAF59FA026, L_2, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void HighScore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighScore__ctor_m94B0B5695A6D597D2E294CC40EC66325A16FB1EB (HighScore_tAB53E25EE211F5AF017E511C8EC1B10EDC12DC7A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Lock::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lock_Start_mBA33705016890B08069EBE6F715EB8453E5C47B2 (Lock_t04AFB2C23B31465C429828A7BCF4A124B371569A* __this, const RuntimeMethod* method) 
{
	{
		// lockInfoStart = false;
		__this->___lockInfoStart_8 = (bool)0;
		// InfoClearColor = new Color(255, 255, 255, 0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (255.0f), (255.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		__this->___InfoClearColor_7 = L_0;
		// }
		return;
	}
}
// System.Void Lock::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lock_Update_m244883DD9C0949AA8FD5154CC971C1BB3E50ABE1 (Lock_t04AFB2C23B31465C429828A7BCF4A124B371569A* __this, const RuntimeMethod* method) 
{
	{
		// ExpertUnlocker();
		Lock_ExpertUnlocker_m2B0DAEC47D6B22026B1ECFB29F335D48F7A45DD2(__this, NULL);
		// }
		return;
	}
}
// System.Void Lock::LockInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lock_LockInfo_m517E2D1F36DDCBC759EE55CB6922AA187ACE263A (Lock_t04AFB2C23B31465C429828A7BCF4A124B371569A* __this, const RuntimeMethod* method) 
{
	{
		// lockInfoStart = true;
		__this->___lockInfoStart_8 = (bool)1;
		// }
		return;
	}
}
// System.Void Lock::ExpertUnlocker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lock_ExpertUnlocker_m2B0DAEC47D6B22026B1ECFB29F335D48F7A45DD2 (Lock_t04AFB2C23B31465C429828A7BCF4A124B371569A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetInt("HighScore", 0) >= 800)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, 0, NULL);
		if ((((int32_t)L_0) < ((int32_t)((int32_t)800))))
		{
			goto IL_002b;
		}
	}
	{
		// lockImage.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___lockImage_4;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// expertButton.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___expertButton_5;
		NullCheck(L_2);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_2, (bool)1, NULL);
		return;
	}

IL_002b:
	{
		// lockImage.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___lockImage_4;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// expertButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___expertButton_5;
		NullCheck(L_4);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_4, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Lock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lock__ctor_m11B2038D869328BCF986F07428B6FCC7EE8DEFFD (Lock_t04AFB2C23B31465C429828A7BCF4A124B371569A* __this, const RuntimeMethod* method) 
{
	{
		// Color InfoClearColor = new Color(255, 255, 255, 0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (255.0f), (255.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		__this->___InfoClearColor_7 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MusicSave::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicSave_Awake_m6645DAFD38CF7ED2E4A87F378D7E19A5C9F40CC8 (MusicSave_t524FD94197D14F9A6F13A38A6364D918265113C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisMusicSave_t524FD94197D14F9A6F13A38A6364D918265113C5_m6E9769CC967ABD5A589517A02CAE9AF5F58E36E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int gameStatusCount = FindObjectsOfType<MusicSave>().Length;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		MusicSaveU5BU5D_tF73AE434E132084E9CD5AA93B223F08F1BC4F33F* L_0;
		L_0 = Object_FindObjectsOfType_TisMusicSave_t524FD94197D14F9A6F13A38A6364D918265113C5_m6E9769CC967ABD5A589517A02CAE9AF5F58E36E9(Object_FindObjectsOfType_TisMusicSave_t524FD94197D14F9A6F13A38A6364D918265113C5_m6E9769CC967ABD5A589517A02CAE9AF5F58E36E9_RuntimeMethod_var);
		NullCheck(L_0);
		// if (gameStatusCount > 1)
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) <= ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_2, NULL);
		return;
	}

IL_0022:
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_3, NULL);
		// }
		return;
	}
}
// System.Void MusicSave::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicSave_Start_mB128FB84EA28559630CB56543E6C69AFEA75943A (MusicSave_t524FD94197D14F9A6F13A38A6364D918265113C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSource = backroundMusic.GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___backroundMusic_4;
		NullCheck(L_0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_0, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		__this->___audioSource_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void MusicSave::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicSave_Update_m349010ECF64DF0F52D82802A3743754D028B0BCE (MusicSave_t524FD94197D14F9A6F13A38A6364D918265113C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdsSkippable_t2841D5C15D45543C5061965315FD02D165595E29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4555F3FD77D5313369C9BD9D84CB0DB8B3CBC58F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (AdsSkippable.isAdReady == true)
		bool L_0 = ((AdsSkippable_t2841D5C15D45543C5061965315FD02D165595E29_StaticFields*)il2cpp_codegen_static_fields_for(AdsSkippable_t2841D5C15D45543C5061965315FD02D165595E29_il2cpp_TypeInfo_var))->___isAdReady_4;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// audioSource.volume = 0f;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___audioSource_6;
		NullCheck(L_1);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_1, (0.0f), NULL);
		return;
	}

IL_0018:
	{
		// audioSource.volume = PlayerPrefs.GetFloat("MusicControl", 1);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___audioSource_6;
		float L_3;
		L_3 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteral4555F3FD77D5313369C9BD9D84CB0DB8B3CBC58F, (1.0f), NULL);
		NullCheck(L_2);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void MusicSave::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicSave__ctor_m57EB33481CE3E9AFDE09472B049608195B809922 (MusicSave_t524FD94197D14F9A6F13A38A6364D918265113C5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MusicSelect::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicSelect_Start_mAD263F14DD37FE64E3B196C334E9AD1BCF134423 (MusicSelect_t5CB44DBB60C89A75B9714568317167967A6626D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MusicSelect_t5CB44DBB60C89A75B9714568317167967A6626D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// int currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		// audioIndex = 0;
		__this->___audioIndex_8 = 0;
		// startGameOverAudioIndex = 0;
		((MusicSelect_t5CB44DBB60C89A75B9714568317167967A6626D5_StaticFields*)il2cpp_codegen_static_fields_for(MusicSelect_t5CB44DBB60C89A75B9714568317167967A6626D5_il2cpp_TypeInfo_var))->___startGameOverAudioIndex_9 = 0;
		// }
		return;
	}
}
// System.Void MusicSelect::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicSelect_Update_m455839AE3E6C174ECFAD07CE3037CF0CD6DB6CDE (MusicSelect_t5CB44DBB60C89A75B9714568317167967A6626D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MusicSelect_t5CB44DBB60C89A75B9714568317167967A6626D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C1835984DDB35BA058A542067AA7353AC061DBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral384449F73BA26C6C185736A224F401D6FB717258);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EA00F14D937DCE01A7229E5DECB29FCAD96DD5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SceneManager.GetActiveScene() == SceneManager.GetSceneByName("GameOver"))
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_1;
		L_1 = SceneManager_GetSceneByName_m112B7AAE231E82C8800F04640A692272C9522806(_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7, NULL);
		bool L_2;
		L_2 = Scene_op_Equality_m299018477251CD19CF480FB98EE3C79F9DBE3482(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_00a1;
		}
	}
	{
		// if (audioIndex == 1)
		int32_t L_3 = __this->___audioIndex_8;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0035;
		}
	}
	{
		// audioSource.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___audioSource_7;
		NullCheck(L_4);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_4, NULL);
		// audioIndex = 0;
		__this->___audioIndex_8 = 0;
		return;
	}

IL_0035:
	{
		// else if (!audioSource.isPlaying)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->___audioSource_7;
		NullCheck(L_5);
		bool L_6;
		L_6 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_5, NULL);
		if (L_6)
		{
			goto IL_00e9;
		}
	}
	{
		// if (startGameOverAudioIndex == 0)
		int32_t L_7 = ((MusicSelect_t5CB44DBB60C89A75B9714568317167967A6626D5_StaticFields*)il2cpp_codegen_static_fields_for(MusicSelect_t5CB44DBB60C89A75B9714568317167967A6626D5_il2cpp_TypeInfo_var))->___startGameOverAudioIndex_9;
		if (L_7)
		{
			goto IL_0073;
		}
	}
	{
		// audioSource.PlayOneShot(gameOverStartMusic, 1f);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = __this->___audioSource_7;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = __this->___gameOverStartMusic_5;
		NullCheck(L_8);
		AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B(L_8, L_9, (1.0f), NULL);
		// Debug.Log("GameOverStartMusic");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral9EA00F14D937DCE01A7229E5DECB29FCAD96DD5D, NULL);
		// startGameOverAudioIndex = 1;
		((MusicSelect_t5CB44DBB60C89A75B9714568317167967A6626D5_StaticFields*)il2cpp_codegen_static_fields_for(MusicSelect_t5CB44DBB60C89A75B9714568317167967A6626D5_il2cpp_TypeInfo_var))->___startGameOverAudioIndex_9 = 1;
		return;
	}

IL_0073:
	{
		// else if (!audioSource.isPlaying)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = __this->___audioSource_7;
		NullCheck(L_10);
		bool L_11;
		L_11 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_10, NULL);
		if (L_11)
		{
			goto IL_00e9;
		}
	}
	{
		// audioSource.PlayOneShot(gameOverMusic, 1f);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = __this->___audioSource_7;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_13 = __this->___gameOverMusic_6;
		NullCheck(L_12);
		AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B(L_12, L_13, (1.0f), NULL);
		// Debug.Log("gameOverMusic");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral384449F73BA26C6C185736A224F401D6FB717258, NULL);
		return;
	}

IL_00a1:
	{
		// else if (audioIndex == 0)
		int32_t L_14 = __this->___audioIndex_8;
		if (L_14)
		{
			goto IL_00bc;
		}
	}
	{
		// audioSource.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_15 = __this->___audioSource_7;
		NullCheck(L_15);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_15, NULL);
		// audioIndex = 1;
		__this->___audioIndex_8 = 1;
		return;
	}

IL_00bc:
	{
		// else if (!audioSource.isPlaying)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_16 = __this->___audioSource_7;
		NullCheck(L_16);
		bool L_17;
		L_17 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_16, NULL);
		if (L_17)
		{
			goto IL_00e9;
		}
	}
	{
		// audioSource.PlayOneShot(normalMusic, 1f);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_18 = __this->___audioSource_7;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_19 = __this->___normalMusic_4;
		NullCheck(L_18);
		AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B(L_18, L_19, (1.0f), NULL);
		// Debug.Log("normalMusic");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral2C1835984DDB35BA058A542067AA7353AC061DBE, NULL);
	}

IL_00e9:
	{
		// }
		return;
	}
}
// System.Void MusicSelect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicSelect__ctor_m6551526A1B119DB6F257CE98020A202B5EBB2D46 (MusicSelect_t5CB44DBB60C89A75B9714568317167967A6626D5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Obstacle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Obstacle_Start_mBD75DD8098F7DB52EBEC8DED00C52ADF05E62731 (Obstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9_mFC5A41B6AC5D139809E59B725C4C68F6046725FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// index = 0;
		__this->___index_9 = 0;
		// shakeCam = FindObjectOfType<ShakeCam>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9* L_0;
		L_0 = Object_FindObjectOfType_TisShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9_mFC5A41B6AC5D139809E59B725C4C68F6046725FD(Object_FindObjectOfType_TisShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9_mFC5A41B6AC5D139809E59B725C4C68F6046725FD_RuntimeMethod_var);
		__this->___shakeCam_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shakeCam_14), (void*)L_0);
		// collider2D = GetComponent<Collider2D>();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_1;
		L_1 = Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16(__this, Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		__this->___collider2D_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___collider2D_15), (void*)L_1);
		// spriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___spriteRenderer_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_16), (void*)L_2);
		// myCollision = true;
		__this->___myCollision_8 = (bool)1;
		// }
		return;
	}
}
// System.Void Obstacle::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Obstacle_OnTriggerEnter2D_mAB23D7BF2F87EDC6701CE814E87D37AC63B9528A (Obstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collisionInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9_mFC5A41B6AC5D139809E59B725C4C68F6046725FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral234F0BCEF52F66203C8DD0D2DF1F499A6F8E8D4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2764B0F0877AAA6775AEF4F5E1B3A5823BA9933A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collisionInfo.tag == "Player" && index == 0)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collisionInfo0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_3 = __this->___index_9;
		if (L_3)
		{
			goto IL_00aa;
		}
	}
	{
		// Score.currentScore += 5;
		int32_t L_4 = ((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___currentScore_9;
		((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___currentScore_9 = ((int32_t)il2cpp_codegen_add(L_4, 5));
		// GameObject newParticle = Instantiate(particle, transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___particle_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_5, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		// index = 1;
		__this->___index_9 = 1;
		// FindObjectOfType<ShakeCam>().CameraShake();
		ShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9* L_8;
		L_8 = Object_FindObjectOfType_TisShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9_mFC5A41B6AC5D139809E59B725C4C68F6046725FD(Object_FindObjectOfType_TisShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9_mFC5A41B6AC5D139809E59B725C4C68F6046725FD_RuntimeMethod_var);
		NullCheck(L_8);
		ShakeCam_CameraShake_m48BDB5DA15CF69EFC5D85D96DEDFB8C838604C4B(L_8, NULL);
		// AudioSource.PlayClipAtPoint(triangleExplosion, Camera.main.transform.position, PlayerPrefs.GetFloat("SFXControl", 0.6f));
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = __this->___triangleExplosion_7;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10;
		L_10 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13;
		L_13 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteral234F0BCEF52F66203C8DD0D2DF1F499A6F8E8D4F, (0.600000024f), NULL);
		AudioSource_PlayClipAtPoint_mEEF6FE993B8F7A61829F0E9538858711D06945F7(L_9, L_12, L_13, NULL);
		// collider2D.enabled = false;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_14 = __this->___collider2D_15;
		NullCheck(L_14);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_14, (bool)0, NULL);
		// spriteRenderer.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_15 = __this->___spriteRenderer_16;
		NullCheck(L_15);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_15, (bool)0, NULL);
		// Destroy(newParticle, 0.5f);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_7, (0.5f), NULL);
		// Destroy(gameObject, 0.5f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_16, (0.5f), NULL);
		return;
	}

IL_00aa:
	{
		// else if (collisionInfo.GetComponent<Collider2D>().name == "Score Counter")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_17 = ___collisionInfo0;
		NullCheck(L_17);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_18;
		L_18 = Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16(L_17, Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_18, NULL);
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral2764B0F0877AAA6775AEF4F5E1B3A5823BA9933A, NULL);
		if (!L_20)
		{
			goto IL_00ef;
		}
	}
	{
		// gameObject.GetComponent<Rigidbody2D>().gravityScale += 0.004f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_21);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_22;
		L_22 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_21, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_23 = L_22;
		NullCheck(L_23);
		float L_24;
		L_24 = Rigidbody2D_get_gravityScale_mCFA8E159F51B876E16EEF634A63415F7051AFF44(L_23, NULL);
		NullCheck(L_23);
		Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD(L_23, ((float)il2cpp_codegen_add(L_24, (0.00400000019f))), NULL);
		// myCollision = true;
		__this->___myCollision_8 = (bool)1;
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_25, NULL);
	}

IL_00ef:
	{
		// }
		return;
	}
}
// System.Void Obstacle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Obstacle__ctor_mF400BC13FBAC15398D0EE2E05DF96F481257945D (Obstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90* __this, const RuntimeMethod* method) 
{
	{
		// public float obstacleSpeed = -3f;
		__this->___obstacleSpeed_4 = (-3.0f);
		// bool myCollision = true;
		__this->___myCollision_8 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PauseMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Start_m4BBF1E67B42A2E936C792E83778ADCD87DE3C80E (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Update_m5097E74BFD4385B73BA9EF7198886DCEC7DF9A83 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// if(isPaused)
		bool L_1 = __this->___isPaused_5;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Resume();
		PauseMenu_Resume_mA45D6E4F27172EF775FC2D3F694BE90882DBE831(__this, NULL);
		return;
	}

IL_0018:
	{
		// PauseGame();
		PauseMenu_PauseGame_m5F9F76E8D0822B61CEE60DD44562CA95076BAEEF(__this, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void PauseMenu::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_PauseGame_m5F9F76E8D0822B61CEE60DD44562CA95076BAEEF (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// isPaused = true;
		__this->___isPaused_5 = (bool)1;
		// pauseMenuUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pauseMenuUI_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// Time.timeScale = 0f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.0f), NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Resume_mA45D6E4F27172EF775FC2D3F694BE90882DBE831 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// isPaused = false;
		__this->___isPaused_5 = (bool)0;
		// pauseMenuUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pauseMenuUI_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu__ctor_m81B0E020DC5008DA4D414200BAAF7122B430D826 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mC31CF4F40DDEA35C5E39E8C43EC37284AE7C453D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ResetValues();
		Player_ResetValues_m9D1C1AD77F6EE2F796B564A088DBDEC2FCB6047B(__this, NULL);
		// GetComponentsAndObjects();
		Player_GetComponentsAndObjects_m3C8F8FC1A3E72C90D13958F3D9A88FD838385723(__this, NULL);
		// Color green = new Color(0.27f, 0.52f, 0.45f, 1f);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_0), (0.270000011f), (0.519999981f), (0.449999988f), (1.0f), NULL);
		// renderer.material.color = green;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->___renderer_25;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = V_0;
		NullCheck(L_1);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Player::ResetValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_ResetValues_m9D1C1AD77F6EE2F796B564A088DBDEC2FCB6047B (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// springCollision = false;
		((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___springCollision_17 = (bool)0;
		// rocketCollision = false;
		((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___rocketCollision_18 = (bool)0;
		// gameStart = false;
		((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___gameStart_16 = (bool)0;
		// playSpringFlash = false;
		((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___playSpringFlash_19 = (bool)0;
		// playRocketFlash = false;
		((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___playRocketFlash_20 = (bool)0;
		// collisionIndex = 0;
		((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___collisionIndex_15 = 0;
		// rocketfolder.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___rocketfolder_7;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// cannon.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___cannon_8;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Player::GetComponentsAndObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_GetComponentsAndObjects_m3C8F8FC1A3E72C90D13958F3D9A88FD838385723 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9_mFC5A41B6AC5D139809E59B725C4C68F6046725FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_23), (void*)L_0);
		// shakeCam = FindObjectOfType<ShakeCam>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9* L_1;
		L_1 = Object_FindObjectOfType_TisShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9_mFC5A41B6AC5D139809E59B725C4C68F6046725FD(Object_FindObjectOfType_TisShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9_mFC5A41B6AC5D139809E59B725C4C68F6046725FD_RuntimeMethod_var);
		__this->___shakeCam_24 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shakeCam_24), (void*)L_1);
		// renderer = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2;
		L_2 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->___renderer_25 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___renderer_25), (void*)L_2);
		// rocketRend = rocket.GetComponent<Renderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___rocket_9;
		NullCheck(L_3);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_4;
		L_4 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_3, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		__this->___rocketRend_26 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rocketRend_26), (void*)L_4);
		// collider2D = GetComponent<Collider2D>();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_5;
		L_5 = Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16(__this, Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		__this->___collider2D_28 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___collider2D_28), (void*)L_5);
		// audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6;
		L_6 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_29 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_29), (void*)L_6);
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_m95E134A5EF1B5164EA281F61D7FA436F59BE3C9F (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (gameStart == true)
		bool L_0 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___gameStart_16;
		if (!L_0)
		{
			goto IL_00b2;
		}
	}
	{
		// tapToStartText.enabled = false;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___tapToStartText_11;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// PlayerMovement();
		Player_PlayerMovement_mA1FFC4A9E1D6AF7AAB3D23F2EFA107D48757C2D2(__this, NULL);
		// if (smokeVFX != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___smokeVFX_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_00ea;
		}
	}
	{
		// int smokeLength = smokeZchoices.Length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___smokeZchoices_21;
		NullCheck(L_4);
		V_0 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		// int RandomIndex = Random.Range(0, smokeLength);
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_5, NULL);
		V_1 = L_6;
		// int smokeZpos = smokeZchoices[RandomIndex];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___smokeZchoices_21;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = L_10;
		// Vector3 alignmentVector = new Vector3(2.83f, 1.7f, smokeZpos);
		int32_t L_11 = V_2;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), (2.82999992f), (1.70000005f), ((float)L_11), NULL);
		// Vector3 smokePos = new Vector3(rocketfolder.transform.position.x + alignmentVector.x, rocketfolder.transform.position.y + alignmentVector.y, alignmentVector.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___rocketfolder_7;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = L_14.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_3;
		float L_17 = L_16.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___rocketfolder_7;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_3;
		float L_23 = L_22.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_3;
		float L_25 = L_24.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_4), ((float)il2cpp_codegen_add(L_15, L_17)), ((float)il2cpp_codegen_add(L_21, L_23)), L_25, NULL);
		// smokeVFX.transform.position = smokePos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___smokeVFX_22;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_4;
		NullCheck(L_27);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_27, L_28, NULL);
		return;
	}

IL_00b2:
	{
		// else if (gameStart == false)
		bool L_29 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___gameStart_16;
		if (L_29)
		{
			goto IL_00ea;
		}
	}
	{
		// tapToStartText.enabled = true;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_30 = __this->___tapToStartText_11;
		NullCheck(L_30);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_30, (bool)1, NULL);
		// transform.position = new Vector2(2.806f, 3f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_32), (2.80599999f), (3.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_32, NULL);
		NullCheck(L_31);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_31, L_33, NULL);
		// StartGameOnSpace();
		Player_StartGameOnSpace_mD7B089C1F0F101D881C87C5B63FEFE8BE3E81984(__this, NULL);
	}

IL_00ea:
	{
		// }
		return;
	}
}
// System.Void Player::StartGameOnSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_StartGameOnSpace_mD7B089C1F0F101D881C87C5B63FEFE8BE3E81984 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		// gameStart = true;
		((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___gameStart_16 = (bool)1;
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void Player::PlayerMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_PlayerMovement_mA1FFC4A9E1D6AF7AAB3D23F2EFA107D48757C2D2 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00ae;
		}
	}
	{
		// blockMoveSpeed = 7f;
		__this->___blockMoveSpeed_6 = (7.0f);
		// touchPos = Camera.main.ScreenToWorldPoint(Input.touches[0].position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_2;
		L_2 = Input_get_touches_m884B92DD9A389F7985AB275A9717AC629C258B6B(NULL);
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_3, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_1, L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_5, NULL);
		__this->___touchPos_30 = L_6;
		// targetPos = new Vector2 (Mathf.Clamp(touchPos.x, minScreenWidth, maxScreenWidth), transform.position.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&__this->___touchPos_30);
		float L_8 = L_7->___x_0;
		float L_9 = __this->___minScreenWidth_4;
		float L_10 = __this->___maxScreenWidth_5;
		float L_11;
		L_11 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_8, L_9, L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = L_13.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_15), L_11, L_14, /*hidden argument*/NULL);
		__this->___targetPos_31 = L_15;
		// transform.position = Vector2.MoveTowards(transform.position, targetPos, blockMoveSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_18, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = __this->___targetPos_31;
		float L_21 = __this->___blockMoveSpeed_6;
		float L_22;
		L_22 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_MoveTowards_mB3BF0AFF0BE0D3E6264CD1564AE14DE94A909878_inline(L_19, L_20, ((float)il2cpp_codegen_multiply(L_21, L_22)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_23, NULL);
		NullCheck(L_16);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_16, L_24, NULL);
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void Player::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnCollisionEnter2D_mFF1FC01C5038DA5AE81233398DEBEFFB5FA8AC41 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collisionInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03E1088D1694962C15D09B8BEAF32508CDB88164);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0831766FFAEF7124549CBCB2D566CED86A367B8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BB68348B59801B4A19F983C3AC0422CC5364594);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6658378453C1E3DB296C049578379DE211A7AEE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A323557E2A51BD2ED1A6B3E0F46F56147C3F27B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE7BC91D52699636D16A6A74E22611197836E68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD01C78F578F0C89B9C96DB7A36A8FE8C0EA2C8AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collisionInfo.collider.name == "Spring Icon(Clone)")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collisionInfo0;
		NullCheck(L_0);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_1;
		L_1 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral2BB68348B59801B4A19F983C3AC0422CC5364594, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SpringOnCollision();
		Player_SpringOnCollision_mEC93B7C0252208EDD9ED76BE75809E19A9BA3FE5(__this, NULL);
		return;
	}

IL_001e:
	{
		// else if (collisionInfo.collider.name == "Rocket Icon(Clone)")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_4 = ___collisionInfo0;
		NullCheck(L_4);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_5;
		L_5 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteral6658378453C1E3DB296C049578379DE211A7AEE1, NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		// RocketOnCollision();
		Player_RocketOnCollision_mF0E43D100C805DCDC7A38A2BE7BF255BA4471ABB(__this, NULL);
		return;
	}

IL_003c:
	{
		// else if (collisionInfo.collider.name == "TriangleObstacle(Clone)")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_8 = ___collisionInfo0;
		NullCheck(L_8);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_9;
		L_9 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_8, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, _stringLiteral03E1088D1694962C15D09B8BEAF32508CDB88164, NULL);
		if (!L_11)
		{
			goto IL_005a;
		}
	}
	{
		// HitActions();
		Player_HitActions_m67C8C95BB97DEF777D3115E3CC4C43B3E4B30D33(__this, NULL);
		return;
	}

IL_005a:
	{
		// else if (collisionInfo.collider.name == "right wall" || collisionInfo.collider.name == "left wall")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_12 = ___collisionInfo0;
		NullCheck(L_12);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_13;
		L_13 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_12, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_13, NULL);
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteral9CE7BC91D52699636D16A6A74E22611197836E68, NULL);
		if (L_15)
		{
			goto IL_0088;
		}
	}
	{
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_16 = ___collisionInfo0;
		NullCheck(L_16);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_17;
		L_17 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_16, NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_17, NULL);
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteralD01C78F578F0C89B9C96DB7A36A8FE8C0EA2C8AA, NULL);
		if (!L_19)
		{
			goto IL_008f;
		}
	}

IL_0088:
	{
		// HitActions();
		Player_HitActions_m67C8C95BB97DEF777D3115E3CC4C43B3E4B30D33(__this, NULL);
		return;
	}

IL_008f:
	{
		// else if (collisionInfo.collider.name == "Wall L" || collisionInfo.collider.name == "Wall R")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_20 = ___collisionInfo0;
		NullCheck(L_20);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_21;
		L_21 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_20, NULL);
		NullCheck(L_21);
		String_t* L_22;
		L_22 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_21, NULL);
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral0831766FFAEF7124549CBCB2D566CED86A367B8C, NULL);
		if (L_23)
		{
			goto IL_00bd;
		}
	}
	{
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_24 = ___collisionInfo0;
		NullCheck(L_24);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_25;
		L_25 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_24, NULL);
		NullCheck(L_25);
		String_t* L_26;
		L_26 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_25, NULL);
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral9A323557E2A51BD2ED1A6B3E0F46F56147C3F27B, NULL);
		if (!L_27)
		{
			goto IL_00c3;
		}
	}

IL_00bd:
	{
		// HitActions();
		Player_HitActions_m67C8C95BB97DEF777D3115E3CC4C43B3E4B30D33(__this, NULL);
	}

IL_00c3:
	{
		// }
		return;
	}
}
// System.Void Player::SpringOnCollision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SpringOnCollision_mEC93B7C0252208EDD9ED76BE75809E19A9BA3FE5 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral234F0BCEF52F66203C8DD0D2DF1F499A6F8E8D4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40378CD26FF02B97EE50D91E394B18AB7C493195);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9F8173324BAA5E36B7458EC45ED19E3922D0CC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (cannon.activeSelf == false)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cannon_8;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (L_1)
		{
			goto IL_0074;
		}
	}
	{
		// cannon.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___cannon_8;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// rocketfolder.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___rocketfolder_7;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// springCollision = true;
		((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___springCollision_17 = (bool)1;
		// AudioSource.PlayClipAtPoint(powerUpSound, Camera.main.transform.position, PlayerPrefs.GetFloat("SFXControl", 0.6f));
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___powerUpSound_12;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8;
		L_8 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteral234F0BCEF52F66203C8DD0D2DF1F499A6F8E8D4F, (0.600000024f), NULL);
		AudioSource_PlayClipAtPoint_mEEF6FE993B8F7A61829F0E9538858711D06945F7(L_4, L_7, L_8, NULL);
		// Invoke("StartSpringFlash", 16f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralD9F8173324BAA5E36B7458EC45ED19E3922D0CC8, (16.0f), NULL);
		// Invoke("DeactivateSpring", 20f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral40378CD26FF02B97EE50D91E394B18AB7C493195, (20.0f), NULL);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void Player::RocketOnCollision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_RocketOnCollision_mF0E43D100C805DCDC7A38A2BE7BF255BA4471ABB (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9_mFC5A41B6AC5D139809E59B725C4C68F6046725FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral234F0BCEF52F66203C8DD0D2DF1F499A6F8E8D4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72A67AE51B601BA1C44966B732E673CDA13F89B1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (rocketfolder.activeSelf == false)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___rocketfolder_7;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (L_1)
		{
			goto IL_009d;
		}
	}
	{
		// rocketCollision = true;
		((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___rocketCollision_18 = (bool)1;
		// rocketfolder.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___rocketfolder_7;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// cannon.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___cannon_8;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// FindObjectOfType<ShakeCam>().CameraShake();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9* L_4;
		L_4 = Object_FindObjectOfType_TisShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9_mFC5A41B6AC5D139809E59B725C4C68F6046725FD(Object_FindObjectOfType_TisShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9_mFC5A41B6AC5D139809E59B725C4C68F6046725FD_RuntimeMethod_var);
		NullCheck(L_4);
		ShakeCam_CameraShake_m48BDB5DA15CF69EFC5D85D96DEDFB8C838604C4B(L_4, NULL);
		// collider2D.enabled = false;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_5 = __this->___collider2D_28;
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)0, NULL);
		// AudioSource.PlayClipAtPoint(rocketSound, Camera.main.transform.position, PlayerPrefs.GetFloat("SFXControl", 0.6f));
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = __this->___rocketSound_13;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10;
		L_10 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteral234F0BCEF52F66203C8DD0D2DF1F499A6F8E8D4F, (0.600000024f), NULL);
		AudioSource_PlayClipAtPoint_mEEF6FE993B8F7A61829F0E9538858711D06945F7(L_6, L_9, L_10, NULL);
		// Time.timeScale = 2f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((2.0f), NULL);
		// Time.fixedDeltaTime = 0.02f * Time.timeScale;
		float L_11;
		L_11 = Time_get_timeScale_m99F3D47F45286D6DA73ADB2662B63451A632D413(NULL);
		Time_set_fixedDeltaTime_mB9CCA021570BB2E27F6FF47C36D46C6D5A246D1B(((float)il2cpp_codegen_multiply((0.0199999996f), L_11)), NULL);
		// Invoke("DeactivateRocket", rocketSound.length);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_12 = __this->___rocketSound_13;
		NullCheck(L_12);
		float L_13;
		L_13 = AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D(L_12, NULL);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral72A67AE51B601BA1C44966B732E673CDA13F89B1, L_13, NULL);
	}

IL_009d:
	{
		// }
		return;
	}
}
// System.Void Player::HitActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_HitActions_m67C8C95BB97DEF777D3115E3CC4C43B3E4B30D33 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9_mFC5A41B6AC5D139809E59B725C4C68F6046725FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral234F0BCEF52F66203C8DD0D2DF1F499A6F8E8D4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CEF19192AE55840466B0745CC680797B36C3FF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CEB4D81FE1382FF120AEE05E403D6F7BCE690D2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// collider2D.enabled = false;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = __this->___collider2D_28;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		// animator.SetTrigger("hit");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___animator_23;
		NullCheck(L_1);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_1, _stringLiteral9CEB4D81FE1382FF120AEE05E403D6F7BCE690D2, NULL);
		// AudioSource.PlayClipAtPoint(hitSound, Camera.main.transform.position, PlayerPrefs.GetFloat("SFXControl", 0.6f));
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = __this->___hitSound_14;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteral234F0BCEF52F66203C8DD0D2DF1F499A6F8E8D4F, (0.600000024f), NULL);
		AudioSource_PlayClipAtPoint_mEEF6FE993B8F7A61829F0E9538858711D06945F7(L_2, L_5, L_6, NULL);
		// collisionIndex++;
		int32_t L_7 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___collisionIndex_15;
		((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___collisionIndex_15 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// FindObjectOfType<ShakeCam>().CameraShake();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9* L_8;
		L_8 = Object_FindObjectOfType_TisShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9_mFC5A41B6AC5D139809E59B725C4C68F6046725FD(Object_FindObjectOfType_TisShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9_mFC5A41B6AC5D139809E59B725C4C68F6046725FD_RuntimeMethod_var);
		NullCheck(L_8);
		ShakeCam_CameraShake_m48BDB5DA15CF69EFC5D85D96DEDFB8C838604C4B(L_8, NULL);
		// Invoke("ColliderTrue", 0.6f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral4CEF19192AE55840466B0745CC680797B36C3FF1, (0.600000024f), NULL);
		// }
		return;
	}
}
// System.Void Player::ColliderTrue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_ColliderTrue_m07D3F8E1CC609D74837D22F460DEE9D626C50DC5 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// collider2D.enabled = true;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = __this->___collider2D_28;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Player::DeactivateSpring()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_DeactivateSpring_m9F4107A85DC254DC7B9CCAC90BBC989D4B77D7AC (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playSpringFlash = false;
		((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___playSpringFlash_19 = (bool)0;
		// cannon.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cannon_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Player::StartSpringFlash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_StartSpringFlash_m2CD799DC134A6DBDC4877F8E89B68FD0612A3601 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playSpringFlash = true;
		((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___playSpringFlash_19 = (bool)1;
		// }
		return;
	}
}
// System.Void Player::DeactivateRocket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_DeactivateRocket_m8967A2091CDFDB1F690F54E69EF0A4DA24B41623 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CEF19192AE55840466B0745CC680797B36C3FF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CEB4D81FE1382FF120AEE05E403D6F7BCE690D2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playRocketFlash = false;
		((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___playRocketFlash_20 = (bool)0;
		// Time.timeScale = 1;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// Time.fixedDeltaTime = 0.02f;
		Time_set_fixedDeltaTime_mB9CCA021570BB2E27F6FF47C36D46C6D5A246D1B((0.0199999996f), NULL);
		// collider2D.enabled = true;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = __this->___collider2D_28;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)1, NULL);
		// rocketfolder.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___rocketfolder_7;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// collider2D.enabled = false;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_2 = __this->___collider2D_28;
		NullCheck(L_2);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
		// animator.SetTrigger("hit");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_23;
		NullCheck(L_3);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_3, _stringLiteral9CEB4D81FE1382FF120AEE05E403D6F7BCE690D2, NULL);
		// Invoke("ColliderTrue", 0.6f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral4CEF19192AE55840466B0745CC680797B36C3FF1, (0.600000024f), NULL);
		// }
		return;
	}
}
// System.Void Player::StartRocketFlash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_StartRocketFlash_mD02DCC2AA2CA9A8DFF6745BE96D29F7CB75EBBDB (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1.5f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.5f), NULL);
		// Time.fixedDeltaTime = 0.02f;
		Time_set_fixedDeltaTime_mB9CCA021570BB2E27F6FF47C36D46C6D5A246D1B((0.0199999996f), NULL);
		// playRocketFlash = true;
		((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___playRocketFlash_20 = (bool)1;
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m0A83E0706592FC871B0CF188B37AFC6649F3D85D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] float minScreenWidth = 0.252f;
		__this->___minScreenWidth_4 = (0.252000004f);
		// [SerializeField] float maxScreenWidth = 5.369f;
		__this->___maxScreenWidth_5 = (5.36899996f);
		// [SerializeField] float blockMoveSpeed = 4;
		__this->___blockMoveSpeed_6 = (4.0f);
		// int[] smokeZchoices = { -5, 5 };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)-5));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)5);
		__this->___smokeZchoices_21 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___smokeZchoices_21), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerLives::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLives_Start_m70CB396319FE1D898CB37AD383ABC97FB3F8F71F (PlayerLives_t110F5504A62028EFBC83787DE7D36A734C7585FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A03F59B3506B5B5C857FD4A82D272532090F40A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.GetInt("endScore", 0);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral5A03F59B3506B5B5C857FD4A82D272532090F40A, 0, NULL);
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_5), (void*)L_1);
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void PlayerLives::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLives_Update_mCA9CDC8469D2B9466B91F3ED34B9E66FC7DFC181 (PlayerLives_t110F5504A62028EFBC83787DE7D36A734C7585FC* __this, const RuntimeMethod* method) 
{
	{
		// PlayerHearts();
		PlayerLives_PlayerHearts_mDF0031EFB5F423FA1A30EC1548B952EE3C188721(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayerLives::PlayerHearts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLives_PlayerHearts_mDF0031EFB5F423FA1A30EC1548B952EE3C188721 (PlayerLives_t110F5504A62028EFBC83787DE7D36A734C7585FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLives_t110F5504A62028EFBC83787DE7D36A734C7585FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BFD7BDAD789BF9DFCF160F179CE998FABB91367);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A03F59B3506B5B5C857FD4A82D272532090F40A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC055573659775BB0D32F25E24AE34CB9D6171FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5815EEA7C55C374C0C12678A09BA44738855EC5);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Player.collisionIndex == 1)
		int32_t L_0 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___collisionIndex_15;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_003e;
		}
	}
	{
		// if (heartGameObjects[0] != null)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___heartGameObjects_4;
		NullCheck(L_1);
		int32_t L_2 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_00ff;
		}
	}
	{
		// animator.SetTrigger("destroy1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___animator_5;
		NullCheck(L_5);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_5, _stringLiteral2BFD7BDAD789BF9DFCF160F179CE998FABB91367, NULL);
		// Destroy(heartGameObjects[0], 0.25f);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___heartGameObjects_4;
		NullCheck(L_6);
		int32_t L_7 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_8, (0.25f), NULL);
		return;
	}

IL_003e:
	{
		// else if (Player.collisionIndex == 2)
		int32_t L_9 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___collisionIndex_15;
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_007c;
		}
	}
	{
		// if (heartGameObjects[1] != null)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = __this->___heartGameObjects_4;
		NullCheck(L_10);
		int32_t L_11 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_00ff;
		}
	}
	{
		// animator.SetTrigger("destroy2");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14 = __this->___animator_5;
		NullCheck(L_14);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_14, _stringLiteralD5815EEA7C55C374C0C12678A09BA44738855EC5, NULL);
		// Destroy(heartGameObjects[1], 0.25f);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = __this->___heartGameObjects_4;
		NullCheck(L_15);
		int32_t L_16 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_17, (0.25f), NULL);
		return;
	}

IL_007c:
	{
		// else if (Player.collisionIndex == 3)
		int32_t L_18 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___collisionIndex_15;
		if ((!(((uint32_t)L_18) == ((uint32_t)3))))
		{
			goto IL_00b7;
		}
	}
	{
		// if (heartGameObjects[2] != null)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = __this->___heartGameObjects_4;
		NullCheck(L_19);
		int32_t L_20 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_22)
		{
			goto IL_00ff;
		}
	}
	{
		// animator.SetTrigger("destroy3");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_23 = __this->___animator_5;
		NullCheck(L_23);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_23, _stringLiteralC055573659775BB0D32F25E24AE34CB9D6171FC8, NULL);
		// Destroy(heartGameObjects[2], 0.25f);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_24 = __this->___heartGameObjects_4;
		NullCheck(L_24);
		int32_t L_25 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_26, (0.25f), NULL);
		return;
	}

IL_00b7:
	{
		// else if (Player.collisionIndex == 4)
		int32_t L_27 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___collisionIndex_15;
		if ((!(((uint32_t)L_27) == ((uint32_t)4))))
		{
			goto IL_00ff;
		}
	}
	{
		// PlayerPrefs.SetInt("endScore", Score.currentScore);
		int32_t L_28 = ((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___currentScore_9;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral5A03F59B3506B5B5C857FD4A82D272532090F40A, L_28, NULL);
		// int currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_29;
		L_29 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_29;
		int32_t L_30;
		L_30 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		// if (currentSceneIndex == 1)
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00ff;
		}
	}
	{
		// addCount++;
		int32_t L_31 = ((PlayerLives_t110F5504A62028EFBC83787DE7D36A734C7585FC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerLives_t110F5504A62028EFBC83787DE7D36A734C7585FC_il2cpp_TypeInfo_var))->___addCount_6;
		((PlayerLives_t110F5504A62028EFBC83787DE7D36A734C7585FC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerLives_t110F5504A62028EFBC83787DE7D36A734C7585FC_il2cpp_TypeInfo_var))->___addCount_6 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		// Debug.Log(addCount);
		int32_t L_32 = ((PlayerLives_t110F5504A62028EFBC83787DE7D36A734C7585FC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerLives_t110F5504A62028EFBC83787DE7D36A734C7585FC_il2cpp_TypeInfo_var))->___addCount_6;
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_33);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_34, NULL);
		// SceneManager.LoadScene(currentSceneIndex = 2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(2, NULL);
	}

IL_00ff:
	{
		// }
		return;
	}
}
// System.Void PlayerLives::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLives__ctor_mE6CF81AB6BF7E821089C7FB573300E6D1F322BBC (PlayerLives_t110F5504A62028EFBC83787DE7D36A734C7585FC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PowerUps::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUps_Start_mB36CDCD0ABED1829E8FC8BB0EB640BA7AB8209B9 (PowerUps_t343A24FE99514FA23E3590B1574384BF233BBB72* __this, const RuntimeMethod* method) 
{
	{
		// startSpawn = true;
		__this->___startSpawn_9 = (bool)1;
		// }
		return;
	}
}
// System.Void PowerUps::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUps_Update_m2C20A090F7E0B4C0BC5355FCD1D3B241707AA443 (PowerUps_t343A24FE99514FA23E3590B1574384BF233BBB72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7661EAE973262DADB9C7080D1DC39D6583468665);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CA03637704BFC570C9C0F82EAEC1986D2107FF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Player.gameStart == true)
		bool L_0 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___gameStart_16;
		if (!L_0)
		{
			goto IL_0084;
		}
	}
	{
		// if (startSpawn == true)
		bool L_1 = __this->___startSpawn_9;
		if (!L_1)
		{
			goto IL_006c;
		}
	}
	{
		// randomTiming = Random.Range(30, 60);
		int32_t L_2;
		L_2 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(((int32_t)30), ((int32_t)60), NULL);
		__this->___randomTiming_10 = L_2;
		// InvokeRepeating("AddSpringPowerUp", randomTiming - 10, randomTiming);
		int32_t L_3 = __this->___randomTiming_10;
		int32_t L_4 = __this->___randomTiming_10;
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteral8CA03637704BFC570C9C0F82EAEC1986D2107FF8, ((float)((int32_t)il2cpp_codegen_subtract(L_3, ((int32_t)10)))), ((float)L_4), NULL);
		// randomTiming = Random.Range(30, 60);
		int32_t L_5;
		L_5 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(((int32_t)30), ((int32_t)60), NULL);
		__this->___randomTiming_10 = L_5;
		// InvokeRepeating("AddRocketPowerUp", randomTiming + 10, randomTiming);
		int32_t L_6 = __this->___randomTiming_10;
		int32_t L_7 = __this->___randomTiming_10;
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteral7661EAE973262DADB9C7080D1DC39D6583468665, ((float)((int32_t)il2cpp_codegen_add(L_6, ((int32_t)10)))), ((float)L_7), NULL);
		// startSpawn = false;
		__this->___startSpawn_9 = (bool)0;
	}

IL_006c:
	{
		// randomObjectVector = RandomVector2();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = PowerUps_RandomVector2_mA4452A0747DB57C10038AE1180758EAEE32FB553(__this, NULL);
		__this->___randomObjectVector_11 = L_8;
		// SpringDestoyOnCollision();
		PowerUps_SpringDestoyOnCollision_m3CBC515066AE35EDDC4ABC02F40C9EB656DA12AA(__this, NULL);
		// RocketDestoyOnCollision();
		PowerUps_RocketDestoyOnCollision_m7E3307EA9A4E798829BA074A8143113B35061241(__this, NULL);
	}

IL_0084:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 PowerUps::RandomVector2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PowerUps_RandomVector2_mA4452A0747DB57C10038AE1180758EAEE32FB553 (PowerUps_t343A24FE99514FA23E3590B1574384BF233BBB72* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float randomX = Random.Range(minScreenWidth, maxScreenWidth);
		float L_0 = __this->___minScreenWidth_6;
		float L_1 = __this->___maxScreenWidth_7;
		float L_2;
		L_2 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_0, L_1, NULL);
		V_0 = L_2;
		// Vector2 randomVector2 = new Vector2(randomX - 1, maxScreenHight);
		float L_3 = V_0;
		float L_4 = __this->___maxScreenHight_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), ((float)il2cpp_codegen_subtract(L_3, (1.0f))), L_4, /*hidden argument*/NULL);
		// return randomVector2;
		return L_5;
	}
}
// System.Void PowerUps::AddSpringPowerUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUps_AddSpringPowerUp_m309256DEE586EAF53B8690619B7AE05F326DBE20 (PowerUps_t343A24FE99514FA23E3590B1574384BF233BBB72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// randomTiming = Random.Range(30, 60);
		int32_t L_0;
		L_0 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(((int32_t)30), ((int32_t)60), NULL);
		__this->___randomTiming_10 = L_0;
		// spring = Instantiate(springPowerUp, randomObjectVector, transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___springPowerUp_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = __this->___randomObjectVector_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_1, L_3, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		__this->___spring_12 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spring_12), (void*)L_6);
		// }
		return;
	}
}
// System.Void PowerUps::AddRocketPowerUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUps_AddRocketPowerUp_mFC05AE86273E54960E6668668B703D04AE28552E (PowerUps_t343A24FE99514FA23E3590B1574384BF233BBB72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// randomTiming = Random.Range(30, 60);
		int32_t L_0;
		L_0 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(((int32_t)30), ((int32_t)60), NULL);
		__this->___randomTiming_10 = L_0;
		// rocket = Instantiate(rocketPowerUp, randomObjectVector, transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___rocketPowerUp_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = __this->___randomObjectVector_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_1, L_3, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		__this->___rocket_13 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rocket_13), (void*)L_6);
		// }
		return;
	}
}
// System.Void PowerUps::SpringDestoyOnCollision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUps_SpringDestoyOnCollision_m3CBC515066AE35EDDC4ABC02F40C9EB656DA12AA (PowerUps_t343A24FE99514FA23E3590B1574384BF233BBB72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Score.springScoreCollision == true)
		bool L_0 = ((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___springScoreCollision_11;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(spring);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___spring_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_1, NULL);
		// Score.springScoreCollision = false;
		((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___springScoreCollision_11 = (bool)0;
		return;
	}

IL_0019:
	{
		// else if (Player.springCollision == true)
		bool L_2 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___springCollision_17;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// Destroy(spring);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___spring_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
		// Player.springCollision = false;
		((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___springCollision_17 = (bool)0;
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void PowerUps::RocketDestoyOnCollision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUps_RocketDestoyOnCollision_m7E3307EA9A4E798829BA074A8143113B35061241 (PowerUps_t343A24FE99514FA23E3590B1574384BF233BBB72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Score.rocketScoreCollision == true)
		bool L_0 = ((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___rocketScoreCollision_12;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(rocket);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___rocket_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_1, NULL);
		// Score.rocketScoreCollision = false;
		((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___rocketScoreCollision_12 = (bool)0;
		return;
	}

IL_0019:
	{
		// else if (Player.rocketCollision == true)
		bool L_2 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___rocketCollision_18;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// Destroy(rocket);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___rocket_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
		// Player.rocketCollision = false;
		((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___rocketCollision_18 = (bool)0;
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void PowerUps::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUps__ctor_m43C69193F863D3855A3F553E689848E16070D7FD (PowerUps_t343A24FE99514FA23E3590B1574384BF233BBB72* __this, const RuntimeMethod* method) 
{
	{
		// bool startSpawn = true;
		__this->___startSpawn_9 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ReportBug::BugReport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportBug_BugReport_m30E2CDF402D32905B86E8FC7B622BF8ED5C2E5C8 (ReportBug_tC860FF1D3E1DCB6402C8ACDF7EFE9C77505014A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3D91FE274F947C68CC9F45E1C056E4FECFF5137);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.OpenURL("https://docs.google.com/forms/d/1kk3O2PPF2_E41fMU2Kt2PlnNT9iIxaxj79S7Gx5CPuI/edit");
		Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564(_stringLiteralA3D91FE274F947C68CC9F45E1C056E4FECFF5137, NULL);
		// }
		return;
	}
}
// System.Void ReportBug::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportBug__ctor_m730E925EA9E056016D69645161B096BCFA2A1742 (ReportBug_tC860FF1D3E1DCB6402C8ACDF7EFE9C77505014A1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Rocket::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rocket_Start_m1B3FACBA1A8892820F00A1F428E2C2E0398BFBCE (Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* __this, const RuntimeMethod* method) 
{
	{
		// StartScript();
		Rocket_StartScript_m90AA9C04B7531FE48C3CE2E9098EF9B726E775FF(__this, NULL);
		// }
		return;
	}
}
// System.Void Rocket::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rocket_Update_mCFECA6C87032841A7833AF983FE76425F5CC187D (Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* __this, const RuntimeMethod* method) 
{
	{
		// GrabVector2();
		Rocket_GrabVector2_m2D4E860F0B069588028EDC599D1DAB9C55F4F93C(__this, NULL);
		// }
		return;
	}
}
// System.Void Rocket::StartScript()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rocket_StartScript_m90AA9C04B7531FE48C3CE2E9098EF9B726E775FF (Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* __this, const RuntimeMethod* method) 
{
	{
		// rocketVector = transform.position - player.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___player_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_1, L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_5, NULL);
		__this->___rocketVector_9 = L_6;
		// }
		return;
	}
}
// System.Void Rocket::GrabVector2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rocket_GrabVector2_m2D4E860F0B069588028EDC599D1DAB9C55F4F93C (Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 playerPos = new Vector2(player.transform.position.x, player.transform.position.y);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___player_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___player_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___y_3;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_3, L_7, NULL);
		// transform.position = playerPos + rocketVector;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = __this->___rocketVector_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_11, NULL);
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_12, NULL);
		// }
		return;
	}
}
// System.Void Rocket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rocket__ctor_mA413B17C46BD087DB80D491B57AB19EA000EDBF1 (Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneLoader::LoadNextScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_LoadNextScene_mB08328EABD3A531FC7D2D45E81745E80C1F7782C (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// int currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		// SceneManager.LoadScene(currentSceneIndex + 1);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::MainMenuScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_MainMenuScene_mD8EBB7DD1496B6BFD50A02EA6F3645AFD2599189 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(0, NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::NormalScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_NormalScene_mD1DFB18A22D66AF06F5B0DA96FB2EB5AD19492E8 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MusicSelect_t5CB44DBB60C89A75B9714568317167967A6626D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SceneManager.GetActiveScene() == SceneManager.GetSceneByName("GameOver"))
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_1;
		L_1 = SceneManager_GetSceneByName_m112B7AAE231E82C8800F04640A692272C9522806(_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7, NULL);
		bool L_2;
		L_2 = Scene_op_Equality_m299018477251CD19CF480FB98EE3C79F9DBE3482(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// MusicSelect.startGameOverAudioIndex = 0;
		((MusicSelect_t5CB44DBB60C89A75B9714568317167967A6626D5_StaticFields*)il2cpp_codegen_static_fields_for(MusicSelect_t5CB44DBB60C89A75B9714568317167967A6626D5_il2cpp_TypeInfo_var))->___startGameOverAudioIndex_9 = 0;
	}

IL_001c:
	{
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(1, NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::NGameOverScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_NGameOverScene_m7072328D5057B30276AFEE51C0197807DBC83A0C (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(2, NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::SettingScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_SettingScene_m5609AAFC5360D401E55DE5AD6B89CDDAB5297BAD (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(3);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(3, NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::CreditsScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_CreditsScene_mF37DB21F541745201D9FDBE247C2DB120AEC2704 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(4);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(4, NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader__ctor_m2248766DF38AF07562AD31501C7275B8DF1B7D29 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Score::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_Start_m9851EAC634456AE4AD4D1163695A64EB3E4AA8FF (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisObstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90_m22249EBDF13D24364779EC36DDBC4D390804AC7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F7E8F4ED1DE66C730B1EB68E9B69A7AE2062435);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// VariableDef();
		Score_VariableDef_m84B2617D6FAD8C07B1C6DDB25BDCA0DF363D52C7(__this, NULL);
		// obstacle = FindObjectOfType<Obstacle>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Obstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90* L_0;
		L_0 = Object_FindObjectOfType_TisObstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90_m22249EBDF13D24364779EC36DDBC4D390804AC7E(Object_FindObjectOfType_TisObstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90_m22249EBDF13D24364779EC36DDBC4D390804AC7E_RuntimeMethod_var);
		__this->___obstacle_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___obstacle_13), (void*)L_0);
		// HighScoreSetUp();
		Score_HighScoreSetUp_m1A4513F27E78A8897C0D0616CFE6B7A0F222E35F(__this, NULL);
		// int currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_1;
		L_1 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_1 = L_1;
		int32_t L_2;
		L_2 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_1), NULL);
		V_0 = L_2;
		// if (currentSceneIndex == 3 || currentSceneIndex == 4)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)3)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)4))))
		{
			goto IL_005d;
		}
	}

IL_002d:
	{
		// if(Input.touchCount > 0)
		int32_t L_5;
		L_5 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		// MainMenuButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___MainMenuButton_7;
		NullCheck(L_6);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_6, (bool)0, NULL);
		// RetryButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7 = __this->___RetryButton_8;
		NullCheck(L_7);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_7, (bool)0, NULL);
		// Invoke("ActivateButtons", 0.5f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral0F7E8F4ED1DE66C730B1EB68E9B69A7AE2062435, (0.5f), NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void Score::VariableDef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_VariableDef_m84B2617D6FAD8C07B1C6DDB25BDCA0DF363D52C7 (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// springScoreCollision = false;
		((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___springScoreCollision_11 = (bool)0;
		// rocketScoreCollision = false;
		((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___rocketScoreCollision_12 = (bool)0;
		// PlayerPrefs.GetInt("HighScore", 0);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, 0, NULL);
		// currentScore = 0;
		((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___currentScore_9 = 0;
		// }
		return;
	}
}
// System.Void Score::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_Update_m8F6F1768AC5316A30F5A79813D72B20EC6796E5A (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral148D8D24289182BF55A70881E9A4E943DC9596C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SceneManager.GetActiveScene() == SceneManager.GetSceneByName("NormalGameScene"))
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_1;
		L_1 = SceneManager_GetSceneByName_m112B7AAE231E82C8800F04640A692272C9522806(_stringLiteral148D8D24289182BF55A70881E9A4E943DC9596C0, NULL);
		bool L_2;
		L_2 = Scene_op_Equality_m299018477251CD19CF480FB98EE3C79F9DBE3482(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// scoreText.text = currentScore.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___scoreText_4;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___currentScore_9), NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_4);
	}

IL_002b:
	{
		// if (currentScore > PlayerPrefs.GetInt("HighScore", 0))
		int32_t L_5 = ((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___currentScore_9;
		int32_t L_6;
		L_6 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, 0, NULL);
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_0052;
		}
	}
	{
		// PlayerPrefs.SetInt("HighScore", currentScore);
		int32_t L_7 = ((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___currentScore_9;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, L_7, NULL);
		// AddHighScoreText = true;
		((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___AddHighScoreText_10 = (bool)1;
	}

IL_0052:
	{
		// FontChange();
		Score_FontChange_m3508EC0A74EBD5C13F692BCEEB2DBD763E88A0FE(__this, NULL);
		// }
		return;
	}
}
// System.Void Score::ActivateButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_ActivateButtons_m18D9ECCC2DAFA4D0A97C36D359D7C5B552F16FDC (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	{
		// MainMenuButton.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___MainMenuButton_7;
		NullCheck(L_0);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_0, (bool)1, NULL);
		// RetryButton.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___RetryButton_8;
		NullCheck(L_1);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Score::FontChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_FontChange_m3508EC0A74EBD5C13F692BCEEB2DBD763E88A0FE (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentScore == 10000)
		int32_t L_0 = ((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___currentScore_9;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)10000)))))
		{
			goto IL_001c;
		}
	}
	{
		// scoreText.fontSize = 125f;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___scoreText_4;
		NullCheck(L_1);
		TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_1, (125.0f), NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Score::HighScoreSetUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_HighScoreSetUp_m1A4513F27E78A8897C0D0616CFE6B7A0F222E35F (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// int currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_1 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_1), NULL);
		V_0 = L_1;
		// if (currentSceneIndex == 3 || currentSceneIndex == 4)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			goto IL_003b;
		}
	}

IL_0016:
	{
		// newHighScore.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___newHighScore_6;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// if (AddHighScoreText == true)
		bool L_5 = ((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___AddHighScoreText_10;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// newHighScore.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___newHighScore_6;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// AddHighScoreText = false;
		((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___AddHighScoreText_10 = (bool)0;
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void Score::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_OnTriggerEnter2D_m29963631A5AA35216C41E4442BCC36124B24464F (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collisionInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BB68348B59801B4A19F983C3AC0422CC5364594);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6658378453C1E3DB296C049578379DE211A7AEE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentScore += 5;
		int32_t L_0 = ((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___currentScore_9;
		((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___currentScore_9 = ((int32_t)il2cpp_codegen_add(L_0, 5));
		// if (collisionInfo.GetComponent<Collider2D>().name == "Spring Icon(Clone)")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_1 = ___collisionInfo0;
		NullCheck(L_1);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_2;
		L_2 = Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16(L_1, Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteral2BB68348B59801B4A19F983C3AC0422CC5364594, NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// springScoreCollision = true;
		((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___springScoreCollision_11 = (bool)1;
		return;
	}

IL_002a:
	{
		// else if (collisionInfo.GetComponent<Collider2D>().name == "Rocket Icon(Clone)")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_5 = ___collisionInfo0;
		NullCheck(L_5);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_6;
		L_6 = Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16(L_5, Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, _stringLiteral6658378453C1E3DB296C049578379DE211A7AEE1, NULL);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		// rocketScoreCollision = true;
		((Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_StaticFields*)il2cpp_codegen_static_fields_for(Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A_il2cpp_TypeInfo_var))->___rocketScoreCollision_12 = (bool)1;
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void Score::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_mDEDBA72E1F38C2F7CFF4E6C6556103C5D62C1670 (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Settings::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settings_Start_m9CDE38DF6F992E5812804DAE32C15EADA6FF881F (Settings_t238E6F7D65D376985A1E92357A35537B90034B36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral234F0BCEF52F66203C8DD0D2DF1F499A6F8E8D4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4555F3FD77D5313369C9BD9D84CB0DB8B3CBC58F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.GetFloat("MusicControl", 1);
		float L_0;
		L_0 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteral4555F3FD77D5313369C9BD9D84CB0DB8B3CBC58F, (1.0f), NULL);
		// PlayerPrefs.GetFloat("SFXControl", 1);
		float L_1;
		L_1 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteral234F0BCEF52F66203C8DD0D2DF1F499A6F8E8D4F, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void Settings::BugReport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settings_BugReport_mD7AD54FB4DC1462C1335BB55311F1BFB1A226E9A (Settings_t238E6F7D65D376985A1E92357A35537B90034B36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36B2209BC5423BEAFF422540E6ECC500FB9C5A74);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.OpenURL("https://forms.gle/UfcZnMzZPuq15CzZ6");
		Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564(_stringLiteral36B2209BC5423BEAFF422540E6ECC500FB9C5A74, NULL);
		// }
		return;
	}
}
// System.Void Settings::musicVolumeControl(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settings_musicVolumeControl_mA0FE52D8FE815EE7EA7E1A2EAE7D6EC702D17933 (Settings_t238E6F7D65D376985A1E92357A35537B90034B36* __this, float ___newVolume0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4555F3FD77D5313369C9BD9D84CB0DB8B3CBC58F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetFloat("MusicControl", newVolume);
		float L_0 = ___newVolume0;
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(_stringLiteral4555F3FD77D5313369C9BD9D84CB0DB8B3CBC58F, L_0, NULL);
		// }
		return;
	}
}
// System.Void Settings::sfxVolumeControl(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settings_sfxVolumeControl_mB1D815863ED586E17509E52FDBCEB939382ECDB5 (Settings_t238E6F7D65D376985A1E92357A35537B90034B36* __this, float ___newSFX0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral234F0BCEF52F66203C8DD0D2DF1F499A6F8E8D4F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetFloat("SFXControl", newSFX);
		float L_0 = ___newSFX0;
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(_stringLiteral234F0BCEF52F66203C8DD0D2DF1F499A6F8E8D4F, L_0, NULL);
		// }
		return;
	}
}
// System.Void Settings::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settings_Update_m559A12DBE1014C3FA6B8CAD119CEE9CBF8BD0042 (Settings_t238E6F7D65D376985A1E92357A35537B90034B36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral234F0BCEF52F66203C8DD0D2DF1F499A6F8E8D4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4555F3FD77D5313369C9BD9D84CB0DB8B3CBC58F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA578D2E9F8E278D4CC2C8AD83D644BB48F4118C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8B717C4435F4BA0C4B3D3DFD8FDAC4536701A92);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float volumeCent = (Mathf.Round(PlayerPrefs.GetFloat("MusicControl", 1) * 100));
		float L_0;
		L_0 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteral4555F3FD77D5313369C9BD9D84CB0DB8B3CBC58F, (1.0f), NULL);
		float L_1;
		L_1 = bankers_roundf(((float)il2cpp_codegen_multiply(L_0, (100.0f))));
		V_0 = L_1;
		// musicText.text = ("MUSIC: " + volumeCent.ToString() + "%");
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___musicText_4;
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralF8B717C4435F4BA0C4B3D3DFD8FDAC4536701A92, L_3, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_4);
		// musicSlider.value = PlayerPrefs.GetFloat("MusicControl", 1);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = __this->___musicSlider_6;
		float L_6;
		L_6 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteral4555F3FD77D5313369C9BD9D84CB0DB8B3CBC58F, (1.0f), NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_5, L_6);
		// float sfxCent = (Mathf.Round(PlayerPrefs.GetFloat("SFXControl", 1) * 100));
		float L_7;
		L_7 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteral234F0BCEF52F66203C8DD0D2DF1F499A6F8E8D4F, (1.0f), NULL);
		float L_8;
		L_8 = bankers_roundf(((float)il2cpp_codegen_multiply(L_7, (100.0f))));
		V_1 = L_8;
		// sfxText.text = ("SOUNDS: " + sfxCent.ToString() + "%");
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_9 = __this->___sfxText_5;
		String_t* L_10;
		L_10 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_1), NULL);
		String_t* L_11;
		L_11 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralA578D2E9F8E278D4CC2C8AD83D644BB48F4118C4, L_10, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_9, L_11);
		// sfxSlider.value = PlayerPrefs.GetFloat("SFXControl", 1);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_12 = __this->___sfxSlider_7;
		float L_13;
		L_13 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteral234F0BCEF52F66203C8DD0D2DF1F499A6F8E8D4F, (1.0f), NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_12, L_13);
		// }
		return;
	}
}
// System.Void Settings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settings__ctor_m9C18F49609E02B355BA4A50F27DC0987754E453C (Settings_t238E6F7D65D376985A1E92357A35537B90034B36* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ShakeCam::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeCam_Start_mCBD10F89A0ED026BA9C147FA17D6A050A511B558 (ShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = gameObject.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_0, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___animator_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void ShakeCam::CameraShake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeCam_CameraShake_m48BDB5DA15CF69EFC5D85D96DEDFB8C838604C4B (ShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4243C7295E57FC142C3F0861DE44D7BF16E98CEE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetTrigger("shake");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_4;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral4243C7295E57FC142C3F0861DE44D7BF16E98CEE, NULL);
		// }
		return;
	}
}
// System.Void ShakeCam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeCam__ctor_mEB578A1BACD2BC520D250677AB890B864A748C44 (ShakeCam_tCE0DA08F688C38A2ED6AD2E2CBDC2B694689F4D9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spring::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spring_Start_m16699F20C125F90D5A07AAEE362E4B991E0C469E (Spring_t66B84F1EFF0152352244B5A860119966ABDD3F2B* __this, const RuntimeMethod* method) 
{
	{
		// InitializeScript();
		Spring_InitializeScript_mFBC6F3D4D04D10C7BC12964A9F44B1B5B6C24FA5(__this, NULL);
		// }
		return;
	}
}
// System.Void Spring::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spring_Update_m2CE17B252C2887C43B09411828E5D7B9879FCA09 (Spring_t66B84F1EFF0152352244B5A860119966ABDD3F2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29041421D14BF1EF8397F2E12649E19C5EF6042A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetVector2();
		Spring_GetVector2_mC74B06AB978C64C332423BA7909B9E9A3C01F865(__this, NULL);
		// if (Player.playSpringFlash == true)
		bool L_0 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___playSpringFlash_19;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// animator.SetTrigger("springFlash");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___animator_8;
		NullCheck(L_1);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_1, _stringLiteral29041421D14BF1EF8397F2E12649E19C5EF6042A, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Spring::InitializeScript()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spring_InitializeScript_mFBC6F3D4D04D10C7BC12964A9F44B1B5B6C24FA5 (Spring_t66B84F1EFF0152352244B5A860119966ABDD3F2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTargetJoint2D_t6FC5B0F537E9374C199A6349B4E9E7510DED1C42_mA9016EB114E003C226E59999450251E92815E2C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// springVector = transform.position - player1.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___player1_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_1, L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_5, NULL);
		__this->___springVector_9 = L_6;
		// targetJoint = springMetal.GetComponent<TargetJoint2D>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___springMetal_5;
		NullCheck(L_7);
		TargetJoint2D_t6FC5B0F537E9374C199A6349B4E9E7510DED1C42* L_8;
		L_8 = GameObject_GetComponent_TisTargetJoint2D_t6FC5B0F537E9374C199A6349B4E9E7510DED1C42_mA9016EB114E003C226E59999450251E92815E2C6(L_7, GameObject_GetComponent_TisTargetJoint2D_t6FC5B0F537E9374C199A6349B4E9E7510DED1C42_mA9016EB114E003C226E59999450251E92815E2C6_RuntimeMethod_var);
		__this->___targetJoint_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetJoint_6), (void*)L_8);
		// rigidbody2D = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_9;
		L_9 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rigidbody2D_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigidbody2D_7), (void*)L_9);
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10;
		L_10 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_8 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_8), (void*)L_10);
		// }
		return;
	}
}
// System.Void Spring::GetVector2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spring_GetVector2_mC74B06AB978C64C332423BA7909B9E9A3C01F865 (Spring_t66B84F1EFF0152352244B5A860119966ABDD3F2B* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 playerPos = new Vector2(player1.transform.position.x, player1.transform.position.y);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___player1_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___player1_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___y_3;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_3, L_7, NULL);
		// transform.position = playerPos + springVector;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = __this->___springVector_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_11, NULL);
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_12, NULL);
		// Vector2 jointPos = new Vector2(player1.transform.position.x, jointHight);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___player1_4;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		float L_16 = L_15.___x_2;
		float L_17 = __this->___jointHight_10;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), L_16, L_17, NULL);
		// targetJoint.target = jointPos;
		TargetJoint2D_t6FC5B0F537E9374C199A6349B4E9E7510DED1C42* L_18 = __this->___targetJoint_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_1;
		NullCheck(L_18);
		TargetJoint2D_set_target_m1E3C256EA0BC2E7F84DF06D78B27CEC47427ED37(L_18, L_19, NULL);
		// }
		return;
	}
}
// System.Void Spring::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spring__ctor_mFEF92B90CA8F040E86D25CC4AD570F6C675C56BF (Spring_t66B84F1EFF0152352244B5A860119966ABDD3F2B* __this, const RuntimeMethod* method) 
{
	{
		// float jointHight = 4.029411f;
		__this->___jointHight_10 = (4.02941084f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WallCollider::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallCollider_OnTriggerStay2D_mB1963DD0FDACB967AB0940D51D5C3AE63FBC2F61 (WallCollider_t915559F08FD9A2D9B00F7DF2CED37D0575477984* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03E1088D1694962C15D09B8BEAF32508CDB88164);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.name == "TriangleObstacle(Clone)")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteral03E1088D1694962C15D09B8BEAF32508CDB88164, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// Destroy(collision.gameObject);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_3 = ___collision0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_4, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void WallCollider::TurnFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallCollider_TurnFalse_m08081CED562DDC343285D4877794FC06AC130D92 (WallCollider_t915559F08FD9A2D9B00F7DF2CED37D0575477984* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WallCollider_t915559F08FD9A2D9B00F7DF2CED37D0575477984_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// detectedTriangle = false;
		((WallCollider_t915559F08FD9A2D9B00F7DF2CED37D0575477984_StaticFields*)il2cpp_codegen_static_fields_for(WallCollider_t915559F08FD9A2D9B00F7DF2CED37D0575477984_il2cpp_TypeInfo_var))->___detectedTriangle_4 = (bool)0;
		// }
		return;
	}
}
// System.Void WallCollider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallCollider__ctor_mC63299904B7A8995F670B5129F966C536E9B5650 (WallCollider_t915559F08FD9A2D9B00F7DF2CED37D0575477984* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WallObstacle::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallObstacle_OnTriggerEnter2D_m0CBE5475221E6CB19FCCC0C1EFC055B3D210553B (WallObstacle_t94019BCFE843775755B87EC9C901EF89079FD3B6* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collisionInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2764B0F0877AAA6775AEF4F5E1B3A5823BA9933A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DA74D1569F67F188CFB8486F9627D427B5A2946);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collisionInfo.GetComponent<Collider2D>().name == "Score Counter")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collisionInfo0;
		NullCheck(L_0);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_1;
		L_1 = Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16(L_0, Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral2764B0F0877AAA6775AEF4F5E1B3A5823BA9933A, NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		// gameObject.GetComponent<Rigidbody2D>().gravityScale += 0.004f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_5;
		L_5 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_4, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_6 = L_5;
		NullCheck(L_6);
		float L_7;
		L_7 = Rigidbody2D_get_gravityScale_mCFA8E159F51B876E16EEF634A63415F7051AFF44(L_6, NULL);
		NullCheck(L_6);
		Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD(L_6, ((float)il2cpp_codegen_add(L_7, (0.00400000019f))), NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_8, NULL);
		return;
	}

IL_003f:
	{
		// else if (collisionInfo.GetComponent<Collider2D>().name == "Spring Metal")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_9 = ___collisionInfo0;
		NullCheck(L_9);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_10;
		L_10 = Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16(L_9, Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteral7DA74D1569F67F188CFB8486F9627D427B5A2946, NULL);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_13, NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void WallObstacle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallObstacle__ctor_m410AF0332BDFEA9727547B0AAB3B75B72B184368 (WallObstacle_t94019BCFE843775755B87EC9C901EF89079FD3B6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LetterboxCamera.CameraRatio::.ctor(UnityEngine.Camera,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRatio__ctor_m29959CB959C3C45866E8753A41185FA7DCDEBB6F (CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____anchor1, const RuntimeMethod* method) 
{
	{
		// public CameraRatio (Camera _camera, Vector2 _anchor) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// camera = _camera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ____camera0;
		__this->___camera_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___camera_0), (void*)L_0);
		// vectorAnchor = _anchor;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ____anchor1;
		__this->___vectorAnchor_2 = L_1;
		// originViewPort = camera.rect;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___camera_0;
		NullCheck(L_2);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		L_3 = Camera_get_rect_m848C23B32814D1351E43F0A0110DB8ECA19C6772(L_2, NULL);
		__this->___originViewPort_3 = L_3;
		// }
		return;
	}
}
// System.Void LetterboxCamera.CameraRatio::ResetOriginViewport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRatio_ResetOriginViewport_m564D7574913E50287A43B03FF57AF1EC41471C09 (CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* __this, const RuntimeMethod* method) 
{
	{
		// originViewPort = camera.rect;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___camera_0;
		NullCheck(L_0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = Camera_get_rect_m848C23B32814D1351E43F0A0110DB8ECA19C6772(L_0, NULL);
		__this->___originViewPort_3 = L_1;
		// SetAnchorBasedOnEnum(anchor);
		int32_t L_2 = __this->___anchor_1;
		CameraRatio_SetAnchorBasedOnEnum_mEE047CA5F68639AC68873DBC5BC357D245AE2A60(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void LetterboxCamera.CameraRatio::SetAnchorBasedOnEnum(LetterboxCamera.CameraRatio/CameraAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRatio_SetAnchorBasedOnEnum_mEE047CA5F68639AC68873DBC5BC357D245AE2A60 (CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* __this, int32_t ____anchor0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ____anchor0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_002b;
			}
			case 1:
			{
				goto IL_0041;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_006d;
			}
			case 4:
			{
				goto IL_0083;
			}
			case 5:
			{
				goto IL_0099;
			}
			case 6:
			{
				goto IL_00af;
			}
			case 7:
			{
				goto IL_00c5;
			}
			case 8:
			{
				goto IL_00db;
			}
		}
	}
	{
		return;
	}

IL_002b:
	{
		// vectorAnchor = new Vector2(0.5f, 0.5f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		__this->___vectorAnchor_2 = L_1;
		// break;
		return;
	}

IL_0041:
	{
		// vectorAnchor = new Vector2(0.5f, 1f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), (0.5f), (1.0f), /*hidden argument*/NULL);
		__this->___vectorAnchor_2 = L_2;
		// break;
		return;
	}

IL_0057:
	{
		// vectorAnchor = new Vector2(0.5f, 0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), (0.5f), (0.0f), /*hidden argument*/NULL);
		__this->___vectorAnchor_2 = L_3;
		// break;
		return;
	}

IL_006d:
	{
		// vectorAnchor = new Vector2(0f, 0.5f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), (0.0f), (0.5f), /*hidden argument*/NULL);
		__this->___vectorAnchor_2 = L_4;
		// break;
		return;
	}

IL_0083:
	{
		// vectorAnchor = new Vector2(1f, 0.5f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (1.0f), (0.5f), /*hidden argument*/NULL);
		__this->___vectorAnchor_2 = L_5;
		// break;
		return;
	}

IL_0099:
	{
		// vectorAnchor = new Vector2(0f, 1f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___vectorAnchor_2 = L_6;
		// break;
		return;
	}

IL_00af:
	{
		// vectorAnchor = new Vector2(1f, 1f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->___vectorAnchor_2 = L_7;
		// break;
		return;
	}

IL_00c5:
	{
		// vectorAnchor = new Vector2(0f, 0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___vectorAnchor_2 = L_8;
		// break;
		return;
	}

IL_00db:
	{
		// vectorAnchor = new Vector2(1f, 0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___vectorAnchor_2 = L_9;
		// }
		return;
	}
}
// System.Void LetterboxCamera.CameraRatio::CalculateAndSetCameraRatio(System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRatio_CalculateAndSetCameraRatio_m33C07FD7E2FC9616B210E2389A5183C9F67B749F (CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* __this, float ____width0, float ____height1, bool ____horizontalLetterbox2, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Rect localViewPort = new Rect();
		il2cpp_codegen_initobj((&V_0), sizeof(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D));
		// if (_horizontalLetterbox) { // current aspect is wider than target aspect so shorten down height of the viewport
		bool L_0 = ____horizontalLetterbox2;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// localViewPort.height = _height;
		float L_1 = ____height1;
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03((&V_0), L_1, NULL);
		// localViewPort.width = 1;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A((&V_0), (1.0f), NULL);
		goto IL_0035;
	}

IL_0021:
	{
		// localViewPort.height = 1f;
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03((&V_0), (1.0f), NULL);
		// localViewPort.width = _width;
		float L_2 = ____width0;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A((&V_0), L_2, NULL);
	}

IL_0035:
	{
		// Rect screenViewPortHorizontal = new Rect();
		il2cpp_codegen_initobj((&V_1), sizeof(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D));
		// Rect screenViewPortVertical = new Rect();
		il2cpp_codegen_initobj((&V_2), sizeof(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D));
		// screenViewPortHorizontal.width = originViewPort.width;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_3 = (&__this->___originViewPort_3);
		float L_4;
		L_4 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_3, NULL);
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A((&V_1), L_4, NULL);
		// screenViewPortHorizontal.height = originViewPort.width * (localViewPort.height / localViewPort.width);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_5 = (&__this->___originViewPort_3);
		float L_6;
		L_6 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_5, NULL);
		float L_7;
		L_7 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		float L_8;
		L_8 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03((&V_1), ((float)il2cpp_codegen_multiply(L_6, ((float)(L_7/L_8)))), NULL);
		// screenViewPortHorizontal.x = originViewPort.x;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_9 = (&__this->___originViewPort_3);
		float L_10;
		L_10 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_9, NULL);
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406((&V_1), L_10, NULL);
		// screenViewPortHorizontal.y = Mathf.Lerp(originViewPort.y, originViewPort.y + (originViewPort.height - screenViewPortHorizontal.height), vectorAnchor.y);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_11 = (&__this->___originViewPort_3);
		float L_12;
		L_12 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_11, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_13 = (&__this->___originViewPort_3);
		float L_14;
		L_14 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_13, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_15 = (&__this->___originViewPort_3);
		float L_16;
		L_16 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_15, NULL);
		float L_17;
		L_17 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18 = (&__this->___vectorAnchor_2);
		float L_19 = L_18->___y_1;
		float L_20;
		L_20 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_12, ((float)il2cpp_codegen_add(L_14, ((float)il2cpp_codegen_subtract(L_16, L_17)))), L_19, NULL);
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629((&V_1), L_20, NULL);
		// screenViewPortVertical.width = originViewPort.height * (localViewPort.width / localViewPort.height);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_21 = (&__this->___originViewPort_3);
		float L_22;
		L_22 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_21, NULL);
		float L_23;
		L_23 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		float L_24;
		L_24 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A((&V_2), ((float)il2cpp_codegen_multiply(L_22, ((float)(L_23/L_24)))), NULL);
		// screenViewPortVertical.height = originViewPort.height;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_25 = (&__this->___originViewPort_3);
		float L_26;
		L_26 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_25, NULL);
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03((&V_2), L_26, NULL);
		// screenViewPortVertical.x = Mathf.Lerp(originViewPort.x, originViewPort.x + (originViewPort.width - screenViewPortVertical.width), vectorAnchor.x);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_27 = (&__this->___originViewPort_3);
		float L_28;
		L_28 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_27, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_29 = (&__this->___originViewPort_3);
		float L_30;
		L_30 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_29, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_31 = (&__this->___originViewPort_3);
		float L_32;
		L_32 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_31, NULL);
		float L_33;
		L_33 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_2), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_34 = (&__this->___vectorAnchor_2);
		float L_35 = L_34->___x_0;
		float L_36;
		L_36 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_28, ((float)il2cpp_codegen_add(L_30, ((float)il2cpp_codegen_subtract(L_32, L_33)))), L_35, NULL);
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406((&V_2), L_36, NULL);
		// screenViewPortVertical.y = originViewPort.y;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_37 = (&__this->___originViewPort_3);
		float L_38;
		L_38 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_37, NULL);
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629((&V_2), L_38, NULL);
		// if (screenViewPortHorizontal.height >= screenViewPortVertical.height && screenViewPortHorizontal.width >= screenViewPortVertical.width) {
		float L_39;
		L_39 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_1), NULL);
		float L_40;
		L_40 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_2), NULL);
		if ((!(((float)L_39) >= ((float)L_40))))
		{
			goto IL_01b5;
		}
	}
	{
		float L_41;
		L_41 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_1), NULL);
		float L_42;
		L_42 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_2), NULL);
		if ((!(((float)L_41) >= ((float)L_42))))
		{
			goto IL_01b5;
		}
	}
	{
		// if (screenViewPortHorizontal.height <= originViewPort.height && screenViewPortHorizontal.width <= originViewPort.width) {
		float L_43;
		L_43 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_1), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_44 = (&__this->___originViewPort_3);
		float L_45;
		L_45 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_44, NULL);
		if ((!(((float)L_43) <= ((float)L_45))))
		{
			goto IL_01a8;
		}
	}
	{
		float L_46;
		L_46 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_1), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_47 = (&__this->___originViewPort_3);
		float L_48;
		L_48 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_47, NULL);
		if ((!(((float)L_46) <= ((float)L_48))))
		{
			goto IL_01a8;
		}
	}
	{
		// camera.rect = screenViewPortHorizontal;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_49 = __this->___camera_0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_50 = V_1;
		NullCheck(L_49);
		Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(L_49, L_50, NULL);
		return;
	}

IL_01a8:
	{
		// camera.rect = screenViewPortVertical;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_51 = __this->___camera_0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_52 = V_2;
		NullCheck(L_51);
		Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(L_51, L_52, NULL);
		return;
	}

IL_01b5:
	{
		// if (screenViewPortVertical.height <= originViewPort.height && screenViewPortVertical.width <= originViewPort.width) {
		float L_53;
		L_53 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_2), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_54 = (&__this->___originViewPort_3);
		float L_55;
		L_55 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_54, NULL);
		if ((!(((float)L_53) <= ((float)L_55))))
		{
			goto IL_01ea;
		}
	}
	{
		float L_56;
		L_56 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_2), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_57 = (&__this->___originViewPort_3);
		float L_58;
		L_58 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_57, NULL);
		if ((!(((float)L_56) <= ((float)L_58))))
		{
			goto IL_01ea;
		}
	}
	{
		// camera.rect = screenViewPortVertical;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_59 = __this->___camera_0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_60 = V_2;
		NullCheck(L_59);
		Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(L_59, L_60, NULL);
		return;
	}

IL_01ea:
	{
		// camera.rect = screenViewPortHorizontal;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_61 = __this->___camera_0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_62 = V_1;
		NullCheck(L_61);
		Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(L_61, L_62, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LetterboxCamera.ForceCameraRatio::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForceCameraRatio_Start_m6B0170AA85358334B0E2FF1DFAC04DAA6F3C00BC (ForceCameraRatio_t070B8D83C7FF341491F7D9A9D18A8B5C5B6A75CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF244F62294D24B1672E6843C0914602F5B969FD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m70DC0D14F9E2CE143686FFE1482CFEC9F39E46C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4C5A5DE350E20C48F9EF9A2A633A3FEC96A5DCA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52FB3608DA9FF0DA1E23537AC545BFA3D8148520);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD11B4EB8AA949F9CA7F74E0E4114726DAA98A4C9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (findCamerasAutomatically) {
		bool L_0 = __this->___findCamerasAutomatically_8;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// FindAllCamerasInScene();
		ForceCameraRatio_FindAllCamerasInScene_m5058D0138186E0EAAF4A6A707AD244D33B7805C9(__this, NULL);
		goto IL_0030;
	}

IL_0010:
	{
		// } else if (cameras == null || cameras.Count == 0) {
		List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* L_1 = __this->___cameras_10;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* L_2 = __this->___cameras_10;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m70DC0D14F9E2CE143686FFE1482CFEC9F39E46C8_inline(L_2, List_1_get_Count_m70DC0D14F9E2CE143686FFE1482CFEC9F39E46C8_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0030;
		}
	}

IL_0025:
	{
		// cameras = new List<CameraRatio>();
		List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* L_4 = (List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C*)il2cpp_codegen_object_new(List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_mF244F62294D24B1672E6843C0914602F5B969FD4(L_4, List_1__ctor_mF244F62294D24B1672E6843C0914602F5B969FD4_RuntimeMethod_var);
		__this->___cameras_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameras_10), (void*)L_4);
	}

IL_0030:
	{
		// ValidateCameraArray();
		ForceCameraRatio_ValidateCameraArray_m72E5BF4EB12E6D051F811BD9730C08C9C018EE13(__this, NULL);
		// for (int i = 0; i < cameras.Count; i++) {
		V_0 = 0;
		goto IL_004f;
	}

IL_003a:
	{
		// cameras[i].ResetOriginViewport();
		List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* L_5 = __this->___cameras_10;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* L_7;
		L_7 = List_1_get_Item_m4C5A5DE350E20C48F9EF9A2A633A3FEC96A5DCA2(L_5, L_6, List_1_get_Item_m4C5A5DE350E20C48F9EF9A2A633A3FEC96A5DCA2_RuntimeMethod_var);
		NullCheck(L_7);
		CameraRatio_ResetOriginViewport_m564D7574913E50287A43B03FF57AF1EC41471C09(L_7, NULL);
		// for (int i = 0; i < cameras.Count; i++) {
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_004f:
	{
		// for (int i = 0; i < cameras.Count; i++) {
		int32_t L_9 = V_0;
		List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* L_10 = __this->___cameras_10;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m70DC0D14F9E2CE143686FFE1482CFEC9F39E46C8_inline(L_10, List_1_get_Count_m70DC0D14F9E2CE143686FFE1482CFEC9F39E46C8_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_003a;
		}
	}
	{
		// if (createCameraForLetterBoxRendering) {
		bool L_12 = __this->___createCameraForLetterBoxRendering_7;
		if (!L_12)
		{
			goto IL_0141;
		}
	}
	{
		// letterBoxCamera = new GameObject().AddComponent<Camera>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_13, NULL);
		NullCheck(L_13);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14;
		L_14 = GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142(L_13, GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var);
		__this->___letterBoxCamera_11 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___letterBoxCamera_11), (void*)L_14);
		// letterBoxCamera.backgroundColor = letterBoxCameraColor;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15 = __this->___letterBoxCamera_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = __this->___letterBoxCameraColor_9;
		NullCheck(L_15);
		Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138(L_15, L_16, NULL);
		// letterBoxCamera.cullingMask = 0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = __this->___letterBoxCamera_11;
		NullCheck(L_17);
		Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32(L_17, 0, NULL);
		// letterBoxCamera.depth = -100;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18 = __this->___letterBoxCamera_11;
		NullCheck(L_18);
		Camera_set_depth_m595FA2A4FEBC90E730810BBFB55E4A2C2134066F(L_18, (-100.0f), NULL);
		// letterBoxCamera.farClipPlane = 1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19 = __this->___letterBoxCamera_11;
		NullCheck(L_19);
		Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139(L_19, (1.0f), NULL);
		// letterBoxCamera.useOcclusionCulling = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_20 = __this->___letterBoxCamera_11;
		NullCheck(L_20);
		Camera_set_useOcclusionCulling_mD3036B0CBB5E6A1BF33810AB8FDEE3CD1A4D7C04(L_20, (bool)0, NULL);
		// letterBoxCamera.allowHDR = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_21 = __this->___letterBoxCamera_11;
		NullCheck(L_21);
		Camera_set_allowHDR_m44211153DAF6DF9A51142EC7760A53777C1F3315(L_21, (bool)0, NULL);
		// letterBoxCamera.clearFlags = CameraClearFlags.Color;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22 = __this->___letterBoxCamera_11;
		NullCheck(L_22);
		Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93(L_22, 2, NULL);
		// letterBoxCamera.name = "Letter Box Camera";
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_23 = __this->___letterBoxCamera_11;
		NullCheck(L_23);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_23, _stringLiteral52FB3608DA9FF0DA1E23537AC545BFA3D8148520, NULL);
		// for (int i = 0; i < cameras.Count; i++) {
		V_1 = 0;
		goto IL_0133;
	}

IL_00ed:
	{
		// if (cameras[i].camera.depth == -100) {
		List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* L_24 = __this->___cameras_10;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* L_26;
		L_26 = List_1_get_Item_m4C5A5DE350E20C48F9EF9A2A633A3FEC96A5DCA2(L_24, L_25, List_1_get_Item_m4C5A5DE350E20C48F9EF9A2A633A3FEC96A5DCA2_RuntimeMethod_var);
		NullCheck(L_26);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_27 = L_26->___camera_0;
		NullCheck(L_27);
		float L_28;
		L_28 = Camera_get_depth_mDF67FFF8ED61750467DFC4C6D8F236850AD1BB1D(L_27, NULL);
		if ((!(((float)L_28) == ((float)(-100.0f)))))
		{
			goto IL_012f;
		}
	}
	{
		// Debug.LogError(cameras[i].camera.name + " has a depth of -100 and may conflict with the Letter Box Camera in Forced Camera Ratio!");
		List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* L_29 = __this->___cameras_10;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* L_31;
		L_31 = List_1_get_Item_m4C5A5DE350E20C48F9EF9A2A633A3FEC96A5DCA2(L_29, L_30, List_1_get_Item_m4C5A5DE350E20C48F9EF9A2A633A3FEC96A5DCA2_RuntimeMethod_var);
		NullCheck(L_31);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_32 = L_31->___camera_0;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_32, NULL);
		String_t* L_34;
		L_34 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_33, _stringLiteralD11B4EB8AA949F9CA7F74E0E4114726DAA98A4C9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_34, NULL);
	}

IL_012f:
	{
		// for (int i = 0; i < cameras.Count; i++) {
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_0133:
	{
		// for (int i = 0; i < cameras.Count; i++) {
		int32_t L_36 = V_1;
		List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* L_37 = __this->___cameras_10;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = List_1_get_Count_m70DC0D14F9E2CE143686FFE1482CFEC9F39E46C8_inline(L_37, List_1_get_Count_m70DC0D14F9E2CE143686FFE1482CFEC9F39E46C8_RuntimeMethod_var);
		if ((((int32_t)L_36) < ((int32_t)L_38)))
		{
			goto IL_00ed;
		}
	}

IL_0141:
	{
		// if (forceRatioOnAwake) {
		bool L_39 = __this->___forceRatioOnAwake_5;
		if (!L_39)
		{
			goto IL_014f;
		}
	}
	{
		// CalculateAndSetAllCameraRatios();
		ForceCameraRatio_CalculateAndSetAllCameraRatios_mD7874122B82829E764DCC9569D6EC48FE53FCA9B(__this, NULL);
	}

IL_014f:
	{
		// }
		return;
	}
}
// System.Void LetterboxCamera.ForceCameraRatio::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForceCameraRatio_Update_mBD62188A419C31AB00BF2D975E0E07785180C64D (ForceCameraRatio_t070B8D83C7FF341491F7D9A9D18A8B5C5B6A75CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (listenForWindowChanges) {
		bool L_0 = __this->___listenForWindowChanges_6;
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		// CalculateAndSetAllCameraRatios();
		ForceCameraRatio_CalculateAndSetAllCameraRatios_mD7874122B82829E764DCC9569D6EC48FE53FCA9B(__this, NULL);
		// if (letterBoxCamera != null) {
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___letterBoxCamera_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// letterBoxCamera.backgroundColor = letterBoxCameraColor;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___letterBoxCamera_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___letterBoxCameraColor_9;
		NullCheck(L_3);
		Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138(L_3, L_4, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// LetterboxCamera.CameraRatio LetterboxCamera.ForceCameraRatio::GetCameraRatioByCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* ForceCameraRatio_GetCameraRatioByCamera_mFE6F6D45D5D19C01FECCEB623F7113C9378DD3E0 (ForceCameraRatio_t070B8D83C7FF341491F7D9A9D18A8B5C5B6A75CE* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m70DC0D14F9E2CE143686FFE1482CFEC9F39E46C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4C5A5DE350E20C48F9EF9A2A633A3FEC96A5DCA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (cameras == null) {
		List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* L_0 = __this->___cameras_10;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return null;
		return (CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92*)NULL;
	}

IL_000a:
	{
		// for (int i = 0; i < cameras.Count; i++) {
		V_0 = 0;
		goto IL_0046;
	}

IL_000e:
	{
		// if (cameras[i] != null && cameras[i].camera == _camera) {
		List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* L_1 = __this->___cameras_10;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* L_3;
		L_3 = List_1_get_Item_m4C5A5DE350E20C48F9EF9A2A633A3FEC96A5DCA2(L_1, L_2, List_1_get_Item_m4C5A5DE350E20C48F9EF9A2A633A3FEC96A5DCA2_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* L_4 = __this->___cameras_10;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* L_6;
		L_6 = List_1_get_Item_m4C5A5DE350E20C48F9EF9A2A633A3FEC96A5DCA2(L_4, L_5, List_1_get_Item_m4C5A5DE350E20C48F9EF9A2A633A3FEC96A5DCA2_RuntimeMethod_var);
		NullCheck(L_6);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = L_6->___camera_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = ____camera0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		// return cameras[i];
		List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* L_10 = __this->___cameras_10;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* L_12;
		L_12 = List_1_get_Item_m4C5A5DE350E20C48F9EF9A2A633A3FEC96A5DCA2(L_10, L_11, List_1_get_Item_m4C5A5DE350E20C48F9EF9A2A633A3FEC96A5DCA2_RuntimeMethod_var);
		return L_12;
	}

IL_0042:
	{
		// for (int i = 0; i < cameras.Count; i++) {
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0046:
	{
		// for (int i = 0; i < cameras.Count; i++) {
		int32_t L_14 = V_0;
		List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* L_15 = __this->___cameras_10;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m70DC0D14F9E2CE143686FFE1482CFEC9F39E46C8_inline(L_15, List_1_get_Count_m70DC0D14F9E2CE143686FFE1482CFEC9F39E46C8_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_000e;
		}
	}
	{
		// return null;
		return (CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92*)NULL;
	}
}
// System.Void LetterboxCamera.ForceCameraRatio::ValidateCameraArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForceCameraRatio_ValidateCameraArray_m72E5BF4EB12E6D051F811BD9730C08C9C018EE13 (ForceCameraRatio_t070B8D83C7FF341491F7D9A9D18A8B5C5B6A75CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mC6C744881DAE323F77F4EBE036571AF7DE255F88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m70DC0D14F9E2CE143686FFE1482CFEC9F39E46C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4C5A5DE350E20C48F9EF9A2A633A3FEC96A5DCA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = cameras.Count - 1; i >= 0; i--) {
		List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* L_0 = __this->___cameras_10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m70DC0D14F9E2CE143686FFE1482CFEC9F39E46C8_inline(L_0, List_1_get_Count_m70DC0D14F9E2CE143686FFE1482CFEC9F39E46C8_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0039;
	}

IL_0010:
	{
		// if (cameras[i].camera == null) {
		List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* L_2 = __this->___cameras_10;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* L_4;
		L_4 = List_1_get_Item_m4C5A5DE350E20C48F9EF9A2A633A3FEC96A5DCA2(L_2, L_3, List_1_get_Item_m4C5A5DE350E20C48F9EF9A2A633A3FEC96A5DCA2_RuntimeMethod_var);
		NullCheck(L_4);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = L_4->___camera_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		// cameras.RemoveAt(i);
		List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* L_7 = __this->___cameras_10;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		List_1_RemoveAt_mC6C744881DAE323F77F4EBE036571AF7DE255F88(L_7, L_8, List_1_RemoveAt_mC6C744881DAE323F77F4EBE036571AF7DE255F88_RuntimeMethod_var);
	}

IL_0035:
	{
		// for (int i = cameras.Count - 1; i >= 0; i--) {
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
	}

IL_0039:
	{
		// for (int i = cameras.Count - 1; i >= 0; i--) {
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LetterboxCamera.ForceCameraRatio::FindAllCamerasInScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForceCameraRatio_FindAllCamerasInScene_m5058D0138186E0EAAF4A6A707AD244D33B7805C9 (ForceCameraRatio_t070B8D83C7FF341491F7D9A9D18A8B5C5B6A75CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC6AE1576E51C068544893E904EE01F7E9121FEF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF244F62294D24B1672E6843C0914602F5B969FD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mE5AD3DBF2688F03D7BDBFD66FAF03B0CD77D2117_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Camera[] allCameras = FindObjectsOfType<Camera>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_0;
		L_0 = Object_FindObjectsOfType_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mE5AD3DBF2688F03D7BDBFD66FAF03B0CD77D2117(Object_FindObjectsOfType_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mE5AD3DBF2688F03D7BDBFD66FAF03B0CD77D2117_RuntimeMethod_var);
		V_0 = L_0;
		// cameras = new List<CameraRatio>();
		List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* L_1 = (List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C*)il2cpp_codegen_object_new(List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF244F62294D24B1672E6843C0914602F5B969FD4(L_1, List_1__ctor_mF244F62294D24B1672E6843C0914602F5B969FD4_RuntimeMethod_var);
		__this->___cameras_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameras_10), (void*)L_1);
		// for (int i = 0; i < allCameras.Length; i++) {
		V_1 = 0;
		goto IL_0053;
	}

IL_0015:
	{
		// if ((createCameraForLetterBoxRendering || allCameras[i] != letterBoxCamera)) { // Ignore the Custom LetterBox Camera
		bool L_2 = __this->___createCameraForLetterBoxRendering_7;
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = __this->___letterBoxCamera_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_004f;
		}
	}

IL_002d:
	{
		// cameras.Add(new CameraRatio(allCameras[i], new Vector2(0.5f, 0.5f)));
		List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* L_9 = __this->___cameras_10;
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), (0.5f), (0.5f), /*hidden argument*/NULL);
		CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* L_15 = (CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92*)il2cpp_codegen_object_new(CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		CameraRatio__ctor_m29959CB959C3C45866E8753A41185FA7DCDEBB6F(L_15, L_13, L_14, NULL);
		NullCheck(L_9);
		List_1_Add_mC6AE1576E51C068544893E904EE01F7E9121FEF0_inline(L_9, L_15, List_1_Add_mC6AE1576E51C068544893E904EE01F7E9121FEF0_RuntimeMethod_var);
	}

IL_004f:
	{
		// for (int i = 0; i < allCameras.Length; i++) {
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0053:
	{
		// for (int i = 0; i < allCameras.Length; i++) {
		int32_t L_17 = V_1;
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0015;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LetterboxCamera.ForceCameraRatio::CalculateAndSetAllCameraRatios()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForceCameraRatio_CalculateAndSetAllCameraRatios_mD7874122B82829E764DCC9569D6EC48FE53FCA9B (ForceCameraRatio_t070B8D83C7FF341491F7D9A9D18A8B5C5B6A75CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m70DC0D14F9E2CE143686FFE1482CFEC9F39E46C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4C5A5DE350E20C48F9EF9A2A633A3FEC96A5DCA2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	{
		// float targetAspect = ratio.x / ratio.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___ratio_4);
		float L_1 = L_0->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___ratio_4);
		float L_3 = L_2->___y_1;
		V_0 = ((float)(L_1/L_3));
		// float currentAspect = ((float)Screen.width) / ((float)Screen.height);
		int32_t L_4;
		L_4 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_5;
		L_5 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		V_1 = ((float)(((float)L_4)/((float)L_5)));
		// bool horizontalLetterbox = false;
		V_2 = (bool)0;
		// float fullWidth = targetAspect / currentAspect;
		float L_6 = V_0;
		float L_7 = V_1;
		V_3 = ((float)(L_6/L_7));
		// float fullHeight = currentAspect / targetAspect;
		float L_8 = V_1;
		float L_9 = V_0;
		V_4 = ((float)(L_8/L_9));
		// if (currentAspect > targetAspect) {
		float L_10 = V_1;
		float L_11 = V_0;
		if ((!(((float)L_10) > ((float)L_11))))
		{
			goto IL_0037;
		}
	}
	{
		// horizontalLetterbox = false;
		V_2 = (bool)0;
	}

IL_0037:
	{
		// for (int i = 0; i < cameras.Count; i++) {
		V_5 = 0;
		goto IL_007c;
	}

IL_003c:
	{
		// cameras[i].SetAnchorBasedOnEnum(cameras[i].anchor);
		List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* L_12 = __this->___cameras_10;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* L_14;
		L_14 = List_1_get_Item_m4C5A5DE350E20C48F9EF9A2A633A3FEC96A5DCA2(L_12, L_13, List_1_get_Item_m4C5A5DE350E20C48F9EF9A2A633A3FEC96A5DCA2_RuntimeMethod_var);
		List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* L_15 = __this->___cameras_10;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* L_17;
		L_17 = List_1_get_Item_m4C5A5DE350E20C48F9EF9A2A633A3FEC96A5DCA2(L_15, L_16, List_1_get_Item_m4C5A5DE350E20C48F9EF9A2A633A3FEC96A5DCA2_RuntimeMethod_var);
		NullCheck(L_17);
		int32_t L_18 = L_17->___anchor_1;
		NullCheck(L_14);
		CameraRatio_SetAnchorBasedOnEnum_mEE047CA5F68639AC68873DBC5BC357D245AE2A60(L_14, L_18, NULL);
		// cameras[i].CalculateAndSetCameraRatio(fullWidth, fullHeight, horizontalLetterbox);
		List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* L_19 = __this->___cameras_10;
		int32_t L_20 = V_5;
		NullCheck(L_19);
		CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* L_21;
		L_21 = List_1_get_Item_m4C5A5DE350E20C48F9EF9A2A633A3FEC96A5DCA2(L_19, L_20, List_1_get_Item_m4C5A5DE350E20C48F9EF9A2A633A3FEC96A5DCA2_RuntimeMethod_var);
		float L_22 = V_3;
		float L_23 = V_4;
		bool L_24 = V_2;
		NullCheck(L_21);
		CameraRatio_CalculateAndSetCameraRatio_m33C07FD7E2FC9616B210E2389A5183C9F67B749F(L_21, L_22, L_23, L_24, NULL);
		// for (int i = 0; i < cameras.Count; i++) {
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_007c:
	{
		// for (int i = 0; i < cameras.Count; i++) {
		int32_t L_26 = V_5;
		List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* L_27 = __this->___cameras_10;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_m70DC0D14F9E2CE143686FFE1482CFEC9F39E46C8_inline(L_27, List_1_get_Count_m70DC0D14F9E2CE143686FFE1482CFEC9F39E46C8_RuntimeMethod_var);
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_003c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LetterboxCamera.ForceCameraRatio::SetCameraAnchor(UnityEngine.Camera,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForceCameraRatio_SetCameraAnchor_m31FEE9DB8EB5A1197501AD40B63F760E30D651D7 (ForceCameraRatio_t070B8D83C7FF341491F7D9A9D18A8B5C5B6A75CE* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____anchor1, const RuntimeMethod* method) 
{
	CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* V_0 = NULL;
	{
		// CameraRatio camera = GetCameraRatioByCamera(_camera);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ____camera0;
		CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* L_1;
		L_1 = ForceCameraRatio_GetCameraRatioByCamera_mFE6F6D45D5D19C01FECCEB623F7113C9378DD3E0(__this, L_0, NULL);
		V_0 = L_1;
		// if (camera != null) {
		CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// camera.vectorAnchor = _anchor;
		CameraRatio_t2D0BB9E15F7C3C29A0BAF897A20F990C12BD9E92* L_3 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ____anchor1;
		NullCheck(L_3);
		L_3->___vectorAnchor_2 = L_4;
	}

IL_0012:
	{
		// }
		return;
	}
}
// LetterboxCamera.CameraRatio[] LetterboxCamera.ForceCameraRatio::GetCameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraRatioU5BU5D_tF1EEE7FC4683355E5BB8F0C8A0C8C7800EC6A6F9* ForceCameraRatio_GetCameras_mAFFC06879034AB96DA66A8EF2C05297C3CB4072C (ForceCameraRatio_t070B8D83C7FF341491F7D9A9D18A8B5C5B6A75CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mC718531F37E170515D9959EE450D39E18E4D0F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF244F62294D24B1672E6843C0914602F5B969FD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (cameras == null) {
		List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* L_0 = __this->___cameras_10;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// cameras = new List<CameraRatio>();
		List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* L_1 = (List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C*)il2cpp_codegen_object_new(List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF244F62294D24B1672E6843C0914602F5B969FD4(L_1, List_1__ctor_mF244F62294D24B1672E6843C0914602F5B969FD4_RuntimeMethod_var);
		__this->___cameras_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameras_10), (void*)L_1);
	}

IL_0013:
	{
		// return cameras.ToArray();
		List_1_t90539776DFEF9A5A9028B0A95525C5A817C6430C* L_2 = __this->___cameras_10;
		NullCheck(L_2);
		CameraRatioU5BU5D_tF1EEE7FC4683355E5BB8F0C8A0C8C7800EC6A6F9* L_3;
		L_3 = List_1_ToArray_mC718531F37E170515D9959EE450D39E18E4D0F16(L_2, List_1_ToArray_mC718531F37E170515D9959EE450D39E18E4D0F16_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void LetterboxCamera.ForceCameraRatio::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForceCameraRatio__ctor_m8BAC3908B0A35CCF6A856229B65344280027CF57 (ForceCameraRatio_t070B8D83C7FF341491F7D9A9D18A8B5C5B6A75CE* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 ratio = new Vector2(16, 9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (16.0f), (9.0f), /*hidden argument*/NULL);
		__this->___ratio_4 = L_0;
		// public bool forceRatioOnAwake = true;
		__this->___forceRatioOnAwake_5 = (bool)1;
		// public bool listenForWindowChanges = true;
		__this->___listenForWindowChanges_6 = (bool)1;
		// public bool createCameraForLetterBoxRendering = true;
		__this->___createCameraForLetterBoxRendering_7 = (bool)1;
		// public bool findCamerasAutomatically = true;
		__this->___findCamerasAutomatically_8 = (bool)1;
		// public Color letterBoxCameraColor = new Color(0, 0, 0, 1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_1), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___letterBoxCameraColor_9 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_RotateTowards_mD7C332050D876CB28A704B9005476BE06823F85F_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___from0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___to1, float ___maxDegreesDelta2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___from0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___to1;
		float L_2;
		L_2 = Quaternion_Angle_m445E005E6F9211283EEA3F0BD4FF2DC20FE3640A_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) == ((float)(0.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___to1;
		V_2 = L_5;
		goto IL_0030;
	}

IL_0019:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___from0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = ___to1;
		float L_8 = ___maxDegreesDelta2;
		float L_9 = V_0;
		float L_10;
		L_10 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline((1.0f), ((float)(L_8/L_9)), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_SlerpUnclamped_mB38920352A1B11369D782F78E183568CAFA82C0F(L_6, L_7, L_10, NULL);
		V_2 = L_11;
		goto IL_0030;
	}

IL_0030:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___rhs1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___a0;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___b1;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___r_0;
		float L_8 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___b1;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___a0;
		float L_14 = L_13.___g_1;
		float L_15 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___a0;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___b1;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___a0;
		float L_21 = L_20.___b_2;
		float L_22 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___a0;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___b1;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___a0;
		float L_28 = L_27.___a_3;
		float L_29 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_MoveTowards_mB3BF0AFF0BE0D3E6264CD1564AE14DE94A909878_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___current0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___target1;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___current0;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___target1;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___current0;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))));
		float L_12 = V_2;
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0043;
		}
	}
	{
		float L_13 = ___maxDistanceDelta2;
		if ((!(((float)L_13) >= ((float)(0.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		float L_14 = V_2;
		float L_15 = ___maxDistanceDelta2;
		float L_16 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_14) <= ((float)((float)il2cpp_codegen_multiply(L_15, L_16)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B4_0 = 0;
	}

IL_0041:
	{
		G_B6_0 = G_B4_0;
		goto IL_0044;
	}

IL_0043:
	{
		G_B6_0 = 1;
	}

IL_0044:
	{
		V_4 = (bool)G_B6_0;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_004f;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___target1;
		V_5 = L_18;
		goto IL_0079;
	}

IL_004f:
	{
		float L_19 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_20;
		L_20 = sqrt(((double)L_19));
		V_3 = ((float)L_20);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = ___current0;
		float L_22 = L_21.___x_0;
		float L_23 = V_0;
		float L_24 = V_3;
		float L_25 = ___maxDistanceDelta2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = ___current0;
		float L_27 = L_26.___y_1;
		float L_28 = V_1;
		float L_29 = V_3;
		float L_30 = ___maxDistanceDelta2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_31), ((float)il2cpp_codegen_add(L_22, ((float)il2cpp_codegen_multiply(((float)(L_23/L_24)), L_25)))), ((float)il2cpp_codegen_add(L_27, ((float)il2cpp_codegen_multiply(((float)(L_28/L_29)), L_30)))), /*hidden argument*/NULL);
		V_5 = L_31;
		goto IL_0079;
	}

IL_0079:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_5;
		return L_32;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_m445E005E6F9211283EEA3F0BD4FF2DC20FE3640A_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___b1;
		float L_2;
		L_2 = Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = fabsf(L_2);
		float L_4;
		L_4 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_3, (1.0f), NULL);
		V_0 = L_4;
		float L_5 = V_0;
		bool L_6;
		L_6 = Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		float L_7 = V_0;
		float L_8;
		L_8 = acosf(L_7);
		G_B3_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, (2.0f))), (57.2957802f)));
		goto IL_0039;
	}

IL_0034:
	{
		G_B3_0 = (0.0f);
	}

IL_0039:
	{
		V_1 = G_B3_0;
		goto IL_003c;
	}

IL_003c:
	{
		float L_9 = V_1;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___lhs0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___rhs1;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___lhs0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___rhs1;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___lhs0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___rhs1;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___lhs0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___rhs1;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___a0;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___b1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___a0;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___b1;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline (float ___dot0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___dot0;
		V_0 = (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
