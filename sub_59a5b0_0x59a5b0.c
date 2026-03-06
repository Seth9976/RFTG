// 函数名称: sub_59a5b0
// 虚拟地址: 0x59a5b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_59a5b0(int32_t arg1, int32_t arg2, void* arg3, void* arg4 @ esi, int32_t* arg5 @ edi, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* var_80 = arg3
    
    if (arg7 == 0)
        int32_t* eax_2 = *arg5
        int32_t result = sub_599d30(arg5, arg3, arg6, arg4, *eax_2, eax_2[1])
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return result
    
    int32_t eax_4 = data_3168024
    int32_t* eax_5 = *arg5
    uint32_t ecx_4 = eax_5[1] * *eax_5 * arg4
    data_3168024 = 0
    int32_t eax_6 = sub_5a881a(ecx_4)
    int32_t ecx_5 = 0
    int32_t var_7c = 0
    
    while (true)
        int32_t var_1c_1 = 4
        int32_t var_58_1 = 4
        int32_t var_5c = 0
        int32_t var_54_1 = 0
        int32_t var_4c_1 = 0
        int32_t var_44_1 = 0
        int32_t var_24 = 0
        int32_t var_20_1 = 0
        int32_t var_18_1 = 0
        int32_t var_10_1 = 0
        int32_t var_50_1 = 2
        int32_t var_14_1 = 2
        int32_t var_40
        __builtin_memcpy(&var_40, 
            "\x08\x00\x00\x00\x08\x00\x00\x00\x08\x00\x00\x00\x04\x00\x00\x00\x04\x00\x00\x00\x02\x00\x00\x"
        "00\x02\x00\x00\x00", 
            0x1c)
        int32_t var_78
        __builtin_memcpy(&var_78, 
            "\x08\x00\x00\x00\x08\x00\x00\x00\x04\x00\x00\x00\x04\x00\x00\x00\x02\x00\x00\x00\x02\x00\x00\x"
        "00\x01\x00\x00\x00", 
            0x1c)
        int32_t ebx_1 = *(&var_78 + ecx_5)
        int32_t var_48_1 = 1
        int32_t eax_7 = *(&var_5c + ecx_5)
        int32_t edx_5 = *(&var_40 + ecx_5)
        int32_t var_c_1 = 1
        uint32_t j_3 = divu.dp.d(0:(ebx_1 - eax_7 + **arg5 - 1), ebx_1)
        uint32_t i_2 = divu.dp.d(0:(*(*arg5 + 4) - *(&var_24 + ecx_5) + edx_5 - 1), edx_5)
        uint32_t j_2 = j_3
        
        if (j_3 != 0 && i_2 != 0)
            if (sub_599d30(arg5, var_80, arg6, arg4, j_3, i_2) == 0)
                __free_base(eax_6)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return 0
            
            if (i_2 s> 0)
                int32_t eax_20 = arg4 * j_3
                void* var_84_1 = nullptr
                int32_t var_8c_1 = *(&var_24 + var_7c)
                int32_t var_b0_1 = eax_20
                uint32_t i_1 = i_2
                uint32_t i
                
                do
                    if (j_3 s> 0)
                        void* ebx_2 = var_84_1
                        int32_t var_88_1 = 0
                        uint32_t j_1 = j_2
                        uint32_t j
                        
                        do
                            sub_5ab990((**arg5 * var_8c_1 + eax_7 + var_88_1) * arg4 + eax_6, 
                                arg5[3] + ebx_2, arg4)
                            var_88_1 += ebx_1
                            ebx_2 += arg4
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                        j_3 = j_2
                        eax_20 = var_b0_1
                    
                    var_8c_1 += edx_5
                    var_84_1 += eax_20
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            __free_base(arg5[3])
            int32_t eax_32 = (arg4 * j_3 + 1) * i_2
            var_80 += eax_32
            arg6 -= eax_32
        
        int32_t eax_34 = var_7c + 4
        var_7c = eax_34
        
        if (eax_34 s>= 0x1c)
            break
        
        ecx_5 = var_7c
    
    data_3168024 = eax_4
    arg5[3] = eax_6
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 1
}
