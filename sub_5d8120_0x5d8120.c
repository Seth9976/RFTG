// 函数名称: sub_5d8120
// 虚拟地址: 0x5d8120
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5d8120(void* arg1, void* arg2 @ esi, char arg3, char arg4, char arg5, char arg6)
{
    // 第一条实际指令: int32_t* edi = *(arg1 + 4)
    int32_t* edi = *(arg1 + 4)
    arg1.b = *(arg2 + 9)
    int32_t* var_1c = edi
    uint32_t var_18
    
    if (arg1.b != 3)
        var_18 = zx.d(arg1.b)
    else
        var_18 = 4
    
    int32_t __saved_ebx = *edi * var_18
    int32_t result = sub_5d0ac0()
    
    if (result == 0)
        sub_5cd050(0)
        return 0
    
    int32_t var_14 = 0
    
    if (*edi s<= 0)
        return result
    
    uint32_t* var_c_1 = nullptr
    
    while (true)
        int32_t eax_1 = edi[1]
        void* ecx_3 = eax_1 + (var_14 << 2)
        uint8_t ebx_3 = (zx.d(*(eax_1 + (var_14 << 2))) * zx.d(arg3) s/ 0xff).b
        uint8_t eax_8 = (zx.d(*(ecx_3 + 1)) * zx.d(arg4) s/ 0xff).b
        uint8_t eax_13 = (zx.d(*(ecx_3 + 2)) * zx.d(arg5) s/ 0xff).b
        uint8_t eax_18 = (zx.d(*(ecx_3 + 3)) * zx.d(arg6) s/ 0xff).b
        
        switch (zx.d(*(arg2 + 9)) - 1)
            case 0
                int32_t edx_13
                edx_13.b = eax_13
                edx_13.b u>>= *(arg2 + 0x1e)
                edx_13.b <<= *(arg2 + 0x22)
                eax_18 = eax_18 u>> *(arg2 + 0x1f) << *(arg2 + 0x23) | edx_13.b
                edx_13.b = eax_8
                edx_13.b u>>= *(arg2 + 0x1d)
                edx_13.b <<= *(arg2 + 0x21)
                *(var_c_1 + result) = eax_18 | edx_13.b | ebx_3 u>> *(arg2 + 0x1c) << *(arg2 + 0x20)
            case 1
                uint16_t eax_19
                eax_19.b = eax_8
                eax_19.b u>>= *(arg2 + 0x1d)
                uint16_t edx_15 = zx.w(eax_18 u>> *(arg2 + 0x1f)) << *(arg2 + 0x23)
                    | zx.w(eax_13 u>> *(arg2 + 0x1e)) << *(arg2 + 0x22)
                    | zx.w(eax_19.b) << *(arg2 + 0x21)
                    | zx.w(ebx_3 u>> *(arg2 + 0x1c)) << *(arg2 + 0x20)
                *(var_c_1 + result) = edx_15
            case 2
                *((zx.d(*(arg2 + 0x20)) u>> 3) + var_c_1 + result) = ebx_3
                *((zx.d(*(arg2 + 0x21)) u>> 3) + var_c_1 + result) = eax_8
                uint32_t* eax_23
                eax_23.b = eax_13
                ((zx.d(*(arg2 + 0x22)) u>> 3) + var_c_1)[result] = eax_23.b
            case 3
                uint32_t edx_29 = zx.d(eax_18) u>> *(arg2 + 0x1f) << *(arg2 + 0x23)
                    | zx.d(eax_13) u>> *(arg2 + 0x1e) << *(arg2 + 0x22)
                    | zx.d(eax_8) u>> *(arg2 + 0x1d) << *(arg2 + 0x21)
                *(var_c_1 + result) = edx_29 | zx.d(ebx_3) u>> *(arg2 + 0x1c) << *(arg2 + 0x20)
        
        var_c_1 += var_18
        int32_t eax_35 = var_14 + 1
        var_14 = eax_35
        
        if (eax_35 s>= *var_1c)
            break
        
        edi = var_1c
    
    return result
}
