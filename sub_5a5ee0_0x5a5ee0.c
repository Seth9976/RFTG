// 函数名称: sub_5a5ee0
// 虚拟地址: 0x5a5ee0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_5a5ee0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4 @ edi, int32_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_3 = sub_5a898b(arg4, "rb")
    char const* const var_58_1
    
    if (eax_3 != 0)
        int128_t var_44
        uint32_t eax_4 = sub_5a9cf0(&var_44, 0xe, 1, eax_3)
        uint32_t eax_5
        void var_34
        
        if (eax_4 == 1)
            eax_5 = sub_5a9cf0(&var_34, 0x28, eax_4, eax_3)
        
        if (eax_4 != 1 || eax_5 != 1)
            int32_t* var_54_5 = arg4
            var_58_1 = "failed to read bmp file: %s"
        else
            sub_5a8c61(eax_3)
            int32_t var_30
            int32_t* entry_ebx
            *entry_ebx = var_30
            int32_t var_2c
            *arg3 = var_2c
            int16_t var_26
            uint32_t eax_7 = zx.d(var_26)
            
            if (eax_7 == 8)
                sub_4c5870("Halt", &data_83f3d3, "BMPImport.cpp", 0x4a, "BMPImportTextureSpecs")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (eax_7 == 0x18)
                *arg5 = 4
                eax_7.b = 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_7
            
            if (eax_7 == 0x20)
                *arg5 = 1
                eax_7.b = 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_7
            
            uint32_t var_54_4 = eax_7
            var_58_1 = "Unsupported RGB BMP bit depth: %d"
    else
        int32_t* var_54 = arg4
        var_58_1 = "failed to open bmp file: %s"
    
    sub_4c5680(var_58_1)
    int32_t eax_9
    eax_9.b = 0
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_9
}
