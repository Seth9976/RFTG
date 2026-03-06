// 函数名称: sub_621210
// 虚拟地址: 0x621210
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_621210(int32_t* arg1, int32_t arg2 @ edi)
{
    // 第一条实际指令: int32_t ecx = arg1[6]
    int32_t ecx = arg1[6]
    int32_t result_1 = arg1[7]
    int32_t edx_1 = arg1[4]
    void* esi = arg1[5]
    void* ecx_1 = *arg1
    int32_t eax_1
    int32_t edx_2
    edx_2:eax_1 = sx.q(arg1[9])
    int32_t ebx_1 = ((edx_2 & 3) + eax_1) s>> 2
    int32_t var_10 = ebx_1
    int32_t result
    
    while (true)
        int32_t result_2 = result_1
        result = result_1 - 1
        result_1 = result
        
        if (result_2 == 0)
            break
        
        int32_t eax_5
        int32_t edx_4
        edx_4:eax_5 = sx.q(ecx + 7)
        int32_t eax_7 = (eax_5 + (edx_4 & 7)) s>> 3
        
        switch (ecx & 7)
            case 0
                goto label_6212a3
            case 1
                goto label_621284
            case 2
                while (true)
                    esi += 4
                    *(esi - 4) = *(arg2 + (zx.d(*(ecx_1 + 1)) << 3) + 4) + *(arg2 + (zx.d(*ecx_1) << 3))
                    ecx_1 += 2
                label_621284:
                    eax_7 -= 1
                    *esi = *(arg2 + (zx.d(*(ecx_1 + 1)) << 3) + 4) + *(arg2 + (zx.d(*ecx_1) << 3))
                    esi += 4
                    ecx_1 += 2
                    
                    if (eax_7 s<= 0)
                        break
                    
                label_6212a3:
                    esi += 4
                    *(esi - 4) = *(arg2 + (zx.d(*(ecx_1 + 1)) << 3) + 4) + *(arg2 + (zx.d(*ecx_1) << 3))
                    ecx_1 += 2
                label_6212ba:
                    esi += 4
                    *(esi - 4) = *(arg2 + (zx.d(*(ecx_1 + 1)) << 3) + 4) + *(arg2 + (zx.d(*ecx_1) << 3))
                    ecx_1 += 2
                label_6212d1:
                    esi += 4
                    *(esi - 4) = *(arg2 + (zx.d(*(ecx_1 + 1)) << 3) + 4) + *(arg2 + (zx.d(*ecx_1) << 3))
                    ecx_1 += 2
                label_6212e8:
                    esi += 4
                    *(esi - 4) = *(arg2 + (zx.d(*(ecx_1 + 1)) << 3) + 4) + *(arg2 + (zx.d(*ecx_1) << 3))
                    ecx_1 += 2
                label_6212ff:
                    esi += 4
                    *(esi - 4) = *(arg2 + (zx.d(*(ecx_1 + 1)) << 3) + 4) + *(arg2 + (zx.d(*ecx_1) << 3))
                    ecx_1 += 2
                label_621316:
                    esi += 4
                    *(esi - 4) = *(arg2 + (zx.d(*(ecx_1 + 1)) << 3) + 4) + *(arg2 + (zx.d(*ecx_1) << 3))
                    ecx_1 += 2
                
                ebx_1 = var_10
            case 3
                goto label_621316
            case 4
                goto label_6212ff
            case 5
                goto label_6212e8
            case 6
                goto label_6212d1
            case 7
                goto label_6212ba
        
        ecx_1 += edx_1
        esi += ebx_1 << 2
    
    return result
}
