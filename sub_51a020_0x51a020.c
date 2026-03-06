// 函数名称: sub_51a020
// 虚拟地址: 0x51a020
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_51a020(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_696f98
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_44 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edi = 0
    int32_t var_8_1 = 0
    int32_t var_34
    __builtin_memset(&var_34, 0, 0x20)
    var_34 = arg5
    
    if ((0x8000 & GetKeyState(0x10)) != 0)
        edi = 1
    
    if ((0x8000 & GetKeyState(0x11)) != 0)
        edi |= 2
    
    if ((0x8000 & GetKeyState(0x12)) != 0)
        edi |= 4
    
    int32_t var_2c = edi
    
    if ((arg3 & 0x40000000) != 0 && arg5 == 1)
        int32_t var_2c_1 = edi | 0x20
    
    uint32_t i = zx.d(arg3.w)
    
    while (i != 0)
        void* ecx_1 = data_27e7fcc
        i -= 1
        
        if (ecx_1 != 0)
            if (var_34 - 0xc u<= 0xb)
                switch (var_34 + &jump_table_51a1b0[3])
                    case &lookup_table_51a1c8
                        *(data_27e7fdc + 0x10) = 2
                    case &lookup_table_51a1c8[1]
                        *(data_27e7fdc + 0x10) = 3
                    case &lookup_table_51a1c8[5]
                        *(data_27e7fdc + 0x10) = 4
                    case &lookup_table_51a1c8[7], &lookup_table_51a1c8[9]
                        *(data_27e7fdc + 0x10) = 6
                    case &lookup_table_51a1c8[0xb]
                        *(data_27e7fdc + 0x10) = 7
            
            if (*(ecx_1 + 0x42) == 0 || var_34 != 1 || (arg4 != 0x74 && arg4 != 0x79 && arg4 != 0x7a))
                sub_4d7830()
            else
                sub_4d7330(&var_34)
    
    int32_t var_8_2 = 0xffffffff
    char* result_1
    char* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_2), esi_2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
