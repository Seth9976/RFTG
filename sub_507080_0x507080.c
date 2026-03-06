// 函数名称: sub_507080
// 虚拟地址: 0x507080
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __fastcallsub_507080(int32_t arg1, int32_t* arg2 @ esi, int32_t* arg3 @ edi)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    int32_t* eax = *arg3
    
    if (eax != 0)
        if (eax[1] == 3)
            int32_t* eax_6 = sub_466320(eax)
            **eax_6 = *arg2
            int32_t eax_7 = arg2[1]
            *(*eax_6 + 4) = eax_7
            return eax_7
        
        sub_4c5870("assetPtr->assetType == ASSET_TYPE_TEXTURE", &data_83f3d3, 
            "c:\ax2010\engine\Texture.h", 0x83, "TextureGetDef")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t eax_2
    
    if (arg1 == 3 || arg1 == 5)
        eax_2 = 1
    else
        if (arg1 != 4 && arg1 != 6)
            sub_4c5870("Halt", &data_83f3d3, "VR.cpp", 0x91, "VRTextureBind")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        eax_2 = 0x50
    
    char** eax_4 = sub_50bd60(*arg2, arg2[1], eax_2, arg1)
    *arg3 = eax_4
    return eax_4
}
