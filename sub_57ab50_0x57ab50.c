// 函数名称: sub_57ab50
// 虚拟地址: 0x57ab50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_57ab50()
{
    // 第一条实际指令: void var_54
    void var_54
    int32_t eax_1 = __security_cookie ^ &var_54
    int32_t result = data_273bc2c
    
    if (result != 0)
        float var_4c_1
        int32_t* edx
        
        if (result != 1)
            void* eax_5
            eax_5, edx = sub_575c20(data_273ac2c)
            result = data_273bc2c
            var_4c_1 = fconvert.s(fconvert.t(*(eax_5 + 0xc)))
            int32_t ecx_4 = 1
            int32_t var_50_1 = 1
            
            if (result s> 1)
                do
                    int32_t edi_3 = (&data_273ac2c)[ecx_4]
                    int32_t* eax_6 = sub_4f4890(data_273ac20)
                    int32_t ecx_5 = 0
                    edx = nullptr
                    int32_t ecx_6
                    int32_t ebx_3
                    
                    while (true)
                        if (ecx_5 s>= eax_6[1])
                            sub_4c5870("Halt", &data_83f3d3, "Editor\UIEditor.cpp", 0x126, 
                                "FindElement")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        ebx_3 = *eax_6
                        
                        if (*(edx + ebx_3) == edi_3)
                            ecx_6 = ecx_5 * 0x118
                            long double x87_r7_3 = fconvert.t(*(ecx_6 + ebx_3 + 0xc))
                            long double x87_r6_1 = fconvert.t(var_4c_1)
                            x87_r6_1 - x87_r7_3
                            eax_6.w = (x87_r6_1 < x87_r7_3 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
                                | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe
                            break
                        
                        ecx_5 += 1
                        edx = &edx[0x46]
                    
                    if ((eax_6:1.b & 0x41) == 0)
                        var_4c_1 = fconvert.s(fconvert.t(*(ecx_6 + ebx_3 + 0xc)))
                    
                    result = data_273bc2c
                    ecx_4 = var_50_1 + 1
                    var_50_1 = ecx_4
                while (ecx_4 s< result)
        else
            var_4c_1 = fconvert.s(float.t(0))
        
        int32_t i_1 = 0
        
        if (result s> 0)
            int32_t i
            
            do
                int32_t* ecx_1 = data_273ac20
                int32_t edi_1 = (&data_273ac2c)[i_1]
                
                if (ecx_1[1] != 0x1e)
                    sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                        "UIDefGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (*ecx_1 == 0)
                    sub_520800(i_1, edx.b, ecx_1, 0)
                    
                    if (*ecx_1 == 0)
                        sub_509540(ecx_1)
                
                int32_t* eax_4 = **ecx_1
                int32_t ebx_1 = 0
                int32_t* ecx_3 = nullptr
                int32_t esi_2
                
                while (true)
                    if (ebx_1 s>= eax_4[1])
                        sub_4c5870("Halt", &data_83f3d3, "Editor\UIEditor.cpp", 0x126, "FindElement")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    esi_2 = *eax_4
                    
                    if (*(ecx_3 + esi_2) == edi_1)
                        break
                    
                    ebx_1 += 1
                    ecx_3 = &ecx_3[0x46]
                
                void* ebx_4 = ebx_1 * 0x118
                long double x87_r6_2 =
                    fconvert.t(fconvert.s(fconvert.t(var_4c_1) - fconvert.t(*(ebx_4 + esi_2 + 0xc))))
                void* ebx_5 = ebx_4 + esi_2
                long double x87_r6_4 = fconvert.t(*(ebx_5 + 0x10))
                float var_1c = fconvert.s(fconvert.t(*(ebx_4 + esi_2 + 0xc)) + x87_r6_2)
                long double x87_r5_2 = float.t(0)
                float var_18_1 = fconvert.s(x87_r6_4 + x87_r5_2)
                float var_14_1 = fconvert.s(x87_r6_2 + fconvert.t(*(ebx_5 + 0x14)))
                float var_10_1 = fconvert.s(x87_r5_2 + fconvert.t(*(ebx_5 + 0x18)))
                void var_30
                int32_t* eax_9 = sub_413110(&var_1c, &var_30)
                edx = eax_9[1]
                int32_t esi_6 = eax_9[2]
                int32_t eax_10 = eax_9[3]
                *(ebx_5 + 0xc) = *eax_9
                *(ebx_5 + 0x10) = edx
                *(ebx_5 + 0x14) = esi_6
                *(ebx_5 + 0x18) = eax_10
                i = i_1 + 1
                i_1 = i
            while (i s< data_273bc2c)
        
        result = sub_5758a0(1)
    
    sub_5a6aba(eax_1 ^ &var_54)
    return result
}
