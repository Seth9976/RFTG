// 函数名称: sub_57bec0
// 虚拟地址: 0x57bec0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_57bec0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    int32_t i = 0
    int32_t i_1 = 0
    
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
            
            int32_t* edx
            
            if (*ecx_1 == 0)
                sub_520800(i, edx.b, ecx_1, 0)
                
                if (*ecx_1 == 0)
                    sub_509540(ecx_1)
            
            int32_t* esi_2 = **ecx_1
            int32_t eax_2 = 0
            edx = nullptr
            int32_t ecx_2
            
            while (true)
                if (eax_2 s>= esi_2[1])
                    sub_4c5870("Halt", &data_83f3d3, "Editor\UIEditor.cpp", 0x126, "FindElement")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                ecx_2 = *esi_2
                
                if (*(edx + ecx_2) == ebx_1)
                    break
                
                eax_2 += 1
                edx = &edx[0x46]
            
            if (*(eax_2 * 0x118 + ecx_2 + 0x31) == 1)
                int32_t eax_3
                eax_3.b = 1
                return eax_3
            
            i = i_1 + 1
            i_1 = i
        while (i s< data_273bc2c)
    
    i.b = 0
    return i
}
