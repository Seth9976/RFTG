// 函数名称: sub_57c210
// 虚拟地址: 0x57c210
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULTsub_57c210()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    int32_t eax
    int32_t edx
    eax, edx = sub_57bfe0()
    int32_t i = 0
    var_c:3.b = eax.b
    
    if (data_273bc2c s> 0)
        do
            int32_t* ecx_1 = data_273ac20
            int32_t ebx_1 = (&data_273ac2c)[i]
            
            if (ecx_1[1] != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*ecx_1 == 0)
                sub_520800(eax, edx.b, ecx_1, 0)
                
                if (*ecx_1 == 0)
                    sub_509540(ecx_1)
            
            int32_t* edx_1 = **ecx_1
            int32_t eax_3 = 0
            int32_t* ecx_2 = nullptr
            int32_t esi_2
            
            while (true)
                if (eax_3 s>= edx_1[1])
                    sub_4c5870("Halt", &data_83f3d3, "Editor\UIEditor.cpp", 0x126, "FindElement")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                esi_2 = *edx_1
                
                if (*(ecx_2 + esi_2) == ebx_1)
                    break
                
                eax_3 += 1
                ecx_2 = &ecx_2[0x46]
            
            edx = esi_2
            ecx_2.b = var_c:3.b == 0
            eax = eax_3 * 0x118
            i += 1
            *(eax + edx + 0x30) = ecx_2.b
        while (i s< data_273bc2c)
    
    sub_5758a0(1)
    sub_540c30(data_273ac20)
    return sub_57c6a0()
}
