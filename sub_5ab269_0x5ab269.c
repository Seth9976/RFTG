// 函数名称: sub_5ab269
// 虚拟地址: 0x5ab269
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __convention("regparm")sub_5ab269(int32_t arg1, int32_t arg2, int32_t arg3, double arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t var_8 = arg3
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t edi
    int32_t var_10 = edi
    int32_t var_14 = 0xffff
    int32_t var_18 = 0x133f
    int32_t eax
    int16_t x87control
    int16_t x87control_1
    eax, x87control_1 = sub_5b4e31(x87control, 0x133f, 0xffff)
    long double x87_r7 = fconvert.t(arg4)
    int32_t ecx_1 = zx.d(arg4:6.w) & 0x7ff0
    int32_t var_34_1
    double var_2c_1
    int32_t var_24_2
    int64_t var_2c
    
    if (ecx_1.w != 0x7ff0)
        long double x87_r6_1 = float.t(0)
        x87_r6_1 - x87_r7
        int32_t eax_1
        eax_1.w = (x87_r6_1 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (not(p_1))
        label_5ab2d2:
            int32_t var_14_3 = 0xffff
            sub_5b4e31(x87control_1, eax.w, 0xffff)
            return fconvert.t(arg4)
        
        int32_t var_1c_1 = ecx_1
        var_1c_1.q = fconvert.d(fconvert.t(arg4))
        long double st0_3 = sub_5b450f(var_1c_1, &var_8)
        int32_t ecx_4 = var_8
        long double x87_r7_16
        
        if (arg5 s>= 0)
            if (ecx_4 s<= 0x7fffffff - arg5)
            label_5ab350:
                int32_t eax_4 = arg5 + ecx_4
                
                if (eax_4 s> 0xa00)
                    goto label_5ab35d
                
                if (eax_4 s> 0x400)
                    int32_t var_18_4 = ecx_4
                    int32_t var_1c_2 = ecx_4
                    var_1c_2.q = fconvert.d(st0_3)
                    int32_t var_14_8 = eax
                    var_1c_2.q = fconvert.d(sub_5b447c(var_1c_2, eax_4 - 0x600))
                    var_24_2 = (fconvert.d(float.t(arg5))).d
                    goto label_5ab37e
                
                if (eax_4 s< 0xfffff603)
                    goto label_5ab3bc
                
                if (eax_4 s< 0xfffffc03)
                    int32_t var_18_5 = ecx_4
                    var_1c_1 = ecx_4
                    var_1c_1.q = fconvert.d(st0_3)
                    x87_r7_16 = sub_5b447c(var_1c_1, eax_4 + 0x600)
                    goto label_5ab3c2
                
                int32_t var_18_6 = ecx_4
                int32_t var_1c_3 = ecx_4
                var_1c_3.q = fconvert.d(st0_3)
                int64_t var_24
                var_24:4.d = 0xffff
                arg4 = fconvert.d(sub_5b447c(var_1c_3, eax_4))
                var_24.d = eax
                sub_5b4e31(x87control_1, var_24)
                return fconvert.t(arg4)
            
        label_5ab35d:
            var_1c_1.q = fconvert.d(st0_3)
            var_1c_1.q =
                fconvert.d(__copysign(fconvert.d(fconvert.t(data_8b8ff0)), var_1c_1, ecx_1, eax))
            var_24_2 = (fconvert.d(float.t(arg5))).d
            var_2c:4.d = ecx_4
            var_2c.d = ecx_4
        label_5ab37e:
            var_2c_1 = fconvert.d(fconvert.t(arg4))
            int32_t var_30_2 = 0x19
            var_34_1 = 0x11
        else
            if (ecx_4 s>= 0x80000000 - arg5)
                goto label_5ab350
            
        label_5ab3bc:
            x87_r7_16 = st0_3 * fconvert.t(0.0)
        label_5ab3c2:
            int32_t var_14_9 = eax
            var_1c_1.q = fconvert.d(x87_r7_16)
            var_24_2 = (fconvert.d(float.t(arg5))).d
            var_2c_1 = fconvert.d(fconvert.t(arg4))
            int32_t var_30_3 = 0x19
            var_34_1 = 0x12
    else
        int32_t var_18_1 = ecx_1
        var_18_1.q = fconvert.d(x87_r7)
        int32_t eax_2
        int32_t edx
        eax_2, edx = sub_5b44a9(var_18_1, ecx_1)
        int32_t var_1c
        
        if (eax_2 s> 0)
            if (eax_2 s<= 2)
                goto label_5ab2d2
            
            if (eax_2 != 3)
                goto label_5ab2e3
            
            int32_t var_14_2 = eax
            var_1c.q = fconvert.d(float.t(arg5))
            double var_24_1 = fconvert.d(fconvert.t(arg4))
            var_2c:4.d = 0x19
            return sub_5b4c0b(eax_2, edx, ecx_1)
        
    label_5ab2e3:
        int32_t var_14_4 = eax
        var_1c.q = fconvert.d(fconvert.t(arg4) + fconvert.t(1.0))
        var_24_2 = (fconvert.d(float.t(arg5))).d
        var_2c_1 = fconvert.d(fconvert.t(arg4))
        int32_t var_30_1 = 0x19
        var_34_1 = 8
    return sub_5b4d36(var_34_1, 0x19, var_2c_1, var_24_2)
}
