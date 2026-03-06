// 函数名称: sub_577150
// 虚拟地址: 0x577150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float __fastcallsub_577150(float* arg1)
{
    // 第一条实际指令: void var_4c
    void var_4c
    float eax_1 = __security_cookie ^ &var_4c
    float var_c = eax_1
    float* esi = arg1
    float* var_44 = esi
    float var_40
    float var_30
    float var_20
    int32_t edx
    
    if (data_273bc31:1.b == 0)
    label_577448:
        float var_48_2 = 0f
        
        if (data_273bc2c s> 0)
            while (true)
                int32_t edi_6 = (&data_273ac2c)[var_48_2]
                char* ecx_24 = data_273ac20
                
                if (*(ecx_24 + 4) != 0x1e)
                    break
                
                if (*ecx_24 == 0)
                    sub_520800(eax_1, edx.b, ecx_24, 0)
                    
                    if (*ecx_24 == 0)
                        sub_509540(ecx_24)
                
                int32_t* eax_22 = **ecx_24
                int32_t ebx_6 = 0
                int32_t* ecx_25 = nullptr
                
                while (true)
                    if (ebx_6 s>= eax_22[1])
                        sub_4c5870("Halt", &data_83f3d3, "Editor\UIEditor.cpp", 0x126, "FindElement")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t edx_23 = *eax_22
                    
                    if (*(ecx_25 + edx_23) == edi_6)
                        void* ebx_7 = ebx_6 * 0x118
                        var_40 = fconvert.s(fconvert.t(*(ebx_7 + edx_23 + 0xc)) + fconvert.t(*esi))
                        void* ebx_8 = ebx_7 + edx_23
                        float var_3c_4 =
                            fconvert.s(fconvert.t(*(ebx_7 + edx_23 + 0x10)) + fconvert.t(esi[1]))
                        var_20 = var_40
                        float var_1c_2 = var_3c_4
                        float var_18_2 = fconvert.s(fconvert.t(*(ebx_8 + 0x14)) + fconvert.t(*esi))
                        float var_14_2 = fconvert.s(fconvert.t(*(ebx_8 + 0x18)) + fconvert.t(esi[1]))
                        int32_t* eax_25 = sub_413110(&var_20, &var_30)
                        edx = eax_25[1]
                        int32_t esi_9 = eax_25[2]
                        int32_t eax_26 = eax_25[3]
                        *(ebx_8 + 0xc) = *eax_25
                        *(ebx_8 + 0x10) = edx
                        *(ebx_8 + 0x14) = esi_9
                        *(ebx_8 + 0x18) = eax_26
                        eax_1 = var_48_2 i+ 1
                        var_48_2 = eax_1
                        
                        if (eax_1 s< data_273bc2c)
                            esi = var_44
                            break
                        
                        sub_5a6aba(var_c ^ &var_4c)
                        return eax_1
                    
                    ebx_6 += 1
                    ecx_25 = &ecx_25[0x46]
            
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    else
        eax_1, edx = GetKeyState(0x11)
        float var_1c
        float var_18
        float var_14
        
        if ((0x8000 & eax_1.w) == 0)
            if (data_273bc31:1.b != 0)
                eax_1, edx = GetKeyState(0x11)
                
                if ((0x8000 & eax_1.w) == 0)
                    if (data_273bc2c != 1)
                        sub_4c5870("gUI.s.activeSetCount == 1", &data_83f3d3, "Editor\UIEditor.cpp", 
                            0x2a2, "OffsetActiveSet")
                        
                        if (IsDebuggerPresent() != 1)
                            sub_4c5a30()
                            noreturn
                        
                        breakpoint
                    
                    void* eax_11 = sub_575c20(data_273ac2c)
                    sub_4fc810(&var_20, eax_11 + 0x74, eax_11 + 0xc)
                    var_30 = var_20
                    var_40 = fconvert.s(fconvert.t(var_30) + fconvert.t(*esi))
                    long double x87_r7_12 = fconvert.t(esi[1]) + fconvert.t(var_1c)
                    var_20 = var_40
                    float var_3c_3 = fconvert.s(x87_r7_12)
                    float var_38_3 = fconvert.s(fconvert.t(var_18) + fconvert.t(*esi))
                    float var_34_3 = fconvert.s(fconvert.t(esi[1]) + fconvert.t(var_14))
                    int32_t* eax_15 = sub_413110(&var_20, &var_40)
                    int32_t ecx_16 = eax_15[1]
                    var_30 = *eax_15
                    int32_t var_2c_4 = ecx_16
                    int32_t var_28_4 = eax_15[2]
                    int32_t var_24_4 = eax_15[3]
                    sub_575d50(&var_20, &var_30, eax_11 + 0xc)
                    *(eax_11 + 0x74) = var_20
                    *(eax_11 + 0x78) = var_3c_3
                    *(eax_11 + 0x7c) = var_38_3
                    *(eax_11 + 0x80) = var_34_3
                    int32_t* eax_19 = sub_577090(eax_11 + 0x74, &var_20)
                    int32_t edx_21 = eax_19[1]
                    int32_t esi_7 = eax_19[2]
                    int32_t eax_20 = eax_19[3]
                    *(eax_11 + 0x74) = *eax_19
                    *(eax_11 + 0x78) = edx_21
                    *(eax_11 + 0x7c) = esi_7
                    *(eax_11 + 0x80) = eax_20
                    sub_5a6aba(var_c ^ &var_4c)
                    return eax_20
            
            goto label_577448
        
        if (data_273bc2c != 1)
            sub_4c5870("gUI.s.activeSetCount == 1", &data_83f3d3, "Editor\UIEditor.cpp", 0x297, 
                "OffsetActiveSet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* eax_3 = sub_575c20(data_273ac2c)
        var_30 = fconvert.s(fconvert.t(*(eax_3 + 0xc)) + fconvert.t(*esi))
        long double x87_r7_3 = fconvert.t(*(eax_3 + 0x10))
        var_40 = var_30
        float var_3c_1 = fconvert.s(x87_r7_3 + fconvert.t(esi[1]))
        float var_38_1 = fconvert.s(fconvert.t(*(eax_3 + 0x14)) + fconvert.t(*esi))
        float var_34_1 = fconvert.s(fconvert.t(*(eax_3 + 0x18)) + fconvert.t(esi[1]))
        int32_t* eax_5 = sub_413110(&var_40, &var_20)
        int32_t edx_3 = eax_5[1]
        var_30 = *eax_5
        int32_t var_2c_2 = edx_3
        int32_t var_28_2 = eax_5[2]
        int32_t var_24_2 = eax_5[3]
        sub_4fc810(&var_20, eax_3 + 0x74, eax_3 + 0xc)
        var_40 = var_20
        float var_3c_2 = var_1c
        float var_38_2 = var_18
        float var_34_2 = var_14
        int32_t* eax_7 = sub_576fc0(&var_30, &var_20, &var_40)
        int32_t edx_9 = eax_7[1]
        int32_t esi_3 = eax_7[2]
        int32_t eax_8 = eax_7[3]
        *(eax_3 + 0xc) = *eax_7
        *(eax_3 + 0x10) = edx_9
        *(eax_3 + 0x14) = esi_3
        *(eax_3 + 0x18) = eax_8
        sub_575d50(&var_20, &var_40, eax_3 + 0xc)
        eax_1 = var_14
        *(eax_3 + 0x74) = var_20
        *(eax_3 + 0x78) = var_1c
        *(eax_3 + 0x7c) = var_18
        *(eax_3 + 0x80) = eax_1
    sub_5a6aba(var_c ^ &var_4c)
    return eax_1
}
