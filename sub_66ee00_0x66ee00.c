// 函数名称: sub_66ee00
// 虚拟地址: 0x66ee00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_66ee00(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* i = arg2
    int32_t* i = arg2
    uint32_t esi = zx.d(*(i + 9))
    uint32_t edx = zx.d(*(arg1 + 0x12c))
    
    if (edx s< 1 << esi.b && edx.w != 0)
        int32_t edx_1 = *(arg1 + 0x108)
        char ecx_4 = (neg.d(zx.d(*(i + 0xb)) * *i)).b & 7
        i = i[1] + edx_1
        
        if (esi - 1 u<= 7)
            switch (esi)
                case 1
                    if (i u> edx_1)
                        do
                            edx_1.b = *i
                            edx_1.b u>>= ecx_4
                            
                            if (edx_1.b != 0)
                                *(arg1 + 0x130) = 1
                            
                            i -= 1
                            ecx_4 = 0
                        while (i u> *(arg1 + 0x108))
                case 2
                    if (i u> edx_1)
                        uint32_t esi_2 = *(arg1 + 0x130)
                        
                        do
                            uint32_t edx_4 = zx.d(*i) u>> ecx_4 & 3
                            
                            if (edx_4 s> esi_2)
                                esi_2 = edx_4
                                *(arg1 + 0x130) = edx_4
                            
                            uint32_t edx_8 = zx.d(*i) u>> ecx_4 u>> 2 & 3
                            
                            if (edx_8 s> esi_2)
                                esi_2 = edx_8
                                *(arg1 + 0x130) = edx_8
                            
                            uint32_t edx_12 = zx.d(*i) u>> ecx_4 u>> 4 & 3
                            
                            if (edx_12 s> esi_2)
                                esi_2 = edx_12
                                *(arg1 + 0x130) = edx_12
                            
                            uint32_t edx_15 = zx.d(*i) u>> ecx_4 u>> 6
                            
                            if (edx_15 s> esi_2)
                                esi_2 = edx_15
                                *(arg1 + 0x130) = edx_15
                            
                            i -= 1
                            ecx_4 = 0
                        while (i u> *(arg1 + 0x108))
                case 4
                    if (i u> edx_1)
                        uint32_t esi_3 = *(arg1 + 0x130)
                        
                        do
                            uint32_t edx_18 = zx.d(*i) u>> ecx_4 & 0xf
                            
                            if (edx_18 s> esi_3)
                                esi_3 = edx_18
                                *(arg1 + 0x130) = edx_18
                            
                            uint32_t edx_21 = zx.d(*i) u>> ecx_4 u>> 4
                            
                            if (edx_21 s> esi_3)
                                esi_3 = edx_21
                                *(arg1 + 0x130) = edx_21
                            
                            i -= 1
                            ecx_4 = 0
                        while (i u> *(arg1 + 0x108))
                case 8
                    if (i u> edx_1)
                        uint32_t edx_22 = *(arg1 + 0x130)
                        
                        do
                            uint32_t ecx_5 = zx.d(*i)
                            
                            if (ecx_5 s> edx_22)
                                edx_22 = ecx_5
                                *(arg1 + 0x130) = edx_22
                            
                            i -= 1
                        while (i u> *(arg1 + 0x108))
    
    return i
}
