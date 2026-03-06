// 函数名称: sub_499850
// 虚拟地址: 0x499850
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_499850(int32_t arg1 @ edi, char* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* edx = __chkstk(0x1ef4)
    int32_t* edx = __chkstk(0x1ef4)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t* eax_2 = arg3
    double var_1ef8 = fconvert.d(fconvert.t(-1.0))
    int32_t* var_1ee4 = eax_2
    int32_t* var_1ee0 = edx
    int32_t var_1ee8 = 0xffffffff
    int32_t var_1edc = 0
    int128_t* entry_ebx
    
    if (arg4 s> 0)
        int32_t* esi_1 = eax_2
        int32_t* edi_1 = edx - eax_2
        int32_t ecx_7
        
        do
            int32_t ecx_1 = *esi_1
            
            if (ecx_1 s>= 0)
                int32_t eax_3 = *(edi_1 + esi_1)
                int32_t edx_1 = *(entry_ebx + ecx_1 * 0x14 + 0x46c)
                int32_t ecx_3 = *(edx_1 + ((eax_3 * 3 + 3) << 3) + 8)
                int32_t var_1eec_1 = *(edx_1 + ((eax_3 * 3 + 3) << 3) + 0xc)
                int32_t eax_9 = ecx_3 & 0x80
                
                if (eax_9 == 0 && ((ecx_3 & 0x3c) | eax_9) != 0)
                    goto label_499a36
                
                eax_2 = var_1ee4
            
            ecx_7 = var_1edc + 1
            esi_1 = &esi_1[1]
            var_1edc = ecx_7
        while (ecx_7 s< arg4)
        edx = var_1ee0
    
    var_1edc = 0
    int32_t ecx_22
    
    if (arg4 s> 0)
        int32_t* esi_2 = eax_2
        void* edi_3 = edx - eax_2
        
        while (true)
            int32_t ecx_8 = *esi_2
            
            if (ecx_8 s< 0)
                ecx_22 = var_1edc
                goto label_499a8b
            
            void* eax_12 = *(entry_ebx + ecx_8 * 0x14 + 0x46c) + ((*(esi_2 + edi_3) * 3 + 3) << 3)
            int32_t ecx_10 = *(eax_12 + 8)
            int32_t var_1eec_2 = *(eax_12 + 0xc)
            int32_t eax_15 = ecx_10 & 0x80
            
            if (eax_15 == 0 && ((ecx_10 & 2) | eax_15) != 0)
                break
            
            edx = var_1ee0
            esi_2 = &esi_2[1]
            bool cond:3_1 = var_1edc + 1 s< arg4
            var_1edc += 1
            eax_2 = var_1ee4
            
            if (not(cond:3_1))
                goto label_499987
        
    label_499a36:
        *var_1ee4 = var_1ee4[var_1edc]
        *var_1ee0 = var_1ee0[var_1edc]
        sub_5a6aba(arg1 ^ &__saved_ebp)
        return 
    
    label_499987:
    int32_t var_1edc_1 = 0
    
    if (arg4 s> 0)
        void* edx_4 = edx - eax_2
        int32_t* edi_4 = eax_2
        void* var_1eec_3 = edx_4
        int32_t eax_26
        
        do
            char* var_10_1 = arg2
            void var_1ed8
            sub_48bb40(entry_ebx, &var_1ed8, edx_4.b)
            sub_4ac450(arg2, &var_1ed8, *(edi_4 + var_1eec_3), arg2, *edi_4)
            int32_t i
            int32_t edx_8
            
            do
                i, edx_8 = sub_4acd10(&var_1ed8, arg2)
            while (i != 0)
            
            int32_t i_1 = i
            int32_t eax_22
            long double st0_1
            st0_1, eax_22, edx_4 = sub_4904a0(arg2, sub_48bc70(&var_1ed8, edx_8), &var_1ed8, arg2)
            long double x87_r6_2 = fconvert.t(var_1ef8) - fconvert.t(9.9999999999999995e-07)
            x87_r6_2 - st0_1
            eax_22.w = (x87_r6_2 < st0_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_2, st0_1) ? 1 : 0) << 0xa | (x87_r6_2 == st0_1 ? 1 : 0) << 0xe
                | 0x3800
            bool p_1 = unimplemented  {test ah, 0x41}
            
            if (not(p_1))
                var_1ef8 = fconvert.d(st0_1)
                var_1ee8 = var_1edc_1
            
            eax_26 = var_1edc_1 + 1
            edi_4 = &edi_4[1]
            var_1edc_1 = eax_26
        while (eax_26 s< arg4)
        edx = var_1ee0
        eax_2 = var_1ee4
    
    ecx_22 = var_1ee8
    label_499a8b:
    *eax_2 = eax_2[ecx_22]
    *edx = edx[ecx_22]
    sub_5a6aba(arg1 ^ &__saved_ebp)
}
