// 函数名称: sub_50eba0
// 虚拟地址: 0x50eba0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_50eba0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_2c
    int32_t result_1
    int32_t var_24
    int32_t result
    void* entry_ebx
    
    if (*(entry_ebx + 0x6c) s<= *(entry_ebx + 0x5c))
        int32_t result_2 = arg4[0x20]
        var_2c = arg4[0x1f]
        result_1 = result_2
        var_24 = arg4[0x21]
        result = result_2
    else
        var_2c = *(entry_ebx + 0x70)
        result = *(entry_ebx + 0x74)
        result_1 = result
        var_24 = *(entry_ebx + 0x78)
    
    int32_t var_18 = 0
    
    if (var_2c s> 0)
        int32_t ecx_4
        
        do
            int32_t edi_1 = 0
            
            if (result s> 0)
                do
                    int32_t esi_1 = 0
                    
                    if (var_24 s> 0)
                        do
                            int32_t var_14 = var_18
                            int32_t var_10_1 = edi_1
                            int32_t var_c_1 = esi_1
                            sub_50f650(sub_50c900(var_18, entry_ebx, arg4, &var_14), arg5, arg3)
                            esi_1 += 1
                        while (esi_1 s< var_24)
                        
                        result = result_1
                    
                    edi_1 += 1
                while (edi_1 s< result)
            
            ecx_4 = var_18 + 1
            var_18 = ecx_4
        while (ecx_4 s< var_2c)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
