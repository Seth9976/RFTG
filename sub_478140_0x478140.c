// 函数名称: sub_478140
// 虚拟地址: 0x478140
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_478140()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int128_t* entry_ebx
    sub_5abfc0(entry_ebx, 0, 0x70)
    void* eax_2 = data_27e7a54
    bool cond:0 = *(data_27e7a40 + 0x38) == 0
    *entry_ebx = *(eax_2 + 0x18)
    int32_t eax_3
    
    if (cond:0)
        eax_3 = *(eax_2 + 0x10)
    else
        eax_3 = *(eax_2 + 0x14)
    
    bool cond:1 = data_26a4568 != 0
    *(entry_ebx + 4) = eax_3
    *(entry_ebx + 8) = 0x101
    float var_2c
    
    if (cond:1)
        float var_4c_1 = fconvert.s(fconvert.t(data_26a4578) + fconvert.t(data_26a456c))
        float var_48 = fconvert.s(fconvert.t(data_26a457c) + fconvert.t(data_26a4570))
        float var_44_1 = fconvert.s(fconvert.t(data_26a4580) + fconvert.t(data_26a4574))
        long double x87_r6_1 = fconvert.t(0.5)
        float var_1c_1 = fconvert.s(fconvert.t(var_4c_1) * x87_r6_1)
        long double x87_r6_4 = fconvert.t(var_48) * x87_r6_1
        var_2c = data_26a4584
        float var_18_1 = fconvert.s(x87_r6_4)
        int32_t var_28_1 = data_26a4588
        int32_t var_20_1 = data_26a4590
        float var_14_1 = fconvert.s(x87_r6_1 * fconvert.t(var_44_1))
        int32_t var_24_1 = data_26a458c
        char eax_8
        int80_t st0_1
        st0_1, eax_8 = sub_4e3770(&var_2c)
        
        if (eax_8 == 0)
            sub_4c5870("QuatIsValid(retval.orientation)", &data_83f3d3, "VR.cpp", 0x206, 
                "VRGetHeadPose")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    else
        int32_t var_1c = 0
        int32_t var_18 = 0
        int32_t var_14 = 0
        var_2c = 0f
        int32_t var_28 = 0
        int32_t var_24 = 0
        int32_t var_20 = 0x3f800000
    
    int32_t edx_1 = data_26a45e0
    __builtin_memcpy(entry_ebx + 0xc, &var_2c, 0x1c)
    *(entry_ebx + 0x44) = edx_1
    __builtin_memcpy(entry_ebx + 0x28, 0x26a45a8, 0x1c)
    int32_t eax_5
    
    if (data_26a45ec != 1)
        eax_5 = 0
    else
        int32_t ecx_1 = data_26a45f0
        int32_t eax_4 = data_26a45e8
        
        if (ecx_1 != 0)
            if (ecx_1 != 1 || eax_4 != 1)
            label_478301:
                
                eax_5 = eax_4 != 0 ? 0 : 3
            else
                eax_5 = 1
        else if (eax_4 != 0)
            if (eax_4 != 1)
                goto label_478301
            
            eax_5 = 4
        else
            eax_5 = 2
    
    *(entry_ebx + 0x68) = eax_5
    *(entry_ebx + 0x64) = data_26a45e4
    __builtin_memcpy(entry_ebx + 0x48, 0x26a45c4, 0x1c)
    int32_t eax_12
    
    if (data_26a45f8 != 1)
        eax_12 = 0
    else
        int32_t ecx_5 = data_26a45fc
        int32_t eax_11 = data_26a45f4
        
        if (ecx_5 != 0)
            if (ecx_5 != 1 || eax_11 != 1)
            label_478361:
                
                eax_12 = eax_11 != 0 ? 0 : 3
            else
                eax_12 = 1
        else if (eax_11 != 0)
            if (eax_11 != 1)
                goto label_478361
            
            eax_12 = 4
        else
            eax_12 = 2
    
    *(entry_ebx + 0x6c) = eax_12
    sub_5a6aba(eax_1 ^ &__saved_ebp)
}
