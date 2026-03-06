// 函数名称: sub_573800
// 虚拟地址: 0x573800
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_573800()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    int32_t i = 0
    int32_t result
    
    if (data_26a7764 s> 0)
        int32_t* ecx_1 = data_26a6760
        
        do
            int32_t edi_1 = (&data_26a6764)[i]
            int32_t* esi_1 = ecx_1
            
            if (ecx_1[1] != 0x20)
                sub_4c5870("ptr->assetType == ASSET_TYPE_FAB", &data_83f3d3, "FabDef.cpp", 0xe7, 
                    "FabDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t* edx
            
            if (*ecx_1 == 0)
                sub_520800(result, edx.b, ecx_1, 0)
                
                if (*esi_1 == 0)
                    sub_509540(esi_1)
                
                ecx_1 = data_26a6760
            
            edx = **esi_1
            result = *edx
            
            if (*(edi_1 * 0xb8 + result + 0x31) == 1)
                result.b = 1
                return result
            
            i += 1
        while (i s< data_26a7764)
    
    result.b = 0
    return result
}
