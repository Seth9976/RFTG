// 函数名称: sub_57b1e0
// 虚拟地址: 0x57b1e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_57b1e0()
{
    // 第一条实际指令: void var_54
    void var_54
    int32_t eax_1 = __security_cookie ^ &var_54
    int32_t result = data_273bc2c
    
    if (result != 0)
        int32_t edi_1 = data_273ac2c
        float edx_1
        long double x87_r7_1
        
        if (result != 1)
            void* eax_4
            eax_4, edx_1 = sub_575c20(edi_1)
            x87_r7_1 = fconvert.t(*(eax_4 + 0x18))
        else
            int32_t eax_2 = sub_575bb0(edi_1)
            int32_t* esi_1 = data_273ac20
            
            if (eax_2 == 0)
                void* eax_5 = sub_4f4890(esi_1)
                int32_t var_44_1 = *(eax_5 + 0xc)
                edx_1 = *(eax_5 + 0x14)
                int32_t var_48_1 = *(eax_5 + 8)
                x87_r7_1 = fconvert.t(edx_1)
                int32_t var_40_1 = *(eax_5 + 0x10)
            else
                int32_t* eax_3
                eax_3, edx_1 = sub_4f4890(esi_1)
                x87_r7_1 = fconvert.t(*(*eax_3 + 0x18))
        
        float var_4c_1 = fconvert.s(x87_r7_1)
        int32_t i_1 = 0
        
        if (data_273bc2c s> 0)
            int32_t i
            
            do
                int32_t* ecx_3 = data_273ac20
                int32_t edi_2 = (&data_273ac2c)[i_1]
                
                if (ecx_3[1] != 0x1e)
                    sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                        "UIDefGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (*ecx_3 == 0)
                    sub_520800(i_1, edx_1.b, ecx_3, 0)
                    
                    if (*ecx_3 == 0)
                        sub_509540(ecx_3)
                
                int32_t* eax_8 = **ecx_3
                int32_t ebx_2 = 0
                int32_t* ecx_5 = nullptr
                int32_t esi_3
                
                while (true)
                    if (ebx_2 s>= eax_8[1])
                        sub_4c5870("Halt", &data_83f3d3, "Editor\UIEditor.cpp", 0x126, "FindElement")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    esi_3 = *eax_8
                    
                    if (*(ecx_5 + esi_3) == edi_2)
                        break
                    
                    ebx_2 += 1
                    ecx_5 = &ecx_5[0x46]
                
                void* ebx_3 = ebx_2 * 0x118
                float var_34_1 = fconvert.s(fconvert.t(var_4c_1) - fconvert.t(*(ebx_3 + esi_3 + 0x18)))
                long double x87_r6_1 = float.t(0)
                void* ebx_4 = ebx_3 + esi_3
                long double x87_r6_3 = fconvert.t(*(ebx_4 + 0x10))
                float var_1c = fconvert.s(fconvert.t(*(ebx_3 + esi_3 + 0xc)) + x87_r6_1)
                long double x87_r5_1 = fconvert.t(var_34_1)
                float var_18_1 = fconvert.s(x87_r6_3 + x87_r5_1)
                float var_14_1 = fconvert.s(x87_r6_1 + fconvert.t(*(ebx_4 + 0x14)))
                float var_10_1 = fconvert.s(x87_r5_1 + fconvert.t(*(ebx_4 + 0x18)))
                void var_30
                int32_t* eax_10 = sub_413110(&var_1c, &var_30)
                edx_1 = eax_10[1]
                int32_t esi_5 = eax_10[2]
                int32_t eax_11 = eax_10[3]
                *(ebx_4 + 0xc) = *eax_10
                *(ebx_4 + 0x10) = edx_1
                *(ebx_4 + 0x14) = esi_5
                *(ebx_4 + 0x18) = eax_11
                i = i_1 + 1
                i_1 = i
            while (i s< data_273bc2c)
        
        result = sub_5758a0(1)
    
    sub_5a6aba(eax_1 ^ &var_54)
    return result
}
