// 函数名称: sub_558c70
// 虚拟地址: 0x558c70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __thiscallsub_558c70(void* arg1, float arg2, void* arg3)
{
    // 第一条实际指令: int32_t* edi = arg2
    int32_t* edi = arg2
    int32_t* esi = *edi
    int32_t* var_8 = nullptr
    void* eax = sub_4d6c80(esi)
    int32_t eax_1 = *(eax + 0x14)
    int32_t* ebx_1
    
    if (eax_1 == 0)
        ebx_1 = sub_558920(edi, *(arg3 + 0xc))
        var_8 = ebx_1
        
        if (ebx_1 == 0)
            int32_t* eax_5
            eax_5.b = 0
            return eax_5
        
        if (*(edi + 0x55) == 0)
            *(eax + 0x14) = ebx_1
            ebx_1 = var_8
    else
        int32_t* ecx = *(arg1 + 4)
        
        if ((*(*ecx + 0x14))(ecx, eax_1, &var_8) != 0)
            sub_4c5870("hr == S_OK", &data_83f3d3, "Windows\WindowsSound.cpp", 0x125, 
                "WindowsSoundInterface::SoundInterfacePlay")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        ebx_1 = var_8
    
    edi[2] = ebx_1
    long double x87_r7_2 = float.t(0)
    long double x87_r6 = fconvert.t(fconvert.s(float.t(**(eax + 0x1c)) * fconvert.t(edi[0x12])))
    x87_r6 - x87_r7_2
    int32_t* eax_6
    eax_6.w = (x87_r6 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000
    long double x87_r5 = fconvert.t(0.5)
    bool p = unimplemented  {test ah, 0x5}
    long double x87_r6_1
    
    if (p)
        x87_r6_1 = x87_r6 + x87_r5
    else
        x87_r6_1 = x87_r6 - x87_r5
    
    arg2 = sub_685f40(x87_r6_1)
    long double x87_r5_4 = fconvert.t(fconvert.s(fconvert.t(edi[0x13]) * fconvert.t(20000.0)))
    x87_r5_4 - x87_r7_2
    int32_t eax_7
    eax_7.w = (x87_r5_4 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_4, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r5_4 == x87_r7_2 ? 1 : 0) << 0xe | 0x2800
    bool p_1 = unimplemented  {test ah, 0x5}
    long double x87_r7_3
    
    if (p_1)
        x87_r7_3 = x87_r7_2 + x87_r5
    else
        x87_r7_3 = x87_r7_2 - x87_r5
    
    int32_t eax_8
    int32_t ecx_2
    eax_8, ecx_2 = sub_685f40(x87_r7_3)
    int32_t var_20_2 = ecx_2
    int32_t eax_10 = sub_558be0(fconvert.s(fconvert.t(edi[0x11])))
    int32_t esi_2 = 0
    
    if (edi[0x15].b != 0 || *(edi + 0x55) != 0)
        esi_2 = 1
    
    int32_t eax_11 = *(arg3 + 0xc)
    
    if (*(edi + 0x55) != 0)
        eax_11 = 0
    
    if ((*(*ebx_1 + 0x34))(ebx_1, eax_11) != 0)
        sub_4c5870("hr == S_OK", &data_83f3d3, "Windows\WindowsSound.cpp", 0x14d, 
            "WindowsSoundInterface::SoundInterfacePlay")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_15 = var_8
    
    if ((*(*eax_15 + 0x44))(eax_15, arg2) != 0)
        sub_4c5870("hr == S_OK", &data_83f3d3, "Windows\WindowsSound.cpp", 0x150, 
            "WindowsSoundInterface::SoundInterfacePlay")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_19 = var_8
    
    if ((*(*eax_19 + 0x40))(eax_19, eax_8 - 0x2710) != 0)
        sub_4c5870("hr == S_OK", &data_83f3d3, "Windows\WindowsSound.cpp", 0x153, 
            "WindowsSoundInterface::SoundInterfacePlay")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_23 = var_8
    
    if ((*(*eax_23 + 0x3c))(eax_23, eax_10) != 0)
        sub_4c5870("hr == S_OK", &data_83f3d3, "Windows\WindowsSound.cpp", 0x156, 
            "WindowsSoundInterface::SoundInterfacePlay")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_27 = var_8
    
    if ((*(*eax_27 + 0x30))(eax_27, 0, 0, esi_2) == 0)
        int32_t eax_28
        eax_28.b = 1
        return eax_28
    
    sub_4c5870("hr == S_OK", &data_83f3d3, "Windows\WindowsSound.cpp", 0x159, 
        "WindowsSoundInterface::SoundInterfacePlay")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
