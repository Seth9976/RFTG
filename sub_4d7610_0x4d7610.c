// 函数名称: sub_4d7610
// 虚拟地址: 0x4d7610
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4d7610(int32_t arg1, int32_t* arg2, char arg3, int32_t arg4, int32_t arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* entry_ebx
    *(entry_ebx + 0x324) = 0
    int32_t* var_10c
    __builtin_memcpy(&var_10c, entry_ebx + 0x110, 0x100)
    __builtin_memcpy(entry_ebx + 0x110, arg5, 0x100)
    *(entry_ebx + 0x310) = *arg2
    *(entry_ebx + 0x314) = arg2[1]
    *(entry_ebx + 0x318) = *arg6
    *(entry_ebx + 0x31c) = arg6[1]
    *(entry_ebx + 0x320) = arg6[2]
    void* edi_1 = entry_ebx + 0x210
    int32_t eax_5 = (**(entry_ebx + 0x210))()
    int32_t result = (*data_be1ad0)()
    
    if (eax_5 == result)
        result = eax_5(edi_1, &data_be1ad0)
        
        if (result.b != 0)
            int32_t eax_8 = (**(entry_ebx + 0x110))()
            result = (*var_10c)()
            
            if (eax_8 != result)
                *(entry_ebx + 0x324) = 1
            else
                result = eax_8(entry_ebx + 0x110, &var_10c)
                
                if (result.b == 0)
                    *(entry_ebx + 0x324) = 1
    
    void** esi_5
    
    if (arg3 == 0)
        if (*(entry_ebx + 4) == 0)
            *(entry_ebx + 4) = 0
            esi_5 = &data_be1ad0
        else
            int32_t eax_11 = (*var_10c)()
            result = (**edi_1)()
            
            if (eax_11 != result)
                *(entry_ebx + 4) = 0
                esi_5 = &data_be1ad0
            else
                result = eax_11(&var_10c, edi_1)
                
                if (result.b == 0)
                    *(entry_ebx + 4) = 0
                    esi_5 = &data_be1ad0
                else
                    long double x87_r7_1 = float.t(arg4 - *(entry_ebx + 8))
                    long double temp0_1 = fconvert.t(750f)
                    x87_r7_1 - temp0_1
                    result.w = (x87_r7_1 < temp0_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
                        | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe
                    
                    if ((result:1.b & 1) != 0)
                        *(entry_ebx + 0x326) = 1
                        *(entry_ebx + 4) = 0
                        esi_5 = &data_be1ad0
                    else
                        *(entry_ebx + 0x327) = 1
                        *(entry_ebx + 4) = 0
                        esi_5 = &data_be1ad0
        
        __builtin_memcpy(edi_1, esi_5, 0x100)
    else if (*(entry_ebx + 4) == 0)
        *(entry_ebx + 8) = arg4
        int32_t eax_15 = arg4 - *(entry_ebx + 0xc)
        __builtin_memcpy(edi_1, entry_ebx + 0x110, 0x100)
        esi_5 = entry_ebx + 0x110
        *(entry_ebx + 4) = 1
        edi_1 = entry_ebx + 0x10
        int32_t eax_17 = (**esi_5)()
        result = (**edi_1)()
        
        if (eax_17 != result)
            *(entry_ebx + 0x328) = 0
        else
            result = eax_17(esi_5, edi_1)
            
            if (result.b == 0)
                *(entry_ebx + 0x328) = 0
            else
                long double x87_r7_2 = float.t(eax_15)
                long double temp1_1 = fconvert.t(0.5f)
                x87_r7_2 - temp1_1
                result.w = (x87_r7_2 < temp1_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe
                bool p_1 = unimplemented  {test ah, 0x5}
                
                if (p_1)
                    *(entry_ebx + 0x328) = 0
                else
                    *(entry_ebx + 0x328) = 1
        
        *(entry_ebx + 0x325) = 1
        *(entry_ebx + 0xc) = arg4
        __builtin_memcpy(edi_1, esi_5, 0x100)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
