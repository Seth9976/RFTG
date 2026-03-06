// 函数名称: sub_579e80
// 虚拟地址: 0x579e80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_579e80()
{
    // 第一条实际指令: int32_t* eax = sub_4f4890(data_273ac20)
    int32_t* eax = sub_4f4890(data_273ac20)
    int32_t* var_c = eax
    int32_t result = 0
    int32_t i_1 = 0
    
    if (eax[1] s> 0)
        int32_t* var_18_1 = nullptr
        int32_t i
        
        do
            char* ecx_1 = data_273ac20
            int32_t eax_1 = *eax
            int32_t ebx_1 = *(var_18_1 + eax_1)
            
            if (*(ecx_1 + 4) != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*ecx_1 == 0)
                sub_520800(eax_1, var_18_1.b, ecx_1, 0)
                
                if (*ecx_1 == 0)
                    sub_509540(ecx_1)
            
            int32_t* esi_2 = **ecx_1
            int32_t eax_4 = 0
            int32_t* edx_2 = nullptr
            int32_t ecx_2
            
            while (true)
                if (eax_4 s>= esi_2[1])
                    sub_4c5870("Halt", &data_83f3d3, "Editor\UIEditor.cpp", 0x126, "FindElement")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                ecx_2 = *esi_2
                
                if (*(edx_2 + ecx_2) == ebx_1)
                    break
                
                eax_4 += 1
                edx_2 = &edx_2[0x46]
            
            if (*(eax_4 * 0x118 + ecx_2 + 0x31) == 0)
                result += 1
            
            eax = var_c
            var_18_1 = &var_18_1[0x46]
            i = i_1 + 1
            i_1 = i
        while (i s< eax[1])
    
    return result
}
