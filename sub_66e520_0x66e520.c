// 函数名称: sub_66e520
// 虚拟地址: 0x66e520
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_66e520(uint32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 0x108)
    int32_t ecx = *(arg1 + 0x108)
    
    if (ecx == 0)
        sub_664320(arg1, "NULL row buffer")
        noreturn
    
    int32_t eax = *(arg1 + 0x70)
    
    if ((eax & 0x4000) != 0 && (eax.b & 0x40) == 0)
        sub_664320(arg1, "Uninitialized row")
        noreturn
    
    int32_t eax_1 = *(arg1 + 0x74)
    
    if ((eax_1 & 0x1000) != 0)
        if (arg2[2].b != 3)
            char* var_10_2
            
            if (*(arg1 + 0x134) == 0 || (eax_1 & 0x2000000) == 0)
                var_10_2 = nullptr
            else
                var_10_2 = arg1 + 0x1a8
            
            sub_66dec0(arg2, ecx + 1, var_10_2)
        else
            sub_66dca0(arg2, ecx + 1, *(arg1 + 0x128), *(arg1 + 0x1a4), zx.d(*(arg1 + 0x134)))
    
    int32_t eax_4 = *(arg1 + 0x74)
    
    if ((eax_4 & 0x40000) != 0 && eax_4.b s>= 0)
        eax_4.b = arg2[2].b
        
        if (eax_4.b == 6 || eax_4.b == 4)
            sub_66ebc0(arg2, *(arg1 + 0x108) + 1, 0)
    
    if ((*(arg1 + 0x74) & 0x600000) != 0 && sub_66c420(arg1, arg2, *(arg1 + 0x108) + 1) != 0)
        int32_t edx_4 = *(arg1 + 0x74) & 0x600000
        *(arg1 + 0x251) = 1
        
        if (edx_4 == &__dos_header)
            sub_664100(arg1, "png_do_rgb_to_gray found nongray pixel")
        
        if ((*(arg1 + 0x74) & 0x600000) == 0x200000)
            sub_664320(arg1, "png_do_rgb_to_gray found nongray pixel")
            noreturn
    
    if ((*(arg1 + 0x74) & 0x4000) != 0 && (*(arg1 + 0x6c) & 0x800) == 0)
        sub_66c2b0(arg2, *(arg1 + 0x108) + 1)
    
    if ((*(arg1 + 0x74) & 0x80) != 0)
        sub_66c800(arg2, *(arg1 + 0x108) + 1, arg1)
    
    int32_t eax_10 = *(arg1 + 0x74)
    
    if ((eax_10 & 0x2000) != 0 && (eax_10 & 0x600000) == 0)
        if (eax_10.b s>= 0)
        label_66e6a1:
            
            if (*(arg1 + 0x13b) != 3)
                sub_66d7d0(arg2, *(arg1 + 0x108) + 1, arg1)
        else if (*(arg1 + 0x134) == 0 && (*(arg1 + 0x13b) & 4) == 0)
            goto label_66e6a1
    
    char* eax_13 = *(arg1 + 0x74)
    
    if ((eax_13 & 0x40000) != 0 && eax_13.b s< 0)
        eax_13.b = arg2[2].b
        
        if (eax_13.b == 6 || eax_13.b == 4)
            eax_13 = sub_66ebc0(arg2, *(arg1 + 0x108) + 1, 0)
    
    if ((*(arg1 + 0x74) & &data_800000) != 0 && (arg2[2].b & 4) != 0)
        eax_13 = sub_66dbc0(arg2, *(arg1 + 0x108) + 1, arg1)
    
    if ((*(arg1 + 0x74) & 0x4000000) != 0)
        eax_13 = sub_66bd30(arg2, *(arg1 + 0x108) + 1)
    
    if ((*(arg1 + 0x74) & 0x400) != 0)
        eax_13 = sub_66bda0(arg2, *(arg1 + 0x108) + 1)
    
    if ((*(arg1 + 0x74) & 0x40) != 0)
        eax_13 = sub_66e2f0(arg2, *(arg1 + 0x108) + 1, *(arg1 + 0x1f8), *(arg1 + 0x1fc))
        
        if (arg2[1] == 0)
            sub_664320(arg1, "png_do_quantize returned rowbytes=0")
            noreturn
    
    if ((*(arg1 + 0x74) & 0x200) != 0)
        eax_13 = sub_66e2a0(arg2, *(arg1 + 0x108) + 1)
    
    if ((*(arg1 + 0x74) & 0x4000) != 0 && (*(arg1 + 0x6c) & 0x800) != 0)
        eax_13 = sub_66c2b0(arg2, *(arg1 + 0x108) + 1)
    
    if ((*(arg1 + 0x74) & 0x20) != 0)
        eax_13 = sub_66eaa0(arg2, *(arg1 + 0x108) + 1)
    
    if ((*(arg1 + 0x74) & 8) != 0)
        eax_13 = sub_66bb40(arg2, *(arg1 + 0x108) + 1, arg1 + 0x19d)
    
    if ((*(arg1 + 0x74) & 4) != 0)
        eax_13 = sub_66ba10(arg2, *(arg1 + 0x108) + 1)
    
    if (arg2[2].b == 3 && *(arg1 + 0x130) s>= 0)
        eax_13 = sub_66ee00(arg1, arg2)
    
    if ((*(arg1 + 0x74) & 1) != 0)
        eax_13 = sub_66ed20(arg2, *(arg1 + 0x108) + 1)
    
    if ((*(arg1 + 0x74) & 0x10000) != 0)
        eax_13 = sub_66eb70(arg2, *(arg1 + 0x108) + 1)
    
    if ((*(arg1 + 0x74) & 0x8000) != 0)
        eax_13 = sub_66bfe0(arg2, *(arg1 + 0x108) + 1, zx.d(*(arg1 + 0x14a)), (*(arg1 + 0x70)).b)
    
    if ((*(arg1 + 0x74) & 0x80000) != 0)
        eax_13 = sub_66bf20(arg2, *(arg1 + 0x108) + 1)
    
    if ((*(arg1 + 0x74) & 0x20000) != 0)
        eax_13 = sub_66bdf0(arg2, *(arg1 + 0x108) + 1)
    
    if ((*(arg1 + 0x74) & 0x10) != 0)
        eax_13 = sub_66eb30(arg2, *(arg1 + 0x108) + 1)
    
    if ((*(arg1 + 0x74) & 0x100000) != 0)
        int32_t eax_27 = *(arg1 + 0x5c)
        
        if (eax_27 != 0)
            eax_27(arg1, arg2, *(arg1 + 0x108) + 1)
        
        eax_27.b = *(arg1 + 0x68)
        
        if (eax_27.b != 0)
            *(arg2 + 9) = eax_27.b
        
        eax_27.b = *(arg1 + 0x69)
        
        if (eax_27.b != 0)
            *(arg2 + 0xa) = eax_27.b
        
        eax_27.b = *(arg2 + 0xa)
        eax_27.w = muls.dp.b(eax_27.b, *(arg2 + 9))
        *(arg2 + 0xb) = eax_27.b
        uint32_t eax_28 = zx.d(eax_27.b)
        
        if (eax_27.b u>= 8)
            int32_t eax_30 = (eax_28 u>> 3) * *arg2
            arg2[1] = eax_30
            return eax_30
        
        eax_13 = (eax_28 * *arg2 + 7) u>> 3
        arg2[1] = eax_13
    
    return eax_13
}
