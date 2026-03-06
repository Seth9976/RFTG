// 函数名称: sub_5c0880
// 虚拟地址: 0x5c0880
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c0880(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_3
    int32_t edx
    eax_3, edx = zip_source_tell_write(*arg1)
    
    if (edx s<= 0 && (edx s< 0 || eax_3 u< 0))
        sub_5bf050(&arg1[2], *arg1)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0xffffffff
    
    int32_t esi_2 = 0
    int32_t ebx = 0
    char var_6d = 0
    
    if (arg4 u>= 0 && (arg4 u> 0 || arg3 u> 0))
        while (true)
            int32_t* eax_7 = (*(arg2 + (esi_2 << 3)) << 4) + arg1[0x10]
            void* ecx_3 = eax_7[1]
            void* eax_8
            
            if (ecx_3 == 0)
                eax_8 = *eax_7
            else
                eax_8 = ecx_3
            
            int32_t eax_9 = sub_5c0290(arg1, eax_8, 0x200)
            
            if (eax_9 s< 0)
                goto label_5c0bd6
            
            if (eax_9 != 0)
                var_6d = 1
            
            int32_t temp6_1 = esi_2
            esi_2 += 1
            ebx = adc.d(ebx, 0, temp6_1 u>= 0xffffffff)
            
            if (ebx u>= arg4)
                if (ebx u> arg4)
                    break
                
                if (esi_2 u>= arg3)
                    break
    
    int32_t eax_10
    int32_t edx_4
    eax_10, edx_4 = zip_source_tell_write(*arg1)
    
    if (edx_4 s<= 0 && (edx_4 s< 0 || eax_10 u< 0))
        sub_5bf050(&arg1[2], *arg1)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0xffffffff
    
    int32_t result = eax_10 - eax_3
    int32_t edx_7 = sbb.d(edx_4, edx, eax_10 u< eax_3)
    int32_t ebx_1
    
    if (edx u> 0)
        ebx_1 = arg3
        var_6d = 1
    else if (edx u< 0)
        if (arg4 == 0)
            goto label_5c099c
        
        ebx_1 = arg3
        var_6d = 1
    else if (eax_3 u> 0xffffffff || arg4 != 0)
        ebx_1 = arg3
        var_6d = 1
    else
    label_5c099c:
        ebx_1 = arg3
        
        if (ebx_1 u> 0xffff)
            var_6d = 1
    
    void var_6c
    char* eax_11 = sub_5c0ee0(&var_6c, 0x62, 0)
    
    if (eax_11 == 0)
        zip_error_set(&arg1[2], 0xe, eax_11)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0xffffffff
    
    if (var_6d != 0)
        sub_5c1000(eax_11, 0x6b2870, 4)
        sub_5c1140(eax_11, 0x2c, 0)
        sub_5c1070(eax_11, 0x2d)
        sub_5c1070(eax_11, 0x2d)
        sub_5c10d0(eax_11, 0)
        sub_5c10d0(eax_11, 0)
        sub_5c1140(eax_11, ebx_1, arg4)
        sub_5c1140(eax_11, ebx_1, arg4)
        sub_5c1140(eax_11, result, edx_7)
        sub_5c1140(eax_11, eax_3, edx)
        sub_5c1000(eax_11, 0x6b2868, 4)
        sub_5c10d0(eax_11, 0)
        sub_5c1140(eax_11, result + eax_3, adc.d(edx_7, edx, result + eax_3 u< result))
        sub_5c10d0(eax_11, 1)
    
    sub_5c1000(eax_11, 0x6b2850, 4)
    sub_5c10d0(eax_11, 0)
    int32_t eax_15
    
    if (arg4 != 0 || ebx_1 u>= 0xffff)
        eax_15 = 0xffff
        int32_t var_88_1 = 0
    else
        eax_15 = ebx_1
        int32_t var_88_2 = arg4
    
    sub_5c1070(eax_11, eax_15)
    int32_t eax_16
    
    if (arg4 != 0 || ebx_1 u>= 0xffff)
        eax_16 = 0xffff
        int32_t var_88_3 = 0
    else
        eax_16 = ebx_1
        int32_t var_88_4 = arg4
    
    sub_5c1070(eax_11, eax_16)
    int32_t result_1
    
    if (edx_7 u<= 0)
        result_1 = result
    
    if (edx_7 u> 0 || result_1 u>= 0xffffffff)
        result_1 = 0xffffffff
    
    sub_5c10d0(eax_11, result_1)
    int32_t eax_17
    
    if (edx u<= 0)
        eax_17 = eax_3
    
    if (edx u> 0 || eax_17 u>= 0xffffffff)
        eax_17 = 0xffffffff
    
    sub_5c10d0(eax_11, eax_17)
    int32_t* edi_1
    
    if (arg1[0xa].b == 0)
        edi_1 = arg1[8]
    else
        edi_1 = arg1[9]
    
    uint32_t eax_18
    
    if (edi_1 == 0)
        eax_18 = 0
    else
        eax_18 = zx.d(edi_1[1].w)
    
    sub_5c1070(eax_11, eax_18)
    
    if (xff67edc5::_Atomic_load_uchar::operator[]::_Atomic_load_uchar(eax_11) == 0)
        zip_error_set(&arg1[2], 0x14, 0)
        sub_5c0c20(eax_11)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0xffffffff
    
    int32_t eax_20
    int32_t edx_12
    eax_20, edx_12 = sub_5c0fd0(eax_11)
    
    if (sub_5c21e0(arg1, zip_error_code_system(eax_11), eax_20, edx_12) s>= 0)
        sub_5c0c20(eax_11)
        int32_t eax_25
        
        if (edi_1 != 0)
            int32_t eax_24
            int32_t edx_14
            edx_14:eax_24 = sx.q(zx.d(edi_1[1].w))
            eax_25 = sub_5c21e0(arg1, *edi_1, eax_24, edx_14)
        
        if (edi_1 == 0 || eax_25 s>= 0)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return result
    else
        sub_5c0c20(eax_11)
    
    label_5c0bd6:
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0xffffffff
}
