// 函数名称: sub_610c70
// 虚拟地址: 0x610c70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_610c70(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: bool cond:2_1
    bool cond:2_1
    
    if (arg1 u> 0x55595659)
        if (arg1 != 0x56555949)
            cond:2_1 = arg1 == 0x59565955
        label_610ca2:
            
            if (not(cond:2_1))
                sub_5cce60("Unsupported YUV format")
                return 0
    else if (arg1 != 0x55595659 && arg1 != 0x32315659)
        cond:2_1 = arg1 == 0x32595559
        goto label_610ca2
    int32_t __saved_ebx = 0x40
    int32_t var_24 = 1
    int32_t* result = sub_5d0ad0()
    
    if (result == 0)
        sub_5cd050(result)
        return 0
    
    result[2] = arg2
    int32_t __saved_ebx_2 = arg2 * arg3 * 2
    *result = arg1
    result[1] = 0
    result[3] = arg3
    int32_t var_24_1 = 0x1000
    result[4] = sub_5d0ac0()
    int32_t var_28 = 0x2400
    result[5] = sub_5d0ac0()
    int32_t eax_7 = sub_5d0ac0()
    bool cond:1 = result[4] == 0
    result[6] = eax_7
    
    if (not(cond:1))
        void* ecx_1 = result[5]
        
        if (ecx_1 != 0 && eax_7 != 0)
            int32_t* esi_1 = ecx_1 + 0x400
            int32_t* eax_9 = ecx_1 + 0x800 - esi_1
            int32_t* ebx_1 = ecx_1 - esi_1
            int32_t* edx_1 = ecx_1 + 0xc00 - esi_1
            int32_t var_8 = 0xffffff80
            int32_t i_1 = 0x100
            int32_t i
            
            do
                long double x87_r3_1 = float.t(var_8)
                *(ebx_1 + esi_1) = sub_685f40(x87_r3_1 * fconvert.t(1.4013377926421404))
                *esi_1 = sub_685f40(x87_r3_1 * fconvert.t(-0.71360381861575184))
                *(eax_9 + esi_1) = sub_685f40(x87_r3_1 * fconvert.t(-0.34441087613293053))
                *(edx_1 + esi_1) = sub_685f40(x87_r3_1 * fconvert.t(1.7734138972809665))
                var_8 += 1
                esi_1 = &esi_1[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
            
            if (arg1 u> 0x55595659)
                if (arg1 == 0x56555949)
                label_610e17:
                    int16_t edx_4 = arg2.w
                    int32_t ecx_4 = result[4]
                    int32_t eax_14
                    eax_14.w = edx_4
                    eax_14.w u>>= 1
                    *(result + 0x26) = eax_14.w
                    result[0xa].w = eax_14.w
                    result[9].w = edx_4
                    int32_t eax_20
                    int32_t edx_6
                    edx_6:eax_20 = sx.q(zx.d(eax_14.w) * arg3)
                    result[0xb] = ecx_4
                    int32_t ecx_5 = ecx_4 + zx.d(edx_4) * arg3
                    result[0xc] = ecx_5
                    result[0xd] = ((eax_20 - edx_6) s>> 1) + ecx_5
                    return result
                
                if (arg1 != 0x59565955)
                    return result
            else if (arg1 != 0x55595659)
                if (arg1 == 0x32315659)
                    goto label_610e17
                
                if (arg1 != 0x32595559)
                    return result
            
            result[9].w = arg2.w * 2
            result[0xb] = result[4]
            return result
    
    sub_610c20(result)
    sub_5cd050(0)
    return 0
}
