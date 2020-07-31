using UnityEngine;
using System.Collections;
using UnityEditor;

namespace XLua
{
    public class TemplateRef : ScriptableObject
    {
        public TextAsset LuaClassWrap;
        public TextAsset LuaClassWrapGCM;
        public TextAsset LuaDelegateBridge;
        public TextAsset LuaDelegateWrap;
        public TextAsset LuaEnumWrap;
        public TextAsset LuaEnumWrapGCM;
        public TextAsset LuaInterfaceBridge;
        public TextAsset LuaRegister;
        public TextAsset LuaRegisterGCM;
        public TextAsset LuaWrapPusher;
        public TextAsset PackUnpack;
        public TextAsset TemplateCommon;
    }
}

public static class EditorTest
{
        [MenuItem("XLua/Generate", false, 1)]
        public static void GenAll(bool trace)
        {
        }
}
