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
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>
struct List_1_tC738A5621689A7678648746667E7F66D96D6B8FD;
// System.Collections.Generic.List`1<DemoToonVFX/SVA>
struct List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.IO.FileInfo[]
struct FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6;
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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.ParticleCollisionEvent[]
struct ParticleCollisionEventU5BU5D_t38A3BDB80328B5E9131C909384B9942D5590DFF9;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// DemoToonVFX/SVA[]
struct SVAU5BU5D_tC2B506FC3823B4F7FF14AE255B5275CFC8A2B85A;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040;
// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// AutoDestroyPS
struct AutoDestroyPS_t2BBE9B7F4DC1640097B79171FABBC0657D02E1C7;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CheckDicePos
struct CheckDicePos_t670402EE5A98752E8AD053C2F79DB6B631E25943;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// RealToon.Script.CustomShadowResolution
struct CustomShadowResolution_t4A838D90148D9C942057B66A095447CF0762F890;
// DemoShooting
struct DemoShooting_t798039C7E1968AA3B947329A7CC56574256C98B9;
// DemoToonVFX
struct DemoToonVFX_t06970E65DA40CBD336BD676875030BD2C2582AA2;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// EGA_EffectSound
struct EGA_EffectSound_t9C7F1E3E858A3B0C5CE9FA472CD18903F6BF1A5F;
// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C;
// RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Default
struct FrameByFrameRendering_Default_t44ECB1AA7D3808E17FA737F8095DC8FBE728D7C9;
// RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Manual
struct FrameByFrameRendering_Manual_tF9580085A5B28B92DBD296917E56714C0219D81A;
// FrontMover
struct FrontMover_t817743D058FC96007416BCB899A69FEE51EFD2B7;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ParticleCollisionInstance
struct ParticleCollisionInstance_t3AE360C2657E23E336EB8E63D4A8AA7D58D0D66B;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// PlayerRoll
struct PlayerRoll_tC7F1B885163C9701F82893C3E4A22B46FC4374C9;
// ProjectileMover
struct ProjectileMover_tE15A2AD1795EB9A3850C65AE3113B36F36775300;
// RealToon.Effects.RealToonSobelOutline
struct RealToonSobelOutline_tF9D5DABAA43731CF9DEC9A10D16A7A32081ADD34;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// RealToon.Script.SmoothObjectNormalHelper
struct SmoothObjectNormalHelper_t11D2D6921B6D39BDD46FE0AAC54139B07C779580;
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
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// GameManager/<PauseUI>d__11
struct U3CPauseUIU3Ed__11_tD4486847F824AA99E4ADFD4B33E7270D578F5177;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC738A5621689A7678648746667E7F66D96D6B8FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPauseUIU3Ed__11_tD4486847F824AA99E4ADFD4B33E7270D578F5177_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A2750E5B8E57EE3FBDD87D9399164909FF096B1;
IL2CPP_EXTERN_C String_t* _stringLiteral16616D61D1F596C11D66025981D6CED3F79A8444;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE;
IL2CPP_EXTERN_C String_t* _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2F7234099CCD07F9C0939ACCC13D7F7F6E95DBAD;
IL2CPP_EXTERN_C String_t* _stringLiteral3106227DC0FE7BCEDE287654855B3709709843EB;
IL2CPP_EXTERN_C String_t* _stringLiteral34A2F8D7BC840D3137EBB24D0BECC80D86E68101;
IL2CPP_EXTERN_C String_t* _stringLiteral4082B7F20D2A0B72234B5647F885DE23BE505D32;
IL2CPP_EXTERN_C String_t* _stringLiteral42E9B6CACED6E0774AEDF68611C639E6C7C08988;
IL2CPP_EXTERN_C String_t* _stringLiteral4443A4C27ADFDF71D7D67A755F6191BC62903027;
IL2CPP_EXTERN_C String_t* _stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257;
IL2CPP_EXTERN_C String_t* _stringLiteral44E2BBC67CA4055A7179457B2B2204C3A7EF200E;
IL2CPP_EXTERN_C String_t* _stringLiteral482E87E050FD4712FDADE6689768D7E2EF822FC5;
IL2CPP_EXTERN_C String_t* _stringLiteral48F42A3CF714C9EE7FFF432FFC1082F2D1802545;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral5DB1BCEB3201A488155434A9E836FBE803059DFD;
IL2CPP_EXTERN_C String_t* _stringLiteral5DCB91A47C5FF9E23279E744766DD6EA45361672;
IL2CPP_EXTERN_C String_t* _stringLiteral60D05DAF036A98AA5D79FDEF501615480E6F2048;
IL2CPP_EXTERN_C String_t* _stringLiteral64655F89026ADC7959CCA7110F1A5E9FADB4E7E8;
IL2CPP_EXTERN_C String_t* _stringLiteral65A5AB28932A11AF332680CE7BFB56F9598E7571;
IL2CPP_EXTERN_C String_t* _stringLiteral6FBAB2EF3A05513A7FC7960D97DC6AD48DAA44D5;
IL2CPP_EXTERN_C String_t* _stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9;
IL2CPP_EXTERN_C String_t* _stringLiteral76518E7DE5882197CD91E9F2E6826A3C0B9F493C;
IL2CPP_EXTERN_C String_t* _stringLiteral76CFAA3359AF7E9FC2CE2FABE446CFF2EA962888;
IL2CPP_EXTERN_C String_t* _stringLiteral77845057A8019C4D366B0F8EDD589F6B035F56BE;
IL2CPP_EXTERN_C String_t* _stringLiteral7AC48891A65400AB735D1E11D6109C71F9E7799F;
IL2CPP_EXTERN_C String_t* _stringLiteral7EC8194AAC1088386111DF04E6DE6D75C43BEC9E;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral94CB862F03E039BF9FE9B9772179237228FDB1F2;
IL2CPP_EXTERN_C String_t* _stringLiteral94D981E6DAD1F403AC04496FD83C8E5A77DFBE3B;
IL2CPP_EXTERN_C String_t* _stringLiteral97501CA22CE390E1DB302EC4A1A9A4323F86D45D;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralA5B55079BEF332F80BF49FA72826DD2987D2709A;
IL2CPP_EXTERN_C String_t* _stringLiteralAC6541F6BB318820350428597DC551D4F772C7C5;
IL2CPP_EXTERN_C String_t* _stringLiteralB081F93C5BCFEA496556CFA8465A42A7B5E764D4;
IL2CPP_EXTERN_C String_t* _stringLiteralB140965D50DC6D755D66CCA48F95FA7F9A3E3D40;
IL2CPP_EXTERN_C String_t* _stringLiteralC2B003CFCFAD8A84795A87CEA509A5EE1BA46056;
IL2CPP_EXTERN_C String_t* _stringLiteralC32EDC91D7BFB0336E42564147DECEF11D438084;
IL2CPP_EXTERN_C String_t* _stringLiteralC684A88288D3E2415019FEFF6D49AEBEC88152BD;
IL2CPP_EXTERN_C String_t* _stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C;
IL2CPP_EXTERN_C String_t* _stringLiteralDAE2FBB1665A88A7F806A64D046B373E3D468096;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE25F3D77FDC66D0A709C097CFE3658A1C632CEEA;
IL2CPP_EXTERN_C String_t* _stringLiteralE799B696BCB2FF66587466B9C27050B1904318A4;
IL2CPP_EXTERN_C String_t* _stringLiteralE90B980538C31E760633FE429F33DEB9F5EEB11D;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralEA0B9F0411C2874E1C56CFDC05D005968521774A;
IL2CPP_EXTERN_C String_t* _stringLiteralEA35468CA9F3057596207F5BDF3347541D7017D9;
IL2CPP_EXTERN_C String_t* _stringLiteralEBFB5BC3BFA59D45F3F93BAD87C8193DDFD1C918;
IL2CPP_EXTERN_C String_t* _stringLiteralEEDF6B3A9D724B43072614E535557E2C94107E1C;
IL2CPP_EXTERN_C String_t* _stringLiteralF0F18A6AE85A6C4C9C21AB97B5018A536795789A;
IL2CPP_EXTERN_C String_t* _stringLiteralF7DDF59B44DDF9253B657C54053522CF694D3FBE;
IL2CPP_EXTERN_C String_t* _stringLiteralFC172ACCB1CFCEE111C7F08902B818358207D054;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C String_t* _stringLiteralFE223FB12C5C4646D8E3BDC3C33CBD66FAC2E3FF;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mDB24DFE03C9A09070D0C489886ABCC49959AB409_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3A8C08F8600C96696721CD0F314EFB24A8310D29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m7D70CE3C0D64D85D2A218C9A87644ABFDDBF61F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA694327B6B78B2DB62ADFEFC49AE5B7B2C768ACA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC5FA79A24DE52DBF7D7F71DF0D3DBD6B58694544_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPauseUIU3Ed__11_System_Collections_IEnumerator_Reset_m07E2C6DDBD956566B74D0944B83AF398DBC671EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
struct FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct SVAU5BU5D_tC2B506FC3823B4F7FF14AE255B5275CFC8A2B85A;

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

// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>
struct List_1_tC738A5621689A7678648746667E7F66D96D6B8FD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ParticleCollisionEventU5BU5D_t38A3BDB80328B5E9131C909384B9942D5590DFF9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC738A5621689A7678648746667E7F66D96D6B8FD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ParticleCollisionEventU5BU5D_t38A3BDB80328B5E9131C909384B9942D5590DFF9* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DemoToonVFX/SVA>
struct List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SVAU5BU5D_tC2B506FC3823B4F7FF14AE255B5275CFC8A2B85A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SVAU5BU5D_tC2B506FC3823B4F7FF14AE255B5275CFC8A2B85A* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

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

// GameManager/<PauseUI>d__11
struct U3CPauseUIU3Ed__11_tD4486847F824AA99E4ADFD4B33E7270D578F5177  : public RuntimeObject
{
	// System.Int32 GameManager/<PauseUI>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<PauseUI>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<PauseUI>d__11::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
	// System.Single GameManager/<PauseUI>d__11::_time
	float ____time_3;
	// System.Single GameManager/<PauseUI>d__11::targetA
	float ___targetA_4;
	// System.Single GameManager/<PauseUI>d__11::targetB
	float ___targetB_5;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// DemoToonVFX/SVA
struct SVA_tF354DE4321E8F3442BC2546E9019F02EBDB9D85D 
{
	// System.Single DemoToonVFX/SVA::S
	float ___S_0;
	// System.Single DemoToonVFX/SVA::V
	float ___V_1;
	// System.Single DemoToonVFX/SVA::A
	float ___A_2;
};

// UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
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

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
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

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.ContactPoint
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 
{
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;
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

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_3;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_4;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_5;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_6;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_7;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_3;
	int32_t ____fileStatusInitialized_4;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_5;
	int32_t ____isDirectory_6;
	int32_t ____exists_7;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_3;
	int32_t ____fileStatusInitialized_4;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_5;
	int32_t ____isDirectory_6;
	int32_t ____exists_7;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// UnityEngine.ParticleCollisionEvent
struct ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 
{
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Intersection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Intersection_0;
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity_2;
	// System.Int32 UnityEngine.ParticleCollisionEvent::m_ColliderInstanceID
	int32_t ___m_ColliderInstanceID_3;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// UnityEngine.ParticleSystem/MinMaxGradient
struct MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 
{
	// UnityEngine.ParticleSystemGradientMode UnityEngine.ParticleSystem/MinMaxGradient::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMin
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMin_1;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMax
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMax_2;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMin
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMin_3;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMax
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMax_4;
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

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Motion
struct Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// System.Boolean UnityEngine.Motion::<isAnimatorMotion>k__BackingField
	bool ___U3CisAnimatorMotionU3Ek__BackingField_4;
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712  : public Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// AutoDestroyPS
struct AutoDestroyPS_t2BBE9B7F4DC1640097B79171FABBC0657D02E1C7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single AutoDestroyPS::timeLeft
	float ___timeLeft_4;
};

// CheckDicePos
struct CheckDicePos_t670402EE5A98752E8AD053C2F79DB6B631E25943  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 CheckDicePos::diceVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___diceVelocity_4;
	// PlayerRoll CheckDicePos::player
	PlayerRoll_tC7F1B885163C9701F82893C3E4A22B46FC4374C9* ___player_5;
	// TMPro.TextMeshProUGUI CheckDicePos::score
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___score_6;
};

// RealToon.Script.CustomShadowResolution
struct CustomShadowResolution_t4A838D90148D9C942057B66A095447CF0762F890  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 RealToon.Script.CustomShadowResolution::Value
	int32_t ___Value_4;
	// System.Int32 RealToon.Script.CustomShadowResolution::FinalResolution
	int32_t ___FinalResolution_5;
	// System.Boolean RealToon.Script.CustomShadowResolution::Reset
	bool ___Reset_6;
};

// DemoShooting
struct DemoShooting_t798039C7E1968AA3B947329A7CC56574256C98B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject DemoShooting::FirePoint
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FirePoint_4;
	// UnityEngine.Camera DemoShooting::Cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Cam_5;
	// System.Single DemoShooting::MaxLength
	float ___MaxLength_6;
	// UnityEngine.GameObject[] DemoShooting::Prefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___Prefabs_7;
	// UnityEngine.Ray DemoShooting::RayMouse
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___RayMouse_8;
	// UnityEngine.Vector3 DemoShooting::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_9;
	// UnityEngine.Quaternion DemoShooting::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_10;
	// System.Single DemoShooting::windowDpi
	float ___windowDpi_11;
	// System.Int32 DemoShooting::Prefab
	int32_t ___Prefab_12;
	// UnityEngine.GameObject DemoShooting::Instance
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Instance_13;
	// System.Single DemoShooting::hSliderValue
	float ___hSliderValue_14;
	// System.Single DemoShooting::fireCountdown
	float ___fireCountdown_15;
	// System.Single DemoShooting::buttonSaver
	float ___buttonSaver_16;
	// UnityEngine.Animation DemoShooting::camAnim
	Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* ___camAnim_17;
};

// DemoToonVFX
struct DemoToonVFX_t06970E65DA40CBD336BD676875030BD2C2582AA2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform DemoToonVFX::Holder
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Holder_4;
	// System.Single DemoToonVFX::currDistance
	float ___currDistance_5;
	// System.Single DemoToonVFX::xRotate
	float ___xRotate_6;
	// System.Single DemoToonVFX::yRotate
	float ___yRotate_7;
	// System.Single DemoToonVFX::yMinLimit
	float ___yMinLimit_8;
	// System.Single DemoToonVFX::yMaxLimit
	float ___yMaxLimit_9;
	// System.Single DemoToonVFX::prevDistance
	float ___prevDistance_10;
	// System.Single DemoToonVFX::x
	float ___x_11;
	// System.Single DemoToonVFX::y
	float ___y_12;
	// System.Single DemoToonVFX::windowDpi
	float ___windowDpi_13;
	// UnityEngine.GameObject[] DemoToonVFX::Prefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___Prefabs_14;
	// System.Int32 DemoToonVFX::Prefab
	int32_t ___Prefab_15;
	// UnityEngine.GameObject DemoToonVFX::Instance
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Instance_16;
	// System.Single DemoToonVFX::StartColor
	float ___StartColor_17;
	// System.Single DemoToonVFX::HueColor
	float ___HueColor_18;
	// UnityEngine.Texture DemoToonVFX::HueTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___HueTexture_19;
	// System.Single[] DemoToonVFX::activationTime
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___activationTime_20;
	// UnityEngine.Animator DemoToonVFX::animObject
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animObject_21;
	// UnityEngine.ParticleSystem[] DemoToonVFX::particleSystems
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* ___particleSystems_22;
	// System.Collections.Generic.List`1<DemoToonVFX/SVA> DemoToonVFX::svList
	List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0* ___svList_23;
	// System.Single DemoToonVFX::H
	float ___H_24;
	// System.Boolean DemoToonVFX::useAnimation
	bool ___useAnimation_25;
};

// EGA_EffectSound
struct EGA_EffectSound_t9C7F1E3E858A3B0C5CE9FA472CD18903F6BF1A5F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean EGA_EffectSound::Repeating
	bool ___Repeating_4;
	// System.Single EGA_EffectSound::RepeatTime
	float ___RepeatTime_5;
	// System.Single EGA_EffectSound::StartTime
	float ___StartTime_6;
	// System.Boolean EGA_EffectSound::RandomVolume
	bool ___RandomVolume_7;
	// System.Single EGA_EffectSound::minVolume
	float ___minVolume_8;
	// System.Single EGA_EffectSound::maxVolume
	float ___maxVolume_9;
	// UnityEngine.AudioClip EGA_EffectSound::clip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip_10;
	// UnityEngine.AudioSource EGA_EffectSound::soundComponent
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___soundComponent_11;
};

// RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Default
struct FrameByFrameRendering_Default_t44ECB1AA7D3808E17FA737F8095DC8FBE728D7C9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Default::PathFolder
	String_t* ___PathFolder_4;
	// System.String RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Default::PNGFileName
	String_t* ___PNGFileName_5;
	// System.Int32 RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Default::FrameRate
	int32_t ___FrameRate_6;
	// System.Int32 RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Default::StartFrame
	int32_t ___StartFrame_7;
	// System.Int32 RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Default::EndFrame
	int32_t ___EndFrame_8;
	// System.Boolean RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Default::SingleFrameRenderingMode
	bool ___SingleFrameRenderingMode_9;
	// System.Int32 RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Default::CurrentFrame
	int32_t ___CurrentFrame_10;
	// System.String RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Default::info
	String_t* ___info_11;
	// System.Boolean RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Default::StartRendering
	bool ___StartRendering_12;
	// System.Boolean RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Default::StartFrameCheck
	bool ___StartFrameCheck_13;
	// System.String RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Default::CurrentRenderedFile
	String_t* ___CurrentRenderedFile_14;
	// System.Int32 RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Default::StartFrameCont
	int32_t ___StartFrameCont_15;
	// System.Int32 RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Default::EndFrameCont
	int32_t ___EndFrameCont_16;
	// System.Int32 RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Default::FrameRateCont
	int32_t ___FrameRateCont_17;
	// System.String RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Default::PathFolderCont
	String_t* ___PathFolderCont_18;
	// System.String RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Default::PNGFileNameCont
	String_t* ___PNGFileNameCont_19;
	// System.Boolean RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Default::SingleFrameRenderingCont
	bool ___SingleFrameRenderingCont_20;
	// System.IO.DirectoryInfo RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Default::DirInfo
	DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* ___DirInfo_21;
};

// RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Manual
struct FrameByFrameRendering_Manual_tF9580085A5B28B92DBD296917E56714C0219D81A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Manual::FrameNumber
	int32_t ___FrameNumber_4;
	// System.Boolean RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Manual::Render
	bool ___Render_5;
	// System.String RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Manual::PathFolder
	String_t* ___PathFolder_6;
	// System.String RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Manual::PNGFileName
	String_t* ___PNGFileName_7;
	// System.Boolean RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Manual::PictureMode
	bool ___PictureMode_8;
	// System.Int32 RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Manual::LastRenderedFrame
	int32_t ___LastRenderedFrame_9;
	// System.String RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Manual::info
	String_t* ___info_10;
	// System.String RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Manual::CurrentRenderedFile
	String_t* ___CurrentRenderedFile_11;
	// System.String RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Manual::PathFolderCont
	String_t* ___PathFolderCont_12;
	// System.String RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Manual::PNGFileNameCont
	String_t* ___PNGFileNameCont_13;
	// System.Int32 RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Manual::FrameNumberCont
	int32_t ___FrameNumberCont_14;
	// System.Boolean RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Manual::PictureModeCont
	bool ___PictureModeCont_15;
	// System.Boolean RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Manual::PreventRender
	bool ___PreventRender_16;
	// System.IO.DirectoryInfo RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Manual::DirInfo
	DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* ___DirInfo_17;
};

// FrontMover
struct FrontMover_t817743D058FC96007416BCB899A69FEE51EFD2B7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform FrontMover::pivot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___pivot_4;
	// UnityEngine.ParticleSystem FrontMover::effect
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___effect_5;
	// System.Single FrontMover::speed
	float ___speed_6;
	// System.Single FrontMover::drug
	float ___drug_7;
	// System.Single FrontMover::repeatingTime
	float ___repeatingTime_8;
	// System.Single FrontMover::startSpeed
	float ___startSpeed_9;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.CanvasGroup GameManager::cAlpha
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___cAlpha_4;
	// System.Single GameManager::duration
	float ___duration_5;
	// UnityEngine.GameObject GameManager::gameplayCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameplayCanvas_6;
	// UnityEngine.GameObject GameManager::pauseMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pauseMenu_7;
	// System.Single GameManager::current
	float ___current_8;
	// System.Single GameManager::scaled
	float ___scaled_9;
	// System.Single GameManager::unscaled
	float ___unscaled_10;
	// GameManager/GameState GameManager::state
	int32_t ___state_11;
};

// ParticleCollisionInstance
struct ParticleCollisionInstance_t3AE360C2657E23E336EB8E63D4A8AA7D58D0D66B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] ParticleCollisionInstance::EffectsOnCollision
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___EffectsOnCollision_4;
	// System.Single ParticleCollisionInstance::DestroyTimeDelay
	float ___DestroyTimeDelay_5;
	// System.Boolean ParticleCollisionInstance::UseWorldSpacePosition
	bool ___UseWorldSpacePosition_6;
	// System.Single ParticleCollisionInstance::Offset
	float ___Offset_7;
	// UnityEngine.Vector3 ParticleCollisionInstance::rotationOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotationOffset_8;
	// System.Boolean ParticleCollisionInstance::useOnlyRotationOffset
	bool ___useOnlyRotationOffset_9;
	// System.Boolean ParticleCollisionInstance::UseFirePointRotation
	bool ___UseFirePointRotation_10;
	// System.Boolean ParticleCollisionInstance::DestoyMainEffect
	bool ___DestoyMainEffect_11;
	// UnityEngine.ParticleSystem ParticleCollisionInstance::part
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___part_12;
	// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent> ParticleCollisionInstance::collisionEvents
	List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* ___collisionEvents_13;
	// UnityEngine.ParticleSystem ParticleCollisionInstance::ps
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___ps_14;
};

// PlayerRoll
struct PlayerRoll_tC7F1B885163C9701F82893C3E4A22B46FC4374C9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PlayerRoll::shakeForce
	float ___shakeForce_4;
	// System.Single PlayerRoll::upDiceForce
	float ___upDiceForce_5;
	// UnityEngine.Rigidbody PlayerRoll::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_6;
	// PlayerRoll/Dice PlayerRoll::state
	int32_t ___state_7;
	// UnityEngine.Vector3 PlayerRoll::shaker
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___shaker_8;
};

// ProjectileMover
struct ProjectileMover_tE15A2AD1795EB9A3850C65AE3113B36F36775300  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ProjectileMover::speed
	float ___speed_4;
	// System.Single ProjectileMover::hitOffset
	float ___hitOffset_5;
	// System.Boolean ProjectileMover::UseFirePointRotation
	bool ___UseFirePointRotation_6;
	// UnityEngine.Vector3 ProjectileMover::rotationOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotationOffset_7;
	// UnityEngine.GameObject ProjectileMover::hit
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hit_8;
	// UnityEngine.GameObject ProjectileMover::flash
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___flash_9;
	// UnityEngine.Rigidbody ProjectileMover::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_10;
	// UnityEngine.GameObject[] ProjectileMover::Detached
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___Detached_11;
};

// RealToon.Effects.RealToonSobelOutline
struct RealToonSobelOutline_tF9D5DABAA43731CF9DEC9A10D16A7A32081ADD34  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single RealToon.Effects.RealToonSobelOutline::OutlineWidth
	float ___OutlineWidth_4;
	// UnityEngine.Color RealToon.Effects.RealToonSobelOutline::OutlineColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___OutlineColor_5;
	// System.Single RealToon.Effects.RealToonSobelOutline::ColorPower
	float ___ColorPower_6;
	// UnityEngine.LayerMask RealToon.Effects.RealToonSobelOutline::excludeLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___excludeLayers_7;
	// UnityEngine.GameObject RealToon.Effects.RealToonSobelOutline::tmpCam
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tmpCam_8;
	// UnityEngine.Camera RealToon.Effects.RealToonSobelOutline::_camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera_9;
	// UnityEngine.Material RealToon.Effects.RealToonSobelOutline::_material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____material_10;
	// UnityEngine.GameObject RealToon.Effects.RealToonSobelOutline::go
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go_11;
	// System.Boolean RealToon.Effects.RealToonSobelOutline::destroy
	bool ___destroy_12;
};

// RealToon.Script.SmoothObjectNormalHelper
struct SmoothObjectNormalHelper_t11D2D6921B6D39BDD46FE0AAC54139B07C779580  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material RealToon.Script.SmoothObjectNormalHelper::Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___Material_4;
	// UnityEngine.Transform RealToon.Script.SmoothObjectNormalHelper::ObjectHelper
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___ObjectHelper_5;
	// UnityEngine.Transform RealToon.Script.SmoothObjectNormalHelper::TheObjectToFollow
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___TheObjectToFollow_6;
	// System.Single RealToon.Script.SmoothObjectNormalHelper::Offset
	float ___Offset_7;
	// UnityEngine.Vector3 RealToon.Script.SmoothObjectNormalHelper::AdditionalPositionAdjustment
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___AdditionalPositionAdjustment_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
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
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6  : public RuntimeArray
{
	ALIGN_FIELD (8) ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* m_Items[1];

	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411  : public RuntimeArray
{
	ALIGN_FIELD (8) ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 m_Items[1];

	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 value)
	{
		m_Items[index] = value;
	}
};
// System.IO.FileInfo[]
struct FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6  : public RuntimeArray
{
	ALIGN_FIELD (8) FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* m_Items[1];

	inline FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// DemoToonVFX/SVA[]
struct SVAU5BU5D_tC2B506FC3823B4F7FF14AE255B5275CFC8A2B85A  : public RuntimeArray
{
	ALIGN_FIELD (8) SVA_tF354DE4321E8F3442BC2546E9019F02EBDB9D85D m_Items[1];

	inline SVA_tF354DE4321E8F3442BC2546E9019F02EBDB9D85D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SVA_tF354DE4321E8F3442BC2546E9019F02EBDB9D85D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SVA_tF354DE4321E8F3442BC2546E9019F02EBDB9D85D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SVA_tF354DE4321E8F3442BC2546E9019F02EBDB9D85D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SVA_tF354DE4321E8F3442BC2546E9019F02EBDB9D85D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SVA_tF354DE4321E8F3442BC2546E9019F02EBDB9D85D value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<DemoToonVFX/SVA>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SVA_tF354DE4321E8F3442BC2546E9019F02EBDB9D85D List_1_get_Item_mC5FA79A24DE52DBF7D7F71DF0D3DBD6B58694544_gshared (List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DemoToonVFX/SVA>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m7D70CE3C0D64D85D2A218C9A87644ABFDDBF61F2_gshared_inline (List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DemoToonVFX/SVA>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m3A8C08F8600C96696721CD0F314EFB24A8310D29_gshared_inline (List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0* __this, SVA_tF354DE4321E8F3442BC2546E9019F02EBDB9D85D ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DemoToonVFX/SVA>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA694327B6B78B2DB62ADFEFC49AE5B7B2C768ACA_gshared (List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D_gshared (List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1_gshared (List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Single UnityEngine.Screen::get_dpi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Screen_get_dpi_mD5BB95E605FABD335F0D4736EE4860A0AA98A50D (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void DemoToonVFX::Counter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoToonVFX_Counter_m8DF9445B9764E9F534EDA09584FAE2F129BD3CEB (DemoToonVFX_t06970E65DA40CBD336BD676875030BD2C2582AA2* __this, int32_t ___count0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m92B7A836FB5463F20951B6BD9DB8F3B1BA56763C (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Single UnityEngine.GUI::HorizontalSlider(UnityEngine.Rect,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUI_HorizontalSlider_m8BE3B83A2C4DFA66F92B63AFFC4756A8D00A81D9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, float ___value1, float ___leftValue2, float ___rightValue3, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DrawTexture_mE0138D9F616D214541EA5534F5C520F54654A723 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___image1, int32_t ___scaleMode2, bool ___alphaBlend3, float ___imageAspect4, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<DemoToonVFX/SVA>::get_Item(System.Int32)
inline SVA_tF354DE4321E8F3442BC2546E9019F02EBDB9D85D List_1_get_Item_mC5FA79A24DE52DBF7D7F71DF0D3DBD6B58694544 (List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SVA_tF354DE4321E8F3442BC2546E9019F02EBDB9D85D (*) (List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0*, int32_t, const RuntimeMethod*))List_1_get_Item_mC5FA79A24DE52DBF7D7F71DF0D3DBD6B58694544_gshared)(__this, ___index0, method);
}
// UnityEngine.Color UnityEngine.Color::HSVToRGB(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_mD057CF0F1810C00D0F9E98A5CC5599213CF167DB_inline (float ___H0, float ___S1, float ___V2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxGradient UnityEngine.ParticleSystem/MinMaxGradient::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 MinMaxGradient_op_Implicit_m70D5BA67A6801595378D57D0B136825BE16325D6 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startColor(UnityEngine.ParticleSystem/MinMaxGradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startColor_m504911284CAC53A7C1B97B5D01BBDD2FA67D0E7A (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_m177BCBDFCEA3E09C02E3E444BF4FBA648FAE3CFA (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.ParticleSystem>()
inline ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* GameObject_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mDB24DFE03C9A09070D0C489886ABCC49959AB409 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<DemoToonVFX/SVA>::Clear()
inline void List_1_Clear_m7D70CE3C0D64D85D2A218C9A87644ABFDDBF61F2_inline (List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0*, const RuntimeMethod*))List_1_Clear_m7D70CE3C0D64D85D2A218C9A87644ABFDDBF61F2_gshared_inline)(__this, method);
}
// UnityEngine.ParticleSystem/MinMaxGradient UnityEngine.ParticleSystem/MainModule::get_startColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 MainModule_get_startColor_m24E66E583EB51341A885ABAE84114CBB37018781 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MinMaxGradient_get_color_m534E35D538D549F006E9F90E453D41B92FBAC3BF (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::RGBToHSV(UnityEngine.Color,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color_RGBToHSV_mE53E1481C3747021B9FA5B12A33CE689FCA75BDB (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rgbColor0, float* ___H1, float* ___S2, float* ___V3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DemoToonVFX/SVA>::Add(T)
inline void List_1_Add_m3A8C08F8600C96696721CD0F314EFB24A8310D29_inline (List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0* __this, SVA_tF354DE4321E8F3442BC2546E9019F02EBDB9D85D ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0*, SVA_tF354DE4321E8F3442BC2546E9019F02EBDB9D85D, const RuntimeMethod*))List_1_Add_m3A8C08F8600C96696721CD0F314EFB24A8310D29_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70 (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D (int32_t ___value0, const RuntimeMethod* method) ;
// System.Single DemoToonVFX::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DemoToonVFX_ClampAngle_mCD550860F8FA7B6643F8459C4B93E2EC26F7858F (float ___angle0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DemoToonVFX/SVA>::.ctor()
inline void List_1__ctor_mA694327B6B78B2DB62ADFEFC49AE5B7B2C768ACA (List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0*, const RuntimeMethod*))List_1__ctor_mA694327B6B78B2DB62ADFEFC49AE5B7B2C768ACA_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void EGA_EffectSound::RepeatSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EGA_EffectSound_RepeatSound_mEB288E2D265E2EF92203640544E2524C203E41AD (EGA_EffectSound_t9C7F1E3E858A3B0C5CE9FA472CD18903F6BF1A5F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 UnityEngine.ParticlePhysicsExtensions::GetCollisionEvents(UnityEngine.ParticleSystem,UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticlePhysicsExtensions_GetCollisionEvents_m37C8F4C7FE60BBA0B6FD4B361BEFFE53CF8154F7 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___ps0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go1, List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* ___collisionEvents2, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>::get_Item(System.Int32)
inline ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D (List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 (*) (List_1_tC738A5621689A7678648746667E7F66D96D6B8FD*, int32_t, const RuntimeMethod*))List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::get_intersection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ParticleCollisionEvent_get_intersection_m5CD7C517228E7D6148DEA4ED0500533C146DEC97 (ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ParticleCollisionEvent_get_normal_m7FC8D0427210D507D8003DB9CCD791AB88DC63FC (ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>::.ctor()
inline void List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1 (List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC738A5621689A7678648746667E7F66D96D6B8FD*, const RuntimeMethod*))List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1_gshared)(__this, method);
}
// System.Void DemoShooting::Counter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoShooting_Counter_m4D222727E4D96CCD5FCFC95D2B64D63D4606D659 (DemoShooting_t798039C7E1968AA3B947329A7CC56574256C98B9* __this, int32_t ___count0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.AnimationClip UnityEngine.Animation::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* Animation_get_clip_m6041709D3BC8EA54D2D65B9560D2B4E51F78BD51 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animation::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m95CC43633DC2B587AB3A0D1FF5F93B863A5440D5 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___animation0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mE0FAFDE7AFE40061DA7518FA5C41CE6BB23DBC10 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void DemoShooting::RotateToMouseDirection(UnityEngine.GameObject,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoShooting_RotateToMouseDirection_mAD767D53AD25E70D33F67477DC1B72AFDF1064FF (DemoShooting_t798039C7E1968AA3B947329A7CC56574256C98B9* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___destination1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mF161ED74A26AEC05C8A56F0B95F78482CE7ED5C7 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m7BE5A2D8FA33A15A5145B2F5261707CA17C3E792 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MainModule::get_startLifetimeMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_startLifetimeMultiplier_m635DF5E608211FCF706FBAD039AE0C140BCEDB7C (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MainModule::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_duration_mDCB80E6BD3B6B2DFB92E41FBCCA154D7E7150EB1 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.ContactPoint[] UnityEngine.Collision::get_contacts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* Collision_get_contacts_m2E8E27E0399230DFA4303A4F4D81C1BD55CBC473 (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ContactPoint::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ContactPoint_get_normal_mD7F0567CA2FD68644F7C6FE318E10C4D15F92AD6 (ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_m041093DBB23CB3641118310881D6B7746E3B8418 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fromDirection0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___toDirection1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ContactPoint::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ContactPoint_get_point_mCCDFDACC5D8DB469898060A56A3CC45132911208 (ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C (float ___value0, const RuntimeMethod* method) ;
// System.Void GameManager::HideUI(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HideUI_mBBF4DBBE7AB888A7C10FFDFE64937226E6068C6A (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, bool ___status0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::PauseUI(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_PauseUI_mACCA14113BBB83159673215BFC2708CAE91F5E60 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, float ___targetA0, float ___targetB1, float ____time2, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void GameManager/<PauseUI>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseUIU3Ed__11__ctor_m27C71F969E0CA31716D3C6A9116475BE57BF5182 (U3CPauseUIU3Ed__11_tD4486847F824AA99E4ADFD4B33E7270D578F5177* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void PlayerRoll::RollDice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerRoll_RollDice_mDC917B405622F92374B3F304C801807D95A4F600 (PlayerRoll_tC7F1B885163C9701F82893C3E4A22B46FC4374C9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_acceleration_mF33877F82B497F1B4B7D32BD9CD8388D0B3696FD (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single PlayerRoll::RandomVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerRoll_RandomVelocity_m65384D2637B003CC73AB0B8C98894E93DECF4D1B (PlayerRoll_tC7F1B885163C9701F82893C3E4A22B46FC4374C9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddTorque(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddTorque_mC55713BD82CB5EFB0D6C705B98F030717EF50CA1 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_captureFramerate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_captureFramerate_m262BE0EBA0D97287DF14C6FCB00DFC6BB23E0108 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.IO.DirectoryInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryInfo__ctor_m36BC476C58B55083046C0A738157D84E2323E0E9 (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702 (String_t* ___path0, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.IO.FileInfo[] System.IO.DirectoryInfo::GetFiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* DirectoryInfo_GetFiles_m998040748717954CDDCE273F61EEC0625069543F (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScreenCapture::CaptureScreenshot(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenCapture_CaptureScreenshot_m1FAFDB15448C41E697212E54F852DDD196E15CFF (String_t* ___filename0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0 (const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Light>()
inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Light::set_shadowCustomResolution(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_shadowCustomResolution_mEB39F5DB4F4BEBB2ACC2273E28C651CE578E3502 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m4055EA37BA8BAEF7EF29830F86ED13227780F4DD (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera RealToon.Effects.RealToonSobelOutline::GetTmpCam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* RealToonSobelOutline_GetTmpCam_m38FCE8C7EBB436B79C8A0186304036A2481BA873 (RealToonSobelOutline_tF9D5DABAA43731CF9DEC9A10D16A7A32081ADD34* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::Render()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_Render_m6089001EB6710DA9A21C87185D65922F13A24509 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m721D643351E55308EA4F5F41B67D5446D11C61F0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___components1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Camera::CopyFrom(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_CopyFrom_mFA5C3AB8E95EC4124249520ACEC6F7F25E5CDC52 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___other0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_mDC9C22C4477684D460FCF25B1BFE6B54419FB922 (int32_t ___intVal0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::HSVToRGB(System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_mE35BBC0ADCBAA2E71E90C080D7A8A4A19AABCC74 (float ___H0, float ___S1, float ___V2, bool ___hdr3, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void DemoToonVFX::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoToonVFX_Start_m6937751C02614D7C65F8DA652415224CB73EEC65 (DemoToonVFX_t06970E65DA40CBD336BD676875030BD2C2582AA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Screen.dpi < 1) windowDpi = 1;
		float L_0;
		L_0 = Screen_get_dpi_mD5BB95E605FABD335F0D4736EE4860A0AA98A50D(NULL);
		if ((!(((float)L_0) < ((float)(1.0f)))))
		{
			goto IL_0017;
		}
	}
	{
		// if (Screen.dpi < 1) windowDpi = 1;
		__this->___windowDpi_13 = (1.0f);
	}

IL_0017:
	{
		// if (Screen.dpi < 200) windowDpi = 1;
		float L_1;
		L_1 = Screen_get_dpi_mD5BB95E605FABD335F0D4736EE4860A0AA98A50D(NULL);
		if ((!(((float)L_1) < ((float)(200.0f)))))
		{
			goto IL_0030;
		}
	}
	{
		// if (Screen.dpi < 200) windowDpi = 1;
		__this->___windowDpi_13 = (1.0f);
		goto IL_0041;
	}

IL_0030:
	{
		// else windowDpi = Screen.dpi / 200f;
		float L_2;
		L_2 = Screen_get_dpi_mD5BB95E605FABD335F0D4736EE4860A0AA98A50D(NULL);
		__this->___windowDpi_13 = ((float)(L_2/(200.0f)));
	}

IL_0041:
	{
		// var angles = transform.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_3, NULL);
		V_0 = L_4;
		// x = angles.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		float L_6 = L_5.___y_3;
		__this->___x_11 = L_6;
		// y = angles.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8 = L_7.___x_2;
		__this->___y_12 = L_8;
		// Counter(0);
		DemoToonVFX_Counter_m8DF9445B9764E9F534EDA09584FAE2F129BD3CEB(__this, 0, NULL);
		// animObject.GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9 = __this->___animObject_21;
		NullCheck(L_9);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10;
		L_10 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(L_9, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DemoToonVFX::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoToonVFX_OnGUI_m5675FB26942A0DC78E428267260DDEA5762ACB6E (DemoToonVFX_t06970E65DA40CBD336BD676875030BD2C2582AA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC5FA79A24DE52DBF7D7F71DF0D3DBD6B58694544_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A2750E5B8E57EE3FBDD87D9399164909FF096B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A5AB28932A11AF332680CE7BFB56F9598E7571);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC6541F6BB318820350428597DC551D4F772C7C5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* V_1 = NULL;
	int32_t V_2 = 0;
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (GUI.Button(new Rect(5 * windowDpi, 5 * windowDpi, 110 * windowDpi, 35 * windowDpi), "Previous effect"))
		float L_0 = __this->___windowDpi_13;
		float L_1 = __this->___windowDpi_13;
		float L_2 = __this->___windowDpi_13;
		float L_3 = __this->___windowDpi_13;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		memset((&L_4), 0, sizeof(L_4));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_4), ((float)il2cpp_codegen_multiply((5.0f), L_0)), ((float)il2cpp_codegen_multiply((5.0f), L_1)), ((float)il2cpp_codegen_multiply((110.0f), L_2)), ((float)il2cpp_codegen_multiply((35.0f), L_3)), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = GUI_Button_m92B7A836FB5463F20951B6BD9DB8F3B1BA56763C(L_4, _stringLiteral65A5AB28932A11AF332680CE7BFB56F9598E7571, NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		// Counter(-1);
		DemoToonVFX_Counter_m8DF9445B9764E9F534EDA09584FAE2F129BD3CEB(__this, (-1), NULL);
	}

IL_0048:
	{
		// if (GUI.Button(new Rect(120 * windowDpi, 5 * windowDpi, 110 * windowDpi, 35 * windowDpi), "Play again"))
		float L_6 = __this->___windowDpi_13;
		float L_7 = __this->___windowDpi_13;
		float L_8 = __this->___windowDpi_13;
		float L_9 = __this->___windowDpi_13;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10;
		memset((&L_10), 0, sizeof(L_10));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_10), ((float)il2cpp_codegen_multiply((120.0f), L_6)), ((float)il2cpp_codegen_multiply((5.0f), L_7)), ((float)il2cpp_codegen_multiply((110.0f), L_8)), ((float)il2cpp_codegen_multiply((35.0f), L_9)), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = GUI_Button_m92B7A836FB5463F20951B6BD9DB8F3B1BA56763C(L_10, _stringLiteral0A2750E5B8E57EE3FBDD87D9399164909FF096B1, NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		// Counter(0);
		DemoToonVFX_Counter_m8DF9445B9764E9F534EDA09584FAE2F129BD3CEB(__this, 0, NULL);
	}

IL_0090:
	{
		// if (GUI.Button(new Rect(235 * windowDpi, 5 * windowDpi, 110 * windowDpi, 35 * windowDpi), "Next effect"))
		float L_12 = __this->___windowDpi_13;
		float L_13 = __this->___windowDpi_13;
		float L_14 = __this->___windowDpi_13;
		float L_15 = __this->___windowDpi_13;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_16;
		memset((&L_16), 0, sizeof(L_16));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_16), ((float)il2cpp_codegen_multiply((235.0f), L_12)), ((float)il2cpp_codegen_multiply((5.0f), L_13)), ((float)il2cpp_codegen_multiply((110.0f), L_14)), ((float)il2cpp_codegen_multiply((35.0f), L_15)), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = GUI_Button_m92B7A836FB5463F20951B6BD9DB8F3B1BA56763C(L_16, _stringLiteralAC6541F6BB318820350428597DC551D4F772C7C5, NULL);
		if (!L_17)
		{
			goto IL_00d8;
		}
	}
	{
		// Counter(+1);
		DemoToonVFX_Counter_m8DF9445B9764E9F534EDA09584FAE2F129BD3CEB(__this, 1, NULL);
	}

IL_00d8:
	{
		// StartColor = HueColor;
		float L_18 = __this->___HueColor_18;
		__this->___StartColor_17 = L_18;
		// HueColor = GUI.HorizontalSlider(new Rect(5 * windowDpi, 45 * windowDpi, 340 * windowDpi, 35 * windowDpi), HueColor, 0, 1);
		float L_19 = __this->___windowDpi_13;
		float L_20 = __this->___windowDpi_13;
		float L_21 = __this->___windowDpi_13;
		float L_22 = __this->___windowDpi_13;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_23;
		memset((&L_23), 0, sizeof(L_23));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_23), ((float)il2cpp_codegen_multiply((5.0f), L_19)), ((float)il2cpp_codegen_multiply((45.0f), L_20)), ((float)il2cpp_codegen_multiply((340.0f), L_21)), ((float)il2cpp_codegen_multiply((35.0f), L_22)), /*hidden argument*/NULL);
		float L_24 = __this->___HueColor_18;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		float L_25;
		L_25 = GUI_HorizontalSlider_m8BE3B83A2C4DFA66F92B63AFFC4756A8D00A81D9(L_23, L_24, (0.0f), (1.0f), NULL);
		__this->___HueColor_18 = L_25;
		// GUI.DrawTexture(new Rect(5 * windowDpi, 65 * windowDpi, 340 * windowDpi, 15 * windowDpi), HueTexture, ScaleMode.StretchToFill, false, 0);
		float L_26 = __this->___windowDpi_13;
		float L_27 = __this->___windowDpi_13;
		float L_28 = __this->___windowDpi_13;
		float L_29 = __this->___windowDpi_13;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_30;
		memset((&L_30), 0, sizeof(L_30));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_30), ((float)il2cpp_codegen_multiply((5.0f), L_26)), ((float)il2cpp_codegen_multiply((65.0f), L_27)), ((float)il2cpp_codegen_multiply((340.0f), L_28)), ((float)il2cpp_codegen_multiply((15.0f), L_29)), /*hidden argument*/NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_31 = __this->___HueTexture_19;
		GUI_DrawTexture_mE0138D9F616D214541EA5534F5C520F54654A723(L_30, L_31, 0, (bool)0, (0.0f), NULL);
		// if (HueColor != StartColor)
		float L_32 = __this->___HueColor_18;
		float L_33 = __this->___StartColor_17;
		if ((((float)L_32) == ((float)L_33)))
		{
			goto IL_0229;
		}
	}
	{
		// int i = 0;
		V_0 = 0;
		// foreach (var ps in particleSystems)
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_34 = __this->___particleSystems_22;
		V_1 = L_34;
		V_2 = 0;
		goto IL_0220;
	}

IL_019c:
	{
		// foreach (var ps in particleSystems)
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_35 = V_1;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		// var main = ps.main;
		NullCheck(L_38);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_39;
		L_39 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_38, NULL);
		V_3 = L_39;
		// Color colorHSV = Color.HSVToRGB(HueColor + H * 0, svList[i].S, svList[i].V);
		float L_40 = __this->___HueColor_18;
		float L_41 = __this->___H_24;
		List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0* L_42 = __this->___svList_23;
		int32_t L_43 = V_0;
		NullCheck(L_42);
		SVA_tF354DE4321E8F3442BC2546E9019F02EBDB9D85D L_44;
		L_44 = List_1_get_Item_mC5FA79A24DE52DBF7D7F71DF0D3DBD6B58694544(L_42, L_43, List_1_get_Item_mC5FA79A24DE52DBF7D7F71DF0D3DBD6B58694544_RuntimeMethod_var);
		float L_45 = L_44.___S_0;
		List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0* L_46 = __this->___svList_23;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		SVA_tF354DE4321E8F3442BC2546E9019F02EBDB9D85D L_48;
		L_48 = List_1_get_Item_mC5FA79A24DE52DBF7D7F71DF0D3DBD6B58694544(L_46, L_47, List_1_get_Item_mC5FA79A24DE52DBF7D7F71DF0D3DBD6B58694544_RuntimeMethod_var);
		float L_49 = L_48.___V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_50;
		L_50 = Color_HSVToRGB_mD057CF0F1810C00D0F9E98A5CC5599213CF167DB_inline(((float)il2cpp_codegen_add(L_40, ((float)il2cpp_codegen_multiply(L_41, (0.0f))))), L_45, L_49, NULL);
		V_4 = L_50;
		// main.startColor = new Color(colorHSV.r, colorHSV.g, colorHSV.b, svList[i].A);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_51 = V_4;
		float L_52 = L_51.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_53 = V_4;
		float L_54 = L_53.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_55 = V_4;
		float L_56 = L_55.___b_2;
		List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0* L_57 = __this->___svList_23;
		int32_t L_58 = V_0;
		NullCheck(L_57);
		SVA_tF354DE4321E8F3442BC2546E9019F02EBDB9D85D L_59;
		L_59 = List_1_get_Item_mC5FA79A24DE52DBF7D7F71DF0D3DBD6B58694544(L_57, L_58, List_1_get_Item_mC5FA79A24DE52DBF7D7F71DF0D3DBD6B58694544_RuntimeMethod_var);
		float L_60 = L_59.___A_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_61;
		memset((&L_61), 0, sizeof(L_61));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_61), L_52, L_54, L_56, L_60, /*hidden argument*/NULL);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_62;
		L_62 = MinMaxGradient_op_Implicit_m70D5BA67A6801595378D57D0B136825BE16325D6(L_61, NULL);
		MainModule_set_startColor_m504911284CAC53A7C1B97B5D01BBDD2FA67D0E7A((&V_3), L_62, NULL);
		// i++;
		int32_t L_63 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_63, 1));
		int32_t L_64 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_0220:
	{
		// foreach (var ps in particleSystems)
		int32_t L_65 = V_2;
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_66 = V_1;
		NullCheck(L_66);
		if ((((int32_t)L_65) < ((int32_t)((int32_t)(((RuntimeArray*)L_66)->max_length)))))
		{
			goto IL_019c;
		}
	}

IL_0229:
	{
		// }
		return;
	}
}
// System.Void DemoToonVFX::Counter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoToonVFX_Counter_m8DF9445B9764E9F534EDA09584FAE2F129BD3CEB (DemoToonVFX_t06970E65DA40CBD336BD676875030BD2C2582AA2* __this, int32_t ___count0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mDB24DFE03C9A09070D0C489886ABCC49959AB409_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3A8C08F8600C96696721CD0F314EFB24A8310D29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m7D70CE3C0D64D85D2A218C9A87644ABFDDBF61F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76518E7DE5882197CD91E9F2E6826A3C0B9F493C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBFB5BC3BFA59D45F3F93BAD87C8193DDFD1C918);
		s_Il2CppMethodInitialized = true;
	}
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* V_0 = NULL;
	int32_t V_1 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	SVA_tF354DE4321E8F3442BC2546E9019F02EBDB9D85D V_3;
	memset((&V_3), 0, sizeof(V_3));
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_4;
	memset((&V_4), 0, sizeof(V_4));
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// Prefab += count;
		int32_t L_0 = __this->___Prefab_15;
		int32_t L_1 = ___count0;
		__this->___Prefab_15 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// if (Prefab > Prefabs.Length - 1)
		int32_t L_2 = __this->___Prefab_15;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___Prefabs_14;
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), 1)))))
		{
			goto IL_0029;
		}
	}
	{
		// Prefab = 0;
		__this->___Prefab_15 = 0;
		goto IL_0042;
	}

IL_0029:
	{
		// else if (Prefab < 0)
		int32_t L_4 = __this->___Prefab_15;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		// Prefab = Prefabs.Length - 1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___Prefabs_14;
		NullCheck(L_5);
		__this->___Prefab_15 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1));
	}

IL_0042:
	{
		// if (Instance != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___Instance_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		// Destroy(Instance);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___Instance_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_8, NULL);
	}

IL_005b:
	{
		// Instance = Instantiate(Prefabs[Prefab]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = __this->___Prefabs_14;
		int32_t L_10 = __this->___Prefab_15;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_12, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		__this->___Instance_16 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Instance_16), (void*)L_13);
		// Instance.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___Instance_16;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
		// if (activationTime.Length == Prefabs.Length)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = __this->___activationTime_20;
		NullCheck(L_15);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = __this->___Prefabs_14;
		NullCheck(L_16);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))) == ((uint32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_00e3;
		}
	}
	{
		// CancelInvoke();
		MonoBehaviour_CancelInvoke_m177BCBDFCEA3E09C02E3E444BF4FBA648FAE3CFA(__this, NULL);
		// if (activationTime[Prefab] > 0.01f)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = __this->___activationTime_20;
		int32_t L_18 = __this->___Prefab_15;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		float L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if ((!(((float)L_20) > ((float)(0.00999999978f)))))
		{
			goto IL_00c3;
		}
	}
	{
		// Invoke("Activate", activationTime[Prefab]);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = __this->___activationTime_20;
		int32_t L_22 = __this->___Prefab_15;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		float L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral76518E7DE5882197CD91E9F2E6826A3C0B9F493C, L_24, NULL);
	}

IL_00c3:
	{
		// if (activationTime[Prefab] == 0f)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_25 = __this->___activationTime_20;
		int32_t L_26 = __this->___Prefab_15;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		float L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		if ((!(((float)L_28) == ((float)(0.0f)))))
		{
			goto IL_00e3;
		}
	}
	{
		// Instance.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___Instance_16;
		NullCheck(L_29);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_29, (bool)1, NULL);
	}

IL_00e3:
	{
		// particleSystems = Instance.GetComponentsInChildren<ParticleSystem>(); //Get color from current instance
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___Instance_16;
		NullCheck(L_30);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_31;
		L_31 = GameObject_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mDB24DFE03C9A09070D0C489886ABCC49959AB409(L_30, GameObject_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mDB24DFE03C9A09070D0C489886ABCC49959AB409_RuntimeMethod_var);
		__this->___particleSystems_22 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___particleSystems_22), (void*)L_31);
		// svList.Clear();
		List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0* L_32 = __this->___svList_23;
		NullCheck(L_32);
		List_1_Clear_m7D70CE3C0D64D85D2A218C9A87644ABFDDBF61F2_inline(L_32, List_1_Clear_m7D70CE3C0D64D85D2A218C9A87644ABFDDBF61F2_RuntimeMethod_var);
		// foreach (var ps in particleSystems)
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_33 = __this->___particleSystems_22;
		V_0 = L_33;
		V_1 = 0;
		goto IL_0164;
	}

IL_010a:
	{
		// foreach (var ps in particleSystems)
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_34 = V_0;
		int32_t L_35 = V_1;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		// Color baseColor = ps.main.startColor.color;
		NullCheck(L_37);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_38;
		L_38 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_37, NULL);
		V_4 = L_38;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_39;
		L_39 = MainModule_get_startColor_m24E66E583EB51341A885ABAE84114CBB37018781((&V_4), NULL);
		V_5 = L_39;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = MinMaxGradient_get_color_m534E35D538D549F006E9F90E453D41B92FBAC3BF((&V_5), NULL);
		V_2 = L_40;
		// SVA baseSVA = new SVA();
		il2cpp_codegen_initobj((&V_3), sizeof(SVA_tF354DE4321E8F3442BC2546E9019F02EBDB9D85D));
		// Color.RGBToHSV(baseColor, out H, out baseSVA.S, out baseSVA.V);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41 = V_2;
		float* L_42 = (&__this->___H_24);
		float* L_43 = (&(&V_3)->___S_0);
		float* L_44 = (&(&V_3)->___V_1);
		Color_RGBToHSV_mE53E1481C3747021B9FA5B12A33CE689FCA75BDB(L_41, L_42, L_43, L_44, NULL);
		// baseSVA.A = baseColor.a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_45 = V_2;
		float L_46 = L_45.___a_3;
		(&V_3)->___A_2 = L_46;
		// svList.Add(baseSVA);
		List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0* L_47 = __this->___svList_23;
		SVA_tF354DE4321E8F3442BC2546E9019F02EBDB9D85D L_48 = V_3;
		NullCheck(L_47);
		List_1_Add_m3A8C08F8600C96696721CD0F314EFB24A8310D29_inline(L_47, L_48, List_1_Add_m3A8C08F8600C96696721CD0F314EFB24A8310D29_RuntimeMethod_var);
		int32_t L_49 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0164:
	{
		// foreach (var ps in particleSystems)
		int32_t L_50 = V_1;
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_51 = V_0;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		// if (useAnimation == true)
		bool L_52 = __this->___useAnimation_25;
		if (!L_52)
		{
			goto IL_0188;
		}
	}
	{
		// animObject.SetInteger("toDo",Prefab);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_53 = __this->___animObject_21;
		int32_t L_54 = __this->___Prefab_15;
		NullCheck(L_53);
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_53, _stringLiteralEBFB5BC3BFA59D45F3F93BAD87C8193DDFD1C918, L_54, NULL);
	}

IL_0188:
	{
		// }
		return;
	}
}
// System.Void DemoToonVFX::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoToonVFX_Activate_m756C7C973A0504BC6F2FF9A739339F27E7B7E53E (DemoToonVFX_t06970E65DA40CBD336BD676875030BD2C2582AA2* __this, const RuntimeMethod* method) 
{
	{
		// Instance.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Instance_16;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void DemoToonVFX::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoToonVFX_LateUpdate_mAE9837C23C0F315AB3AC9445AAEF554471C9632B (DemoToonVFX_t06970E65DA40CBD336BD676875030BD2C2582AA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (currDistance < 2)
		float L_0 = __this->___currDistance_5;
		if ((!(((float)L_0) < ((float)(2.0f)))))
		{
			goto IL_0018;
		}
	}
	{
		// currDistance = 2;
		__this->___currDistance_5 = (2.0f);
	}

IL_0018:
	{
		// currDistance -= Input.GetAxis("Mouse ScrollWheel") * 2;
		float L_1 = __this->___currDistance_5;
		float L_2;
		L_2 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		__this->___currDistance_5 = ((float)il2cpp_codegen_subtract(L_1, ((float)il2cpp_codegen_multiply(L_2, (2.0f)))));
		// if (Holder && (Input.GetMouseButton(0) || Input.GetMouseButton(1)))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___Holder_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		if (!L_4)
		{
			goto IL_0197;
		}
	}
	{
		bool L_5;
		L_5 = Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70(0, NULL);
		if (L_5)
		{
			goto IL_0058;
		}
	}
	{
		bool L_6;
		L_6 = Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70(1, NULL);
		if (!L_6)
		{
			goto IL_0197;
		}
	}

IL_0058:
	{
		// var pos = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		V_0 = L_7;
		// float dpiScale = 1;
		V_1 = (1.0f);
		// if (Screen.dpi < 1) dpiScale = 1;
		float L_8;
		L_8 = Screen_get_dpi_mD5BB95E605FABD335F0D4736EE4860A0AA98A50D(NULL);
		if ((!(((float)L_8) < ((float)(1.0f)))))
		{
			goto IL_0076;
		}
	}
	{
		// if (Screen.dpi < 1) dpiScale = 1;
		V_1 = (1.0f);
	}

IL_0076:
	{
		// if (Screen.dpi < 200) dpiScale = 1;
		float L_9;
		L_9 = Screen_get_dpi_mD5BB95E605FABD335F0D4736EE4860A0AA98A50D(NULL);
		if ((!(((float)L_9) < ((float)(200.0f)))))
		{
			goto IL_008a;
		}
	}
	{
		// if (Screen.dpi < 200) dpiScale = 1;
		V_1 = (1.0f);
		goto IL_0096;
	}

IL_008a:
	{
		// else dpiScale = Screen.dpi / 200f;
		float L_10;
		L_10 = Screen_get_dpi_mD5BB95E605FABD335F0D4736EE4860A0AA98A50D(NULL);
		V_1 = ((float)(L_10/(200.0f)));
	}

IL_0096:
	{
		// if (pos.x < 380 * dpiScale && Screen.height - pos.y < 250 * dpiScale) return;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		float L_12 = L_11.___x_2;
		float L_13 = V_1;
		if ((!(((float)L_12) < ((float)((float)il2cpp_codegen_multiply((380.0f), L_13))))))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_14;
		L_14 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		float L_16 = L_15.___y_3;
		float L_17 = V_1;
		if ((!(((float)((float)il2cpp_codegen_subtract(((float)L_14), L_16))) < ((float)((float)il2cpp_codegen_multiply((250.0f), L_17))))))
		{
			goto IL_00bc;
		}
	}
	{
		// if (pos.x < 380 * dpiScale && Screen.height - pos.y < 250 * dpiScale) return;
		return;
	}

IL_00bc:
	{
		// Cursor.visible = false;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)0, NULL);
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(1, NULL);
		// x += (float)(Input.GetAxis("Mouse X") * xRotate * 0.02);
		float L_18 = __this->___x_11;
		float L_19;
		L_19 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_20 = __this->___xRotate_6;
		__this->___x_11 = ((float)il2cpp_codegen_add(L_18, ((float)((double)il2cpp_codegen_multiply(((double)((float)il2cpp_codegen_multiply(L_19, L_20))), (0.02))))));
		// y -= (float)(Input.GetAxis("Mouse Y") * yRotate * 0.02);
		float L_21 = __this->___y_12;
		float L_22;
		L_22 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_23 = __this->___yRotate_7;
		__this->___y_12 = ((float)il2cpp_codegen_subtract(L_21, ((float)((double)il2cpp_codegen_multiply(((double)((float)il2cpp_codegen_multiply(L_22, L_23))), (0.02))))));
		// y = ClampAngle(y, yMinLimit, yMaxLimit);
		float L_24 = __this->___y_12;
		float L_25 = __this->___yMinLimit_8;
		float L_26 = __this->___yMaxLimit_9;
		float L_27;
		L_27 = DemoToonVFX_ClampAngle_mCD550860F8FA7B6643F8459C4B93E2EC26F7858F(L_24, L_25, L_26, NULL);
		__this->___y_12 = L_27;
		// var rotation = Quaternion.Euler(y, x, 0);
		float L_28 = __this->___y_12;
		float L_29 = __this->___x_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30;
		L_30 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_28, L_29, (0.0f), NULL);
		V_2 = L_30;
		// var position = rotation * new Vector3(0, 0, -currDistance) + Holder.position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31 = V_2;
		float L_32 = __this->___currDistance_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_33), (0.0f), (0.0f), ((-L_32)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_31, L_33, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = __this->___Holder_4;
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_35, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_34, L_36, NULL);
		V_3 = L_37;
		// transform.rotation = rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39 = V_2;
		NullCheck(L_38);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_38, L_39, NULL);
		// transform.position = position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_3;
		NullCheck(L_40);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_40, L_41, NULL);
		goto IL_01a3;
	}

IL_0197:
	{
		// Cursor.visible = true;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)1, NULL);
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(0, NULL);
	}

IL_01a3:
	{
		// if (prevDistance != currDistance)
		float L_42 = __this->___prevDistance_10;
		float L_43 = __this->___currDistance_5;
		if ((((float)L_42) == ((float)L_43)))
		{
			goto IL_021e;
		}
	}
	{
		// prevDistance = currDistance;
		float L_44 = __this->___currDistance_5;
		__this->___prevDistance_10 = L_44;
		// var rot = Quaternion.Euler(y, x, 0);
		float L_45 = __this->___y_12;
		float L_46 = __this->___x_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_47;
		L_47 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_45, L_46, (0.0f), NULL);
		V_4 = L_47;
		// var po = rot * new Vector3(0, 0, -currDistance) + Holder.position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = V_4;
		float L_49 = __this->___currDistance_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_50), (0.0f), (0.0f), ((-L_49)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_48, L_50, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52 = __this->___Holder_4;
		NullCheck(L_52);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_52, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_51, L_53, NULL);
		V_5 = L_54;
		// transform.rotation = rot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = V_4;
		NullCheck(L_55);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_55, L_56, NULL);
		// transform.position = po;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57;
		L_57 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = V_5;
		NullCheck(L_57);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_57, L_58, NULL);
	}

IL_021e:
	{
		// }
		return;
	}
}
// System.Single DemoToonVFX::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DemoToonVFX_ClampAngle_mCD550860F8FA7B6643F8459C4B93E2EC26F7858F (float ___angle0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	{
		// if (angle < -360)
		float L_0 = ___angle0;
		if ((!(((float)L_0) < ((float)(-360.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		// angle += 360;
		float L_1 = ___angle0;
		___angle0 = ((float)il2cpp_codegen_add(L_1, (360.0f)));
	}

IL_0011:
	{
		// if (angle > 360)
		float L_2 = ___angle0;
		if ((!(((float)L_2) > ((float)(360.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// angle -= 360;
		float L_3 = ___angle0;
		___angle0 = ((float)il2cpp_codegen_subtract(L_3, (360.0f)));
	}

IL_0022:
	{
		// return Mathf.Clamp(angle, min, max);
		float L_4 = ___angle0;
		float L_5 = ___min1;
		float L_6 = ___max2;
		float L_7;
		L_7 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void DemoToonVFX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoToonVFX__ctor_m2B5565BE473323C2F0CD65BF27733F61C5C0851C (DemoToonVFX_t06970E65DA40CBD336BD676875030BD2C2582AA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA694327B6B78B2DB62ADFEFC49AE5B7B2C768ACA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float currDistance = 5.0f;
		__this->___currDistance_5 = (5.0f);
		// public float xRotate = 250.0f;
		__this->___xRotate_6 = (250.0f);
		// public float yRotate = 120.0f;
		__this->___yRotate_7 = (120.0f);
		// public float yMinLimit = -20f;
		__this->___yMinLimit_8 = (-20.0f);
		// public float yMaxLimit = 80f;
		__this->___yMaxLimit_9 = (80.0f);
		// private ParticleSystem[] particleSystems = new ParticleSystem[0];
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_0 = (ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6*)(ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6*)SZArrayNew(ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___particleSystems_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___particleSystems_22), (void*)L_0);
		// private List<SVA> svList = new List<SVA>();
		List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0* L_1 = (List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0*)il2cpp_codegen_object_new(List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mA694327B6B78B2DB62ADFEFC49AE5B7B2C768ACA(L_1, List_1__ctor_mA694327B6B78B2DB62ADFEFC49AE5B7B2C768ACA_RuntimeMethod_var);
		__this->___svList_23 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___svList_23), (void*)L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FrontMover::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrontMover_Start_mCF95A32A55C63B71B58463451E22F5C42278CDD3 (FrontMover_t817743D058FC96007416BCB899A69FEE51EFD2B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44E2BBC67CA4055A7179457B2B2204C3A7EF200E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InvokeRepeating("StartAgain", 0f, repeatingTime);
		float L_0 = __this->___repeatingTime_8;
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteral44E2BBC67CA4055A7179457B2B2204C3A7EF200E, (0.0f), L_0, NULL);
		// effect.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_1 = __this->___effect_5;
		NullCheck(L_1);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_1, NULL);
		// startSpeed = speed;
		float L_2 = __this->___speed_6;
		__this->___startSpeed_9 = L_2;
		// }
		return;
	}
}
// System.Void FrontMover::StartAgain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrontMover_StartAgain_mF8A8BBAF11D43535F2F784B39AD0881D37450B6B (FrontMover_t817743D058FC96007416BCB899A69FEE51EFD2B7* __this, const RuntimeMethod* method) 
{
	{
		// startSpeed = speed;
		float L_0 = __this->___speed_6;
		__this->___startSpeed_9 = L_0;
		// transform.position = pivot.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___pivot_4;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void FrontMover::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrontMover_Update_mB785C2E9A9AB9F168A0B4D45F0211E32DDAE6148 (FrontMover_t817743D058FC96007416BCB899A69FEE51EFD2B7* __this, const RuntimeMethod* method) 
{
	{
		// startSpeed = startSpeed * drug;
		float L_0 = __this->___startSpeed_9;
		float L_1 = __this->___drug_7;
		__this->___startSpeed_9 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// transform.position += transform.forward * (startSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = L_2;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_5, NULL);
		float L_7 = __this->___startSpeed_9;
		float L_8;
		L_8 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_6, ((float)il2cpp_codegen_multiply(L_7, L_8)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_4, L_9, NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_10, NULL);
		// }
		return;
	}
}
// System.Void FrontMover::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrontMover__ctor_mB1BF614A2D32F739888988DC09349E829D0CBE11 (FrontMover_t817743D058FC96007416BCB899A69FEE51EFD2B7* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 15f;
		__this->___speed_6 = (15.0f);
		// public float drug = 1f;
		__this->___drug_7 = (1.0f);
		// public float repeatingTime = 1f;
		__this->___repeatingTime_8 = (1.0f);
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
// System.Void EGA_EffectSound::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EGA_EffectSound_Start_mCEA7C94C339E990CFCA328E1902A611AAD3FC5B7 (EGA_EffectSound_t9C7F1E3E858A3B0C5CE9FA472CD18903F6BF1A5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94D981E6DAD1F403AC04496FD83C8E5A77DFBE3B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// soundComponent = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___soundComponent_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___soundComponent_11), (void*)L_0);
		// clip = soundComponent.clip;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___soundComponent_11;
		NullCheck(L_1);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2;
		L_2 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_1, NULL);
		__this->___clip_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clip_10), (void*)L_2);
		// if (RandomVolume == true)
		bool L_3 = __this->___RandomVolume_7;
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		// soundComponent.volume = Random.Range(minVolume, maxVolume);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___soundComponent_11;
		float L_5 = __this->___minVolume_8;
		float L_6 = __this->___maxVolume_9;
		float L_7;
		L_7 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_5, L_6, NULL);
		NullCheck(L_4);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_4, L_7, NULL);
		// RepeatSound();
		EGA_EffectSound_RepeatSound_mEB288E2D265E2EF92203640544E2524C203E41AD(__this, NULL);
	}

IL_0047:
	{
		// if (Repeating == true)
		bool L_8 = __this->___Repeating_4;
		if (!L_8)
		{
			goto IL_0066;
		}
	}
	{
		// InvokeRepeating("RepeatSound", StartTime, RepeatTime);
		float L_9 = __this->___StartTime_6;
		float L_10 = __this->___RepeatTime_5;
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteral94D981E6DAD1F403AC04496FD83C8E5A77DFBE3B, L_9, L_10, NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void EGA_EffectSound::RepeatSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EGA_EffectSound_RepeatSound_mEB288E2D265E2EF92203640544E2524C203E41AD (EGA_EffectSound_t9C7F1E3E858A3B0C5CE9FA472CD18903F6BF1A5F* __this, const RuntimeMethod* method) 
{
	{
		// soundComponent.PlayOneShot(clip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___soundComponent_11;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___clip_10;
		NullCheck(L_0);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void EGA_EffectSound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EGA_EffectSound__ctor_mAA64B08C02E3FBBB6959CE08A46090388E9667CA (EGA_EffectSound_t9C7F1E3E858A3B0C5CE9FA472CD18903F6BF1A5F* __this, const RuntimeMethod* method) 
{
	{
		// public bool Repeating = true;
		__this->___Repeating_4 = (bool)1;
		// public float RepeatTime = 2.0f;
		__this->___RepeatTime_5 = (2.0f);
		// public float minVolume = .4f;
		__this->___minVolume_8 = (0.400000006f);
		// public float maxVolume = 1f;
		__this->___maxVolume_9 = (1.0f);
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
// System.Void ParticleCollisionInstance::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleCollisionInstance_Start_m29CD3F3393F9059F32456A9087AD039E87A4678F (ParticleCollisionInstance_t3AE360C2657E23E336EB8E63D4A8AA7D58D0D66B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// part = GetComponent<ParticleSystem>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0;
		L_0 = Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9(__this, Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		__this->___part_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___part_12), (void*)L_0);
		// }
		return;
	}
}
// System.Void ParticleCollisionInstance::OnParticleCollision(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleCollisionInstance_OnParticleCollision_mF6304FBB0357657E60A57F73B9C6EA730129D42C (ParticleCollisionInstance_t3AE360C2657E23E336EB8E63D4A8AA7D58D0D66B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_2 = NULL;
	int32_t V_3 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// int numCollisionEvents = part.GetCollisionEvents(other, collisionEvents);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___part_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___other0;
		List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* L_2 = __this->___collisionEvents_13;
		int32_t L_3;
		L_3 = ParticlePhysicsExtensions_GetCollisionEvents_m37C8F4C7FE60BBA0B6FD4B361BEFFE53CF8154F7(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// for (int i = 0; i < numCollisionEvents; i++)
		V_1 = 0;
		goto IL_0162;
	}

IL_001a:
	{
		// foreach (var effect in EffectsOnCollision)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = __this->___EffectsOnCollision_4;
		V_2 = L_4;
		V_3 = 0;
		goto IL_0155;
	}

IL_0028:
	{
		// foreach (var effect in EffectsOnCollision)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// var instance = Instantiate(effect, collisionEvents[i].intersection + collisionEvents[i].normal * Offset, new Quaternion()) as GameObject;
		List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* L_9 = __this->___collisionEvents_13;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 L_11;
		L_11 = List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D(L_9, L_10, List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D_RuntimeMethod_var);
		V_5 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = ParticleCollisionEvent_get_intersection_m5CD7C517228E7D6148DEA4ED0500533C146DEC97((&V_5), NULL);
		List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* L_13 = __this->___collisionEvents_13;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 L_15;
		L_15 = List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D(L_13, L_14, List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D_RuntimeMethod_var);
		V_5 = L_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = ParticleCollisionEvent_get_normal_m7FC8D0427210D507D8003DB9CCD791AB88DC63FC((&V_5), NULL);
		float L_17 = __this->___Offset_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_16, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_12, L_18, NULL);
		il2cpp_codegen_initobj((&V_6), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_8, L_19, L_20, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		V_4 = L_21;
		// if (!UseWorldSpacePosition) instance.transform.parent = transform;
		bool L_22 = __this->___UseWorldSpacePosition_6;
		if (L_22)
		{
			goto IL_0090;
		}
	}
	{
		// if (!UseWorldSpacePosition) instance.transform.parent = transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_4;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_24);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_24, L_25, NULL);
	}

IL_0090:
	{
		// if (UseFirePointRotation) { instance.transform.LookAt(transform.position); }
		bool L_26 = __this->___UseFirePointRotation_10;
		if (!L_26)
		{
			goto IL_00b4;
		}
	}
	{
		// if (UseFirePointRotation) { instance.transform.LookAt(transform.position); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_4;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		NullCheck(L_28);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_28, L_30, NULL);
		goto IL_0144;
	}

IL_00b4:
	{
		// else if (rotationOffset != Vector3.zero && useOnlyRotationOffset) { instance.transform.rotation = Quaternion.Euler(rotationOffset); }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = __this->___rotationOffset_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_33;
		L_33 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_31, L_32, NULL);
		if (!L_33)
		{
			goto IL_00e7;
		}
	}
	{
		bool L_34 = __this->___useOnlyRotationOffset_9;
		if (!L_34)
		{
			goto IL_00e7;
		}
	}
	{
		// else if (rotationOffset != Vector3.zero && useOnlyRotationOffset) { instance.transform.rotation = Quaternion.Euler(rotationOffset); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = V_4;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = __this->___rotationOffset_8;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38;
		L_38 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_37, NULL);
		NullCheck(L_36);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_36, L_38, NULL);
		goto IL_0144;
	}

IL_00e7:
	{
		// instance.transform.LookAt(collisionEvents[i].intersection + collisionEvents[i].normal);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = V_4;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_39, NULL);
		List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* L_41 = __this->___collisionEvents_13;
		int32_t L_42 = V_1;
		NullCheck(L_41);
		ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 L_43;
		L_43 = List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D(L_41, L_42, List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D_RuntimeMethod_var);
		V_5 = L_43;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = ParticleCollisionEvent_get_intersection_m5CD7C517228E7D6148DEA4ED0500533C146DEC97((&V_5), NULL);
		List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* L_45 = __this->___collisionEvents_13;
		int32_t L_46 = V_1;
		NullCheck(L_45);
		ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 L_47;
		L_47 = List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D(L_45, L_46, List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D_RuntimeMethod_var);
		V_5 = L_47;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = ParticleCollisionEvent_get_normal_m7FC8D0427210D507D8003DB9CCD791AB88DC63FC((&V_5), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_44, L_48, NULL);
		NullCheck(L_40);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_40, L_49, NULL);
		// instance.transform.rotation *= Quaternion.Euler(rotationOffset);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = V_4;
		NullCheck(L_50);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_50, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52 = L_51;
		NullCheck(L_52);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_53;
		L_53 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_52, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = __this->___rotationOffset_8;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_55;
		L_55 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_54, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56;
		L_56 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_53, L_55, NULL);
		NullCheck(L_52);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_52, L_56, NULL);
	}

IL_0144:
	{
		// Destroy(instance, DestroyTimeDelay);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = V_4;
		float L_58 = __this->___DestroyTimeDelay_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_57, L_58, NULL);
		int32_t L_59 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_0155:
	{
		// foreach (var effect in EffectsOnCollision)
		int32_t L_60 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_61 = V_2;
		NullCheck(L_61);
		if ((((int32_t)L_60) < ((int32_t)((int32_t)(((RuntimeArray*)L_61)->max_length)))))
		{
			goto IL_0028;
		}
	}
	{
		// for (int i = 0; i < numCollisionEvents; i++)
		int32_t L_62 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0162:
	{
		// for (int i = 0; i < numCollisionEvents; i++)
		int32_t L_63 = V_1;
		int32_t L_64 = V_0;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_001a;
		}
	}
	{
		// if (DestoyMainEffect == true)
		bool L_65 = __this->___DestoyMainEffect_11;
		if (!L_65)
		{
			goto IL_0188;
		}
	}
	{
		// Destroy(gameObject, DestroyTimeDelay + 0.5f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66;
		L_66 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		float L_67 = __this->___DestroyTimeDelay_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_66, ((float)il2cpp_codegen_add(L_67, (0.5f))), NULL);
	}

IL_0188:
	{
		// }
		return;
	}
}
// System.Void ParticleCollisionInstance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleCollisionInstance__ctor_m562C71D9C4924F920C78C80985130719DF889C2B (ParticleCollisionInstance_t3AE360C2657E23E336EB8E63D4A8AA7D58D0D66B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC738A5621689A7678648746667E7F66D96D6B8FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float DestroyTimeDelay = 5;
		__this->___DestroyTimeDelay_5 = (5.0f);
		// public Vector3 rotationOffset = new Vector3(0,0,0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___rotationOffset_8 = L_0;
		// public bool useOnlyRotationOffset = true;
		__this->___useOnlyRotationOffset_9 = (bool)1;
		// public bool DestoyMainEffect = true;
		__this->___DestoyMainEffect_11 = (bool)1;
		// private List<ParticleCollisionEvent> collisionEvents = new List<ParticleCollisionEvent>();
		List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* L_1 = (List_1_tC738A5621689A7678648746667E7F66D96D6B8FD*)il2cpp_codegen_object_new(List_1_tC738A5621689A7678648746667E7F66D96D6B8FD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1(L_1, List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1_RuntimeMethod_var);
		__this->___collisionEvents_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___collisionEvents_13), (void*)L_1);
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
// System.Void DemoShooting::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoShooting_Start_m135B257E3491E5B5AE6A921225360B272D28CBB5 (DemoShooting_t798039C7E1968AA3B947329A7CC56574256C98B9* __this, const RuntimeMethod* method) 
{
	{
		// if (Screen.dpi < 1) windowDpi = 1;
		float L_0;
		L_0 = Screen_get_dpi_mD5BB95E605FABD335F0D4736EE4860A0AA98A50D(NULL);
		if ((!(((float)L_0) < ((float)(1.0f)))))
		{
			goto IL_0017;
		}
	}
	{
		// if (Screen.dpi < 1) windowDpi = 1;
		__this->___windowDpi_11 = (1.0f);
	}

IL_0017:
	{
		// if (Screen.dpi < 200) windowDpi = 1;
		float L_1;
		L_1 = Screen_get_dpi_mD5BB95E605FABD335F0D4736EE4860A0AA98A50D(NULL);
		if ((!(((float)L_1) < ((float)(200.0f)))))
		{
			goto IL_0030;
		}
	}
	{
		// if (Screen.dpi < 200) windowDpi = 1;
		__this->___windowDpi_11 = (1.0f);
		goto IL_0041;
	}

IL_0030:
	{
		// else windowDpi = Screen.dpi / 200f;
		float L_2;
		L_2 = Screen_get_dpi_mD5BB95E605FABD335F0D4736EE4860A0AA98A50D(NULL);
		__this->___windowDpi_11 = ((float)(L_2/(200.0f)));
	}

IL_0041:
	{
		// Counter(0);
		DemoShooting_Counter_m4D222727E4D96CCD5FCFC95D2B64D63D4606D659(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void DemoShooting::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoShooting_Update_mAEFE895DDC254A28E8B194A5F11D8182118A7A36 (DemoShooting_t798039C7E1968AA3B947329A7CC56574256C98B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0F18A6AE85A6C4C9C21AB97B5018A536795789A);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(0, NULL);
		if (!L_0)
		{
			goto IL_0057;
		}
	}
	{
		// camAnim.Play(camAnim.clip.name);
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_1 = __this->___camAnim_17;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_2 = __this->___camAnim_17;
		NullCheck(L_2);
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_3;
		L_3 = Animation_get_clip_m6041709D3BC8EA54D2D65B9560D2B4E51F78BD51(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		NullCheck(L_1);
		bool L_5;
		L_5 = Animation_Play_m95CC43633DC2B587AB3A0D1FF5F93B863A5440D5(L_1, L_4, NULL);
		// Instantiate(Prefabs[Prefab], FirePoint.transform.position, FirePoint.transform.rotation);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___Prefabs_7;
		int32_t L_7 = __this->___Prefab_12;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___FirePoint_4;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___FirePoint_4;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		NullCheck(L_14);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_9, L_12, L_15, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
	}

IL_0057:
	{
		// if (Input.GetMouseButton(1) && fireCountdown <= 0f)
		bool L_17;
		L_17 = Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70(1, NULL);
		if (!L_17)
		{
			goto IL_00bd;
		}
	}
	{
		float L_18 = __this->___fireCountdown_15;
		if ((!(((float)L_18) <= ((float)(0.0f)))))
		{
			goto IL_00bd;
		}
	}
	{
		// Instantiate(Prefabs[Prefab], FirePoint.transform.position, FirePoint.transform.rotation);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = __this->___Prefabs_7;
		int32_t L_20 = __this->___Prefab_12;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___FirePoint_4;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___FirePoint_4;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		NullCheck(L_27);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_22, L_25, L_28, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// fireCountdown = 0;
		__this->___fireCountdown_15 = (0.0f);
		// fireCountdown += hSliderValue;
		float L_30 = __this->___fireCountdown_15;
		float L_31 = __this->___hSliderValue_14;
		__this->___fireCountdown_15 = ((float)il2cpp_codegen_add(L_30, L_31));
	}

IL_00bd:
	{
		// fireCountdown -= Time.deltaTime;
		float L_32 = __this->___fireCountdown_15;
		float L_33;
		L_33 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___fireCountdown_15 = ((float)il2cpp_codegen_subtract(L_32, L_33));
		// if ((Input.GetKey(KeyCode.A) || Input.GetAxis("Horizontal") < 0) && buttonSaver >= 0.4f)// left button
		bool L_34;
		L_34 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)97), NULL);
		if (L_34)
		{
			goto IL_00e9;
		}
	}
	{
		float L_35;
		L_35 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		if ((!(((float)L_35) < ((float)(0.0f)))))
		{
			goto IL_0108;
		}
	}

IL_00e9:
	{
		float L_36 = __this->___buttonSaver_16;
		if ((!(((float)L_36) >= ((float)(0.400000006f)))))
		{
			goto IL_0108;
		}
	}
	{
		// buttonSaver = 0f;
		__this->___buttonSaver_16 = (0.0f);
		// Counter(-1);
		DemoShooting_Counter_m4D222727E4D96CCD5FCFC95D2B64D63D4606D659(__this, (-1), NULL);
	}

IL_0108:
	{
		// if ((Input.GetKey(KeyCode.D) || Input.GetAxis("Horizontal") > 0) && buttonSaver >= 0.4f)// right button
		bool L_37;
		L_37 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)100), NULL);
		if (L_37)
		{
			goto IL_0122;
		}
	}
	{
		float L_38;
		L_38 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		if ((!(((float)L_38) > ((float)(0.0f)))))
		{
			goto IL_0141;
		}
	}

IL_0122:
	{
		float L_39 = __this->___buttonSaver_16;
		if ((!(((float)L_39) >= ((float)(0.400000006f)))))
		{
			goto IL_0141;
		}
	}
	{
		// buttonSaver = 0f;
		__this->___buttonSaver_16 = (0.0f);
		// Counter(+1);
		DemoShooting_Counter_m4D222727E4D96CCD5FCFC95D2B64D63D4606D659(__this, 1, NULL);
	}

IL_0141:
	{
		// buttonSaver += Time.deltaTime;
		float L_40 = __this->___buttonSaver_16;
		float L_41;
		L_41 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___buttonSaver_16 = ((float)il2cpp_codegen_add(L_40, L_41));
		// if (Cam != null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_42 = __this->___Cam_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_43)
		{
			goto IL_01b2;
		}
	}
	{
		// var mousePos = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		V_1 = L_44;
		// RayMouse = Cam.ScreenPointToRay(mousePos);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_45 = __this->___Cam_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_1;
		NullCheck(L_45);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_47;
		L_47 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_45, L_46, NULL);
		__this->___RayMouse_8 = L_47;
		// if (Physics.Raycast(RayMouse.origin, RayMouse.direction, out hit, MaxLength))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* L_48 = (&__this->___RayMouse_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6(L_48, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* L_50 = (&__this->___RayMouse_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086(L_50, NULL);
		float L_52 = __this->___MaxLength_6;
		bool L_53;
		L_53 = Physics_Raycast_mE0FAFDE7AFE40061DA7518FA5C41CE6BB23DBC10(L_49, L_51, (&V_0), L_52, NULL);
		if (!L_53)
		{
			goto IL_01bc;
		}
	}
	{
		// RotateToMouseDirection(gameObject, hit.point);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54;
		L_54 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		DemoShooting_RotateToMouseDirection_mAD767D53AD25E70D33F67477DC1B72AFDF1064FF(__this, L_54, L_55, NULL);
		return;
	}

IL_01b2:
	{
		// Debug.Log("No camera");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralF0F18A6AE85A6C4C9C21AB97B5018A536795789A, NULL);
	}

IL_01bc:
	{
		// }
		return;
	}
}
// System.Void DemoShooting::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoShooting_OnGUI_mA554399949B690F59F98EA45B5830B170F268C25 (DemoShooting_t798039C7E1968AA3B947329A7CC56574256C98B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3106227DC0FE7BCEDE287654855B3709709843EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48F42A3CF714C9EE7FFF432FFC1082F2D1802545);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DCB91A47C5FF9E23279E744766DD6EA45361672);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC684A88288D3E2415019FEFF6D49AEBEC88152BD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GUI.Label(new Rect(10 * windowDpi, 5 * windowDpi, 400 * windowDpi, 20 * windowDpi), "Use left mouse button to single shoot!");
		float L_0 = __this->___windowDpi_11;
		float L_1 = __this->___windowDpi_11;
		float L_2 = __this->___windowDpi_11;
		float L_3 = __this->___windowDpi_11;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		memset((&L_4), 0, sizeof(L_4));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_4), ((float)il2cpp_codegen_multiply((10.0f), L_0)), ((float)il2cpp_codegen_multiply((5.0f), L_1)), ((float)il2cpp_codegen_multiply((400.0f), L_2)), ((float)il2cpp_codegen_multiply((20.0f), L_3)), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Label_mF161ED74A26AEC05C8A56F0B95F78482CE7ED5C7(L_4, _stringLiteralC684A88288D3E2415019FEFF6D49AEBEC88152BD, NULL);
		// GUI.Label(new Rect(10 * windowDpi, 25 * windowDpi, 400 * windowDpi, 20 * windowDpi), "Use and hold the right mouse button for quick shooting!");
		float L_5 = __this->___windowDpi_11;
		float L_6 = __this->___windowDpi_11;
		float L_7 = __this->___windowDpi_11;
		float L_8 = __this->___windowDpi_11;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9;
		memset((&L_9), 0, sizeof(L_9));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_9), ((float)il2cpp_codegen_multiply((10.0f), L_5)), ((float)il2cpp_codegen_multiply((25.0f), L_6)), ((float)il2cpp_codegen_multiply((400.0f), L_7)), ((float)il2cpp_codegen_multiply((20.0f), L_8)), /*hidden argument*/NULL);
		GUI_Label_mF161ED74A26AEC05C8A56F0B95F78482CE7ED5C7(L_9, _stringLiteral5DCB91A47C5FF9E23279E744766DD6EA45361672, NULL);
		// GUI.Label(new Rect(10 * windowDpi, 45 * windowDpi, 400 * windowDpi, 20 * windowDpi), "Fire rate:");
		float L_10 = __this->___windowDpi_11;
		float L_11 = __this->___windowDpi_11;
		float L_12 = __this->___windowDpi_11;
		float L_13 = __this->___windowDpi_11;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_14;
		memset((&L_14), 0, sizeof(L_14));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_14), ((float)il2cpp_codegen_multiply((10.0f), L_10)), ((float)il2cpp_codegen_multiply((45.0f), L_11)), ((float)il2cpp_codegen_multiply((400.0f), L_12)), ((float)il2cpp_codegen_multiply((20.0f), L_13)), /*hidden argument*/NULL);
		GUI_Label_mF161ED74A26AEC05C8A56F0B95F78482CE7ED5C7(L_14, _stringLiteral3106227DC0FE7BCEDE287654855B3709709843EB, NULL);
		// hSliderValue = GUI.HorizontalSlider(new Rect(70 * windowDpi, 50 * windowDpi, 100 * windowDpi, 20 * windowDpi), hSliderValue, 0.0f, 1.0f);
		float L_15 = __this->___windowDpi_11;
		float L_16 = __this->___windowDpi_11;
		float L_17 = __this->___windowDpi_11;
		float L_18 = __this->___windowDpi_11;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_19;
		memset((&L_19), 0, sizeof(L_19));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_19), ((float)il2cpp_codegen_multiply((70.0f), L_15)), ((float)il2cpp_codegen_multiply((50.0f), L_16)), ((float)il2cpp_codegen_multiply((100.0f), L_17)), ((float)il2cpp_codegen_multiply((20.0f), L_18)), /*hidden argument*/NULL);
		float L_20 = __this->___hSliderValue_14;
		float L_21;
		L_21 = GUI_HorizontalSlider_m8BE3B83A2C4DFA66F92B63AFFC4756A8D00A81D9(L_19, L_20, (0.0f), (1.0f), NULL);
		__this->___hSliderValue_14 = L_21;
		// GUI.Label(new Rect(10 * windowDpi, 65 * windowDpi, 400 * windowDpi, 20 * windowDpi), "Use the keyboard buttons A/<- and D/-> to change projectiles!");
		float L_22 = __this->___windowDpi_11;
		float L_23 = __this->___windowDpi_11;
		float L_24 = __this->___windowDpi_11;
		float L_25 = __this->___windowDpi_11;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_26;
		memset((&L_26), 0, sizeof(L_26));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_26), ((float)il2cpp_codegen_multiply((10.0f), L_22)), ((float)il2cpp_codegen_multiply((65.0f), L_23)), ((float)il2cpp_codegen_multiply((400.0f), L_24)), ((float)il2cpp_codegen_multiply((20.0f), L_25)), /*hidden argument*/NULL);
		GUI_Label_mF161ED74A26AEC05C8A56F0B95F78482CE7ED5C7(L_26, _stringLiteral48F42A3CF714C9EE7FFF432FFC1082F2D1802545, NULL);
		// }
		return;
	}
}
// System.Void DemoShooting::Counter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoShooting_Counter_m4D222727E4D96CCD5FCFC95D2B64D63D4606D659 (DemoShooting_t798039C7E1968AA3B947329A7CC56574256C98B9* __this, int32_t ___count0, const RuntimeMethod* method) 
{
	{
		// Prefab += count;
		int32_t L_0 = __this->___Prefab_12;
		int32_t L_1 = ___count0;
		__this->___Prefab_12 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// if (Prefab > Prefabs.Length - 1)
		int32_t L_2 = __this->___Prefab_12;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___Prefabs_7;
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), 1)))))
		{
			goto IL_0028;
		}
	}
	{
		// Prefab = 0;
		__this->___Prefab_12 = 0;
		return;
	}

IL_0028:
	{
		// else if (Prefab < 0)
		int32_t L_4 = __this->___Prefab_12;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		// Prefab = Prefabs.Length - 1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___Prefabs_7;
		NullCheck(L_5);
		__this->___Prefab_12 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1));
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void DemoShooting::RotateToMouseDirection(UnityEngine.GameObject,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoShooting_RotateToMouseDirection_mAD767D53AD25E70D33F67477DC1B72AFDF1064FF (DemoShooting_t798039C7E1968AA3B947329A7CC56574256C98B9* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___destination1, const RuntimeMethod* method) 
{
	{
		// direction = destination - obj.transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___destination1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___obj0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_0, L_3, NULL);
		__this->___direction_9 = L_4;
		// rotation = Quaternion.LookRotation(direction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___direction_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_5, NULL);
		__this->___rotation_10 = L_6;
		// obj.transform.localRotation = Quaternion.Lerp(obj.transform.rotation, rotation, 1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ___obj0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = ___obj0;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_10);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = __this->___rotation_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_Lerp_m7BE5A2D8FA33A15A5145B2F5261707CA17C3E792(L_11, L_12, (1.0f), NULL);
		NullCheck(L_8);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_8, L_13, NULL);
		// }
		return;
	}
}
// System.Void DemoShooting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoShooting__ctor_mE634EFAB90AD0EF82ACC3C5AC2175295D1B85E6B (DemoShooting_t798039C7E1968AA3B947329A7CC56574256C98B9* __this, const RuntimeMethod* method) 
{
	{
		// private float hSliderValue = 0.1f;
		__this->___hSliderValue_14 = (0.100000001f);
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
// System.Void AutoDestroyPS::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoDestroyPS_Awake_mBBB22AB2836FDC2A82EC5CAE42E940A74033C772 (AutoDestroyPS_t2BBE9B7F4DC1640097B79171FABBC0657D02E1C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ParticleSystem system = GetComponent<ParticleSystem>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0;
		L_0 = Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9(__this, Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		// var main = system.main;
		NullCheck(L_0);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_1;
		L_1 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_0, NULL);
		V_0 = L_1;
		// timeLeft = main.startLifetimeMultiplier + main.duration;
		float L_2;
		L_2 = MainModule_get_startLifetimeMultiplier_m635DF5E608211FCF706FBAD039AE0C140BCEDB7C((&V_0), NULL);
		float L_3;
		L_3 = MainModule_get_duration_mDCB80E6BD3B6B2DFB92E41FBCCA154D7E7150EB1((&V_0), NULL);
		__this->___timeLeft_4 = ((float)il2cpp_codegen_add(L_2, L_3));
		// Destroy(gameObject, timeLeft);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		float L_5 = __this->___timeLeft_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void AutoDestroyPS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoDestroyPS__ctor_m70E8CDD33D0C6EE68CD1D34CB4D10BFD1C3BEF5D (AutoDestroyPS_t2BBE9B7F4DC1640097B79171FABBC0657D02E1C7* __this, const RuntimeMethod* method) 
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
// System.Void ProjectileMover::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileMover_Start_mB7E2513CEC40EEA08FF33CA62E1858093B6B1253 (ProjectileMover_tE15A2AD1795EB9A3850C65AE3113B36F36775300* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* V_1 = NULL;
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* V_3 = NULL;
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_10), (void*)L_0);
		// if (flash != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___flash_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_00a0;
		}
	}
	{
		// var flashInstance = Instantiate(flash, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___flash_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_3, L_5, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		V_0 = L_7;
		// flashInstance.transform.forward = gameObject.transform.forward;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_11, NULL);
		NullCheck(L_9);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_9, L_12, NULL);
		// var flashPs = flashInstance.GetComponent<ParticleSystem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		NullCheck(L_13);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_14;
		L_14 = GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA(L_13, GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		V_1 = L_14;
		// if (flashPs != null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_15 = V_1;
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_007a;
		}
	}
	{
		// Destroy(flashInstance, flashPs.main.duration);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_0;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_18 = V_1;
		NullCheck(L_18);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_19;
		L_19 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_18, NULL);
		V_2 = L_19;
		float L_20;
		L_20 = MainModule_get_duration_mDCB80E6BD3B6B2DFB92E41FBCCA154D7E7150EB1((&V_2), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_17, L_20, NULL);
		goto IL_00a0;
	}

IL_007a:
	{
		// var flashPsParts = flashInstance.transform.GetChild(0).GetComponent<ParticleSystem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_0;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_22, 0, NULL);
		NullCheck(L_23);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_24;
		L_24 = Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9(L_23, Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		V_3 = L_24;
		// Destroy(flashInstance, flashPsParts.main.duration);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_0;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_26 = V_3;
		NullCheck(L_26);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_27;
		L_27 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_26, NULL);
		V_2 = L_27;
		float L_28;
		L_28 = MainModule_get_duration_mDCB80E6BD3B6B2DFB92E41FBCCA154D7E7150EB1((&V_2), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_25, L_28, NULL);
	}

IL_00a0:
	{
		// Destroy(gameObject,5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_29, (5.0f), NULL);
		// }
		return;
	}
}
// System.Void ProjectileMover::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileMover_FixedUpdate_m435CC47EC010E21415B3C147CC4D92FE3DC17C66 (ProjectileMover_tE15A2AD1795EB9A3850C65AE3113B36F36775300* __this, const RuntimeMethod* method) 
{
	{
		// if (speed != 0)
		float L_0 = __this->___speed_4;
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_002e;
		}
	}
	{
		// rb.velocity = transform.forward * speed;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___rb_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		float L_4 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, L_4, NULL);
		NullCheck(L_1);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_1, L_5, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void ProjectileMover::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileMover_OnCollisionEnter_m2A112F37779E390E40AE47274CC5D695F3F9BEE7 (ProjectileMover_tE15A2AD1795EB9A3850C65AE3113B36F36775300* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* V_4 = NULL;
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_5;
	memset((&V_5), 0, sizeof(V_5));
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* V_6 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_7 = NULL;
	int32_t V_8 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_9 = NULL;
	{
		// rb.constraints = RigidbodyConstraints.FreezeAll;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_10;
		NullCheck(L_0);
		Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3(L_0, ((int32_t)126), NULL);
		// speed = 0;
		__this->___speed_4 = (0.0f);
		// ContactPoint contact = collision.contacts[0];
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_1 = ___collision0;
		NullCheck(L_1);
		ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* L_2;
		L_2 = Collision_get_contacts_m2E8E27E0399230DFA4303A4F4D81C1BD55CBC473(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3 = 0;
		ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		// Quaternion rot = Quaternion.FromToRotation(Vector3.up, contact.normal);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = ContactPoint_get_normal_mD7F0567CA2FD68644F7C6FE318E10C4D15F92AD6((&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_FromToRotation_m041093DBB23CB3641118310881D6B7746E3B8418(L_5, L_6, NULL);
		V_1 = L_7;
		// Vector3 pos = contact.point + contact.normal * hitOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = ContactPoint_get_point_mCCDFDACC5D8DB469898060A56A3CC45132911208((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = ContactPoint_get_normal_mD7F0567CA2FD68644F7C6FE318E10C4D15F92AD6((&V_0), NULL);
		float L_10 = __this->___hitOffset_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_8, L_11, NULL);
		V_2 = L_12;
		// if (hit != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___hit_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_014e;
		}
	}
	{
		// var hitInstance = Instantiate(hit, pos, rot);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___hit_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_15, L_16, L_17, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		V_3 = L_18;
		// if (UseFirePointRotation) { hitInstance.transform.rotation = gameObject.transform.rotation * Quaternion.Euler(0, 180f, 0); }
		bool L_19 = __this->___UseFirePointRotation_6;
		if (!L_19)
		{
			goto IL_00b3;
		}
	}
	{
		// if (UseFirePointRotation) { hitInstance.transform.rotation = gameObject.transform.rotation * Quaternion.Euler(0, 180f, 0); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_3;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		NullCheck(L_23);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_23, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (180.0f), (0.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_24, L_25, NULL);
		NullCheck(L_21);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_21, L_26, NULL);
		goto IL_00fb;
	}

IL_00b3:
	{
		// else if (rotationOffset != Vector3.zero) { hitInstance.transform.rotation = Quaternion.Euler(rotationOffset); }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = __this->___rotationOffset_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_29;
		L_29 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_27, L_28, NULL);
		if (!L_29)
		{
			goto IL_00dd;
		}
	}
	{
		// else if (rotationOffset != Vector3.zero) { hitInstance.transform.rotation = Quaternion.Euler(rotationOffset); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = V_3;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = __this->___rotationOffset_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_32, NULL);
		NullCheck(L_31);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_31, L_33, NULL);
		goto IL_00fb;
	}

IL_00dd:
	{
		// else { hitInstance.transform.LookAt(contact.point + contact.normal); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = V_3;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = ContactPoint_get_point_mCCDFDACC5D8DB469898060A56A3CC45132911208((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = ContactPoint_get_normal_mD7F0567CA2FD68644F7C6FE318E10C4D15F92AD6((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_36, L_37, NULL);
		NullCheck(L_35);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_35, L_38, NULL);
	}

IL_00fb:
	{
		// var hitPs = hitInstance.GetComponent<ParticleSystem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = V_3;
		NullCheck(L_39);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_40;
		L_40 = GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA(L_39, GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		V_4 = L_40;
		// if (hitPs != null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_41 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_41, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_42)
		{
			goto IL_0125;
		}
	}
	{
		// Destroy(hitInstance, hitPs.main.duration);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = V_3;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_44 = V_4;
		NullCheck(L_44);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_45;
		L_45 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_44, NULL);
		V_5 = L_45;
		float L_46;
		L_46 = MainModule_get_duration_mDCB80E6BD3B6B2DFB92E41FBCCA154D7E7150EB1((&V_5), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_43, L_46, NULL);
		goto IL_014e;
	}

IL_0125:
	{
		// var hitPsParts = hitInstance.transform.GetChild(0).GetComponent<ParticleSystem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = V_3;
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_47, NULL);
		NullCheck(L_48);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_48, 0, NULL);
		NullCheck(L_49);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_50;
		L_50 = Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9(L_49, Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		V_6 = L_50;
		// Destroy(hitInstance, hitPsParts.main.duration);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = V_3;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_52 = V_6;
		NullCheck(L_52);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_53;
		L_53 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_52, NULL);
		V_5 = L_53;
		float L_54;
		L_54 = MainModule_get_duration_mDCB80E6BD3B6B2DFB92E41FBCCA154D7E7150EB1((&V_5), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_51, L_54, NULL);
	}

IL_014e:
	{
		// foreach (var detachedPrefab in Detached)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_55 = __this->___Detached_11;
		V_7 = L_55;
		V_8 = 0;
		goto IL_017f;
	}

IL_015b:
	{
		// foreach (var detachedPrefab in Detached)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_56 = V_7;
		int32_t L_57 = V_8;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_9 = L_59;
		// if (detachedPrefab != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_60, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_61)
		{
			goto IL_0179;
		}
	}
	{
		// detachedPrefab.transform.parent = null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = V_9;
		NullCheck(L_62);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_62, NULL);
		NullCheck(L_63);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_63, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
	}

IL_0179:
	{
		int32_t L_64 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_017f:
	{
		// foreach (var detachedPrefab in Detached)
		int32_t L_65 = V_8;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_66 = V_7;
		NullCheck(L_66);
		if ((((int32_t)L_65) < ((int32_t)((int32_t)(((RuntimeArray*)L_66)->max_length)))))
		{
			goto IL_015b;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67;
		L_67 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_67, NULL);
		// }
		return;
	}
}
// System.Void ProjectileMover::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileMover__ctor_m7720ACC0A647E07D3A7D5E1B5C1807D574213802 (ProjectileMover_tE15A2AD1795EB9A3850C65AE3113B36F36775300* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 15f;
		__this->___speed_4 = (15.0f);
		// public Vector3 rotationOffset = new Vector3(0, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___rotationOffset_7 = L_0;
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
// System.Void CheckDicePos::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckDicePos_FixedUpdate_mED87BACB7DB290FCCC746991B014131E36C430D5 (CheckDicePos_t670402EE5A98752E8AD053C2F79DB6B631E25943* __this, const RuntimeMethod* method) 
{
	{
		// diceVelocity = player.shaker;
		PlayerRoll_tC7F1B885163C9701F82893C3E4A22B46FC4374C9* L_0 = __this->___player_5;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0->___shaker_8;
		__this->___diceVelocity_4 = L_1;
		// }
		return;
	}
}
// System.Void CheckDicePos::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckDicePos_OnTriggerStay_m26924E94BA8547499F021B757F0688950D568C88 (CheckDicePos_t670402EE5A98752E8AD053C2F79DB6B631E25943* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___dice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F7234099CCD07F9C0939ACCC13D7F7F6E95DBAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34A2F8D7BC840D3137EBB24D0BECC80D86E68101);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4082B7F20D2A0B72234B5647F885DE23BE505D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE90B980538C31E760633FE429F33DEB9F5EEB11D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA0B9F0411C2874E1C56CFDC05D005968521774A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEDF6B3A9D724B43072614E535557E2C94107E1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7DDF59B44DDF9253B657C54053522CF694D3FBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE223FB12C5C4646D8E3BDC3C33CBD66FAC2E3FF);
		s_Il2CppMethodInitialized = true;
	}
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// if (diceVelocity.x == 0f & diceVelocity.y == 0f && diceVelocity.z == 0f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___diceVelocity_4);
		float L_1 = L_0->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___diceVelocity_4);
		float L_3 = L_2->___y_3;
		if (!((int32_t)(((((float)L_1) == ((float)(0.0f)))? 1 : 0)&((((float)L_3) == ((float)(0.0f)))? 1 : 0))))
		{
			goto IL_00f1;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___diceVelocity_4);
		float L_5 = L_4->___z_4;
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			goto IL_00f1;
		}
	}
	{
		// player.state = PlayerRoll.Dice.IDLE;
		PlayerRoll_tC7F1B885163C9701F82893C3E4A22B46FC4374C9* L_6 = __this->___player_5;
		NullCheck(L_6);
		L_6->___state_7 = 0;
		// score.text = dice.gameObject.name switch // Set score on UI
		// {
		//     "Side 1" => "6",
		//     "Side 2" => "5",
		//     "Side 3" => "4",
		//     "Side 4" => "3",
		//     "Side 5" => "2",
		//     "Side 6" => "1",
		//     _ => score.text
		// };
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = __this->___score_6;
		V_0 = L_7;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8 = ___dice0;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
		V_2 = L_10;
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralEA0B9F0411C2874E1C56CFDC05D005968521774A, NULL);
		if (L_12)
		{
			goto IL_00ae;
		}
	}
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteralE90B980538C31E760633FE429F33DEB9F5EEB11D, NULL);
		if (L_14)
		{
			goto IL_00b6;
		}
	}
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral4082B7F20D2A0B72234B5647F885DE23BE505D32, NULL);
		if (L_16)
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral34A2F8D7BC840D3137EBB24D0BECC80D86E68101, NULL);
		if (L_18)
		{
			goto IL_00c6;
		}
	}
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteralEEDF6B3A9D724B43072614E535557E2C94107E1C, NULL);
		if (L_20)
		{
			goto IL_00ce;
		}
	}
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralFE223FB12C5C4646D8E3BDC3C33CBD66FAC2E3FF, NULL);
		if (L_22)
		{
			goto IL_00d6;
		}
	}
	{
		goto IL_00de;
	}

IL_00ae:
	{
		// "Side 1" => "6",
		V_1 = _stringLiteral2F7234099CCD07F9C0939ACCC13D7F7F6E95DBAD;
		goto IL_00ea;
	}

IL_00b6:
	{
		// "Side 2" => "5",
		V_1 = _stringLiteralF7DDF59B44DDF9253B657C54053522CF694D3FBE;
		goto IL_00ea;
	}

IL_00be:
	{
		// "Side 3" => "4",
		V_1 = _stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9;
		goto IL_00ea;
	}

IL_00c6:
	{
		// "Side 4" => "3",
		V_1 = _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE;
		goto IL_00ea;
	}

IL_00ce:
	{
		// "Side 5" => "2",
		V_1 = _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2;
		goto IL_00ea;
	}

IL_00d6:
	{
		// "Side 6" => "1",
		V_1 = _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
		goto IL_00ea;
	}

IL_00de:
	{
		// _ => score.text
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_23 = __this->___score_6;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_23);
		V_1 = L_24;
	}

IL_00ea:
	{
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_25 = V_0;
		String_t* L_26 = V_1;
		NullCheck(L_25);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_25, L_26);
	}

IL_00f1:
	{
		// }
		return;
	}
}
// System.Void CheckDicePos::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckDicePos__ctor_m2BE8B22AFA89E612F511A236BC3A8B8674129A3D (CheckDicePos_t670402EE5A98752E8AD053C2F79DB6B631E25943* __this, const RuntimeMethod* method) 
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
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// scaled = Time.deltaTime;
		float L_0;
		L_0 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___scaled_9 = L_0;
		// unscaled = Time.unscaledDeltaTime;
		float L_1;
		L_1 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		__this->___unscaled_10 = L_1;
		// }
		return;
	}
}
// System.Void GameManager::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_PauseGame_m71EF0E0188E18168F8B12288BA3363109B0C5D5A (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (state)
		int32_t L_0 = __this->___state_11;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0079;
		}
	}
	{
		// state = GameState.Paused;
		__this->___state_11 = 0;
		// Time.timeScale = 0f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.0f), NULL);
		// HideUI(false);
		GameManager_HideUI_mBBF4DBBE7AB888A7C10FFDFE64937226E6068C6A(__this, (bool)0, NULL);
		// StartCoroutine(PauseUI(0f, 1f, unscaled));
		float L_3 = __this->___unscaled_10;
		RuntimeObject* L_4;
		L_4 = GameManager_PauseUI_mACCA14113BBB83159673215BFC2708CAE91F5E60(__this, (0.0f), (1.0f), L_3, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// break;
		return;
	}

IL_0044:
	{
		// state = GameState.Gaming;
		__this->___state_11 = 1;
		// Time.timeScale = 1f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// HideUI(true);
		GameManager_HideUI_mBBF4DBBE7AB888A7C10FFDFE64937226E6068C6A(__this, (bool)1, NULL);
		// StartCoroutine(PauseUI(1f, 0f, scaled));
		float L_6 = __this->___scaled_9;
		RuntimeObject* L_7;
		L_7 = GameManager_PauseUI_mACCA14113BBB83159673215BFC2708CAE91F5E60(__this, (1.0f), (0.0f), L_6, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_7, NULL);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::PauseUI(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_PauseUI_mACCA14113BBB83159673215BFC2708CAE91F5E60 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, float ___targetA0, float ___targetB1, float ____time2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPauseUIU3Ed__11_tD4486847F824AA99E4ADFD4B33E7270D578F5177_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPauseUIU3Ed__11_tD4486847F824AA99E4ADFD4B33E7270D578F5177* L_0 = (U3CPauseUIU3Ed__11_tD4486847F824AA99E4ADFD4B33E7270D578F5177*)il2cpp_codegen_object_new(U3CPauseUIU3Ed__11_tD4486847F824AA99E4ADFD4B33E7270D578F5177_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CPauseUIU3Ed__11__ctor_m27C71F969E0CA31716D3C6A9116475BE57BF5182(L_0, 0, NULL);
		U3CPauseUIU3Ed__11_tD4486847F824AA99E4ADFD4B33E7270D578F5177* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CPauseUIU3Ed__11_tD4486847F824AA99E4ADFD4B33E7270D578F5177* L_2 = L_1;
		float L_3 = ___targetA0;
		NullCheck(L_2);
		L_2->___targetA_4 = L_3;
		U3CPauseUIU3Ed__11_tD4486847F824AA99E4ADFD4B33E7270D578F5177* L_4 = L_2;
		float L_5 = ___targetB1;
		NullCheck(L_4);
		L_4->___targetB_5 = L_5;
		U3CPauseUIU3Ed__11_tD4486847F824AA99E4ADFD4B33E7270D578F5177* L_6 = L_4;
		float L_7 = ____time2;
		NullCheck(L_6);
		L_6->____time_3 = L_7;
		return L_6;
	}
}
// System.Void GameManager::HideUI(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HideUI_mBBF4DBBE7AB888A7C10FFDFE64937226E6068C6A (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, bool ___status0, const RuntimeMethod* method) 
{
	{
		// gameplayCanvas.SetActive(status);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameplayCanvas_6;
		bool L_1 = ___status0;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// GameState state = GameState.Gaming;
		__this->___state_11 = 1;
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
// System.Void GameManager/<PauseUI>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseUIU3Ed__11__ctor_m27C71F969E0CA31716D3C6A9116475BE57BF5182 (U3CPauseUIU3Ed__11_tD4486847F824AA99E4ADFD4B33E7270D578F5177* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<PauseUI>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseUIU3Ed__11_System_IDisposable_Dispose_m88AEBE05F219A7E66E6C4AE0B99B405FFF6476C1 (U3CPauseUIU3Ed__11_tD4486847F824AA99E4ADFD4B33E7270D578F5177* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<PauseUI>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPauseUIU3Ed__11_MoveNext_mD9AAEB525321FEB8679792B10237A45820AD88D9 (U3CPauseUIU3Ed__11_tD4486847F824AA99E4ADFD4B33E7270D578F5177* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0080;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (state == GameState.Paused) pauseMenu.SetActive(true);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = L_4->___state_11;
		if (L_5)
		{
			goto IL_0087;
		}
	}
	{
		// if (state == GameState.Paused) pauseMenu.SetActive(true);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_6 = V_1;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___pauseMenu_7;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		goto IL_0087;
	}

IL_0034:
	{
		// current += _time;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_8 = V_1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->___current_8;
		float L_11 = __this->____time_3;
		NullCheck(L_8);
		L_8->___current_8 = ((float)il2cpp_codegen_add(L_10, L_11));
		// cAlpha.alpha = Mathf.Lerp(targetA, targetB, current / duration);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_12 = V_1;
		NullCheck(L_12);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_13 = L_12->___cAlpha_4;
		float L_14 = __this->___targetA_4;
		float L_15 = __this->___targetB_5;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_16 = V_1;
		NullCheck(L_16);
		float L_17 = L_16->___current_8;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_18 = V_1;
		NullCheck(L_18);
		float L_19 = L_18->___duration_5;
		float L_20;
		L_20 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_14, L_15, ((float)(L_17/L_19)), NULL);
		NullCheck(L_13);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_13, L_20, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0080:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0087:
	{
		// while (current < duration)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_21 = V_1;
		NullCheck(L_21);
		float L_22 = L_21->___current_8;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_23 = V_1;
		NullCheck(L_23);
		float L_24 = L_23->___duration_5;
		if ((((float)L_22) < ((float)L_24)))
		{
			goto IL_0034;
		}
	}
	{
		// if (state == GameState.Gaming) pauseMenu.SetActive(false);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = L_25->___state_11;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_00aa;
		}
	}
	{
		// if (state == GameState.Gaming) pauseMenu.SetActive(false);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_27 = V_1;
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = L_27->___pauseMenu_7;
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)0, NULL);
	}

IL_00aa:
	{
		// current = 0f;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_29 = V_1;
		NullCheck(L_29);
		L_29->___current_8 = (0.0f);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<PauseUI>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPauseUIU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m53091ED28C13C4F14F7D19728B953FEB7FB96B5D (U3CPauseUIU3Ed__11_tD4486847F824AA99E4ADFD4B33E7270D578F5177* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<PauseUI>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseUIU3Ed__11_System_Collections_IEnumerator_Reset_m07E2C6DDBD956566B74D0944B83AF398DBC671EE (U3CPauseUIU3Ed__11_tD4486847F824AA99E4ADFD4B33E7270D578F5177* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPauseUIU3Ed__11_System_Collections_IEnumerator_Reset_m07E2C6DDBD956566B74D0944B83AF398DBC671EE_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<PauseUI>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPauseUIU3Ed__11_System_Collections_IEnumerator_get_Current_m373A46D81D3682F5F16D817EB17342ACFD4B9405 (U3CPauseUIU3Ed__11_tD4486847F824AA99E4ADFD4B33E7270D578F5177* __this, const RuntimeMethod* method) 
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
// System.Void PlayerRoll::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerRoll_Update_mC801FA288E596DA92A1882B6B789A7C299F55317 (PlayerRoll_tC7F1B885163C9701F82893C3E4A22B46FC4374C9* __this, const RuntimeMethod* method) 
{
	{
		// RollDice();
		PlayerRoll_RollDice_mDC917B405622F92374B3F304C801807D95A4F600(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayerRoll::RollDice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerRoll_RollDice_mDC917B405622F92374B3F304C801807D95A4F600 (PlayerRoll_tC7F1B885163C9701F82893C3E4A22B46FC4374C9* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// shaker = rb.velocity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_6;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_0, NULL);
		__this->___shaker_8 = L_1;
		// if(state == Dice.ROLLING) return;
		int32_t L_2 = __this->___state_7;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001b;
		}
	}
	{
		// if(state == Dice.ROLLING) return;
		return;
	}

IL_001b:
	{
		// shaker = Input.acceleration;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Input_get_acceleration_mF33877F82B497F1B4B7D32BD9CD8388D0B3696FD(NULL);
		__this->___shaker_8 = L_3;
		// if (shaker.sqrMagnitude <= shakeForce) return;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___shaker_8);
		float L_5;
		L_5 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline(L_4, NULL);
		float L_6 = __this->___shakeForce_4;
		if ((!(((float)L_5) <= ((float)L_6))))
		{
			goto IL_003a;
		}
	}
	{
		// if (shaker.sqrMagnitude <= shakeForce) return;
		return;
	}

IL_003a:
	{
		// state = Dice.ROLLING;
		__this->___state_7 = 1;
		// float dirX = RandomVelocity();
		float L_7;
		L_7 = PlayerRoll_RandomVelocity_m65384D2637B003CC73AB0B8C98894E93DECF4D1B(__this, NULL);
		V_0 = L_7;
		// float dirY = RandomVelocity();
		float L_8;
		L_8 = PlayerRoll_RandomVelocity_m65384D2637B003CC73AB0B8C98894E93DECF4D1B(__this, NULL);
		V_1 = L_8;
		// float dirZ = RandomVelocity();
		float L_9;
		L_9 = PlayerRoll_RandomVelocity_m65384D2637B003CC73AB0B8C98894E93DECF4D1B(__this, NULL);
		V_2 = L_9;
		// transform.rotation = Quaternion.identity; //Aligned for all axis
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_10);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_10, L_11, NULL);
		// rb.AddForce(transform.up * upDiceForce); // Raise the dice force
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12 = __this->___rb_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_13, NULL);
		float L_15 = __this->___upDiceForce_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_14, L_15, NULL);
		NullCheck(L_12);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_12, L_16, NULL);
		// rb.AddTorque(dirX,dirY,dirZ); // Apply torque in all axis
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_17 = __this->___rb_6;
		float L_18 = V_0;
		float L_19 = V_1;
		float L_20 = V_2;
		NullCheck(L_17);
		Rigidbody_AddTorque_mC55713BD82CB5EFB0D6C705B98F030717EF50CA1(L_17, L_18, L_19, L_20, NULL);
		// }
		return;
	}
}
// System.Single PlayerRoll::RandomVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerRoll_RandomVelocity_m65384D2637B003CC73AB0B8C98894E93DECF4D1B (PlayerRoll_tC7F1B885163C9701F82893C3E4A22B46FC4374C9* __this, const RuntimeMethod* method) 
{
	{
		// float RandomVelocity() => Random.Range(0, 500); // Random Velocity for all axis
		int32_t L_0;
		L_0 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)500), NULL);
		return ((float)L_0);
	}
}
// System.Void PlayerRoll::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerRoll__ctor_mDB7D233C006E7362CDDCCFD8D4AC35D14FA0D080 (PlayerRoll_tC7F1B885163C9701F82893C3E4A22B46FC4374C9* __this, const RuntimeMethod* method) 
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
// System.Void RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Default::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameByFrameRendering_Default_Start_m939B8489388A44B4B4D81250AE646310B5037C7E (FrameByFrameRendering_Default_t44ECB1AA7D3808E17FA737F8095DC8FBE728D7C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16616D61D1F596C11D66025981D6CED3F79A8444);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DB1BCEB3201A488155434A9E836FBE803059DFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76CFAA3359AF7E9FC2CE2FABE446CFF2EA962888);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77845057A8019C4D366B0F8EDD589F6B035F56BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EC8194AAC1088386111DF04E6DE6D75C43BEC9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97501CA22CE390E1DB302EC4A1A9A4323F86D45D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5B55079BEF332F80BF49FA72826DD2987D2709A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB081F93C5BCFEA496556CFA8465A42A7B5E764D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB140965D50DC6D755D66CCA48F95FA7F9A3E3D40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2B003CFCFAD8A84795A87CEA509A5EE1BA46056);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC32EDC91D7BFB0336E42564147DECEF11D438084);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE799B696BCB2FF66587466B9C27050B1904318A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA35468CA9F3057596207F5BDF3347541D7017D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (StartFrameCont <= -1)
		int32_t L_0 = __this->___StartFrameCont_15;
		if ((((int32_t)L_0) > ((int32_t)(-1))))
		{
			goto IL_002d;
		}
	}
	{
		// StartFrameCheck = false;
		__this->___StartFrameCheck_13 = (bool)0;
		// StartRendering = false;
		__this->___StartRendering_12 = (bool)0;
		// info = "Rendering has not started because 'Start Frame' value is less than 0.";
		__this->___info_11 = _stringLiteral5DB1BCEB3201A488155434A9E836FBE803059DFD;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___info_11), (void*)_stringLiteral5DB1BCEB3201A488155434A9E836FBE803059DFD);
		// Debug.LogError(info);
		String_t* L_1 = __this->___info_11;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_1, NULL);
	}

IL_002d:
	{
		// if (EndFrameCont <= 0)
		int32_t L_2 = __this->___EndFrameCont_16;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		// StartFrameCheck = false;
		__this->___StartFrameCheck_13 = (bool)0;
		// StartRendering = false;
		__this->___StartRendering_12 = (bool)0;
		// info = "Rendering has not started because 'End Frame' value is 0 or less than 0.";
		__this->___info_11 = _stringLiteralC32EDC91D7BFB0336E42564147DECEF11D438084;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___info_11), (void*)_stringLiteralC32EDC91D7BFB0336E42564147DECEF11D438084);
		// Debug.LogError(info);
		String_t* L_3 = __this->___info_11;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_3, NULL);
	}

IL_005a:
	{
		// if (FrameRateCont <= 0)
		int32_t L_4 = __this->___FrameRateCont_17;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		// StartFrameCheck = false;
		__this->___StartFrameCheck_13 = (bool)0;
		// StartRendering = false;
		__this->___StartRendering_12 = (bool)0;
		// info = "Rendering has not started because 'Frame Rate' value is 0 or less than 0.";
		__this->___info_11 = _stringLiteral76CFAA3359AF7E9FC2CE2FABE446CFF2EA962888;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___info_11), (void*)_stringLiteral76CFAA3359AF7E9FC2CE2FABE446CFF2EA962888);
		// Debug.LogError(info);
		String_t* L_5 = __this->___info_11;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_5, NULL);
	}

IL_0087:
	{
		// if (PNGFileName == string.Empty)
		String_t* L_6 = __this->___PNGFileName_5;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_00ba;
		}
	}
	{
		// PNGFileName = "Frame";
		__this->___PNGFileName_5 = _stringLiteral16616D61D1F596C11D66025981D6CED3F79A8444;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PNGFileName_5), (void*)_stringLiteral16616D61D1F596C11D66025981D6CED3F79A8444);
		// info = "File Name set to 'Frame' because the field is not set or empty.";
		__this->___info_11 = _stringLiteralC2B003CFCFAD8A84795A87CEA509A5EE1BA46056;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___info_11), (void*)_stringLiteralC2B003CFCFAD8A84795A87CEA509A5EE1BA46056);
		// Debug.LogError(info);
		String_t* L_9 = __this->___info_11;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_9, NULL);
	}

IL_00ba:
	{
		// if (PathFolder == string.Empty)
		String_t* L_10 = __this->___PathFolder_4;
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_00ed;
		}
	}
	{
		// PathFolder = "Rendered Files";
		__this->___PathFolder_4 = _stringLiteralB081F93C5BCFEA496556CFA8465A42A7B5E764D4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PathFolder_4), (void*)_stringLiteralB081F93C5BCFEA496556CFA8465A42A7B5E764D4);
		// info = "Folder Path set to 'Rendered Files' and will be created to your UNITY ROOT PROJECT FOLDER because the field is not set or empty.";
		__this->___info_11 = _stringLiteral77845057A8019C4D366B0F8EDD589F6B035F56BE;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___info_11), (void*)_stringLiteral77845057A8019C4D366B0F8EDD589F6B035F56BE);
		// Debug.LogError(info);
		String_t* L_13 = __this->___info_11;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_13, NULL);
	}

IL_00ed:
	{
		// Time.captureFramerate = FrameRate;
		int32_t L_14 = __this->___FrameRate_6;
		Time_set_captureFramerate_m262BE0EBA0D97287DF14C6FCB00DFC6BB23E0108(L_14, NULL);
		// StartFrameCont = StartFrame;
		int32_t L_15 = __this->___StartFrame_7;
		__this->___StartFrameCont_15 = L_15;
		// EndFrameCont = EndFrame;
		int32_t L_16 = __this->___EndFrame_8;
		__this->___EndFrameCont_16 = L_16;
		// FrameRateCont = FrameRate;
		int32_t L_17 = __this->___FrameRate_6;
		__this->___FrameRateCont_17 = L_17;
		// SingleFrameRenderingCont = SingleFrameRenderingMode;
		bool L_18 = __this->___SingleFrameRenderingMode_9;
		__this->___SingleFrameRenderingCont_20 = L_18;
		// PathFolderCont = PathFolder;
		String_t* L_19 = __this->___PathFolder_4;
		__this->___PathFolderCont_18 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PathFolderCont_18), (void*)L_19);
		// PNGFileNameCont = PNGFileName;
		String_t* L_20 = __this->___PNGFileName_5;
		__this->___PNGFileNameCont_19 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PNGFileNameCont_19), (void*)L_20);
		// DirInfo = new System.IO.DirectoryInfo(PathFolder);
		String_t* L_21 = __this->___PathFolder_4;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_22 = (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2*)il2cpp_codegen_object_new(DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		DirectoryInfo__ctor_m36BC476C58B55083046C0A738157D84E2323E0E9(L_22, L_21, NULL);
		__this->___DirInfo_21 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DirInfo_21), (void*)L_22);
		// if (!System.IO.Directory.Exists(PathFolder))
		String_t* L_23 = __this->___PathFolder_4;
		bool L_24;
		L_24 = Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702(L_23, NULL);
		if (L_24)
		{
			goto IL_0190;
		}
	}
	{
		// System.IO.Directory.CreateDirectory(PathFolder);
		String_t* L_25 = __this->___PathFolder_4;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_26;
		L_26 = Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2(L_25, NULL);
		// info = "Folder '" + PathFolder + "' Has Been Created To Your Root Project Folder.";
		String_t* L_27 = __this->___PathFolder_4;
		String_t* L_28;
		L_28 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralA5B55079BEF332F80BF49FA72826DD2987D2709A, L_27, _stringLiteral97501CA22CE390E1DB302EC4A1A9A4323F86D45D, NULL);
		__this->___info_11 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___info_11), (void*)L_28);
		// Debug.LogWarning(info);
		String_t* L_29 = __this->___info_11;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_29, NULL);
	}

IL_0190:
	{
		// if (SingleFrameRenderingMode == false)
		bool L_30 = __this->___SingleFrameRenderingMode_9;
		if (L_30)
		{
			goto IL_0200;
		}
	}
	{
		// info = "Video/Animation Mode";
		__this->___info_11 = _stringLiteralEA35468CA9F3057596207F5BDF3347541D7017D9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___info_11), (void*)_stringLiteralEA35468CA9F3057596207F5BDF3347541D7017D9);
		// Debug.LogWarning(info);
		String_t* L_31 = __this->___info_11;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_31, NULL);
		// if (DirInfo.GetFiles().Length != 0)
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_32 = __this->___DirInfo_21;
		NullCheck(L_32);
		FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* L_33;
		L_33 = DirectoryInfo_GetFiles_m998040748717954CDDCE273F61EEC0625069543F(L_32, NULL);
		NullCheck(L_33);
		if (!(((RuntimeArray*)L_33)->max_length))
		{
			goto IL_01f1;
		}
	}
	{
		// StartFrameCheck = false;
		__this->___StartFrameCheck_13 = (bool)0;
		// StartRendering = false;
		__this->___StartRendering_12 = (bool)0;
		// info = "(Video/Animation Mode) Rendering not started because there are already rendered frames or files in this folder ('" + PathFolder + "'), Please empty this folder or make another folder by changing the Path Folder.";
		String_t* L_34 = __this->___PathFolder_4;
		String_t* L_35;
		L_35 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralB140965D50DC6D755D66CCA48F95FA7F9A3E3D40, L_34, _stringLiteralE799B696BCB2FF66587466B9C27050B1904318A4, NULL);
		__this->___info_11 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___info_11), (void*)L_35);
		// Debug.LogError(info);
		String_t* L_36 = __this->___info_11;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_36, NULL);
		return;
	}

IL_01f1:
	{
		// StartFrameCheck = true;
		__this->___StartFrameCheck_13 = (bool)1;
		// StartRendering = true;
		__this->___StartRendering_12 = (bool)1;
		return;
	}

IL_0200:
	{
		// StartFrameCheck = true;
		__this->___StartFrameCheck_13 = (bool)1;
		// StartRendering = true;
		__this->___StartRendering_12 = (bool)1;
		// info = "Picture or Single Frame Rendering Mode";
		__this->___info_11 = _stringLiteral7EC8194AAC1088386111DF04E6DE6D75C43BEC9E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___info_11), (void*)_stringLiteral7EC8194AAC1088386111DF04E6DE6D75C43BEC9E);
		// Debug.LogWarning(info);
		String_t* L_37 = __this->___info_11;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_37, NULL);
		// EndFrameCont = 1;
		__this->___EndFrameCont_16 = 1;
		// }
		return;
	}
}
// System.Void RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Default::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameByFrameRendering_Default_Update_m4C37C2D4642901D7EFE4324E6ACEEEAADB63F8C4 (FrameByFrameRendering_Default_t44ECB1AA7D3808E17FA737F8095DC8FBE728D7C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42E9B6CACED6E0774AEDF68611C639E6C7C08988);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral482E87E050FD4712FDADE6689768D7E2EF822FC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64655F89026ADC7959CCA7110F1A5E9FADB4E7E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FBAB2EF3A05513A7FC7960D97DC6AD48DAA44D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94CB862F03E039BF9FE9B9772179237228FDB1F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB081F93C5BCFEA496556CFA8465A42A7B5E764D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// CurrentFrame = Time.frameCount - 1;
		int32_t L_0;
		L_0 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		__this->___CurrentFrame_10 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// StartFrame = StartFrameCont;
		int32_t L_1 = __this->___StartFrameCont_15;
		__this->___StartFrame_7 = L_1;
		// EndFrame = EndFrameCont;
		int32_t L_2 = __this->___EndFrameCont_16;
		__this->___EndFrame_8 = L_2;
		// SingleFrameRenderingMode = SingleFrameRenderingCont;
		bool L_3 = __this->___SingleFrameRenderingCont_20;
		__this->___SingleFrameRenderingMode_9 = L_3;
		// PathFolder = PathFolderCont;
		String_t* L_4 = __this->___PathFolderCont_18;
		__this->___PathFolder_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PathFolder_4), (void*)L_4);
		// PNGFileName = PNGFileNameCont;
		String_t* L_5 = __this->___PNGFileNameCont_19;
		__this->___PNGFileName_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PNGFileName_5), (void*)L_5);
		// if (PathFolder == string.Empty)
		String_t* L_6 = __this->___PathFolder_4;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0067;
		}
	}
	{
		// PathFolder = "Rendered Files";
		__this->___PathFolder_4 = _stringLiteralB081F93C5BCFEA496556CFA8465A42A7B5E764D4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PathFolder_4), (void*)_stringLiteralB081F93C5BCFEA496556CFA8465A42A7B5E764D4);
		return;
	}

IL_0067:
	{
		// if (StartFrameCheck == true)
		bool L_9 = __this->___StartFrameCheck_13;
		if (!L_9)
		{
			goto IL_01a0;
		}
	}
	{
		// if (CurrentFrame == StartFrameCont)
		int32_t L_10 = __this->___CurrentFrame_10;
		int32_t L_11 = __this->___StartFrameCont_15;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_009d;
		}
	}
	{
		// info = "Rendering Has Started.";
		__this->___info_11 = _stringLiteral482E87E050FD4712FDADE6689768D7E2EF822FC5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___info_11), (void*)_stringLiteral482E87E050FD4712FDADE6689768D7E2EF822FC5);
		// Debug.LogWarning(info);
		String_t* L_12 = __this->___info_11;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_12, NULL);
		// StartRendering = true;
		__this->___StartRendering_12 = (bool)1;
	}

IL_009d:
	{
		// if (StartRendering == true)
		bool L_13 = __this->___StartRendering_12;
		if (!L_13)
		{
			goto IL_01a0;
		}
	}
	{
		// if (SingleFrameRenderingMode == false)
		bool L_14 = __this->___SingleFrameRenderingMode_9;
		if (L_14)
		{
			goto IL_00f2;
		}
	}
	{
		// string fname = string.Format("{0}/" + PNGFileNameCont + " {1:D04}.png", PathFolderCont, CurrentFrame);
		String_t* L_15 = __this->___PNGFileNameCont_19;
		String_t* L_16;
		L_16 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral94CB862F03E039BF9FE9B9772179237228FDB1F2, L_15, _stringLiteral42E9B6CACED6E0774AEDF68611C639E6C7C08988, NULL);
		String_t* L_17 = __this->___PathFolderCont_18;
		int32_t L_18 = __this->___CurrentFrame_10;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21;
		L_21 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(L_16, L_17, L_20, NULL);
		V_0 = L_21;
		// CurrentRenderedFile = fname;
		String_t* L_22 = V_0;
		__this->___CurrentRenderedFile_14 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CurrentRenderedFile_14), (void*)L_22);
		// info = fname;
		String_t* L_23 = V_0;
		__this->___info_11 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___info_11), (void*)L_23);
		// ScreenCapture.CaptureScreenshot(fname);
		String_t* L_24 = V_0;
		ScreenCapture_CaptureScreenshot_m1FAFDB15448C41E697212E54F852DDD196E15CFF(L_24, NULL);
		goto IL_015e;
	}

IL_00f2:
	{
		// string fname = string.Format("{0}/" + PNGFileNameCont + " " + System.DateTime.Now.ToString("hh_mm_ss") + ".png", PathFolderCont, CurrentFrame);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral94CB862F03E039BF9FE9B9772179237228FDB1F2);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral94CB862F03E039BF9FE9B9772179237228FDB1F2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		String_t* L_28 = __this->___PNGFileNameCont_19;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_28);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_27;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_29;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_31;
		L_31 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		V_2 = L_31;
		String_t* L_32;
		L_32 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_2), _stringLiteral6FBAB2EF3A05513A7FC7960D97DC6AD48DAA44D5, NULL);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_32);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_30;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		String_t* L_34;
		L_34 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_33, NULL);
		String_t* L_35 = __this->___PathFolderCont_18;
		int32_t L_36 = __this->___CurrentFrame_10;
		int32_t L_37 = L_36;
		RuntimeObject* L_38 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_37);
		String_t* L_39;
		L_39 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(L_34, L_35, L_38, NULL);
		V_1 = L_39;
		// CurrentRenderedFile = fname;
		String_t* L_40 = V_1;
		__this->___CurrentRenderedFile_14 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CurrentRenderedFile_14), (void*)L_40);
		// info = fname;
		String_t* L_41 = V_1;
		__this->___info_11 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___info_11), (void*)L_41);
		// ScreenCapture.CaptureScreenshot(fname);
		String_t* L_42 = V_1;
		ScreenCapture_CaptureScreenshot_m1FAFDB15448C41E697212E54F852DDD196E15CFF(L_42, NULL);
	}

IL_015e:
	{
		// if (CurrentFrame == EndFrame)
		int32_t L_43 = __this->___CurrentFrame_10;
		int32_t L_44 = __this->___EndFrame_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_01a0;
		}
	}
	{
		// info = "Rendering Has Ended." + " [Last Rendered File: " + CurrentRenderedFile + "]";
		String_t* L_45 = __this->___CurrentRenderedFile_14;
		String_t* L_46;
		L_46 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral64655F89026ADC7959CCA7110F1A5E9FADB4E7E8, L_45, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		__this->___info_11 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___info_11), (void*)L_46);
		// Debug.LogWarning(info);
		String_t* L_47 = __this->___info_11;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_47, NULL);
		// StartRendering = false;
		__this->___StartRendering_12 = (bool)0;
		// StartFrameCheck = false;
		__this->___StartFrameCheck_13 = (bool)0;
	}

IL_01a0:
	{
		// }
		return;
	}
}
// System.Void RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Default::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameByFrameRendering_Default__ctor_mBBB34AAEF20027BCEB2EB65962B5CDA27A3A7588 (FrameByFrameRendering_Default_t44ECB1AA7D3808E17FA737F8095DC8FBE728D7C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16616D61D1F596C11D66025981D6CED3F79A8444);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB081F93C5BCFEA496556CFA8465A42A7B5E764D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string PathFolder = "Rendered Files";
		__this->___PathFolder_4 = _stringLiteralB081F93C5BCFEA496556CFA8465A42A7B5E764D4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PathFolder_4), (void*)_stringLiteralB081F93C5BCFEA496556CFA8465A42A7B5E764D4);
		// public string PNGFileName = "Frame";
		__this->___PNGFileName_5 = _stringLiteral16616D61D1F596C11D66025981D6CED3F79A8444;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PNGFileName_5), (void*)_stringLiteral16616D61D1F596C11D66025981D6CED3F79A8444);
		// public int FrameRate = 24;
		__this->___FrameRate_6 = ((int32_t)24);
		// public int EndFrame = 100;
		__this->___EndFrame_8 = ((int32_t)100);
		// public string info = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___info_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___info_11), (void*)L_0);
		// private string CurrentRenderedFile = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___CurrentRenderedFile_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CurrentRenderedFile_14), (void*)L_1);
		// private int EndFrameCont = 100;
		__this->___EndFrameCont_16 = ((int32_t)100);
		// private int FrameRateCont = 24;
		__this->___FrameRateCont_17 = ((int32_t)24);
		// private string PathFolderCont = "Rendered Files";
		__this->___PathFolderCont_18 = _stringLiteralB081F93C5BCFEA496556CFA8465A42A7B5E764D4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PathFolderCont_18), (void*)_stringLiteralB081F93C5BCFEA496556CFA8465A42A7B5E764D4);
		// private string PNGFileNameCont = "Frame";
		__this->___PNGFileNameCont_19 = _stringLiteral16616D61D1F596C11D66025981D6CED3F79A8444;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PNGFileNameCont_19), (void*)_stringLiteral16616D61D1F596C11D66025981D6CED3F79A8444);
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
// System.Void RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Manual::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameByFrameRendering_Manual_Start_m4B765071E08C6D7EF22D77146C4C8D7A4739A372 (FrameByFrameRendering_Manual_tF9580085A5B28B92DBD296917E56714C0219D81A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16616D61D1F596C11D66025981D6CED3F79A8444);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D05DAF036A98AA5D79FDEF501615480E6F2048);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77845057A8019C4D366B0F8EDD589F6B035F56BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EC8194AAC1088386111DF04E6DE6D75C43BEC9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97501CA22CE390E1DB302EC4A1A9A4323F86D45D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5B55079BEF332F80BF49FA72826DD2987D2709A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB081F93C5BCFEA496556CFA8465A42A7B5E764D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2B003CFCFAD8A84795A87CEA509A5EE1BA46056);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE25F3D77FDC66D0A709C097CFE3658A1C632CEEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE799B696BCB2FF66587466B9C27050B1904318A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PNGFileName == string.Empty)
		String_t* L_0 = __this->___PNGFileName_7;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// PNGFileName = "Frame";
		__this->___PNGFileName_7 = _stringLiteral16616D61D1F596C11D66025981D6CED3F79A8444;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PNGFileName_7), (void*)_stringLiteral16616D61D1F596C11D66025981D6CED3F79A8444);
		// info = "File Name set to 'Frame' because the field is not set or empty.";
		__this->___info_10 = _stringLiteralC2B003CFCFAD8A84795A87CEA509A5EE1BA46056;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___info_10), (void*)_stringLiteralC2B003CFCFAD8A84795A87CEA509A5EE1BA46056);
		// Debug.LogError(info);
		String_t* L_3 = __this->___info_10;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_3, NULL);
	}

IL_0033:
	{
		// if (PathFolder == string.Empty)
		String_t* L_4 = __this->___PathFolder_6;
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0066;
		}
	}
	{
		// PathFolder = "Rendered Files";
		__this->___PathFolder_6 = _stringLiteralB081F93C5BCFEA496556CFA8465A42A7B5E764D4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PathFolder_6), (void*)_stringLiteralB081F93C5BCFEA496556CFA8465A42A7B5E764D4);
		// info = "Folder Path set to 'Rendered Files' and will be created to your UNITY ROOT PROJECT FOLDER because the field is not set or empty.";
		__this->___info_10 = _stringLiteral77845057A8019C4D366B0F8EDD589F6B035F56BE;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___info_10), (void*)_stringLiteral77845057A8019C4D366B0F8EDD589F6B035F56BE);
		// Debug.LogError(info);
		String_t* L_7 = __this->___info_10;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_7, NULL);
	}

IL_0066:
	{
		// PictureModeCont = PictureMode;
		bool L_8 = __this->___PictureMode_8;
		__this->___PictureModeCont_15 = L_8;
		// PathFolderCont = PathFolder;
		String_t* L_9 = __this->___PathFolder_6;
		__this->___PathFolderCont_12 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PathFolderCont_12), (void*)L_9);
		// PNGFileNameCont = PNGFileName;
		String_t* L_10 = __this->___PNGFileName_7;
		__this->___PNGFileNameCont_13 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PNGFileNameCont_13), (void*)L_10);
		// FrameNumberCont = FrameNumber;
		int32_t L_11 = __this->___FrameNumber_4;
		__this->___FrameNumberCont_14 = L_11;
		// DirInfo = new System.IO.DirectoryInfo(PathFolder);
		String_t* L_12 = __this->___PathFolder_6;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_13 = (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2*)il2cpp_codegen_object_new(DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		DirectoryInfo__ctor_m36BC476C58B55083046C0A738157D84E2323E0E9(L_13, L_12, NULL);
		__this->___DirInfo_17 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DirInfo_17), (void*)L_13);
		// if (!System.IO.Directory.Exists(PathFolder))
		String_t* L_14 = __this->___PathFolder_6;
		bool L_15;
		L_15 = Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702(L_14, NULL);
		if (L_15)
		{
			goto IL_00e6;
		}
	}
	{
		// System.IO.Directory.CreateDirectory(PathFolder);
		String_t* L_16 = __this->___PathFolder_6;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_17;
		L_17 = Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2(L_16, NULL);
		// info = "Folder '" + PathFolder + "' Has Been Created To Your Root Project Folder.";
		String_t* L_18 = __this->___PathFolder_6;
		String_t* L_19;
		L_19 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralA5B55079BEF332F80BF49FA72826DD2987D2709A, L_18, _stringLiteral97501CA22CE390E1DB302EC4A1A9A4323F86D45D, NULL);
		__this->___info_10 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___info_10), (void*)L_19);
		// Debug.LogWarning(info);
		String_t* L_20 = __this->___info_10;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_20, NULL);
	}

IL_00e6:
	{
		// if (PictureMode == false)
		bool L_21 = __this->___PictureMode_8;
		if (L_21)
		{
			goto IL_0147;
		}
	}
	{
		// info = "Frame by Frame Rendering Mode";
		__this->___info_10 = _stringLiteral60D05DAF036A98AA5D79FDEF501615480E6F2048;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___info_10), (void*)_stringLiteral60D05DAF036A98AA5D79FDEF501615480E6F2048);
		// Debug.LogWarning(info);
		String_t* L_22 = __this->___info_10;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_22, NULL);
		// if (DirInfo.GetFiles().Length != 0)
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_23 = __this->___DirInfo_17;
		NullCheck(L_23);
		FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* L_24;
		L_24 = DirectoryInfo_GetFiles_m998040748717954CDDCE273F61EEC0625069543F(L_23, NULL);
		NullCheck(L_24);
		if (!(((RuntimeArray*)L_24)->max_length))
		{
			goto IL_015d;
		}
	}
	{
		// PreventRender = true;
		__this->___PreventRender_16 = (bool)1;
		// Render = false;
		__this->___Render_5 = (bool)0;
		// info = "(Frame by Frame Mode) Rendering not started because there are already rendered frames or files in this folder ('" + PathFolder + "'), Please empty this folder or make another folder by changing the Path Folder.";
		String_t* L_25 = __this->___PathFolder_6;
		String_t* L_26;
		L_26 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralE25F3D77FDC66D0A709C097CFE3658A1C632CEEA, L_25, _stringLiteralE799B696BCB2FF66587466B9C27050B1904318A4, NULL);
		__this->___info_10 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___info_10), (void*)L_26);
		// Debug.LogError(info);
		String_t* L_27 = __this->___info_10;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_27, NULL);
		return;
	}

IL_0147:
	{
		// info = "Picture or Single Frame Rendering Mode";
		__this->___info_10 = _stringLiteral7EC8194AAC1088386111DF04E6DE6D75C43BEC9E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___info_10), (void*)_stringLiteral7EC8194AAC1088386111DF04E6DE6D75C43BEC9E);
		// Debug.LogWarning(info);
		String_t* L_28 = __this->___info_10;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_28, NULL);
	}

IL_015d:
	{
		// }
		return;
	}
}
// System.Void RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Manual::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameByFrameRendering_Manual_Update_m205686A9A208388CC21310611C1403A651596D04 (FrameByFrameRendering_Manual_tF9580085A5B28B92DBD296917E56714C0219D81A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42E9B6CACED6E0774AEDF68611C639E6C7C08988);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FBAB2EF3A05513A7FC7960D97DC6AD48DAA44D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94CB862F03E039BF9FE9B9772179237228FDB1F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// PictureMode = PictureModeCont;
		bool L_0 = __this->___PictureModeCont_15;
		__this->___PictureMode_8 = L_0;
		// PathFolder = PathFolderCont;
		String_t* L_1 = __this->___PathFolderCont_12;
		__this->___PathFolder_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PathFolder_6), (void*)L_1);
		// PNGFileName = PNGFileNameCont;
		String_t* L_2 = __this->___PNGFileNameCont_13;
		__this->___PNGFileName_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PNGFileName_7), (void*)L_2);
		// LastRenderedFrame = FrameNumberCont;
		int32_t L_3 = __this->___FrameNumberCont_14;
		__this->___LastRenderedFrame_9 = L_3;
		// if (FrameNumber <= 0)
		int32_t L_4 = __this->___FrameNumber_4;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		// FrameNumber = FrameNumberCont;
		int32_t L_5 = __this->___FrameNumberCont_14;
		__this->___FrameNumber_4 = L_5;
	}

IL_0045:
	{
		// if (PreventRender == false)
		bool L_6 = __this->___PreventRender_16;
		if (L_6)
		{
			goto IL_0158;
		}
	}
	{
		// if (Render == true)
		bool L_7 = __this->___Render_5;
		if (!L_7)
		{
			goto IL_0158;
		}
	}
	{
		// if (PictureMode == false)
		bool L_8 = __this->___PictureMode_8;
		if (L_8)
		{
			goto IL_00d5;
		}
	}
	{
		// string fname = string.Format("{0}/" + PNGFileNameCont + " {1:D04}.png", PathFolderCont, FrameNumber);
		String_t* L_9 = __this->___PNGFileNameCont_13;
		String_t* L_10;
		L_10 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral94CB862F03E039BF9FE9B9772179237228FDB1F2, L_9, _stringLiteral42E9B6CACED6E0774AEDF68611C639E6C7C08988, NULL);
		String_t* L_11 = __this->___PathFolderCont_12;
		int32_t L_12 = __this->___FrameNumber_4;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(L_10, L_11, L_14, NULL);
		V_0 = L_15;
		// CurrentRenderedFile = fname;
		String_t* L_16 = V_0;
		__this->___CurrentRenderedFile_11 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CurrentRenderedFile_11), (void*)L_16);
		// ScreenCapture.CaptureScreenshot(fname);
		String_t* L_17 = V_0;
		ScreenCapture_CaptureScreenshot_m1FAFDB15448C41E697212E54F852DDD196E15CFF(L_17, NULL);
		// FrameNumber += 1;
		int32_t L_18 = __this->___FrameNumber_4;
		__this->___FrameNumber_4 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		// FrameNumberCont = FrameNumber;
		int32_t L_19 = __this->___FrameNumber_4;
		__this->___FrameNumberCont_14 = L_19;
		// info = CurrentRenderedFile;
		String_t* L_20 = __this->___CurrentRenderedFile_11;
		__this->___info_10 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___info_10), (void*)L_20);
		// Debug.LogWarning(info);
		String_t* L_21 = __this->___info_10;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_21, NULL);
		// Render = false;
		__this->___Render_5 = (bool)0;
		return;
	}

IL_00d5:
	{
		// string fname = string.Format("{0}/" + PNGFileNameCont + " " + System.DateTime.Now.ToString("hh_mm_ss") + ".png", PathFolderCont, FrameNumber);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral94CB862F03E039BF9FE9B9772179237228FDB1F2);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral94CB862F03E039BF9FE9B9772179237228FDB1F2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		String_t* L_25 = __this->___PNGFileNameCont_13;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_24;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_28;
		L_28 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		V_2 = L_28;
		String_t* L_29;
		L_29 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_2), _stringLiteral6FBAB2EF3A05513A7FC7960D97DC6AD48DAA44D5, NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_29);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_29);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_27;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		String_t* L_31;
		L_31 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_30, NULL);
		String_t* L_32 = __this->___PathFolderCont_12;
		int32_t L_33 = __this->___FrameNumber_4;
		int32_t L_34 = L_33;
		RuntimeObject* L_35 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_34);
		String_t* L_36;
		L_36 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(L_31, L_32, L_35, NULL);
		V_1 = L_36;
		// CurrentRenderedFile = fname;
		String_t* L_37 = V_1;
		__this->___CurrentRenderedFile_11 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CurrentRenderedFile_11), (void*)L_37);
		// ScreenCapture.CaptureScreenshot(fname);
		String_t* L_38 = V_1;
		ScreenCapture_CaptureScreenshot_m1FAFDB15448C41E697212E54F852DDD196E15CFF(L_38, NULL);
		// info = CurrentRenderedFile;
		String_t* L_39 = __this->___CurrentRenderedFile_11;
		__this->___info_10 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___info_10), (void*)L_39);
		// Debug.LogWarning(info);
		String_t* L_40 = __this->___info_10;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_40, NULL);
		// Render = false;
		__this->___Render_5 = (bool)0;
	}

IL_0158:
	{
		// }
		return;
	}
}
// System.Void RealToon.Tools.FrameByFrameRendering.FrameByFrameRendering_Manual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameByFrameRendering_Manual__ctor_mCDB92DD9C2EED24A46A6AF428C9EE3839C0D4023 (FrameByFrameRendering_Manual_tF9580085A5B28B92DBD296917E56714C0219D81A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16616D61D1F596C11D66025981D6CED3F79A8444);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB081F93C5BCFEA496556CFA8465A42A7B5E764D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string PathFolder = "Rendered Files";
		__this->___PathFolder_6 = _stringLiteralB081F93C5BCFEA496556CFA8465A42A7B5E764D4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PathFolder_6), (void*)_stringLiteralB081F93C5BCFEA496556CFA8465A42A7B5E764D4);
		// public string PNGFileName = "Frame";
		__this->___PNGFileName_7 = _stringLiteral16616D61D1F596C11D66025981D6CED3F79A8444;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PNGFileName_7), (void*)_stringLiteral16616D61D1F596C11D66025981D6CED3F79A8444);
		// public string info = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___info_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___info_10), (void*)L_0);
		// private string CurrentRenderedFile = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___CurrentRenderedFile_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CurrentRenderedFile_11), (void*)L_1);
		// private string PathFolderCont = "Rendered Files";
		__this->___PathFolderCont_12 = _stringLiteralB081F93C5BCFEA496556CFA8465A42A7B5E764D4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PathFolderCont_12), (void*)_stringLiteralB081F93C5BCFEA496556CFA8465A42A7B5E764D4);
		// private string PNGFileNameCont = "Frame";
		__this->___PNGFileNameCont_13 = _stringLiteral16616D61D1F596C11D66025981D6CED3F79A8444;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PNGFileNameCont_13), (void*)_stringLiteral16616D61D1F596C11D66025981D6CED3F79A8444);
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
// System.Void RealToon.Script.CustomShadowResolution::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomShadowResolution_Update_m770077B49AB988300A3FF942854400F8C72BAA18 (CustomShadowResolution_t4A838D90148D9C942057B66A095447CF0762F890* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.GetComponent<Light>().shadowCustomResolution = FinalResolution;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0;
		L_0 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(__this, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		int32_t L_1 = __this->___FinalResolution_5;
		NullCheck(L_0);
		Light_set_shadowCustomResolution_mEB39F5DB4F4BEBB2ACC2273E28C651CE578E3502(L_0, L_1, NULL);
		// FinalResolution = Value * 2;
		int32_t L_2 = __this->___Value_4;
		__this->___FinalResolution_5 = ((int32_t)il2cpp_codegen_multiply(L_2, 2));
		// if (Reset == true)
		bool L_3 = __this->___Reset_6;
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		// Value = 2048;
		__this->___Value_4 = ((int32_t)2048);
		// FinalResolution = 4096;
		__this->___FinalResolution_5 = ((int32_t)4096);
		// Reset = false;
		__this->___Reset_6 = (bool)0;
	}

IL_0044:
	{
		// if (Value < 0)
		int32_t L_4 = __this->___Value_4;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		// Value = 0;
		__this->___Value_4 = 0;
		// FinalResolution = 0;
		__this->___FinalResolution_5 = 0;
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void RealToon.Script.CustomShadowResolution::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomShadowResolution__ctor_m2274BE6699C1F1D4C4AF4563BF39B9E0BE355B13 (CustomShadowResolution_t4A838D90148D9C942057B66A095447CF0762F890* __this, const RuntimeMethod* method) 
{
	{
		// public int Value = 2048;
		__this->___Value_4 = ((int32_t)2048);
		// public int FinalResolution = 4096;
		__this->___FinalResolution_5 = ((int32_t)4096);
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
// System.Void RealToon.Script.SmoothObjectNormalHelper::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothObjectNormalHelper_LateUpdate_m067FD926440A7334482273663983CC1EE71DF05C (SmoothObjectNormalHelper_t11D2D6921B6D39BDD46FE0AAC54139B07C779580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4443A4C27ADFDF71D7D67A755F6191BC62903027);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Material == null || ObjectHelper == null || TheObjectToFollow == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___Material_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_00d9;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___ObjectHelper_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_00d9;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___TheObjectToFollow_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_5)
		{
			goto IL_00d9;
		}
	}
	{
		// Vector3 ObjPos = new Vector3(-ObjectHelper.transform.localPosition.x, -ObjectHelper.transform.localPosition.y, -ObjectHelper.transform.localPosition.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___ObjectHelper_5;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_7, NULL);
		float L_9 = L_8.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___ObjectHelper_5;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_11, NULL);
		float L_13 = L_12.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___ObjectHelper_5;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_15, NULL);
		float L_17 = L_16.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), ((-L_9)), ((-L_13)), ((-L_17)), NULL);
		// Material.SetVector("_XYZPosition", ObjPos * Offset);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___Material_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_0;
		float L_20 = __this->___Offset_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_19, L_20, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_22;
		L_22 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(L_21, NULL);
		NullCheck(L_18);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_18, _stringLiteral4443A4C27ADFDF71D7D67A755F6191BC62903027, L_22, NULL);
		// ObjectHelper.position = TheObjectToFollow.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___ObjectHelper_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = __this->___TheObjectToFollow_6;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		NullCheck(L_23);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_23, L_25, NULL);
		// ObjectHelper.position += AdditionalPositionAdjustment * 0.01f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___ObjectHelper_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = L_26;
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = __this->___AdditionalPositionAdjustment_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_29, (0.00999999978f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_28, L_30, NULL);
		NullCheck(L_27);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_27, L_31, NULL);
	}

IL_00d9:
	{
		// }
		return;
	}
}
// System.Void RealToon.Script.SmoothObjectNormalHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothObjectNormalHelper__ctor_m3D873F735322E1F6B92DBB158E5F1F65F052C06B (SmoothObjectNormalHelper_t11D2D6921B6D39BDD46FE0AAC54139B07C779580* __this, const RuntimeMethod* method) 
{
	{
		// public float Offset = 10.0f;
		__this->___Offset_7 = (10.0f);
		// public Vector3 AdditionalPositionAdjustment = new Vector3(0, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___AdditionalPositionAdjustment_8 = L_0;
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
// System.Void RealToon.Effects.RealToonSobelOutline::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealToonSobelOutline_OnEnable_mF9078894AF73E144C38EBBB415CAADBE3576307E (RealToonSobelOutline_tF9D5DABAA43731CF9DEC9A10D16A7A32081ADD34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AC48891A65400AB735D1E11D6109C71F9E7799F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _material = new Material(Shader.Find("Hidden/RealToon/Effects/Sobel Outline"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0;
		L_0 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral7AC48891A65400AB735D1E11D6109C71F9E7799F, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_1, L_0, NULL);
		__this->____material_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____material_10), (void*)L_1);
		// }
		return;
	}
}
// System.Void RealToon.Effects.RealToonSobelOutline::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealToonSobelOutline_Reset_m7BB0888CD5BE2A0889B4947F07FCE016D2BE0346 (RealToonSobelOutline_tF9D5DABAA43731CF9DEC9A10D16A7A32081ADD34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AC48891A65400AB735D1E11D6109C71F9E7799F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _material = new Material(Shader.Find("Hidden/RealToon/Effects/Sobel Outline"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0;
		L_0 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral7AC48891A65400AB735D1E11D6109C71F9E7799F, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_1, L_0, NULL);
		__this->____material_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____material_10), (void*)L_1);
		// }
		return;
	}
}
// System.Void RealToon.Effects.RealToonSobelOutline::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealToonSobelOutline_OnRenderImage_m2588847E3CAA1BBDCB6FEA1FD4D81528A3FE5766 (RealToonSobelOutline_tF9D5DABAA43731CF9DEC9A10D16A7A32081ADD34* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC172ACCB1CFCEE111C7F08902B818358207D054);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	{
		// _material.SetFloat("_OutlineWidth", OutlineWidth);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_10;
		float L_1 = __this->___OutlineWidth_4;
		NullCheck(L_0);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_0, _stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257, L_1, NULL);
		// _material.SetFloat("_OutlineColorPower", ColorPower);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->____material_10;
		float L_3 = __this->___ColorPower_6;
		NullCheck(L_2);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_2, _stringLiteralFC172ACCB1CFCEE111C7F08902B818358207D054, L_3, NULL);
		// _material.SetColor("_OutlineColor", OutlineColor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->____material_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->___OutlineColor_5;
		NullCheck(L_4);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_4, _stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C, L_5, NULL);
		// Graphics.Blit(source, destination, _material);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->____material_10;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m4055EA37BA8BAEF7EF29830F86ED13227780F4DD(L_6, L_7, L_8, NULL);
		// Camera cam = null;
		V_0 = (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL;
		// if (excludeLayers.value != 0) cam = GetTmpCam();
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* L_9 = (&__this->___excludeLayers_7);
		int32_t L_10;
		L_10 = LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974(L_9, NULL);
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		// if (excludeLayers.value != 0) cam = GetTmpCam();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11;
		L_11 = RealToonSobelOutline_GetTmpCam_m38FCE8C7EBB436B79C8A0186304036A2481BA873(__this, NULL);
		V_0 = L_11;
	}

IL_0065:
	{
		// if (cam && excludeLayers.value != 0)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_12, NULL);
		if (!L_13)
		{
			goto IL_00a0;
		}
	}
	{
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* L_14 = (&__this->___excludeLayers_7);
		int32_t L_15;
		L_15 = LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974(L_14, NULL);
		if (!L_15)
		{
			goto IL_00a0;
		}
	}
	{
		// cam.targetTexture = destination;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = ___destination1;
		NullCheck(L_16);
		Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(L_16, L_17, NULL);
		// cam.cullingMask = excludeLayers;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_19 = __this->___excludeLayers_7;
		int32_t L_20;
		L_20 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_19, NULL);
		NullCheck(L_18);
		Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32(L_18, L_20, NULL);
		// cam.Render();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_21 = V_0;
		NullCheck(L_21);
		Camera_Render_m6089001EB6710DA9A21C87185D65922F13A24509(L_21, NULL);
		// destroy = true;
		__this->___destroy_12 = (bool)1;
		return;
	}

IL_00a0:
	{
		// if (destroy == true)
		bool L_22 = __this->___destroy_12;
		if (!L_22)
		{
			goto IL_00c4;
		}
	}
	{
		// DestroyImmediate(GameObject.Find(tmpCam.name));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___tmpCam_8;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_23, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_25, NULL);
		// destroy = false;
		__this->___destroy_12 = (bool)0;
	}

IL_00c4:
	{
		// }
		return;
	}
}
// UnityEngine.Camera RealToon.Effects.RealToonSobelOutline::GetTmpCam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* RealToonSobelOutline_GetTmpCam_m38FCE8C7EBB436B79C8A0186304036A2481BA873 (RealToonSobelOutline_tF9D5DABAA43731CF9DEC9A10D16A7A32081ADD34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAE2FBB1665A88A7F806A64D046B373E3D468096);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (tmpCam == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___tmpCam_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_00b2;
		}
	}
	{
		// if (_camera == null) _camera = GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->____camera_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// if (_camera == null) _camera = GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		__this->____camera_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____camera_9), (void*)L_4);
	}

IL_002b:
	{
		// string name = "_" + _camera.name + "_temp";
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->____camera_9;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_6, _stringLiteralDAE2FBB1665A88A7F806A64D046B373E3D468096, NULL);
		V_0 = L_7;
		// go = GameObject.Find(name);
		String_t* L_8 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(L_8, NULL);
		__this->___go_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___go_11), (void*)L_9);
		// if (go == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___go_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_00a6;
		}
	}
	{
		// tmpCam = new GameObject(name, typeof(Camera));
		String_t* L_12 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_14 = L_13;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_15, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		GameObject__ctor_m721D643351E55308EA4F5F41B67D5446D11C61F0(L_17, L_12, L_14, NULL);
		__this->___tmpCam_8 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tmpCam_8), (void*)L_17);
		// tmpCam.transform.parent = GameObject.Find(_camera.name).transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___tmpCam_8;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_20 = __this->____camera_9;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_20, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(L_21, NULL);
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		NullCheck(L_19);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_19, L_23, NULL);
		goto IL_00b2;
	}

IL_00a6:
	{
		// tmpCam = go;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___go_11;
		__this->___tmpCam_8 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tmpCam_8), (void*)L_24);
	}

IL_00b2:
	{
		// tmpCam.hideFlags = HideFlags.DontSave;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___tmpCam_8;
		NullCheck(L_25);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_25, ((int32_t)52), NULL);
		// tmpCam.transform.position = _camera.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___tmpCam_8;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_28 = __this->____camera_9;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		NullCheck(L_27);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_27, L_30, NULL);
		// tmpCam.transform.rotation = _camera.transform.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___tmpCam_8;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_33 = __this->____camera_9;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_33, NULL);
		NullCheck(L_34);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35;
		L_35 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_34, NULL);
		NullCheck(L_32);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_32, L_35, NULL);
		// tmpCam.transform.localScale = _camera.transform.localScale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___tmpCam_8;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_36, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_38 = __this->____camera_9;
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_38, NULL);
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_39, NULL);
		NullCheck(L_37);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_37, L_40, NULL);
		// tmpCam.GetComponent<Camera>().CopyFrom(_camera);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___tmpCam_8;
		NullCheck(L_41);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_42;
		L_42 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_41, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_43 = __this->____camera_9;
		NullCheck(L_42);
		Camera_CopyFrom_mFA5C3AB8E95EC4124249520ACEC6F7F25E5CDC52(L_42, L_43, NULL);
		// tmpCam.GetComponent<Camera>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = __this->___tmpCam_8;
		NullCheck(L_44);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_45;
		L_45 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_44, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		NullCheck(L_45);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_45, (bool)0, NULL);
		// tmpCam.GetComponent<Camera>().depthTextureMode = DepthTextureMode.None;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = __this->___tmpCam_8;
		NullCheck(L_46);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_47;
		L_47 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_46, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		NullCheck(L_47);
		Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF(L_47, 0, NULL);
		// tmpCam.GetComponent<Camera>().clearFlags = CameraClearFlags.Nothing;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___tmpCam_8;
		NullCheck(L_48);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_49;
		L_49 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_48, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		NullCheck(L_49);
		Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93(L_49, 4, NULL);
		// return tmpCam.GetComponent<Camera>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = __this->___tmpCam_8;
		NullCheck(L_50);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_51;
		L_51 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_50, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		return L_51;
	}
}
// System.Void RealToon.Effects.RealToonSobelOutline::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealToonSobelOutline__ctor_m393C2401485BA10F779E2764B6246522AC17C191 (RealToonSobelOutline_tF9D5DABAA43731CF9DEC9A10D16A7A32081ADD34* __this, const RuntimeMethod* method) 
{
	{
		// public float OutlineWidth = 0.02f;
		__this->___OutlineWidth_4 = (0.0199999996f);
		// public Color OutlineColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___OutlineColor_5 = L_0;
		// public float ColorPower = 2;
		__this->___ColorPower_6 = (2.0f);
		// public LayerMask excludeLayers = 0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1;
		L_1 = LayerMask_op_Implicit_mDC9C22C4477684D460FCF25B1BFE6B54419FB922(0, NULL);
		__this->___excludeLayers_7 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_mD057CF0F1810C00D0F9E98A5CC5599213CF167DB_inline (float ___H0, float ___S1, float ___V2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___H0;
		float L_1 = ___S1;
		float L_2 = ___V2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_HSVToRGB_mE35BBC0ADCBAA2E71E90C080D7A8A4A19AABCC74(L_0, L_1, L_2, (bool)1, NULL);
		V_0 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		return L_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___v0;
		float L_5 = L_4.___z_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_6), L_1, L_3, L_5, (0.0f), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m7D70CE3C0D64D85D2A218C9A87644ABFDDBF61F2_gshared_inline (List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		SVAU5BU5D_tC2B506FC3823B4F7FF14AE255B5275CFC8A2B85A* L_3 = (SVAU5BU5D_tC2B506FC3823B4F7FF14AE255B5275CFC8A2B85A*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m3A8C08F8600C96696721CD0F314EFB24A8310D29_gshared_inline (List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0* __this, SVA_tF354DE4321E8F3442BC2546E9019F02EBDB9D85D ___item0, const RuntimeMethod* method) 
{
	SVAU5BU5D_tC2B506FC3823B4F7FF14AE255B5275CFC8A2B85A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SVAU5BU5D_tC2B506FC3823B4F7FF14AE255B5275CFC8A2B85A* L_1 = (SVAU5BU5D_tC2B506FC3823B4F7FF14AE255B5275CFC8A2B85A*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SVAU5BU5D_tC2B506FC3823B4F7FF14AE255B5275CFC8A2B85A* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SVAU5BU5D_tC2B506FC3823B4F7FF14AE255B5275CFC8A2B85A* L_6 = V_0;
		int32_t L_7 = V_1;
		SVA_tF354DE4321E8F3442BC2546E9019F02EBDB9D85D L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (SVA_tF354DE4321E8F3442BC2546E9019F02EBDB9D85D)L_8);
		return;
	}

IL_0034:
	{
		SVA_tF354DE4321E8F3442BC2546E9019F02EBDB9D85D L_9 = ___item0;
		((  void (*) (List_1_tFBFE44A1E7794CFC2509AC66E0443527E1728BC0*, SVA_tF354DE4321E8F3442BC2546E9019F02EBDB9D85D, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
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
