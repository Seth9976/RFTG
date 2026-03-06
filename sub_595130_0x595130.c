// 函数名称: sub_595130
// 虚拟地址: 0x595130
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_595130(int32_t arg1, int32_t arg2, uint32_t* arg3, int32_t* arg4 @ edi, int32_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_3 = sub_5a898b(arg4, "rb")
    
    if (eax_3 == 0)
        int32_t* var_2c = arg4
        sub_4c5680("failed to open tga file: %s")
        int32_t eax_4
        eax_4.b = 0
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_4
    
    void var_1c
    
    if (sub_5a9cf0(&var_1c, 0x12, 1, eax_3) != 1)
        int32_t* var_2c_2 = arg4
        sub_4c5680("failed to read tga file: %s")
        int32_t eax_6
        eax_6.b = 0
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_6
    
    sub_5a8c61(eax_3)
    int16_t var_10
    uint32_t* entry_ebx
    *entry_ebx = zx.d(var_10)
    int16_t var_e
    *arg3 = zx.d(var_e)
    char var_1a
    uint32_t ecx_5 = zx.d(var_1a)
    char var_c
    
    if (ecx_5 == 1)
        if (var_c == 8)
            *arg5 = 0xc
            int32_t eax_9
            eax_9.b = 1
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_9
        
        sub_4c5870("tHeader.bPixelDepth == 8", &data_83f3d3, "TGAImport.cpp", 0x69, 
            "TGAImportTextureSpecs")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    if (ecx_5 != 2)
        if (ecx_5 == 3)
            if (var_c == 8)
                *arg5 = 0xb
                int32_t* eax_14
                eax_14.b = 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_14
            
            sub_4c5870("tHeader.bPixelDepth == 8", &data_83f3d3, "TGAImport.cpp", 0x6e, 
                "TGAImportTextureSpecs")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        uint32_t var_2c_4 = ecx_5
        sub_4c5680("Unsupported tga image type %d")
        int32_t eax_12
        eax_12.b = 0
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_12
    
    int32_t eax_10
    eax_10.b = var_c
    
    if (eax_10.b == 0x10)
        *arg5 = 8
        eax_10.b = 1
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_10
    
    if (eax_10.b == 0x18)
        *arg5 = 4
        int32_t* eax_16
        eax_16.b = 1
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_16
    
    if (eax_10.b == 0x20)
        *arg5 = 1
        eax_10.b = 1
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_10
    
    uint32_t var_2c_5 = zx.d(eax_10.b)
    sub_4c5680("Unsupported tga pixel depth %d")
    int32_t eax_15
    eax_15.b = 0
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_15
}
