struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

}

void RegisterAllClasses()
{
	//Total: 57 classes
	//0. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//1. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//2. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//3. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//4. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//5. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//6. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//7. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//8. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//9. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//10. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//11. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//12. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//13. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//14. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//15. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//16. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//17. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//18. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//19. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//20. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//21. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//22. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//23. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//24. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//25. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//26. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//27. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//28. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//29. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//30. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//31. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//32. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//33. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//34. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//35. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//36. PolygonCollider2D
	void RegisterClass_PolygonCollider2D();
	RegisterClass_PolygonCollider2D();

	//37. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//38. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//39. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//40. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//41. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//42. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//43. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//44. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//45. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//46. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//47. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//48. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//49. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//50. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//51. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//52. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//53. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//54. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//55. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//56. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
