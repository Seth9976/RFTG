// 函数名称: sub_49afc0
// 虚拟地址: 0x49afc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_49afc0(void* arg1, int32_t arg2) __noreturn
{
    // 第一条实际指令: void var_8c
    void var_8c
    int32_t var_c = __security_cookie ^ &var_8c
    double var_80 = fconvert.d(float.t(0))
    int32_t edi = sx.d(*(arg1 + 0x458))
    int32_t ebx = 0
    int32_t eax_3 = 0
    int32_t var_70[0xc]
    
    if (edi s> 0)
        void* ecx_1 = arg1 + 0xac
        
        do
            bool cond:0_1 = *ecx_1 == 0
            int32_t edx_1 = sx.d(*(ecx_1 - 2))
            var_70[eax_3] = edx_1
            
            if (not(cond:0_1))
                var_70[eax_3] = edx_1 + 1
            
            int32_t edx_3 = var_70[eax_3]
            
            if (edx_3 s> ebx)
                ebx = edx_3
            
            eax_3 += 1
            ecx_1 += 0xb4
        while (eax_3 s< edi)
    
    int32_t esi = 0
    int32_t mxcsr
    int16_t x87control
    
    if (edi s> 0)
        do
            long double x87_r7_2 = float.t(var_70[esi] - ebx) * fconvert.t(0.29999999999999999)
            x87control = sub_6870ac(mxcsr, x87control)
            esi += 1
            var_80 = fconvert.d(x87_r7_2 + fconvert.t(var_80))
        while (esi s< edi)
    
    long double x87_r7_5 = float.t(var_70[arg2] - ebx) * fconvert.t(0.29999999999999999)
    int16_t x87control_1 = sub_6870ac(mxcsr, x87control)
    double var_40 = fconvert.d(x87_r7_5 / fconvert.t(var_80))
    int32_t esi_1 = mods.dp.d(sx.q(arg2 + 1), edi)
    
    if (esi_1 != arg2)
        void var_38
        void* var_88_3 = &var_38
        
        do
            long double x87_r7_8 = float.t(var_70[esi_1] - ebx) * fconvert.t(0.29999999999999999)
            x87control_1 = sub_6870ac(mxcsr, x87control_1)
            void* eax_10 = var_88_3 + 8
            var_88_3 = eax_10
            *(eax_10 - 8) = fconvert.d(x87_r7_8 / fconvert.t(var_80))
            esi_1 = mods.dp.d(sx.q(esi_1 + 1), edi)
        while (esi_1 != arg2)
    
    char edx_11 = sub_5abfc0(&data_2649940, 0, 0x40000)
    int32_t eax_14 = data_27e7a88
    data_27e7a8c = eax_14
    data_27e7a90 = 0
    int32_t eax_15
    int32_t ecx_6
    int32_t edx_12
    int80_t st0
    st0, eax_15, ecx_6, edx_12 = sub_4904a0(eax_14, edx_11, arg1, arg2)
    sub_4b3f00(eax_15, edx_12, ecx_6, &data_2691c30, arg2)
    int32_t ecx_7 = sx.d(*(arg1 + 0x458))
    
    if (ecx_7 s> 0)
        __builtin_memcpy(&var_70, &var_40, (ecx_7 & 0x1fffffff) * 8)
    
    sub_4b3f90()
    noreturn
}
