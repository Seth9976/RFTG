// 函数名称: sub_64e690
// 虚拟地址: 0x64e690
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_64e690(int32_t* arg1, void* arg2, void* arg3)
{
    // 第一条实际指令: void* i_8 = *arg1
    void* i_8 = *arg1
    void* ebx = arg3
    int32_t __saved_edi
    int32_t* var_8 = &__saved_edi
    int32_t var_2c = __alloca_probe_16(i_8 << 2)
    sub_64db30(i_8, arg1[6], arg2, ebx, fconvert.s(fconvert.t(140f)), 0xffffffff)
    int32_t i = 0
    
    if (i_8 s>= 4)
        void* ecx_3 = &var_8[2]
        void* eax_2 = ebx + 4
        
        do
            long double x87_r7_2 = fconvert.t(*(arg2 + (i << 2))) - fconvert.t(*(eax_2 - 4))
            i += 4
            eax_2 += 0x10
            ecx_3 += 0x10
            *(ecx_3 - 0x18) = fconvert.s(x87_r7_2)
            *(var_8 - ebx + eax_2 - 0x10) =
                fconvert.s(fconvert.t(*(arg2 - ebx + eax_2 - 0x10)) - fconvert.t(*(eax_2 - 0x10)))
            *(ecx_3 - 0x10) =
                fconvert.s(fconvert.t(*(arg2 - var_8 + ecx_3 - 0x10)) - fconvert.t(*(eax_2 - 0xc)))
            *(ecx_3 - 0xc) = fconvert.s(fconvert.t(*(arg2 + (i << 2) - 4)) - fconvert.t(*(eax_2 - 8)))
        while (i s< i_8 - 3)
        
        ebx = arg3
    
    if (i s< i_8)
        void* eax_3 = ebx + (i << 2)
        void* i_5 = i_8 - i
        void* i_1
        
        do
            long double x87_r7_10 = fconvert.t(*(arg2 - ebx + eax_3)) - fconvert.t(*eax_3)
            eax_3 += 4
            i_1 = i_5
            i_5 -= 1
            *(var_8 - ebx + eax_3 - 4) = fconvert.s(x87_r7_10)
        while (i_1 != 1)
    
    void* ecx_9 = arg1[1]
    void* var_2c_2 = ecx_9
    sub_64db30(i_8, arg1[6], var_8, ebx, fconvert.s(float.t(0)), *(ecx_9 + 0x80))
    int32_t result = 0
    int32_t result_1 = 0
    
    if (i_8 s>= 4)
        void* eax_6 = &var_8[1]
        int32_t i_7 = ((i_8 - 4) u>> 2) + 1
        result_1 = i_7 << 2
        void* ecx_11 = arg2 + 0xc
        int32_t i_2
        
        do
            eax_6 += 0x10
            long double x87_r7_13 = fconvert.t(*(ecx_11 - 0xc)) - fconvert.t(*(eax_6 - 0x14))
            ecx_11 += 0x10
            i_2 = i_7
            i_7 -= 1
            *(eax_6 - 0x14) = fconvert.s(x87_r7_13)
            *(eax_6 - 0x10) =
                fconvert.s(fconvert.t(*(arg2 - var_8 + eax_6 - 0x10)) - fconvert.t(*(eax_6 - 0x10)))
            *(eax_6 - 0xc) = fconvert.s(fconvert.t(*(ecx_11 - 0x14)) - fconvert.t(*(eax_6 - 0xc)))
            *(eax_6 - 8) = fconvert.s(fconvert.t(*(ecx_11 - 0x10)) - fconvert.t(*(eax_6 - 8)))
        while (i_2 != 1)
        result = result_1
        ebx = arg3
    
    if (result s< i_8)
        void* i_6 = i_8 - result_1
        result = &var_8[result]
        void* i_3
        
        do
            long double x87_r7_20 = fconvert.t(*(arg2 - var_8 + result))
            result += 4
            i_3 = i_6
            i_6 -= 1
            *(result - 4) = fconvert.s(x87_r7_20 - fconvert.t(*(result - 4)))
        while (i_3 != 1)
    
    if (i_8 s> 0)
        int32_t esi_3 = var_8 - ebx
        void* i_4
        
        do
            result = sub_685f40(fconvert.t(*ebx) + fconvert.t(0.5))
            
            if (result s>= 0x28)
                result = 0x27
            else if (result s< 0)
                result = 0
            
            ebx += 4
            i_4 = i_8
            i_8 -= 1
            *(ebx - 4) = fconvert.s(fconvert.t(*(arg1[1] + (result << 2) + 0x150))
                + fconvert.t(*(esi_3 + ebx - 4)))
        while (i_4 != 1)
    
    return result
}
