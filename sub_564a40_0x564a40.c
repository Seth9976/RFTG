// 函数名称: sub_564a40
// 虚拟地址: 0x564a40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_564a40(int32_t* arg1 @ esi, int32_t* arg2, void* arg3)
{
    // 第一条实际指令: if (arg2[1] != 3)
    if (arg2[1] != 3)
        sub_4c5870("assetPtr->assetType == ASSET_TYPE_TEXTURE", &data_83f3d3, 
            "c:\ax2010\engine\Texture.h", 0x83, "TextureGetDef")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* edi = *sub_466320(arg2)
    arg1[1] = *edi
    arg1[2] = edi[1]
    int32_t eax_4 = *(arg3 + 0x30)
    arg1[4] = eax_4
    int32_t eax_6 = sub_553f70(eax_4) * *edi
    arg1[2]
    int32_t ecx_1 = arg1[1]
    arg1[3] = eax_6
    int32_t eax_9
    int32_t* edx_1
    eax_9, edx_1 = sub_4cce80(sub_554170(arg1[4], arg3, ecx_1))
    *arg1 = eax_9
    int32_t* var_10_1 = arg1
    char result = sub_564540(edi, edx_1)
    
    if (result != 0)
        return result
    
    char* const eax_12 = arg2[8]
    
    if (eax_12 == 0)
        eax_12 = &data_83f3d3
    
    char* const var_10_2 = eax_12
    sub_4c5680("Failed to read texture %s")
    sub_4c5870("Halt", &data_83f3d3, "Editor\AtlasMaker.cpp", 0x22c, "AtlasLoadFontTexture")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
