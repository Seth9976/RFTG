// 函数名称: sub_5b8014
// 虚拟地址: 0x5b8014
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5b8014(int32_t* arg1, int32_t arg2, char* arg3, int32_t arg4, int32_t arg5, char arg6, int32_t* arg7)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_20 = edi
    int32_t esi_1 = arg1[1] - 1
    void* var_14
    sub_5a73dd(&var_14, arg7)
    void* var_c
    char var_8
    
    if (arg3 == 0 || arg4 u<= 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        
        if (var_8 != 0)
            *(var_c + 0x70) &= 0xfffffffd
        
        return 0x16
    
    if (arg6 != 0 && esi_1 == arg5)
        void* eax_2
        eax_2.b = *arg1 == 0x2d
        *(eax_2 + esi_1 + arg3) = 0x30
    
    void* esi_2 = arg3
    
    if (*arg1 == 0x2d)
        *arg3 = 0x2d
        esi_2 = &arg3[1]
    
    int32_t eax_4 = arg1[1]
    void* esi_3
    
    if (eax_4 s> 0)
        esi_3 = esi_2 + eax_4
    else
        sub_5a6c10(esi_2 + 1, esi_2, _strlen(esi_2) + 1)
        *esi_2 = 0x30
        esi_3 = esi_2 + 1
    
    if (arg5 s> 0)
        sub_5a6c10(esi_3 + 1, esi_3, _strlen(esi_3) + 1)
        char* eax_11
        eax_11.b = ***(var_14 + 0xbc)
        *esi_3 = eax_11.b
        int32_t edi_2 = arg1[1]
        
        if (edi_2 s< 0)
            int32_t edi_3 = neg.d(edi_2)
            
            if (arg6 != 0 || arg5 s>= edi_3)
                arg5 = edi_3
            
            sub_5b7a11(esi_3 + 1, arg5)
            sub_5abfc0(esi_3 + 1, 0x30, arg5)
    
    if (var_8 != 0)
        *(var_c + 0x70) &= 0xfffffffd
    
    return 0
}
