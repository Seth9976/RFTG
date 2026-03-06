// 函数名称: sub_682350
// 虚拟地址: 0x682350
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_682350(int32_t arg1, char* arg2, int32_t arg3, void* arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx = arg6
    int32_t esi = *(arg4 + 0x84)
    int32_t ecx = arg5
    int32_t edx_1 = (ecx * 2 + 0x18) s>> 1
    int32_t edx_5 = (ebx * 2 + 0x18) s>> 1
    int32_t var_424 = esi
    int32_t var_410 = 0x7fffffff
    int32_t var_40c = 0
    int32_t var_408[0x100]
    int32_t edx_16
    
    if (esi s<= 0)
        edx_16 = 0x7fffffff
    else
        int32_t* eax_3 = *(arg4 + 0x88)
        void* edx_6 = *eax_3
        void* edx_7 = eax_3[1]
        void* eax_4 = eax_3[2]
        
        do
            uint32_t eax_6 = zx.d(*(edx_6 + var_40c))
            int32_t eax_7
            int32_t edx_12
            
            if (eax_6 s< ecx)
                int32_t edx_11 = (eax_6 - ecx) * 2
                edx_12 = edx_11 * edx_11
                eax_7 = eax_6 - (ecx + 0x18)
            else if (eax_6 s<= ecx + 0x18)
                edx_12 = 0
                
                if (eax_6 s> edx_1)
                    eax_7 = eax_6 - ecx
                else
                    eax_7 = eax_6 - (ecx + 0x18)
            else
                int32_t edx_15 = (eax_6 - (ecx + 0x18)) * 2
                edx_12 = edx_15 * edx_15
                eax_7 = eax_6 - ecx
            
            uint32_t ecx_2 = zx.d(*(edx_7 + var_40c))
            int32_t eax_8 = eax_7 * 2
            int32_t ecx_3
            
            if (ecx_2 s< arg3)
                ebx = arg6
                int32_t esi_4 = (ecx_2 - arg3) * 3
                edx_12 += esi_4 * esi_4
                ecx_3 = ecx_2 - (arg3 + 0x1c)
            else if (ecx_2 s> arg3 + 0x1c)
                ebx = arg6
                int32_t esi_11 = (ecx_2 - (arg3 + 0x1c)) * 3
                edx_12 += esi_11 * esi_11
                ecx_3 = ecx_2 - arg3
            else if (ecx_2 s> (arg3 * 2 + 0x1c) s>> 1)
                ecx_3 = ecx_2 - arg3
            else
                ecx_3 = ecx_2 - (arg3 + 0x1c)
            
            int32_t ecx_4 = ecx_3 * 3
            uint32_t ecx_7 = zx.d(*(eax_4 + var_40c))
            int32_t ecx_8
            
            if (ecx_7 s>= ebx)
                int32_t esi_18 = ebx + 0x18
                
                if (ecx_7 s> esi_18)
                    ebx = arg6
                    int32_t esi_20 = ecx_7 - esi_18
                    edx_12 += esi_20 * esi_20
                    ecx_8 = ecx_7 - ebx
                else if (ecx_7 s> edx_5)
                    ecx_8 = ecx_7 - ebx
                else
                    ecx_8 = ecx_7 - esi_18
            else
                int32_t esi_15 = ecx_7 - ebx
                ebx = arg6
                edx_12 += esi_15 * esi_15
                ecx_8 = ecx_7 - (ebx + 0x18)
            
            int32_t eax_11 = eax_8 * eax_8 + ecx_4 * ecx_4 + ecx_8 * ecx_8
            ecx = arg5
            var_408[var_40c] = edx_12
            edx_16 = var_410
            
            if (eax_11 s< edx_16)
                edx_16 = eax_11
                var_410 = edx_16
            
            var_40c += 1
            esi = var_424
        while (var_40c s< esi)
    
    int32_t result = 0
    int32_t ecx_10 = 0
    
    if (esi s> 0)
        do
            if (var_408[ecx_10] s<= edx_16)
                arg2[result] = ecx_10.b
                result += 1
            
            ecx_10 += 1
        while (ecx_10 s< esi)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
