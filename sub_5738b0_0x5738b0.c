// 函数名称: sub_5738b0
// 虚拟地址: 0x5738b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5738b0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    struct _EXCEPTION_REGISTRATION_RECORD** eax
    int32_t* edx
    eax, edx = sub_573800()
    int32_t i = 0
    var_c:3.b = eax.b
    
    if (data_26a7764 s> 0)
        do
            int32_t* ecx_1 = data_26a6760
            int32_t esi_1 = (&data_26a6764)[i]
            
            if (ecx_1[1] != 0x20)
                sub_4c5870("ptr->assetType == ASSET_TYPE_FAB", &data_83f3d3, "FabDef.cpp", 0xe7, 
                    "FabDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*ecx_1 == 0)
                sub_520800(eax, edx.b, ecx_1, 0)
                
                if (*ecx_1 == 0)
                    sub_509540(ecx_1)
            
            edx = **ecx_1
            eax.b = var_c:3.b == 0
            i += 1
            *(esi_1 * 0xb8 + *edx + 0x31) = eax.b
        while (i s< data_26a7764)
    
    return sub_5752b0(1)
}
