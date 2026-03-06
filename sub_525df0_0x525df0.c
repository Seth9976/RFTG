// 函数名称: sub_525df0
// 虚拟地址: 0x525df0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void***sub_525df0(void*** arg1, int32_t arg2, int32_t arg3, float* arg4)
{
    // 第一条实际指令: int32_t eax = data_be1f00
    int32_t eax = data_be1f00
    int32_t ecx = data_be1f04
    float* edx = data_be1f08
    int32_t edi = arg2
    bool cond:0 = *(edi + 0x14f8) == 0
    void** const var_14 = &data_88d38c
    int32_t var_10 = eax
    int32_t var_c = ecx
    float* var_8 = edx
    float var_24
    int32_t var_20
    int32_t var_1c
    float* var_18
    
    if (not(cond:0))
        float var_34
        sub_4fc810(&var_34, edi + 0x14fc, edi + 8)
        var_24 = var_34
        int32_t var_30
        var_20 = var_30
        int32_t var_2c
        var_1c = var_2c
        float* var_28
        var_18 = var_28
        edx = arg4
        
        if (sub_4057a0(&var_24, edx).b == 0)
            int32_t edx_4 = data_be1f04
            arg1[1] = data_be1f00
            int32_t ecx_6 = data_be1f08
            *arg1 = &data_88d38c
            arg1[2] = edx_4
            arg1[3] = ecx_6
            return arg1
    
    long double x87_r7 = fconvert.t(*(edi + 0x58))
    long double x87_r6 = float.t(1)
    x87_r6 - x87_r7
    eax.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x44}
    
    if (p)
        int32_t ecx_7 = data_be1f04
        arg1[1] = data_be1f00
        int32_t edx_6 = data_be1f08
        *arg1 = &data_88d38c
        arg1[2] = ecx_7
        arg1[3] = edx_6
        return arg1
    
    int32_t eax_4 = *(edi + 0x15cc)
    
    if (eax_4 u> 4)
        sub_4c5870("Halt", &data_83f3d3, "UI2.cpp", 0x8f1, "UI2AcceptsHover")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    switch (eax_4)
        case 0
            int32_t eax_5 = *(edi + 0x14c0)
            
            if (eax_5 == 3)
                if (*(edi + 0x1580) != 0)
                    goto label_525ef5
            else if (eax_5 == 5)
                goto label_525ef5
        case 1, 2, 3, 4
        label_525ef5:
            edx = arg4
            
            if (sub_4057a0(edi + 8, edx) != 0)
                var_10 = *(edi + 0x19dc)
                var_c = arg3
                var_8 = *(edi + 0x145c)
    
    int32_t ebx = 0
    
    if (*(edi + 0x19d0) s> 0)
        int32_t esi_1 = arg3 << 8
        arg2 = esi_1
        
        while (true)
            sub_525df0(&var_24, sub_525900(ebx, edx, edi), esi_1 | ebx, arg4)
            int32_t eax_13 = (*var_24)()
            int32_t eax_15 = (*data_be1efc)()
            char eax_16
            
            if (eax_13 == eax_15)
                eax_16, edx = eax_13(&var_24, &data_be1efc)
            
            if (eax_13 != eax_15 || eax_16 == 0)
                int32_t eax_18 = (*var_14)()
                int32_t eax_20 = (*data_be1efc)()
                char eax_21
                
                if (eax_18 == eax_20)
                    eax_21 = eax_18(&var_14, &data_be1efc)
                
                if (eax_18 != eax_20 || eax_21 == 0)
                    edx = var_18
                
                if ((eax_18 == eax_20 && eax_21 != 0) || edx s>= var_8)
                    edx = var_18
                    var_10 = var_20
                    var_c = var_1c
                    var_8 = edx
            
            ebx += 1
            
            if (ebx s>= *(edi + 0x19d0))
                break
            
            esi_1 = arg2
    
    arg1[1] = var_10
    *arg1 = &data_88d38c
    arg1[2] = var_c
    arg1[3] = var_8
    return arg1
}
