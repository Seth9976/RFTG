// 函数名称: sub_57b3f0
// 虚拟地址: 0x57b3f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_57b3f0()
{
    // 第一条实际指令: void var_5c
    void var_5c
    int32_t eax_1 = __security_cookie ^ &var_5c
    void* i = data_273bc2c
    
    if (i != 0)
        int32_t edi_1 = data_273ac2c
        int32_t edx_1
        long double x87_r7_2
        
        if (i != 1)
            i, edx_1 = sub_575c20(edi_1)
            x87_r7_2 = fconvert.t(*(i + 0x14)) + fconvert.t(*(i + 0xc))
        else
            int32_t eax_2 = sub_575bb0(edi_1)
            int32_t* esi_1 = data_273ac20
            
            if (eax_2 == 0)
                i = sub_4f4890(esi_1)
                int32_t var_4c_1 = *(i + 0xc)
                edx_1 = *(i + 0x14)
                x87_r7_2 = fconvert.t(*(i + 0x10)) + fconvert.t(*(i + 8))
                int32_t var_44_1 = edx_1
            else
                int32_t* eax_3
                eax_3, edx_1 = sub_4f4890(esi_1)
                i = *eax_3
                x87_r7_2 = fconvert.t(*(i + 0x14)) + fconvert.t(*(i + 0xc))
        
        void* i_1 = nullptr
        float var_54_1 = fconvert.s(x87_r7_2 * fconvert.t(0.5))
        
        if (data_273bc2c s> 0)
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
                
                int32_t* eax_6 = **ecx_3
                int32_t ebx_2 = 0
                int32_t* ecx_5 = nullptr
                int32_t esi_3
                
                while (true)
                    if (ebx_2 s>= eax_6[1])
                        sub_4c5870("Halt", &data_83f3d3, "Editor\UIEditor.cpp", 0x126, "FindElement")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    esi_3 = *eax_6
                    
                    if (*(ecx_5 + esi_3) == edi_2)
                        break
                    
                    ebx_2 += 1
                    ecx_5 = &ecx_5[0x46]
                
                void* ebx_3 = ebx_2 * 0x118
                void* ebx_4 = ebx_3 + esi_3
                long double x87_r6_1 = fconvert.t(fconvert.s(fconvert.t(var_54_1) - fconvert.t(fconvert
                    .s((fconvert.t(*(ebx_3 + esi_3 + 0x14)) + fconvert.t(*(ebx_3 + esi_3 + 0xc)))
                    * fconvert.t(0.5)))))
                long double x87_r6_3 = fconvert.t(*(ebx_4 + 0x10))
                float var_1c = fconvert.s(fconvert.t(*(ebx_4 + 0xc)) + x87_r6_1)
                long double x87_r5_2 = float.t(0)
                float var_18_1 = fconvert.s(x87_r6_3 + x87_r5_2)
                float var_14_1 = fconvert.s(x87_r6_1 + fconvert.t(*(ebx_4 + 0x14)))
                float var_10_1 = fconvert.s(x87_r5_2 + fconvert.t(*(ebx_4 + 0x18)))
                void var_30
                int32_t* eax_8 = sub_413110(&var_1c, &var_30)
                edx_1 = eax_8[1]
                int32_t esi_5 = eax_8[2]
                int32_t eax_9 = eax_8[3]
                *(ebx_4 + 0xc) = *eax_8
                *(ebx_4 + 0x10) = edx_1
                *(ebx_4 + 0x14) = esi_5
                *(ebx_4 + 0x18) = eax_9
                i = i_1 + 1
                i_1 = i
            while (i s< data_273bc2c)
    
    sub_5a6aba(eax_1 ^ &var_5c)
    return i
}
