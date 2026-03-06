// 函数名称: sub_579fa0
// 虚拟地址: 0x579fa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULTsub_579fa0()
{
    // 第一条实际指令: int32_t* edi = sub_4f4890(data_273ac20)
    int32_t* edi = sub_4f4890(data_273ac20)
    int32_t* var_10 = edi
    int32_t eax_1 = sub_579e80()
    
    if (data_273bc2c != eax_1)
        data_273bc2c = 0
        int32_t var_c_1 = 0
        
        if (edi[1] s> 0)
            char* ecx = data_273ac20
            int32_t* var_14 = nullptr
            
            while (true)
                int32_t eax_3 = *edi
                int32_t ebx_1 = *(var_14 + eax_3)
                
                if (*(ecx + 4) != 0x1e)
                    break
                
                if (*ecx == 0)
                    sub_520800(eax_3, var_14.b, ecx, 0)
                    
                    if (*ecx == 0)
                        sub_509540(ecx)
                
                int32_t* esi_2 = **ecx
                int32_t eax_6 = 0
                int32_t* edx_2 = nullptr
                int32_t ecx_1
                
                while (true)
                    if (eax_6 s>= esi_2[1])
                        sub_4c5870("Halt", &data_83f3d3, "Editor\UIEditor.cpp", 0x126, "FindElement")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    ecx_1 = *esi_2
                    
                    if (*(edx_2 + ecx_1) == ebx_1)
                        edi = var_10
                        break
                    
                    eax_6 += 1
                    edx_2 = &edx_2[0x46]
                
                if (*(eax_6 * 0x118 + ecx_1 + 0x31) == 0)
                    (&data_273ac2c)[data_273bc2c] = *(var_14 + *edi)
                    data_273bc2c += 1
                
                var_14 = &var_14[0x46]
                ecx = data_273ac20
                int32_t eax_11 = var_c_1 + 1
                var_c_1 = eax_11
                
                if (eax_11 s>= edi[1])
                    return sub_57c6a0()
            
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    else
        data_273bc2c = 0
    
    return sub_57c6a0()
}
