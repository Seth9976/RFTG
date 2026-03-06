// 函数名称: sub_595320
// 虚拟地址: 0x595320
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_595320(int32_t arg1, uint32_t arg2, uint32_t arg3, int32_t arg4, int32_t arg5, uint32_t arg6, int32_t* arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t ebx = arg3
    void var_1c
    
    if (sub_5a9cf0(&var_1c, 0x12, 1, arg7) != 1)
        int32_t var_3c_1 = arg4
        sub_4c5680("failed to read tga file: %s")
        int32_t eax_5
        eax_5.b = 0
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_5
    
    int16_t var_17
    
    if (var_17 != 0)
        sub_4c5870("Halt", &data_83f3d3, "TGAImport.cpp", 0x94, "TGAImportTexture")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int16_t var_10
    uint32_t ecx_2 = zx.d(var_10)
    uint32_t var_20 = ecx_2
    
    if (ecx_2 u>= arg2)
        var_20 = arg2
    
    int16_t var_e
    uint32_t eax_7 = zx.d(var_e)
    
    if (eax_7 u< ebx)
        ebx = eax_7
    
    char var_c
    int32_t esi_4 = (zx.d(var_c) u>> 3) * eax_7 * ecx_2
    int128_t* eax_9 = sub_4cce80(esi_4)
    
    if (sub_5a9cf0(eax_9, esi_4, 1, arg7) != 1)
        int32_t var_3c_3 = arg4
        sub_4c5680("failed to read tga data: %s")
        
        if (eax_9 != 0)
            _aligned_free_base(eax_9)
        
        sub_5a8c61(arg7)
        int32_t eax_12
        eax_12.b = 0
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_12
    
    char var_1a
    uint32_t eax_13 = zx.d(var_1a)
    uint32_t ecx_6
    void* edx_4
    
    if (eax_13 == 1)
    label_59550b:
        
        if (var_c != 8)
            sub_4c5870("tHeader.bPixelDepth == 8", &data_83f3d3, "TGAImport.cpp", 0xed, 
                "TGAImportTexture")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        edx_4 = var_20
        ecx_6 = zx.d(var_10)
    label_59554d:
        uint32_t var_3c_8 = ebx
        void* var_40_2 = edx_4
        sub_553e10(eax_9, edx_4, ecx_6, ecx_6, arg6)
    else
        if (eax_13 != 2)
            if (eax_13 == 3)
                goto label_59550b
            
            sub_4c5870("Halt", &data_83f3d3, "TGAImport.cpp", 0xf3, "TGAImportTexture")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t eax_15
        eax_15.b = var_c
        
        if (eax_15.b == 0x10)
            edx_4 = var_20 * 2
            ecx_6 = zx.d(var_10) * 2
            goto label_59554d
        
        if (eax_15.b == 0x18)
            uint32_t eax_22 = zx.d(var_10) * 3
            sub_553ec0(eax_22, arg5, eax_9, eax_22, arg5, arg6, var_20, ebx)
        else
            if (eax_15.b != 0x20)
                sub_4c5870("Halt", &data_83f3d3, "TGAImport.cpp", 0xe5, "TGAImportTexture")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            uint32_t var_3c_6 = ebx
            uint32_t var_40 = var_20 << 2
            edx_4 = zx.d(var_10) * 4
            sub_553e10(eax_9, edx_4, arg6, edx_4, arg6)
    
    if (eax_9 != 0)
        _aligned_free_base(eax_9)
    
    sub_5a8c61(arg7)
    int32_t eax_26
    eax_26.b = 1
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_26
}
