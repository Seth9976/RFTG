// 函数名称: sub_50b930
// 虚拟地址: 0x50b930
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_50b930()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    char* eax = data_30785dc
    
    if (*eax == 0)
        return 0
    
    EnterCriticalSection(&eax[4])
    int32_t result = 0
    
    for (int32_t i = 0; i s< 0x50; i += 8)
        int32_t* esi_1 = i + data_30785dc + 0x24
        int32_t eax_4 = *esi_1
        
        if (eax_4 == 2)
            int32_t* eax_5 = esi_1[1]
            
            if (eax_5[1] != 3)
                sub_4c5870("assetPtr->assetType == ASSET_TYPE_TEXTURE", &data_83f3d3, 
                    "c:\ax2010\engine\Texture.h", 0x83, "TextureGetDef")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            **(sub_466320(eax_5) + 0xc) = 1
            sub_50ba10(esi_1[1])
            sub_50b800(esi_1[1])
            *esi_1 = 0
            esi_1[1] = 0
        else if (eax_4 == 3)
            *esi_1 = 0
            esi_1[1] = 0
        else if (eax_4 == 1)
            result += 1
    
    LeaveCriticalSection(data_30785dc + 4)
    return result
}
