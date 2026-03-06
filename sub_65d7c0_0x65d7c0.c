// 函数名称: sub_65d7c0
// 虚拟地址: 0x65d7c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_65d7c0(float arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* esi = *(arg2 + 0x14)
    int32_t* ebx_1 = arg1 i+ 4
    int32_t eax_1 = sub_68b0a0(ebx_1, *(esi + 0xc))
    
    if (eax_1 s<= 0)
        return 
    
    float var_8_1 =
        fconvert.s(float.t(eax_1) / float.t((1 << (*(esi + 0xc)).b) - 1) * float.t(*(esi + 0x10)))
    int32_t eax_4 = sub_68b0a0(ebx_1, sub_64fbf0(*(esi + 0x14)))
    
    if (eax_4 == 0xffffffff || eax_4 s>= *(esi + 0x14))
        return 
    
    float ecx_2 = arg1
    arg1 = fconvert.s(float.t(0))
    int32_t eax_9 = *(*(*(*(ecx_2 i+ 0x40) + 4) + 0x1c) + 0xb20) + *(esi + (eax_4 << 2) + 0x18) * 0x38
    int32_t eax_11 = sub_649ad0(ecx_2, ((*(arg2 + 4) + *eax_9) << 2) + 4)
    
    if (sub_6516f0(eax_9, eax_11, ebx_1, *(arg2 + 4)) == 0xffffffff)
        return 
    
    int32_t edx_7 = *(arg2 + 4)
    int32_t eax_13 = 0
    
    if (edx_7 s> 0)
        do
            int32_t i = 0
            
            if (eax_13 s< edx_7)
                while (i s< *eax_9)
                    long double x87_r6_1 = fconvert.t(*(eax_11 + (eax_13 << 2)))
                    eax_13 += 1
                    i += 1
                    *(eax_11 + (eax_13 << 2) - 4) = fconvert.s(x87_r6_1 + fconvert.t(arg1))
                    
                    if (eax_13 s>= *(arg2 + 4))
                        break
            
            edx_7 = *(arg2 + 4)
            arg1 = fconvert.s(fconvert.t(*(eax_11 + (eax_13 << 2) - 4)))
        while (eax_13 s< edx_7)
    
    *(eax_11 + (*(arg2 + 4) << 2)) = fconvert.s(fconvert.t(var_8_1))
}
