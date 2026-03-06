// 函数名称: sub_66fdb0
// 虚拟地址: 0x66fdb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_66fdb0(void* arg1, char* arg2, void* arg3)
{
    // 第一条实际指令: char* edi = arg2
    char* edi = arg2
    
    if ((*(arg1 + 0x6c) & 4) == 0 && *(arg1 + 0x27c) == 0)
        uint32_t eax_1 = zx.d(*edi)
        uint32_t ecx_1
        ecx_1.b = eax_1.b & 0xf
        
        if (ecx_1.b != 8 || (eax_1 & 0xf0) u> 0x70)
            sub_664320(arg1, "Invalid zlib compression method or flags in IDAT")
            noreturn
        
        if (arg3 u>= 2)
            int32_t edx_1 = *(arg1 + 0xe8)
            
            if (edx_1 u< 0x4000)
                int32_t ebx_1 = *(arg1 + 0xe4)
                
                if (ebx_1 u< 0x4000)
                    ecx_1.b = *(arg1 + 0x13c)
                    int32_t eax_8 =
                        ((zx.d(*(arg1 + 0x13f)) * zx.d(ecx_1.b) * ebx_1 + 0xf) u>> 3) * edx_1
                    
                    if (*(arg1 + 0x138) != 0)
                        eax_8 += ((sbb.d(ecx_1, ecx_1, ecx_1.b u< 8) & 6) + 6) * ((edx_1 + 7) u>> 3)
                    
                    edi = arg2
                    uint32_t edx_5 = zx.d(*edi) u>> 4
                    int32_t i = 1 << (edx_5.b + 7)
                    
                    if (eax_8 u<= i)
                        while (i u>= 0x100)
                            i u>>= 1
                            edx_5 -= 1
                            
                            if (eax_8 u> i)
                                break
                    
                    int32_t edx_7 = edx_5 << 4 | 8
                    
                    if (zx.d(*edi) != edx_7)
                        uint32_t ecx_8 = zx.d(edi[1])
                        *edi = edx_7.b
                        int32_t ecx_9 = ecx_8 & 0xe0
                        ecx_9.b -= (modu.dp.d(0:((edx_7 << 8) + ecx_9), 0x1f)).b
                        ecx_9.b += 0x1f
                        edi[1] = ecx_9.b
    
    if (arg3 u> 0xffffffff)
        sub_664320(arg1, "length exceeds PNG maxima")
        noreturn
    
    sub_66f010(arg1, arg3)
    
    if (edi != 0 && arg3 != 0)
        sub_666640(arg1, edi, arg3)
        sub_662280(arg1, edi, arg3)
    
    sub_66f0f0(arg1)
    int32_t edx_10 = *(arg1 + 0xb0)
    int32_t result = *(arg1 + 0xb4)
    *(arg1 + 0x6c) |= 4
    *(arg1 + 0x84) = edx_10
    *(arg1 + 0x88) = result
    return result
}
