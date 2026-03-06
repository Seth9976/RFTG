// 函数名称: sub_4ddf40
// 虚拟地址: 0x4ddf40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __fastcallsub_4ddf40(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (*(arg1 + 0x30) != 0)
        sub_4c5870("camera.orthographic == false", &data_83f3d3, "Draw3d.cpp", 0x3bf, "Draw3DSetCamera")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    __builtin_memcpy(&data_27e7fe8, arg1, 0x38)
    int32_t var_14 = data_27e800c
    int32_t var_10 = data_27e8010
    int32_t ecx_1 = data_27e8000
    int32_t var_c = data_27e8014
    int32_t edx_1 = data_27e8004
    float var_24 = data_27e7ffc
    int32_t var_20 = ecx_1
    int32_t var_1c = edx_1
    int32_t var_18 = data_27e8008
    float* result
    int80_t st0
    st0, result = sub_4e3770(&var_24)
    
    if (result.b == 0)
        sub_4c5870("QuatIsValid(mainPose.orientation)", &data_83f3d3, "Draw3d.cpp", 0x3c6, 
            "Draw3DSetCamera")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    __builtin_memcpy(0x27e8074, &var_24, 0x1c)
    float* result_1
    
    if (*(data_27e7fd0 + 0x27) == 0)
        __builtin_memcpy(&data_27e803c, &var_24, 0x1c)
        __builtin_memcpy(0x27e8058, &var_24, 0x1c)
        result_1 = &var_24
    else
        int32_t eax_7 = data_26a4570
        int32_t ecx_3 = data_26a4574
        float edi_1 = data_26a4584
        int32_t ebx_1 = data_26a4588
        float var_30 = data_26a456c
        int32_t edx_3 = data_26a458c
        int32_t var_2c_1 = eax_7
        int32_t eax_8 = data_26a4590
        int32_t var_28_1 = ecx_3
        float var_40 = edi_1
        int32_t var_3c_1 = ebx_1
        char eax_9
        int80_t st0_1
        st0_1, eax_9 = sub_4e3770(&var_40)
        
        if (eax_9 == 0)
            sub_4c5870("QuatIsValid(eyeLeft.orientation)", &data_83f3d3, "Draw3d.cpp", 0x3cf, 
                "Draw3DSetCamera")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_4 = data_26a457c
        int32_t eax_11 = data_26a4580
        float var_4c = data_26a4578
        int32_t var_48_1 = edx_4
        int32_t edx_5 = data_26a4598
        int32_t var_44_1 = eax_11
        int32_t eax_12 = data_26a459c
        float var_5c = data_26a4594
        int32_t var_58_1 = edx_5
        int32_t var_54_1 = eax_12
        int32_t var_50_1 = data_26a45a0
        char eax_13
        int32_t ecx_7
        int80_t st0_2
        st0_2, eax_13, ecx_7 = sub_4e3770(&var_5c)
        
        if (eax_13 == 0)
            sub_4c5870("QuatIsValid(eyeRight.orientation)", &data_83f3d3, "Draw3d.cpp", 0x3d4, 
                "Draw3DSetCamera")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t var_c0_1 = ecx_7
        float var_ac
        sub_465e40(&var_ac, &var_4c, &var_30, fconvert.s(fconvert.t(0.5f)))
        float var_68_1 = var_ac
        int32_t var_a8
        int32_t var_64_1 = var_a8
        float var_78 = edi_1
        int32_t var_74_1 = ebx_1
        int32_t var_a4
        int32_t var_60_1 = var_a4
        int32_t var_70_1 = edx_3
        int32_t var_6c_1 = eax_8
        float var_9c[0x9]
        __builtin_memcpy(&data_27e803c, sub_5087d0(&var_9c, &var_24), 0x1c)
        __builtin_memcpy(0x27e8058, sub_5087d0(&var_9c, &var_24), 0x1c)
        result = sub_5087d0(&var_9c, &var_24)
        result_1 = result
    
    __builtin_memcpy(0x27e8090, result_1, 0x1c)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
